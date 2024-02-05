meta:
  id: scdms
  #file-extension: NOTE - The scdms format is encapsulated
  # within a midas file so it won't have its own extension
  endian: le
  license: MIT
  ks-version: 0.8

seq:

  - id: n_triggers
    type: v_one_trig_meta

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

  v_one_trig_meta:
    seq:

      - id: trigger_id
        type: u4

      - id: trigger_type
        type: u4
        enum: trigger_types
