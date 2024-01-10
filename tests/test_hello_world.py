from __future__ import annotations

import sys

import numpy as np

sys.path.append("local")
import awkward_kaitai

import json
import gzip


def test_hello_world():
    reader = awkward_kaitai.Reader("test_artifacts/libhello_world.so")
    awkward_array = reader.load("example_data/data/fixed_struct.bin")

    assert awkward_array.hello_worldA__Zone.typestr == "1 * uint8"
    assert awkward_array.to_list() == [{"hello_worldA__Zone": 80}]
