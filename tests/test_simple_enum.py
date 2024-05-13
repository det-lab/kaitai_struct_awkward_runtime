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

    assert (
        awkward_array["simple_enumA__Zn_triggers"][0]["v_one_trig_metaA__Ztrigger_id"][0]
        == 0
    )
    assert (str(
            awkward_array["simple_enumA__Zn_triggers"][0][
                "v_one_trig_metaA__Ztrigger_id"
            ].type.content)
        == "uint32"
    )
    assert awkward_array.simple_enumA__Zn_triggers.v_one_trig_metaA__Ztrigger_id.to_list() == [[0, 0, 0, 0, 0, 0]]

    assert awkward_array.simple_enumA__Zn_triggers.v_one_trig_metaA__Ztrigger_type.to_list() == [['physics', 'physics', 'physics', 'physics', 'borr', 'irr']]

if __name__ == "__main__":
    test_simple_enum()
