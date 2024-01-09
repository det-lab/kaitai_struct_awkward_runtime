from __future__ import annotations

import sys

sys.path.append("local")
import awkward_kaitai


def test_fake():
    animal = awkward_kaitai.Reader(
        "test_artifacts/libfake.so"
    )
    awkward_array = animal.load("example_data/data/fake.raw")

    assert len(awkward_array.fakeA__Zpoints.pointA__Zx[0]) == 3000
    assert awkward_array.fakeA__Zpoints.pointA__Zy[0][0] == 2
    assert awkward_array.fakeA__Zpoints.pointA__Zz.to_numpy().sum() == 66000
