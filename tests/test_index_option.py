from __future__ import annotations

import sys

sys.path.append("local")
import awkward_kaitai
import numpy as np


def test_index_option():
    reader = awkward_kaitai.Reader("test_artifacts/libindex_option.so")
    awkward_array = reader.load("example_data/data/index_option.raw")

    expected_array = np.array(
        [(100, 16)],
        dtype=[("bank_hdrA__Zall_bank_size", "<u4"), ("bank_hdrA__Zflags", "<u4")],
    )

    np.testing.assert_array_equal(
        awkward_array.index_optionA__Zbank_header.to_numpy(), expected_array
    )

    # Element 0 has a different shape because it is a ListOffsetBuilder<NumpyBuilder>
    # instead of just NumpyBuilder
    expected_array_bank1 = {
        "bank16A__Zname": np.ma.masked_array(
            data=[0], mask=[True], dtype="<U1", fill_value="N/A"
        ),
        "bank16A__Ztype": np.ma.masked_array(data=[0], mask=[True], dtype=np.uint16),
    }
    expected_array_bank1["bank16A__Zsize"] = expected_array_bank1["bank16A__Ztype"]

    for field in expected_array_bank1.keys():
        arr = awkward_array.index_optionA__Zbank1[field].to_numpy()
        np.testing.assert_array_equal(arr, expected_array_bank1[field])
        assert arr.dtype == expected_array_bank1[field].dtype

    expected_array_bank2 = np.ma.masked_array(
        data=[("Bank", 3, 2)],
        mask=[(False, False, False)],
        fill_value=("N/A", 999999, 999999),
        dtype=[
            ("bank32A__Zname", "<U4"),
            ("bank32A__Ztype", "<u4"),
            ("bank32A__Zsize", "<u4"),
        ],
    )

    np.testing.assert_array_equal(
        awkward_array.index_optionA__Zbank2.to_numpy(), expected_array_bank2
    )
