meta:
  id: union
  file-extension: raw
  endian: le

seq:

  - id: union_hdr
    type: union_header

  - id: union_cases
    type:
      switch-on: (union_hdr.flags & (1 << 4))
      cases:
        0: case16
        1: case32
        _: case64
    repeat: eos

types:

  union_header:
    seq:
      - id: flags
        type: u4

  case16:
    seq:
      - id: name
        type: str
        size: 4
        encoding: UTF-8

      - id: size
        type: u2

  case32:
    seq:
      - id: name
        type: str
        size: 4
        encoding: UTF-8

      - id: size
        type: u4

  case64:
    seq:
      - id: name
        type: str
        size: 4
        encoding: UTF-8

      - id: size
        type: u4