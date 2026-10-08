from __future__ import annotations

import awkward as ak
import awkward_kaitai


def test_switch_amr_like():
    reader = awkward_kaitai.Reader("test_artifacts/libswitch_amr_like.so")
    arr = reader.load("example_data/data/switch_amr_like.bin")[0]

    # empty switch case -> per-element None (IndexedOption); primitive switch -> union
    assert ak.to_list(arr.switch_amr_likeA__Znentries) == 3

    ent = arr.switch_amr_likeA__Zentries
    assert ak.num(ent, axis=0) == 3
    payload = ent.entryA__Zpayload
    assert int(ak.sum(ak.is_none(payload))) == 2
    assert ak.to_list(payload[1]) == {"pointA__Zx": 5, "pointA__Zy": 7}

    num = arr.switch_amr_likeA__Znumbers
    assert ak.num(num, axis=0) == 3
    assert ak.to_list(num[0].numberA__Zvalue) == 100
    assert ak.to_list(num[1].numberA__Zvalue) == 2.5
    assert ak.to_list(num[2].numberA__Zvalue) == 1000000000
