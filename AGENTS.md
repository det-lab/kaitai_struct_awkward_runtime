# Repository Guidelines

## Project Structure & Module Organization
- `src/awkward_kaitai/`: Python package (runtime, builder, reader, data). Public API lives here.
- `tests/`: Pytest suite (`test_*.py`) plus JSON fixtures.
- `example_data/schemas/`: Kaitai `.ksy` schemas used to generate C++ sources.
- `test_artifacts/`: Generated `.cpp` files and compiled `.so` libraries (build outputs).
- `kaitai_struct_compiler/`: Kaitai Struct compiler sources (Scala/SBT build).
- `docs/`, `mkdocs.yml`: Documentation site content and configuration.

## Build, Test, and Development Commands
- `pip install -e .` installs the package in editable mode.
- `nox -s lint` runs pre-commit hooks across the repo.
- `nox -s pylint` runs pylint on the package.
- `nox -s tests` runs the pytest suite.
- `make test` builds C++ test artifacts and runs all tests.
- `make compile_test testcase=hello_world` rebuilds a single schema and runs its test.
- `make clean` removes `local/`, `build/`, and `test_artifacts/` outputs.

## Makefile Workflow (Detailed)
- Prereqs: Java + SBT for `kaitai_struct_compiler/`, plus a working C++ toolchain and Python env.
- `make cpp` builds Scala compiler jars (via SBT) and generates `test_artifacts/*.cpp` from `example_data/schemas/*.ksy`.
- `make test` runs the full pipeline: compile compiler → generate C++ → build shared libs `test_artifacts/lib*.so` → `pytest`.
- `make compile_test testcase=<name>` is the fast loop for a single schema (`<name>` must match a file in `example_data/schemas/`).
- `make clean` wipes generated artifacts and SBT build products; rerun `make test` after cleaning.

## Coding Style & Naming Conventions
- Python formatting and linting are enforced by pre-commit (Black, Ruff, mypy, codespell).
- Indentation is 4 spaces; keep line length flexible (Ruff ignores E501).
- Tests are named `tests/test_*.py` (enforced by pre-commit).
- Prefer `from __future__ import annotations` for new modules (Ruff isort rule).

## Testing Guidelines
- Framework: pytest with strict config (`pyproject.toml`), tests live under `tests/`.
- Run all tests with `pytest` or `nox -s tests`.
- C++/Kaitai integration tests depend on generated artifacts; use `make test` when touching schemas or compiler pieces.

## Commit & Pull Request Guidelines
- Recent history uses Conventional Commits (e.g., `docs: ...`, `chore(deps): ...`), so follow that pattern.
- Keep commits focused and descriptive; mention schema or compiler changes explicitly.
- PRs should include a short summary, testing notes (commands run), and linked issues when applicable.

## Configuration & Tooling Notes
- Pre-commit config: `.pre-commit-config.yaml` (run via `nox -s lint`).
- Type checking: mypy is configured for `src/` and `tests/` in `pyproject.toml`.
