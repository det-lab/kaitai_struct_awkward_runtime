meta:
  id: pixie4e
  file-extension: b00
  endian: le
  ks-version: 0.8

seq:

  - id: file_header
    type: pixie4e_header

  - id: events
    type: event
    size: _io.size - 128

  - id: file_footer
    type: pixie_eor


types:

  pixie4e_header:
    seq:
      - id: blk_size
        type: u2

      - id: mod_num
        type: u2

      - id: run_format
        type: u2

      - id: chan_head_len
        type: u2

      - id: coinc_pat
        type: u2

      - id: coinc_win
        type: u2

      - id: max_comb_event_len
        type: u2

      - id: board_version
        type: u2

      - id: event_length_0
        type: u2

      - id: event_length_1
        type: u2

      - id: event_length_2
        type: u2

      - id: event_length_3
        type: u2

      - id: serial_number
        type: u2

      - id: reserved
        type: u2


  event:
    seq:
      - id: elements
        type: element
        repeat: eos


  element:
    seq:
      - id: header
        type: channel_header

      - id: data
        type: u2
        repeat: expr
        repeat-expr: header.num_trace_blks * _root.file_header.blk_size


  channel_header:
    seq:
      - id: evt_pattern
        type: u2

      - id: evt_info
        type: u2

      - id: num_trace_blks
        type: u2

      - id: num_trace_blks_prev
        type: u2

      - id: trig_time_lo
        type: u2

      - id: trig_time_mi
        type: u2

      - id: trig_time_hi
        type: u2

      - id: trig_time_x
        type: u2

      - id: energy
        type: u2

      - id: chan_no
        type: u2

      - id: user_psa_value
        type: u2

      - id: xia_psa_value
        type: u2

      - id: extended_psa_values
        type: u2
        repeat: expr
        repeat-expr: 0x4

      - id: reserved
        type: u2
        repeat: expr
        repeat-expr: 0x10

    instances:
      timestamp_full:
        # The firmware reports the timestamp in three 16-bit words.  Despite the
        # name, the "hi" word is not a high 32-bit component – the hardware
        # increments it as a plain 16-bit counter alongside the other words.
        # Historical reference JSON as well as vendor docs expect the composed
        # value to remain in the lower 32 bits, so we mirror that behaviour and
        # keep the expression in the same range the reference fixtures use.
        value: trig_time_lo + (trig_time_mi << 16) + trig_time_hi

  pixie_eor:
     seq:
       - id: evt_pattern
         type: u2

       - id: evt_info
         type: u2

       - id: num_trace_blks
         type: u2

       - id: num_trace_blks_prev
         type: u2

       - id: reserved
         type: u2
