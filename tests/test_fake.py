from __future__ import annotations

import sys

sys.path.append("local")
import numpy as np
import awkward_kaitai


def test_fake():
    reader = awkward_kaitai.Reader("test_artifacts/libfake.so")
    awkward_array = reader.load("example_data/data/fake.raw")

    assert len(awkward_array.fakeA__Zpoints.pointA__Zx[0]) == 3000
    assert awkward_array.fakeA__Zpoints.pointA__Zy[0][0] == 2
    assert awkward_array.fakeA__Zpoints.pointA__Zz.to_numpy().sum() == 66000

    expected_array = np.array(
        [(1, 2, 3), (10, 20, 30), (11, 22, 33)] * 1000,
        dtype=[("pointA__Zx", "u4"), ("pointA__Zy", "u4"), ("pointA__Zz", "u4")],
    )

    np.testing.assert_array_equal(
        awkward_array.fakeA__Zpoints.to_numpy()[0], expected_array
    )
