meta:
  id: fake
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
        type: u4
      - id: y
        type: u4
      - id: z
        type: u4
