from __future__ import annotations

import sys

import numpy as np

sys.path.append("local")
import awkward_kaitai

import json
import gzip


def test_scdms_v8():
    reader = awkward_kaitai.Reader("test_artifacts/libscdms_v8.so")
    awkward_array = reader.load("example_data/data/scdms_v8.mid")

    with gzip.open("tests/scdms_v8.json.gz", "rb") as f:
        expected_content = json.load(f)

    # it was list of 1 element, so saved only the element into JSON
    assert awkward_array.to_list()[0] == expected_content
