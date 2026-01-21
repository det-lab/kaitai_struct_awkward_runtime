meta:
  id: records
  file-extension: raw
  endian: le

seq:
  - id: level1
    type: one
    repeat: eos

types:
  one:
    seq:
      - id: level2
        type: two
        repeat: eos

  two:
    seq:
      - id: level3
        type: three
        repeat: eos

  three:
    seq:
      - id: level4
        type: u4