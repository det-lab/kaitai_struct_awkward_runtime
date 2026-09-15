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

The RAMSES sample data (`amr_00088.out00001`, ~4.3 MB) is not committed; it is
downloaded at test time from the yt data site. Dataset:
`ramses_rt_00088` (`https://yt-project.org/data/ramses_rt_00088.tar.gz`).
