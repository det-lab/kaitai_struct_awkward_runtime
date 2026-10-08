from __future__ import annotations

import awkward as ak
import awkward_kaitai


def _numbl(h, level, cpu):
    # numbl is a fortran_2d_vector; rows are records wrapping the values list.
    rows = ak.to_list(h.ramses_headerA__Znumbl.fortran_2d_vectorA__Zvector)
    return rows[level]["vector_valuesA__Zvalues"][cpu]


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

    # numbl grid is [nlevelmax, ncpu+nboundary] = [8, 16]
    rows = ak.to_list(h.ramses_headerA__Znumbl.fortran_2d_vectorA__Zvector)
    assert len(rows) == 8
    assert all(len(r["vector_valuesA__Zvalues"]) == 16 for r in rows)

    # a few exact numbl values (upper levels are zeroed in this truncated copy)
    assert _numbl(h, 0, 11) == 1
    assert _numbl(h, 3, 7) == 14
    assert all(_numbl(h, lv, cpu) == 0 for lv in range(4, 8) for cpu in range(16))

    # 8 levels; the populated-cpu set must match numbl>0 exactly, and each
    # populated cpu must carry pos_x/pos_y/pos_z vectors of length == numbl.
    li = arr.ramses_amrA__Zamr_info.ramses_amr_infoA__Zlevel_infos
    assert ak.num(li, axis=0) == 8

    for lv in range(8):
        ci = li[lv].ramses_amr_level_infoA__Zcpu_info
        assert ak.num(ci, axis=0) == 16
        present = [i for i, p in enumerate(ak.to_list(ak.is_none(ci))) if not p]
        expected = [c for c in range(16) if _numbl(h, lv, c) > 0]
        assert present == expected, f"level {lv}: populated cpus {present} != numbl>0 {expected}"

        for cpu in present:
            rec = ci[cpu]
            n = _numbl(h, lv, cpu)
            for v in ("pos_x", "pos_y", "pos_z"):
                vals = ak.to_list(
                    getattr(rec, "ramses_level_cpu_infoA__Z" + v)
                    .fortran_vectorA__Zvector.vector_valuesA__Zvalues
                )
                assert len(vals) == n, f"level {lv} cpu {cpu} {v} len {len(vals)} != {n}"
