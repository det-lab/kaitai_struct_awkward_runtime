meta:
  id: scdms
  #file-extension: NOTE - The scdms format is encapsulated
  # within a midas file so it won't have its own extension
  endian: le
  license: MIT
  ks-version: 0.8

seq:

  - id: scdms_hdr
    type: scdms_header

  - id: n_triggers
    type:
      switch-on: scdms_hdr.format_version
      cases:
        1: v_one_trigger
        2: v_one_trigger

enums:

  trigger_types:
    1:
      id: physics # trigger based on L1 primitives
    2:
      id: borr    # begin of run randoms
    3:
      id: irr     # in run randoms
    4:
      id: eorr    # end of run randoms
    5:
      id: bcr     # baseline control randoms
    6:
      id: borts   # begin of run test signal
    7:
      id: eorts   # end of run test signal

types:

  scdms_header:

    seq:
      - id: packed
        type: u4

    instances:

      format_version:
        value: ((packed & 0x0f_ff_f0_00) >> 12)

  v_one_trigger:
    seq:
      - id: trigger_meta
        type: v_one_trig_meta

  v_one_trig_meta:
    seq:

      - id: trigger_id
        type: u4

      - id: trigger_type
        type: u4
        enum: trigger_types
