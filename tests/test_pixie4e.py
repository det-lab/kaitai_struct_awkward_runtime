from __future__ import annotations

import sys

import numpy as np

sys.path.append("local")
import awkward_kaitai

import json
import gzip


def test_pixie4e():
    reader = awkward_kaitai.Reader("test_artifacts/libpixie4e.so")
    awkward_array = reader.load("example_data/data/pixie4e.set")

    with gzip.open("tests/pixie4e.json.gz", "rb") as f:
        expected_content = json.load(f)

    for each_arr, each_expected in zip( awkward_array.to_list(), expected_content):
        assert each_arr == each_expected
