from __future__ import annotations

import sys


sys.path.append("local")
import numpy as np
import awkward_kaitai


def test_numpy():
    reader = awkward_kaitai.Reader("test_artifacts/libnumpy.so")
    awkward_array = reader.load("example_data/data/numpy.raw")

    expected_array = np.array([8], dtype=np.uint32)

    np.testing.assert_array_equal(
        awkward_array.numpyA__Znumpy_array.to_numpy(), expected_array
    )
