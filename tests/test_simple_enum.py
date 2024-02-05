from __future__ import annotations

import sys

sys.path.append("local")
import numpy as np
import awkward_kaitai

import json
import gzip


def test_simple_enum():
    reader = awkward_kaitai.Reader("test_artifacts/libsimple_enum.so")
    awkward_array = reader.load("example_data/data/simple_enum.bin")

    raise NotImplementedError()
