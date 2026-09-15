meta:
  id: switch_amr_like
  endian: le
seq:
  - id: nentries
    type: u2
  - id: entries
    type: entry
    repeat: expr
    repeat-expr: nentries
  - id: numbers
    type: number
    repeat: expr
    repeat-expr: nentries
types:
  entry:
    seq:
      - id: tag
        type: u1
      - id: payload
        type:
          switch-on: tag
          cases:
            0: empty_type
            _: point
  point:
    seq:
      - id: x
        type: s4
      - id: y
        type: s4
  number:
    seq:
      - id: tag
        type: u1
      - id: value
        type:
          switch-on: tag
          cases:
            1: u4
            2: u8
            3: f4
  empty_type:
    seq: []
