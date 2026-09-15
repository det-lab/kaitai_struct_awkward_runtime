# RAMSES AMR through the Awkward backend

`example_data/schemas/ramses_amr.ksy` exercises several Kaitai features that the
Awkward target must support. This note records the current status (2026-09-15).

## Working

- **Empty switch cases -> per-element `IndexedOption`.** A `switch` case that is
  an empty (zero-field) user type (RAMSES's `empty_type`, used when
  `numbl[level][cpu] == 0`) previously produced a zero-field `Record` in the
  union, which the Awkward `LayoutBuilder::Record` cannot build. That field is
  now emitted as `ListOffset<IndexedOption<Union<...>>>` with the empty case as
  a missing (`None`) element. Implementation:
  `det-lab/kaitai_struct_compiler` PR #13.

## Known gap (follow-up)

- **`switch` over primitive types.** `vector_values` uses a `switch` on
  `record_type` with primitive cases (`u4/u8/f8/f4`). The target emits a union
  with no builders and calls `.append` on it, which is not supported. This is a
  separate, pre-existing gap; until it is fixed the generated C++ for
  `ramses_amr` does not build.

## Data

The RAMSES sample data (`amr_00088.out00001`, ~4.3 MB) is not committed; it is
downloaded at test time from the yt data site or provided by the user. The full
dataset is `ramses_rt_00088` (`https://yt-project.org/data/ramses_rt_00088.tar.gz`).

## Regeneration

```bash
# compiler fork with the awkward target
java -cp "$(cat <classpath>)" io.kaitai.struct.JavaMain -t awkward \
  --outdir test_artifacts example_data/schemas/ramses_amr.ksy
```
