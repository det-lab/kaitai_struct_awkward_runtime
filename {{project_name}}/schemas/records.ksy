meta:
  id: records
  file-extension: raw
  endian: le

seq:
  - id: points
    type: point
    repeat: eos

types:
  point:
    seq:
      - id: x
        type: x_point
        repeat: eos
    types:
      x_point:
        seq:
          - id: a
            type: f8