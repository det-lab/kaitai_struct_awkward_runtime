meta:
  id: index_option
  file-extension: raw
  endian: le

seq:

  - id: bank_header
    type: bank_hdr

  - id: bank1
    type: bank16
    if: (bank_header.flags & (1 << 4)) == 0
  - id: bank2
    type: bank32
    if: (bank_header.flags & (1 << 4)) != 0

types:

  bank_hdr:
    seq:
      - id: all_bank_size
        type: u4
      - id: flags
        type: u4

  bank16:
    seq:
      - id: name
        type: str
        size: 4
        encoding: UTF-8

      - id: type
        type: u2

      - id: size
        type: u2

  bank32:
    seq:
      - id: name
        type: str
        size: 4
        encoding: UTF-8

      - id: type
        type: u4

      - id: size
        type: u4
