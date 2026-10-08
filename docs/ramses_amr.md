# RAMSES AMR through the Awkward backend

`example_data/schemas/ramses_amr.ksy` exercises several Kaitai features that the
Awkward target must support. With `det-lab/kaitai_struct_compiler` PR #13 it now
generates, builds, and **reads correctly** through the Awkward target.

## What works

Loading `amr_00088.out00001` with the generated shared library produces an
Awkward array whose values match the simulation's `info_00088.txt` and yt:

- Header globals are exact: `ncpu=16, ndim=3, nlevelmax=8, ngridmax=1000000,
  nboundary=0, ngrid_current=27740, boxlen=6.0, ordering='hilbert'`.
- `numbl` is an 8 x 16 grid (`numbl[6][0]=18136`, `numbl[5][1]=356`, ...).
- `amr_info.level_infos` has 8 levels; each `cpu_info` has 16 entries, with a
  missing (`None`) entry for every `numbl[level][cpu]==0`.

The codegen fixes that make this work (all in the compiler PR #13):

- **Empty switch case -> per-element `IndexedOption`.** `cpu_info`
  (`0: empty_type` / `_: ramses_level_cpu_info`) is a per-element option; the
  empty case is `None`.
- **Single non-empty case + empty -> `IndexedOption<Record>`** (no `Union`,
  which Awkward requires to have >= 2 members).
- **Switch over primitive types** (`u4/u8/f8/f4` in `vector_values` /
  `fortran_record`) is a `Union` of `NumpyBuilder` members, selected with
  `append_content<N>()`.
- **Field-unique builder names** and the `_raw_` prefix for `UserTypeFromBytes`
  fields, so the generated C++ compiles.

## Regeneration

```bash
# compiler fork with the awkward target (det-lab/kaitai_struct_compiler, PR #13)
java -cp "$(cat <classpath>)" io.kaitai.struct.JavaMain -t awkward \
  --outdir test_artifacts example_data/schemas/ramses_amr.ksy
```

## Data

`example_data/data/amr_00088_truncated_50kb.dat` is a committed, small copy of
`amr_00088.out00001` (the first ~50 KB): full header + levels 0-3 data, with
`numbl` rows 4-7 zeroed so the upper levels parse as empty. It is used by
`tests/test_ramses_amr.py` so the test runs without downloading data.

The full data file (`amr_00088.out00001`, ~4.3 MB) is not committed; it is
downloaded at test time from the yt data site. Dataset:
`ramses_rt_00088` (`https://yt-project.org/data/ramses_rt_00088.tar.gz`).

## Performance (Python backend vs Awkward backend)

Parsing real RAMSES AMR files (each measurement in a fresh process, `peak_rss`
from `resource.ru_maxrss`). Both produce an equivalent structure. Full detail
in the PR comment on `det-lab/kaitai_struct_awkward_runtime` #70.

| File(s) | Python time | Awkward time | Python RSS | Awkward RSS |
|---|---|---|---|---|
| `amr_00088.out00001` (4.3 MB) | ~197 ms | ~567 ms | ~47 MB | ~66.5 MB |
| `amr_00088.out00004` (4.4 MB) | ~456 ms | ~680 ms | ~48 MB | ~67 MB |
| all 16 AMR files (69.6 MB) | ~4,329 ms | ~9,956 ms | ~627 MB | ~257 MB |

- Single-file: the Awkward backend is ~2.9x slower and ~1.4x higher RSS. The
  extra cost is in the C++ `fill` (~543 ms; `ak.from_buffers` is only ~11 ms)
  building the typed nested layout (per-element options/unions/list boundaries).
- Whole set: the Awkward backend is ~2.3x slower but ~2.4x **lower** RSS
  (257 MB vs 627 MB) because an `ak.Array` stores compact typed buffers, whereas
  the Python backend builds a Python object graph.
- The dataset also has much larger per-CPU files. `ramses_rt.ksy` now covers the
  radiative-transfer `rt_00088.outNNNNN` (~35-37 MB each) — see
  `docs/ramses_rt.md`. `hydro_00088.outNNNNN` (~18.5 MB each) still needs a
  `ramses_hydro` schema; those would be the most interesting stress test.

## Tests

`tests/test_ramses_amr.py` validates the structure of the committed
`amr_00088_truncated_50kb.dat` sample against the simulation info:

- Header globals exact (`ncpu=16, ndim=3, nlevelmax=8, ngridmax=1000000,
  ngrid_current=27740, boxlen=6.0`).
- `numbl` is a `[8, 16]` grid with exact values (upper rows zeroed in the
  truncated copy).
- For every level, the set of populated `cpu_info` entries equals the set of
  cpus with `numbl[level][cpu] > 0`.
- For every populated cpu, `pos_x`/`pos_y`/`pos_z` each have length
  `== numbl[level][cpu]`.

