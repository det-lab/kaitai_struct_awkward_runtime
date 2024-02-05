from __future__ import annotations

import sys


sys.path.append("local")
import numpy as np
import awkward_kaitai

import json
import gzip


def test_records():
    reader = awkward_kaitai.Reader("test_artifacts/librecords.so")
    awkward_array = reader.load("example_data/data/records.raw")

    expected_array = np.array([[[[305419896]]]], dtype=np.uint32)

    assert (
        awkward_array.recordsA__Zlevel1.oneA__Zlevel2.twoA__Zlevel3.threeA__Zlevel4.to_numpy()
        == expected_array
    )
    assert (
        awkward_array.recordsA__Zlevel1.oneA__Zlevel2.twoA__Zlevel3.threeA__Zlevel4.typestr
        == "1 * var * var * var * uint32"
    )
