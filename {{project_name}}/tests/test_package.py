from __future__ import annotations

import importlib.metadata

import kaitai_awkward_runtime as m


def test_version():
    assert importlib.metadata.version("kaitai_awkward_runtime") == m.__version__
