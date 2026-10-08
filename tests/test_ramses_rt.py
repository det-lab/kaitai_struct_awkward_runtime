from __future__ import annotations

import awkward as ak
import awkward_kaitai


def test_ramses_rt_truncated():
    # rt_00088_truncated.dat is a small copy of rt_00088.out00004 (CPU 4 of the
    # ramses_rt_00088 dataset): full header + level-0 oct data, with nlevelmax
    # patched down to 1 so the file is self-contained.
    reader = awkward_kaitai.Reader("test_artifacts/libramses_rt.so")
    arr = reader.load("example_data/data/rt_00088_truncated.dat")[0]

    h = arr.ramses_rtA__Zheader

    def scalar(name: str):
        l = ak.to_list(getattr(getattr(h, "ramses_rt_headerA__Z" + name), "fortran_recordA__Zvalue"))
        while isinstance(l, list):
            l = l[0]
        return l

    # header globals match info_rt_00088.txt
    assert scalar("ncpu") == 16
    assert scalar("nvar") == 20  # nRTvar
    assert scalar("ndim") == 3
    assert scalar("nlevelmax") == 1  # patched down for the small fixture
    assert scalar("nboundary") == 0
    assert abs(float(scalar("gamma")) - 5.0 / 3.0) < 1e-3  # gamma = 5/3

    # one level; ncpu+nboundary = 16 domains
    li = arr.ramses_rtA__Zrt_info.ramses_rt_infoA__Zlevel_infos
    assert ak.num(li, axis=0) == 1

    di = li[0].ramses_rt_level_infoA__Zdomain_info
    assert ak.num(di, axis=0) == 16

    # nocts per domain; data must be present exactly where nocts>0
    nocts = ak.to_list(di.ramses_rt_domain_infoA__Znocts.fortran_recordA__Zvalue)
    nocts = [int(v[0]) for v in nocts]
    data_present = ak.to_list(ak.is_none(di.ramses_rt_domain_infoA__Zdata))
    for d in range(16):
        if nocts[d] > 0:
            assert not data_present[d], f"domain {d}: nocts>0 but data is None"
        else:
            assert data_present[d], f"domain {d}: nocts==0 but data present"

    # the only populated domain in level 0 of this cpu has nocts==1, and its
    # data fields are 8 cells x nvar vectors, each of length nocts.
    assert sum(1 for n in nocts if n > 0) == 1
    assert sum(nocts) == 1
    idx = nocts.index(1)
    fields = di[idx].ramses_rt_domain_infoA__Zdata.ramses_rt_valuesA__Zfields
    assert ak.num(fields, axis=0) == 8 * 20  # twotondim * nvar
    for f in range(ak.num(fields, axis=0)):
        vals = ak.to_list(fields[f].fortran_vectorA__Zvector.vector_valuesA__Zvalues)
        assert len(vals) == 1, f"field {f}: expected 1 value (nocts==1)"
