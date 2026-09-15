from __future__ import annotations

import awkward as ak
import awkward_kaitai


def test_ramses_amr_truncated():
    # amr_00088_truncated_50kb.dat is the first ~50 KB of amr_00088.out00001
    # (CPU 1 of the ramses_rt_00088 dataset): full header + levels 0-3 data,
    # with numbl rows 4-7 zeroed so the upper levels parse as empty.
    reader = awkward_kaitai.Reader("test_artifacts/libramses_amr.so")
    arr = reader.load("example_data/data/amr_00088_truncated_50kb.dat")[0]

    h = arr.ramses_amrA__Zheader

    def scalar(name: str):
        l = ak.to_list(getattr(getattr(h, "ramses_headerA__Z" + name), "fortran_recordA__Zvalue"))
        while isinstance(l, list):
            l = l[0]
        return l

    # header globals match the simulation info
    assert scalar("ncpu") == 16
    assert scalar("ndim") == 3
    assert scalar("nlevelmax") == 8
    assert scalar("ngridmax") == 1000000
    assert scalar("ngrid_current") == 27740
    assert scalar("boxlen") == 6.0

    # 8 levels; level 0 has one populated cpu (numbl[0][11]==1), upper levels empty
    li = arr.ramses_amrA__Zamr_info.ramses_amr_infoA__Zlevel_infos
    assert ak.num(li, axis=0) == 8

    ci0 = li[0].ramses_amr_level_infoA__Zcpu_info
    assert ak.num(ci0, axis=0) == 16
    assert int(ak.sum(ak.is_none(ci0))) == 15  # 15 of 16 cpus are empty at level 0

    ci4 = li[4].ramses_amr_level_infoA__Zcpu_info
    assert int(ak.sum(ak.is_none(ci4))) == 16  # truncated levels are entirely empty
