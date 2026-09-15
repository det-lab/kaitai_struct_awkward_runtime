# RAMSES AMR through the Awkward backend

`example_data/schemas/ramses_amr.ksy` exercises several Kaitai features that the
Awkward target must support. This note records the current status (2026-09-15).

## Working

`ramses_amr.ksy` now generates and builds a shared library through the Awkward
target (`det-lab/kaitai_struct_compiler` PR #13). The fixes in that PR:

- **Empty switch case -> per-element `IndexedOption`.** The `cpu_info` switch
  (`0: empty_type` / `_: ramses_level_cpu_info`) previously emitted a zero-field
  `Record`, which the `LayoutBuilder` cannot build. It is now a per-element
  option; the empty case is `None` and present cases are records.
- **Single non-empty case + empty -> `IndexedOption<Record>` (no Union).** A
  switch with an empty case and one non-empty case is modeled as a plain option
  of that builder (no `Union`), because Awkward requires a `Union` to have >= 2
  members.
- **Switch over primitive types.** `vector_values`/`fortran_record` switch on
  `record_type` (`u4/u8/f8/f4`); each case is a `NumpyBuilder` union member and
  the parse selects it with `append_content<N>()` then `.append()`.
- **Field-unique builder names** plus the `_raw_` prefix for `UserTypeFromBytes`
  fields, so the generated C++ compiles.

Loading `amr_00088.out00001` gives an Awkward array with the correct type, and
the header globals read exactly: `ncpu=16, ndim=3, nlevelmax=8, ngridmax=1000000,
ngrid_current=27740, boxlen=6.0, ordering='hilbert'`, and `numbl[6][0]=18136`.

## Known gap (next)

- **Lists of records merge into a single element.** `amr_info.level_infos`
  (a repeated `ramses_amr_level_info` record) and the rows of the 2D `numbl`
  vector each collapse to one element. The Awkward `LayoutBuilder::ListOffset`
  records a single offset on `end_list()`, so a list whose content is a plain
  `Record` does not get per-element boundaries. The existing test schemas only
  exercise lists of primitives, so this was never covered. List-of-records
  needs per-element boundaries (e.g. an always-valid `IndexedOption` / a
  record-array builder); this is the next piece of work in the awkard target.

## Data

The RAMSES sample data (`amr_00088.out00001`, ~4.3 MB) is not committed; it is
downloaded at test time from the yt data site. Dataset:
`ramses_rt_00088` (`https://yt-project.org/data/ramses_rt_00088.tar.gz`).

## Regeneration

```bash
# compiler fork with the awkward target (det-lab/kaitai_struct_compiler, PR #13)
java -cp "$(cat <classpath>)" io.kaitai.struct.JavaMain -t awkward \
  --outdir test_artifacts example_data/schemas/ramses_amr.ksy
```
