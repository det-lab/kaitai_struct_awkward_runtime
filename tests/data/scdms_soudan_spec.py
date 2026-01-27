# Shared spec for minimal Soudan file generation and HDF5 validation.
from construct import *

format_word = Struct(
    "daq_major" / Byte,
    "daq_minor" / Byte,
    "data_format_major" / Byte,
    "data_format_minor" / Byte,
)

two_word_file_header = Struct("endian_indicator" / Int32ul, "data_format" / format_word)

detector_hdr = Struct(
    "header_number" / Int32ul,
    "config_record_len" / Int32ul,
    "repeat_value"
    / Computed(
        lambda this: (this.config_record_len // 72) + (this.config_record_len // 144)
    ),
)

charge_config_header = Struct(
    "charge_config_len" / Int32ul,
    "detector_code" / Int32sl,
    "tower_number" / Int32sl,
    "channel_post_amp" / Int32sl,
    "channel_bias" / Int32sl,
    "rtf_offset" / Int32sl,
    "delta_t" / Int32sl,
    "trigger_time" / Int32sl,
    "trace_len" / Int32sl,
)

phonon_config_header = Struct(
    "phonon_config_len" / Int32ul,
    "detector_code" / Int32sl,
    "tower_number" / Int32sl,
    "post_amp_gain" / Int32sl,
    "qet_bias" / Int32sl,
    "squid_bias" / Int32sl,
    "squid_lockpoint" / Int32sl,
    "rtf_offset" / Int32sl,
    "variable_gain" / Int32sl,
    "delta_t" / Int32sl,
    "trigger_time" / Int32sl,
    "trace_len" / Int32sl,
)

header_list = Struct(
    "header_number" / Int32ul,
    "charge_config"
    / If(lambda this: this.header_number == 0x10002, charge_config_header),
    "phonon_config"
    / If(lambda this: this.header_number == 0x10001, phonon_config_header),
)

event_header = Struct(
    "event_header_word" / Int32ul,
    "event_size" / Int32ul,
    "event_identifier" / Computed(lambda this: (this.event_header_word >> 16) & 0xFFFF),
    "event_class" / Computed(lambda this: (this.event_header_word >> 8) & 0xF),
    "event_category" / Computed(lambda this: (this.event_header_word >> 12) & 0xF),
    "event_type" / Computed(lambda this: (this.event_header_word & 0xFF)),
)

administrative_record = Struct(
    "admin_header" / Int32ul,
    "admin_len" / Int32ul,
    "series_number_1" / Int32ul,
    "series_number_2" / Int32ul,
    "event_number_in_series" / Int32ul,
    "seconds_from_epoch" / Int32ul,
    "time_from_last_event" / Int32ul,
    "live_time_from_last_event" / Int32ul,
)

trace_record = Struct(
    "trace_header" / Int32ul,
    "trace_len" / Int32ul,
    "trace_bookkeeping_header" / Int32ul,
    "bookkeeping_len" / Int32ul,
    "digitizer_base_address" / Int32ul,
    "digitizer_channel" / Int32ul,
    "detector_code" / Int32ul,
    "timebase_header" / Int32ul,
    "timebase_len" / Int32ul,
    "t0_in_ns" / Int32ul,
    "delta_t_ns" / Int32ul,
    "num_of_points" / Int32ul,
    "second_trace_header" / Int32ul,
    "num_samples" / Int32ul,
)

data_sample = Struct(
    "data_selection" / Int32ul,
    "sample_a" / Computed(lambda this: (this.data_selection >> 16) & 0xFFFF),
    "sample_b" / Computed(lambda this: (this.data_selection & 0xFFFF)),
)


trace_data = Struct(
    "trace_rcrds" / trace_record,
    "sample_data" / Array(this.trace_rcrds.num_samples // 2, data_sample),
)

soudan_history_buffer = Struct(
    "history_buffer_header" / Int32ul,
    "history_buffer_len" / Int32ul,
    "num_time_nvt" / Int32ul,
    "time_nvt" / Array(this.num_time_nvt, Int32ul),
    "num_veto_mask_words" / Int32ul,
    "time_n_minus_veto_mask"
    / Array(this.num_time_nvt * this.num_veto_mask_words, Int32ul),
    "num_trigger_times" / Int32ul,
    "trigger_times" / Array(this.num_trigger_times, Int32ul),
    "num_trigger_mask_words" / Int32ul,
    "trig_times_minus_trig_mask"
    / Array(this.num_trigger_times * this.num_trigger_mask_words, Int32ul),
)

trigger_record = Struct(
    "trigger_header" / Int32ul,
    "trigger_len" / Int32ul,
    "trigger_time" / Int32ul,
    "individual_trigger_masks" / Array(6, Int32ul),
)

tlb_trigger_mask_record = Struct(
    "tlb_mask_header" / Int32ul, "tlb_len" / Int32ul, "tower_mask" / Array(6, Int32ul)
)

gps_data = Struct(
    "tlb_mask_header" / Int32ul,
    "length" / Int32ul,
    "gps_year_day" / If(this.length > 0, Int32ul),
    "gps_status_hour_minute_second" / If(this.length > 0, Int32ul),
    "gps_microsecs_from_gps_second" / If(this.length > 0, Int32ul),
)

detector_trigger_rates = Struct(
    "detector_trigger_header" / Int32ul,
    "len_to_next_header" / Int32ul,
    "clocking_interval" / Int32ul,
    "tower_number" / Int32ul,
    "detector_codes" / Array(6, Int32ul),
    "j_codes" / Array(5, Int32ul),
    "counter_values" / Array(30, Int32ul),
)

veto_trigger_rates = Struct(
    "veto_trigger_header" / Int32ul,
    "len_to_next_header" / Int32ul,
    "clocking_interval" / Int32ul,
    "num_entries" / Int32ul,
    "detector_code" / Array(this.num_entries, Int32ul),
    "counter_value_det_code" / Array(this.num_entries, Int32ul),
)


logical_records = Struct(
    "event_hdr" / Peek(Int32ul),
    "next_section"
    / Struct(
        "next_header" / Peek(Int32ul),
        "section"
        / Switch(
            lambda this: (
                this.next_header
                if ((this.next_header >> 16) != 0xA980)
                else 0xA980
            ),
            {
                0xA980: event_header,
                0x00000002: administrative_record,
                0x00000011: trace_data,
                0x00000021: soudan_history_buffer,
                0x00000060: gps_data,
                0x00000080: trigger_record,
                0x00000081: tlb_trigger_mask_record,
                0x00000022: detector_trigger_rates,
                0x00000031: veto_trigger_rates,
            },
        ),
    ),
)

soudan = Struct(
    "file_hdr" / two_word_file_header,
    "detector_hdr" / detector_hdr,
    "hdrs" / Array(this._root.detector_hdr.repeat_value, header_list),
    "logical_rcrds" / GreedyRange(logical_records),
)


def make_detector_code(detector_type, detector_number, channel_number):
    return int(f"{detector_type:02d}{detector_number:03d}{channel_number:03d}")


detector_type = 10
detector_number = 1
charge_channel = 1
phonon_channel = 2

charge_detector_code = make_detector_code(
    detector_type, detector_number, charge_channel
)
phonon_detector_code = make_detector_code(
    detector_type, detector_number, phonon_channel
)

test_file_hdr = {
    "endian_indicator": 1,
    "data_format": {
        "daq_major": 1,
        "daq_minor": 2,
        "data_format_major": 3,
        "data_format_minor": 4,
    },
}

test_detector_hdr = {
    "header_number": 0x10002,
    "config_record_len": 72 * 2,
}
built_detector_hdr = detector_hdr.build(test_detector_hdr)
repeat_value = detector_hdr.parse(built_detector_hdr).repeat_value

test_hdrs = []
for _ in range(repeat_value - 1):
    test_hdrs.append(
        {
            "header_number": 0x10002,
            "charge_config": {
                "charge_config_len": 72,
                "detector_code": charge_detector_code,
                "tower_number": 1,
                "channel_post_amp": 1,
                "channel_bias": 1,
                "rtf_offset": 1,
                "delta_t": 1,
                "trigger_time": 1,
                "trace_len": 2,
            },
            "phonon_config": {},
        }
    )
test_hdrs.append(
    {
        "header_number": 0x10001,
        "phonon_config": {
            "phonon_config_len": 72,
            "detector_code": phonon_detector_code,
            "tower_number": 1,
            "post_amp_gain": 1,
            "qet_bias": 1,
            "squid_bias": 1,
            "squid_lockpoint": 1,
            "rtf_offset": 1,
            "variable_gain": 1,
            "delta_t": 1,
            "trigger_time": 1,
            "trace_len": 2,
        },
        "charge_config": {},
    }
)

test_logical_records = [
    {
        "event_hdr": 0xA9800004,
        "next_section": {
            "next_header": 0xA9800004,
            "section": {
                "event_header_word": 0xA9800004,
                "event_size": 100,
            },
        },
    },
    {
        "event_hdr": 0x00000002,
        "next_section": {
            "next_header": 0x00000002,
            "section": {
                "admin_header": 0x00000002,
                "admin_len": 50,
                "series_number_1": 1,
                "series_number_2": 2,
                "event_number_in_series": 1,
                "seconds_from_epoch": 1700000000,
                "time_from_last_event": 1,
                "live_time_from_last_event": 1,
            },
        },
    },
    {
        "event_hdr": 0x00000011,
        "next_section": {
            "next_header": 0x00000011,
            "section": {
                "trace_rcrds": {
                    "trace_header": 0x00000011,
                    "trace_len": 200,
                    "trace_bookkeeping_header": 0x00000011,
                    "bookkeeping_len": 20,
                    "digitizer_base_address": 0x1000,
                    "digitizer_channel": 1,
                    "detector_code": phonon_detector_code,
                    "timebase_header": 0x00000011,
                    "timebase_len": 10,
                    "t0_in_ns": 100,
                    "delta_t_ns": 10,
                    "num_of_points": 1000,
                    "second_trace_header": 0x00000011,
                    "num_samples": 2,
                },
                "sample_data": [
                    {"data_selection": 0x00010002},
                ],
            },
        },
    },
    {
        "event_hdr": 0x00000021,
        "next_section": {
            "next_header": 0x00000021,
            "section": {
                "history_buffer_header": 0x00000021,
                "history_buffer_len": 40,
                "num_time_nvt": 1,
                "time_nvt": [100],
                "num_veto_mask_words": 1,
                "time_n_minus_veto_mask": [300],
                "num_trigger_times": 1,
                "trigger_times": [500],
                "num_trigger_mask_words": 1,
                "trig_times_minus_trig_mask": [700],
            },
        },
    },
    {
        "event_hdr": 0x00000060,
        "next_section": {
            "next_header": 0x00000060,
            "section": {
                "tlb_mask_header": 0x00000060,
                "length": 1,
                "gps_year_day": 2024001,
                "gps_status_hour_minute_second": 10101,
                "gps_microsecs_from_gps_second": 1,
            },
        },
    },
    {
        "event_hdr": 0x00000080,
        "next_section": {
            "next_header": 0x00000080,
            "section": {
                "trigger_header": 0x00000080,
                "trigger_len": 50,
                "trigger_time": 1000,
                "individual_trigger_masks": [1, 2, 3, 4, 5, 6],
            },
        },
    },
    {
        "event_hdr": 0x00000081,
        "next_section": {
            "next_header": 0x00000081,
            "section": {
                "tlb_mask_header": 0x00000081,
                "tlb_len": 50,
                "tower_mask": [1, 2, 3, 4, 5, 6],
            },
        },
    },
    {
        "event_hdr": 0x00000022,
        "next_section": {
            "next_header": 0x00000022,
            "section": {
                "detector_trigger_header": 0x00000022,
                "len_to_next_header": 50,
                "clocking_interval": 100,
                "tower_number": 1,
                "detector_codes": [
                    charge_detector_code,
                    phonon_detector_code,
                    0,
                    0,
                    0,
                    0,
                ],
                "j_codes": [1, 2, 3, 4, 5],
                "counter_values": [
                    1,
                    2,
                    3,
                    4,
                    5,
                    6,
                    7,
                    8,
                    9,
                    10,
                    11,
                    12,
                    13,
                    14,
                    15,
                    16,
                    17,
                    18,
                    19,
                    20,
                    21,
                    22,
                    23,
                    24,
                    25,
                    26,
                    27,
                    28,
                    29,
                    30,
                ],
            },
        },
    },
    {
        "event_hdr": 0x00000031,
        "next_section": {
            "next_header": 0x00000031,
            "section": {
                "veto_trigger_header": 0x00000031,
                "len_to_next_header": 50,
                "clocking_interval": 100,
                "num_entries": 2,
                "detector_code": [charge_detector_code, phonon_detector_code],
                "counter_value_det_code": [3, 4],
            },
        },
    },
]

complete_test_file = {
    "file_hdr": test_file_hdr,
    "detector_hdr": test_detector_hdr,
    "hdrs": test_hdrs,
    "logical_rcrds": test_logical_records,
}

EXPECTED_HDF5 = {
    "file_hdr/endian_indicator/endian_indicator": {"value": 1},
    "file_hdr/data_format/daq_major": {"value": 1},
    "file_hdr/data_format/daq_minor": {"value": 2},
    "file_hdr/data_format/data_format_major": {"value": 3},
    "file_hdr/data_format/data_format_minor": {"value": 4},
    "detector_hdr/header_number": {"value": 0x10002},
    "detector_hdr/config_record_len": {"value": 144},
    "detector_hdr/repeat_value": {"value": 3},
    "hdrs/charge_config/charge_config_0/charge_config_len": {"value": 72},
    "hdrs/charge_config/charge_config_0/detector_code": {"value": charge_detector_code},
    "hdrs/charge_config/charge_config_0/tower_number": {"value": 1},
    "hdrs/charge_config/charge_config_0/channel_post_amp": {"value": 1},
    "hdrs/charge_config/charge_config_0/rtf_offset": {"value": 1},
    "hdrs/charge_config/charge_config_0/delta_t": {"value": 1},
    "hdrs/charge_config/charge_config_0/trigger_time": {"value": 1},
    "hdrs/charge_config/charge_config_0/trace_len": {"value": 2},
    "hdrs/charge_config/charge_config_1/charge_config_len": {"value": 72},
    "hdrs/charge_config/charge_config_1/detector_code": {"value": charge_detector_code},
    "hdrs/charge_config/charge_config_1/tower_number": {"value": 1},
    "hdrs/charge_config/charge_config_1/channel_post_amp": {"value": 1},
    "hdrs/charge_config/charge_config_1/rtf_offset": {"value": 1},
    "hdrs/charge_config/charge_config_1/delta_t": {"value": 1},
    "hdrs/charge_config/charge_config_1/trigger_time": {"value": 1},
    "hdrs/charge_config/charge_config_1/trace_len": {"value": 2},
    "hdrs/phonon_config/phonon_config_0/phonon_config_len": {"value": 72},
    "hdrs/phonon_config/phonon_config_0/detector_code": {"value": phonon_detector_code},
    "hdrs/phonon_config/phonon_config_0/tower_number": {"value": 1},
    "hdrs/phonon_config/phonon_config_0/post_amp_gain": {"value": 1},
    "hdrs/phonon_config/phonon_config_0/qet_bias": {"value": 1},
    "hdrs/phonon_config/phonon_config_0/squid_bias": {"value": 1},
    "hdrs/phonon_config/phonon_config_0/squid_lockpoint": {"value": 1},
    "hdrs/phonon_config/phonon_config_0/rtf_offset": {"value": 1},
    "hdrs/phonon_config/phonon_config_0/variable_gain": {"value": 1},
    "hdrs/phonon_config/phonon_config_0/delta_t": {"value": 1},
    "hdrs/phonon_config/phonon_config_0/trigger_time": {"value": 1},
    "hdrs/phonon_config/phonon_config_0/trace_len": {"value": 2},
    "logical_rcrds/event_hdr/event_group_0/event_size": {"value": 100},
    "logical_rcrds/event_hdr/event_group_0/event_class": {"value": 0},
    "logical_rcrds/event_hdr/event_group_0/event_category": {"value": 0},
    "logical_rcrds/event_hdr/event_group_0/event_type": {"value": 4},
    "logical_rcrds/admin_rcrd/admin_rcrd_group_0/admin_header": {"value": 2},
    "logical_rcrds/admin_rcrd/admin_rcrd_group_0/admin_len": {"value": 50},
    "logical_rcrds/admin_rcrd/admin_rcrd_group_0/series_number_1": {"value": 1},
    "logical_rcrds/admin_rcrd/admin_rcrd_group_0/series_number_2": {"value": 2},
    "logical_rcrds/admin_rcrd/admin_rcrd_group_0/event_number_in_series": {"value": 1},
    "logical_rcrds/admin_rcrd/admin_rcrd_group_0/seconds_from_epoch": {"value": 1700000000},
    "logical_rcrds/admin_rcrd/admin_rcrd_group_0/time_from_last_event": {"value": 1},
    "logical_rcrds/admin_rcrd/admin_rcrd_group_0/live_time_from_last_event": {"value": 1},
    "logical_rcrds/trace_data/trace_data_group_0/trace_header": {"value": 0x11},
    "logical_rcrds/trace_data/trace_data_group_0/trace_len": {"value": 200},
    "logical_rcrds/trace_data/trace_data_group_0/trace_bookkeeping_header": {"value": 0x11},
    "logical_rcrds/trace_data/trace_data_group_0/bookkeeping_len": {"value": 20},
    "logical_rcrds/trace_data/trace_data_group_0/digitizer_base_address": {"value": 0x1000},
    "logical_rcrds/trace_data/trace_data_group_0/digitizer_channel": {"value": 1},
    "logical_rcrds/trace_data/trace_data_group_0/detector_code": {"value": phonon_detector_code},
    "logical_rcrds/trace_data/trace_data_group_0/timebase_header": {"value": 0x11},
    "logical_rcrds/trace_data/trace_data_group_0/timebase_len": {"value": 10},
    "logical_rcrds/trace_data/trace_data_group_0/t0_in_ns": {"value": 100},
    "logical_rcrds/trace_data/trace_data_group_0/delta_t_ns": {"value": 10},
    "logical_rcrds/trace_data/trace_data_group_0/num_of_points": {"value": 1000},
    "logical_rcrds/trace_data/trace_data_group_0/second_trace_header": {"value": 0x11},
    "logical_rcrds/trace_data/trace_data_group_0/num_samples": {"value": 2},
    "logical_rcrds/soudan_buffer/soudan_history_buffer_group_0/history_buffer_header": {"value": 0x21},
    "logical_rcrds/soudan_buffer/soudan_history_buffer_group_0/history_buffer_len": {"value": 40},
    "logical_rcrds/soudan_buffer/soudan_history_buffer_group_0/num_time_nvt": {"value": 1},
    "logical_rcrds/soudan_buffer/soudan_history_buffer_group_0/time_nvt": {"shape": [1], "values": [100]},
    "logical_rcrds/soudan_buffer/soudan_history_buffer_group_0/num_veto_mask_words": {"value": 1},
    "logical_rcrds/soudan_buffer/soudan_history_buffer_group_0/time_n_minus_veto_mask": {
        "shape": [1],
        "values": [300],
    },
    "logical_rcrds/soudan_buffer/soudan_history_buffer_group_0/num_trigger_times": {"value": 1},
    "logical_rcrds/soudan_buffer/soudan_history_buffer_group_0/trigger_times": {
        "shape": [1],
        "values": [500],
    },
    "logical_rcrds/soudan_buffer/soudan_history_buffer_group_0/num_trigger_mask_words": {"value": 1},
    "logical_rcrds/soudan_buffer/soudan_history_buffer_group_0/trig_times_minus_trig_mask": {
        "shape": [1],
        "values": [700],
    },
    "logical_rcrds/gps_data/gps_data_group_0/tlb_mask_header": {"value": 0x60},
    "logical_rcrds/gps_data/gps_data_group_0/length": {"value": 1},
    "logical_rcrds/gps_data/gps_data_group_0/gps_year_day": {"value": 2024001},
    "logical_rcrds/gps_data/gps_data_group_0/gps_status_hour_minute_second": {"value": 10101},
    "logical_rcrds/gps_data/gps_data_group_0/gps_microsecs_from_gps_second": {"value": 1},
    "logical_rcrds/trigger_rcrd/trigger_rcrd_group_0/trigger_header": {"value": 0x80},
    "logical_rcrds/trigger_rcrd/trigger_rcrd_group_0/trigger_len": {"value": 50},
    "logical_rcrds/trigger_rcrd/trigger_rcrd_group_0/trigger_time": {"value": 1000},
    "logical_rcrds/trigger_rcrd/trigger_rcrd_group_0/individual_trigger_masks": {
        "shape": [6],
        "values": [1, 2, 3, 4, 5, 6],
    },
    "logical_rcrds/tlb_trig_mask_rcrd/tlb_trigger_mask_rcrd_group_0/tlb_mask_header": {"value": 0x81},
    "logical_rcrds/tlb_trig_mask_rcrd/tlb_trigger_mask_rcrd_group_0/tlb_len": {"value": 50},
    "logical_rcrds/tlb_trig_mask_rcrd/tlb_trigger_mask_rcrd_group_0/tower_mask": {
        "shape": [6],
        "values": [1, 2, 3, 4, 5, 6],
    },
    "logical_rcrds/detector_trigger_rates/detector_trigger_rates_group_0/detector_trigger_header": {
        "value": 0x22
    },
    "logical_rcrds/detector_trigger_rates/detector_trigger_rates_group_0/len_to_next_header": {
        "value": 50
    },
    "logical_rcrds/detector_trigger_rates/detector_trigger_rates_group_0/clocking_interval": {
        "value": 100
    },
    "logical_rcrds/detector_trigger_rates/detector_trigger_rates_group_0/tower_number": {"value": 1},
    "logical_rcrds/detector_trigger_rates/detector_trigger_rates_group_0/detector_codes": {
        "shape": [6],
        "values": [charge_detector_code, phonon_detector_code, 0, 0, 0, 0],
    },
    "logical_rcrds/detector_trigger_rates/detector_trigger_rates_group_0/j_codes": {
        "shape": [5],
        "values": [1, 2, 3, 4, 5],
    },
    "logical_rcrds/detector_trigger_rates/detector_trigger_rates_group_0/counter_values": {
        "shape": [30],
        "values": [
            1,
            2,
            3,
            4,
            5,
            6,
            7,
            8,
            9,
            10,
            11,
            12,
            13,
            14,
            15,
            16,
            17,
            18,
            19,
            20,
            21,
            22,
            23,
            24,
            25,
            26,
            27,
            28,
            29,
            30,
        ],
    },
    "logical_rcrds/veto_trigger_rates/veto_trigger_rates_group_0/veto_trigger_header": {
        "value": 0x31
    },
    "logical_rcrds/veto_trigger_rates/veto_trigger_rates_group_0/len_to_next_header": {"value": 50},
    "logical_rcrds/veto_trigger_rates/veto_trigger_rates_group_0/clocking_interval": {
        "value": 100
    },
    "logical_rcrds/veto_trigger_rates/veto_trigger_rates_group_0/num_entries": {"value": 2},
    "logical_rcrds/veto_trigger_rates/veto_trigger_rates_group_0/detector_code": {
        "shape": [2],
        "values": [charge_detector_code, phonon_detector_code],
    },
    "logical_rcrds/veto_trigger_rates/veto_trigger_rates_group_0/counter_value_det_code": {
        "shape": [2],
        "values": [3, 4],
    },
    "S12/E1/det_code_10001002/detector_number": {"value": 1},
    "S12/E1/det_code_10001002/detector_type": {"value": "iZIP (class I)", "dtype_kind": "O"},
    "S12/E1/det_code_10001002/trace": {"shape": [2], "values": [1, 2]},
    "S12/E1/det_code_10001002/trace_type": {"value": "Phonon", "dtype_kind": "O"},
}
