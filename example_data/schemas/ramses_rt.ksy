meta:
  id: ramses_rt
  endian: le
  ks-opaque-types: true
# RAMSES radiative transfer per-domain (per-CPU) output: rt_00088.outNNNNN
# Skeleton based on yt's RAMSES frontend field_handlers / io_utils read logic.
#   header: ncpu, nvar(=nRTvar), ndim, nlevelmax, nboundary, gamma  (Fortran records)
#   body  : for each level, for each domain (ncpu+nboundary):
#             (ilevel, nocts) pair, then -- if nocts>0 -- the RT variables
#             for each of the 8 cells, for each of the nvar fields.
seq:
  - id: header
    type: ramses_rt_header
  - id: rt_info
    type: ramses_rt_info
types:
  ramses_rt_info:
    seq:
      - id: level_infos
        type: ramses_rt_level_info(_index)
        repeat: expr
        repeat-expr: _root.header.nlevelmax.value[0].as<u4>
  ramses_rt_level_info:
    params:
      - id: level
        type: u4
    seq:
      - id: domain_info
        type: ramses_rt_domain_info
        repeat: expr
        repeat-expr: _root.header.ncpu.value[0].as<u4> + _root.header.nboundary.value[0].as<u4>
  ramses_rt_domain_info:
    # one (ilevel, nocts) record; when nocts>0 the octs' RT variables follow
    seq:
      - id: ilevel
        type: fortran_record(1, "u4")
      - id: nocts
        type: fortran_record(1, "u4")
      - id: data
        type: ramses_rt_values
        if: nocts.value[0].as<u4> > 0
  ramses_rt_values:
    # twotondim (2^ndim) cells x nvar fields, each a vector of nocts f8 values
    seq:
      - id: fields
        type: fortran_vector("f8")
        repeat: expr
        repeat-expr: _root.header.nvar.value[0].as<u4> * 8
  ramses_rt_header:
    seq:
      - id: ncpu
        type: fortran_record(1, "u4")
      - id: nvar
        type: fortran_record(1, "u4")
      - id: ndim
        type: fortran_record(1, "u4")
      - id: nlevelmax
        type: fortran_record(1, "u4")
      - id: nboundary
        type: fortran_record(1, "u4")
      - id: gamma
        type: fortran_record(1, "f8")
  fortran_record:
    params:
      - id: num_records
        type: u4
      - id: record_type
        type: str
    seq:
      - id: rec_size1
        type: u4
      - id: value
        type:
          switch-on: record_type
          cases:
            '"u4"': u4
            '"u8"': u8
            '"f4"': f4
            '"f8"': f8
        repeat: expr
        repeat-expr: num_records
      - id: rec_size2
        type: u4
  fortran_vector:
    params:
      - id: record_type
        type: str
    seq:
      - id: rec_size1
        type: u4
      - id: vector
        type: vector_values(record_type)
        size: rec_size1
      - id: rec_size2
        type: u4
  vector_values:
    params:
      - id: record_type
        type: str
    seq:
      - id: values
        type:
          switch-on: record_type
          cases:
            '"u4"': u4
            '"u8"': u8
            '"f8"': f8
            '"f4"': f4
        repeat: eos
