from __future__ import annotations

import sys

sys.path.append("local")
import awkward_kaitai

import json
import gzip


def test_scdms():
    reader = awkward_kaitai.Reader("test_artifacts/libscdms.so")
    awkward_array = reader.load("example_data/data/scdms_v_two_trigger.bin")

    with gzip.open("tests/scdms.json.gz", "rb") as f:
        expected_content = json.load(f)

    assert awkward_array.to_list() == expected_content
