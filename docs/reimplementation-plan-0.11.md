# 0.11 Awkward Target Reimplementation Plan

## Summary of choices
- **Branch strategy:** Use the orphan `dev` branch for the reimplementation. This keeps the 0.11 rewrite clean and lets us rebuild the repo structure intentionally.
- **Compiler source:** Implement the new Awkward target **inside `det-lab/kaitai_struct_compiler`** (Scala-based, following the style of other language targets).
- **Testing scope:** Run all existing tests from `main` (ported into the new repo) and add targeted tests where 0.11 changes behavior or types.
- **Golden data updates:** Allowed. Any changes will be documented in a dedicated Markdown changelog.
- **CI/testing environment:** Align to **Python 3.11** and disable auto-loaded pytest plugins in test runs to avoid pulling in NumPy-2-incompatible binary deps. This repo does not use those plugins, but pytest discovers them automatically via installed packages.
  - **Plugins observed:** `pytest-astropy` / `pytest-astropy-header` (imports `astropy`), which pulls in `erfa` and other compiled extensions.
  - **Why they auto-load:** pytest loads entry points from installed packages by default, even if tests do not import them.
  - **Why they are unnecessary here:** tests only use core pytest features and the repo's own fixtures; no astropy-specific markers or utilities are referenced.

---

## Phase 0 — Bootstrap the `dev` branch repo structure (1–2 days)
Goal: recreate the runtime repo skeleton on `dev` but pointing to the 0.11 compiler.

1) **Bring back repo structure**
   - Restore directories: `src/awkward_kaitai`, `tests`, `example_data`, `docs`, `pyproject.toml`, `Makefile`, `AGENTS.md`, `README.md`.
   - Ensure `kaitai_struct_compiler` submodule points to **det-lab/kaitai_struct_compiler@0.11-awkward**.
2) **Initialize tooling**
   - Recreate `noxfile.py`, `.pre-commit-config.yaml`, `pyproject.toml` with current constraints.
   - Update `Makefile` to match the new compiler flow (0.11 compiler build hooks).
3) **Target baseline**
   - Confirm repo structure is functionally identical to `main` aside from compiler target changes.

---

## Phase 1 — KSC 0.11 analysis & delta mapping (1–2 days)
Goal: identify all breaks vs 0.10, define exact adaptation work.

1) **API and pipeline diff**
   - Compare 0.10 vs 0.11 for:
     - `LanguageCompiler` hooks (`instance*`, `attr*`, array handling, type mapping).
     - Translator behavior (value instances, casts, shifts, numeric ops).
     - Runtime output expectations (C++ signatures, layouts).
2) **Generate a “porting checklist”**
   - Map existing Awkward implementation pieces to 0.11 equivalents.
   - Note any new 0.11 idioms used by other language targets.

---

## Phase 2 — Reimplement Awkward target in KSC 0.11 (5–10 days)
Goal: port the compiler target cleanly.

### 2.1 C++ codegen scaffolding
- Rebuild `AwkwardCompiler.scala` in 0.11 style.
- Ensure `instance` and `seq` field generation aligns with 0.11 base classes.

### 2.2 Type mapping
- Re-implement `kaitaiType2NativeType` mapping with 0.11 logic.
- Ensure correct handling of:
  - `CalcIntType` and integer shifts.
  - arrays (repeat `expr`/`until`/`eos`).
  - enums and unions.

### 2.3 Layout builder generation
- Re-create Awkward layout builder structures from 0.11’s AST flow:
  - `RecordBuilder`, `ListOffsetBuilder`, `NumpyBuilder`.
- Ensure builder naming and structure remain stable across schema changes.

### 2.4 Value instances & expressions
- Align with 0.11 expression pipeline:
  - Implement safe shifts for 32+ bit ops.
  - Avoid UB in all integer math.

---

## Phase 3 — Runtime interface alignment (2–3 days)
Goal: keep Python runtime working with new C++ output.

1) **Reader integration**
   - Confirm symbols expected by `Reader` (`fill`, `form`, `length`, etc.) still match.
   - If KSC 0.11 changes anything, add adapter or update runtime.

2) **CMake / build system**
   - Make sure builder CLI still works (`awkward-kaitai-build`).
   - Update `src/awkward_kaitai/data/CMakeLists.txt` if new compiler output requires it.

---

## Phase 4 — Test & golden updates (2–4 days)
Goal: ensure all tests pass against new output.

1) **Regenerate all schemas**
   - Rebuild `test_artifacts/*.cpp` and `.so` with 0.11.
2) **Run full test suite**
   - `make test`
3) **Golden changes**
   - Update `tests/*.json.gz` if output changes.
   - Document all changes in a new file: `docs/golden-output-changes.md`.

---

## Phase 5 — Stabilization & docs (1–2 days)
Goal: produce a clean implementation ready for merge.

1) **Performance sanity checks**
   - Validate build times and memory usage.
2) **Documentation**
   - Update `README.md` and `AGENTS.md` with 0.11 notes.
   - Add “0.11 migration notes” section.
3) **CI readiness**
   - Disable pytest auto-plugin loading in CI (e.g., `PYTEST_DISABLE_PLUGIN_AUTOLOAD=1`) and explicitly enable any required plugins.

---

## Deliverables
- Fully reimplemented Awkward target in `det-lab/kaitai_struct_compiler` 0.11 branch.
- Runtime repo (dev) with working tests.
- `docs/golden-output-changes.md` detailing all JSON output changes.
- Updated Makefile/tooling/CI.

---

## Risks & Mitigations
- **KSC 0.11 API changes:** mitigate with a direct diff & cross-reference to other language targets.
- **Output drift in JSON:** document changes and validate schema semantics.
- **Builder incompatibilities:** verify buffer/format contract using `Reader`.
