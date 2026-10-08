# RAMSES radiative transfer through the Awkward backend

`example_data/schemas/ramses_rt.ksy` is a skeleton for the RAMSES per-CPU
radiative-transfer output (`rt_00088.outNNNNN`, e.g. `rt_00088.out00004`,
~35 MB). It mirrors the conventions used by `ramses_amr.ksy` and reads
correctly through the Awkward target.

> Status: **structure is verified**, the actual RT field values are not yet
> cross-checked against a ground truth. This is an example of the Awkward target
> handling a second, much more data-heavy RAMSES schema.

## File structure (as parsed)

Header (each field a single-value Fortran record), read by
`ramses_rt_header`:

- `ncpu`, `nvar` (= `nRTvar`), `ndim`, `nlevelmax`, `nboundary`, `gamma`.

Body (`ramses_rt_info`), a loop over levels then domains:

- per level, per domain (`ncpu + nboundary`): an `ilevel` and a `nocts`
  (number of octs) value;
- when `nocts > 0`, the octs' RT variables follow: `twotondim` (`2**ndim`)
  cells x `nvar` fields, each a Fortran vector of `nocts` f8 values
  (`ramses_rt_values.fields`).

The `data` block is a per-domain option: it is `None` exactly when
`nocts == 0` (same per-element `IndexedOption` pattern as `ramses_amr`).

## Verification

With the current `kaitai_struct_compiler` fork it generates, builds, and loads
`rt_00088.out00004`:

- Header globals exact: `ncpu=16, nvar=20, ndim=3, nlevelmax=8, nboundary=0`,
  `gamma ~ 5/3`.
- 8 levels x 16 domains; per-domain `nocts`; `data` is `None` where `nocts==0`.
- Total `nocts` across levels = `ngrid_current` (28849 for this domain).

`tests/test_ramses_rt.py` validates the committed small fixture
`example_data/data/rt_00088_truncated.dat` (header + level-0 body, `nlevelmax`
patched to 1): header globals, level/domain counts, `nocts>0 <=> data present`,
and that the populated domain holds `8*nvar` fields each of length `nocts`.

## Regeneration

```bash
java -cp "$(cat <classpath>)" io.kaitai.struct.JavaMain -t awkward \
  --outdir test_artifacts example_data/schemas/ramses_rt.ksy
```

## Data

- `example_data/data/rt_00088_truncated.dat` (3,020 B) — committed small copy of
  `rt_00088.out00004` (full header + level-0 oct data, `nlevelmax` patched to 1).
- The full files are not committed: `rt_00088.outNNNNN` are ~35-37 MB each
  (total ~555 MB for 16 CPUs) and `hydro_00088.outNNNNN` ~18.5 MB each. They are
  the most interesting future stress test.
