from __future__ import annotations

from pathlib import Path

import awkward as ak
import pytest

from awkward_kaitai import Reader

spec_mod = pytest.importorskip("cdms_soudan.scdms_soudan_spec")
complete_test_file = spec_mod.complete_test_file


def _as_int(value):
    if isinstance(value, (bytes, bytearray)):
        return int.from_bytes(value, "little")
    return int(value)


def _list_int(values):
    return [_as_int(v) for v in values]


def _load_minimal():
    lib_path = Path("cdms_soudan/kaitai/libsoudan.so")
    sample_path = Path("cdms_soudan/minimal_sample.soudan")
    if not lib_path.exists():
        pytest.skip("cdms_soudan/kaitai/libsoudan.so not built")
    if not sample_path.exists():
        pytest.skip("cdms_soudan/minimal_sample.soudan missing")

    reader = Reader(lib_path)
    return ak.to_list(reader.load(str(sample_path)))[0]


def test_soudan_awkward_matches_spec():
    data = _load_minimal()
    spec = complete_test_file

    file_hdr = data["soudanA__Zfile_hdr"]
    assert _as_int(file_hdr["two_word_file_headerA__Zendian_indicator"]) == spec["file_hdr"]["endian_indicator"]
    df = file_hdr["two_word_file_headerA__Zdata_format"]
    df_spec = spec["file_hdr"]["data_format"]
    assert df["format_wordA__Zdaq_major"] == df_spec["daq_major"]
    assert df["format_wordA__Zdaq_minor"] == df_spec["daq_minor"]
    assert df["format_wordA__Zdata_format_major"] == df_spec["data_format_major"]
    assert df["format_wordA__Zdata_format_minor"] == df_spec["data_format_minor"]

    detector_hdr = data["soudanA__Zdetector_hdr"]
    assert detector_hdr["detector_config_headerA__Zheader_num"] == spec["detector_hdr"]["header_number"]
    assert detector_hdr["detector_config_headerA__Zconfig_record_len"] == spec["detector_hdr"]["config_record_len"]
    assert detector_hdr["detector_config_headerA__Zrepeat_value"] == 3

    assert len(data["soudanA__Zhdrs"]) == len(spec["hdrs"])
    for hdr, hdr_spec in zip(data["soudanA__Zhdrs"], spec["hdrs"]):
        assert hdr["header_listA__Zheader_num"] == hdr_spec["header_number"]
        if hdr_spec["header_number"] == 0x10002:
            cc = hdr["header_listA__Zcharge_config"]
            cc_spec = hdr_spec["charge_config"]
            assert cc["charge_config_headerA__Zcharge_config_len"] == cc_spec["charge_config_len"]
            assert cc["charge_config_headerA__Zdetector_code"] == cc_spec["detector_code"]
            assert cc["charge_config_headerA__Ztower_num"] == cc_spec["tower_number"]
            assert cc["charge_config_headerA__Zchannel_post_amp"] == cc_spec["channel_post_amp"]
            assert cc["charge_config_headerA__Zchannel_bias"] == cc_spec["channel_bias"]
            assert cc["charge_config_headerA__Zrtf_offset"] == cc_spec["rtf_offset"]
            assert cc["charge_config_headerA__Zdelta_t"] == cc_spec["delta_t"]
            assert cc["charge_config_headerA__Ztrigger_time"] == cc_spec["trigger_time"]
            assert cc["charge_config_headerA__Ztrace_len"] == cc_spec["trace_len"]
            assert hdr["header_listA__Zphonon_config"] is None
        else:
            pc = hdr["header_listA__Zphonon_config"]
            pc_spec = hdr_spec["phonon_config"]
            assert pc["phonon_config_headerA__Zphonon_channel_config_record_len"] == pc_spec["phonon_config_len"]
            assert pc["phonon_config_headerA__Zdetector_code"] == pc_spec["detector_code"]
            assert pc["phonon_config_headerA__Ztower_num"] == pc_spec["tower_number"]
            assert pc["phonon_config_headerA__Zpost_amp_gain"] == pc_spec["post_amp_gain"]
            assert pc["phonon_config_headerA__Zqet_bias"] == pc_spec["qet_bias"]
            assert pc["phonon_config_headerA__Zsquid_bias"] == pc_spec["squid_bias"]
            assert pc["phonon_config_headerA__Zsquid_lockpoint"] == pc_spec["squid_lockpoint"]
            assert pc["phonon_config_headerA__Zrtf_offset"] == pc_spec["rtf_offset"]
            assert pc["phonon_config_headerA__Zvariable_gain"] == pc_spec["variable_gain"]
            assert pc["phonon_config_headerA__Zdelta_t"] == pc_spec["delta_t"]
            assert pc["phonon_config_headerA__Ztrigger_time"] == pc_spec["trigger_time"]
            assert pc["phonon_config_headerA__Ztrace_len"] == pc_spec["trace_len"]
            assert hdr["header_listA__Zcharge_config"] is None

    spec_records = spec["logical_rcrds"]
    data_records = data["soudanA__Zlogical_rcrds"]
    assert len(data_records) == len(spec_records)

    for record, record_spec in zip(data_records, spec_records):
        header = record["logical_recordA__Zheader"]
        assert header == record_spec["event_hdr"]
        section_spec = record_spec["next_section"]["section"]
        section = record["logical_recordA__Zsection"]

        if (header >> 16) == 0xA980:
            assert section["event_headerA__Zevent_size"] == section_spec["event_size"]
            assert section["event_headerA__Zevent_identifier"] == ((header >> 16) & 0xFFFF)
            assert section["event_headerA__Zevent_class"] == ((header >> 8) & 0xF)
            assert section["event_headerA__Zevent_category"] == ((header >> 12) & 0xF)
            assert section["event_headerA__Zevent_type"] == (header & 0xFF)
        elif header == 0x00000002:
            assert section["administrative_recordA__Zadmin_len"] == section_spec["admin_len"]
            assert section["administrative_recordA__Zseries_num_1"] == section_spec["series_number_1"]
            assert section["administrative_recordA__Zseries_num_2"] == section_spec["series_number_2"]
            assert section["administrative_recordA__Zevent_num_in_series"] == section_spec["event_number_in_series"]
            assert section["administrative_recordA__Zseconds_from_epoch"] == section_spec["seconds_from_epoch"]
            assert section["administrative_recordA__Ztime_from_last_event"] == section_spec["time_from_last_event"]
            assert section["administrative_recordA__Zlive_time_from_last_event"] == section_spec["live_time_from_last_event"]
        elif header == 0x00000011:
            tr = section["trace_dataA__Ztrace_rcrd"]
            tr_spec = section_spec["trace_rcrds"]
            assert tr["trace_recordA__Ztrace_len"] == tr_spec["trace_len"]
            assert tr["trace_recordA__Ztrace_bookkeeping_header"] == tr_spec["trace_bookkeeping_header"]
            assert tr["trace_recordA__Zbookkeeping_len"] == tr_spec["bookkeeping_len"]
            assert tr["trace_recordA__Zdigitizer_base_address"] == tr_spec["digitizer_base_address"]
            assert tr["trace_recordA__Zdigitizer_channel"] == tr_spec["digitizer_channel"]
            assert tr["trace_recordA__Zdetector_code"] == tr_spec["detector_code"]
            assert tr["trace_recordA__Ztimebase_header"] == tr_spec["timebase_header"]
            assert tr["trace_recordA__Ztimebase_len"] == tr_spec["timebase_len"]
            assert tr["trace_recordA__Zt0_in_ns"] == tr_spec["t0_in_ns"]
            assert tr["trace_recordA__Zdelta_t_ns"] == tr_spec["delta_t_ns"]
            assert tr["trace_recordA__Znum_of_points"] == tr_spec["num_of_points"]
            assert tr["trace_recordA__Zsecond_trace_header"] == tr_spec["second_trace_header"]
            assert tr["trace_recordA__Znum_samples"] == tr_spec["num_samples"]
            sample_data = section["trace_dataA__Zsample_data"]
            assert _list_int([s["data_sampleA__Zdata_selection"] for s in sample_data]) == [
                s["data_selection"] for s in section_spec["sample_data"]
            ]
        elif header == 0x00000021:
            assert section["soudan_history_bufferA__Zhistory_buffer_len"] == section_spec["history_buffer_len"]
            assert section["soudan_history_bufferA__Znum_time_nvt"] == section_spec["num_time_nvt"]
            assert _list_int(section["soudan_history_bufferA__Ztime_nvt"]) == section_spec["time_nvt"]
            assert section["soudan_history_bufferA__Znum_veto_mask_words"] == section_spec["num_veto_mask_words"]
            assert _list_int(section["soudan_history_bufferA__Ztime_n_minus_veto_mask"]) == section_spec["time_n_minus_veto_mask"]
            assert section["soudan_history_bufferA__Znum_trigger_times"] == section_spec["num_trigger_times"]
            assert _list_int(section["soudan_history_bufferA__Ztimes"]) == section_spec["trigger_times"]
            assert section["soudan_history_bufferA__Znum_trigger_mask_words_per_time"] == section_spec["num_trigger_mask_words"]
            assert _list_int(section["soudan_history_bufferA__Ztimes_minus_trigger_mask"]) == section_spec["trig_times_minus_trig_mask"]
        elif header == 0x00000060:
            assert section["gps_dataA__Zlen"] == section_spec["length"]
            assert section["gps_dataA__Zgps_year_day"] == section_spec["gps_year_day"]
            assert section["gps_dataA__Zgps_status_hour_minute_second"] == section_spec["gps_status_hour_minute_second"]
            assert section["gps_dataA__Zgps_microsecs_from_gps_second"] == section_spec["gps_microsecs_from_gps_second"]
        elif header == 0x00000080:
            assert section["trigger_record_formatA__Ztrigger_len"] == section_spec["trigger_len"]
            assert section["trigger_record_formatA__Ztrigger_time"] == section_spec["trigger_time"]
            assert _list_int(section["trigger_record_formatA__Zindividual_trigger_mask"]) == section_spec[
                "individual_trigger_masks"
            ]
        elif header == 0x00000081:
            assert section["tlb_trigger_mask_recordA__Ztlb_len"] == section_spec["tlb_len"]
            assert _list_int(section["tlb_trigger_mask_recordA__Ztower_mask"]) == section_spec["tower_mask"]
        elif header == 0x00000022:
            assert section["detector_trigger_ratesA__Zlen_to_next_header"] == section_spec["len_to_next_header"]
            assert section["detector_trigger_ratesA__Zclocking_interval"] == section_spec["clocking_interval"]
            assert section["detector_trigger_ratesA__Ztower_num"] == section_spec["tower_number"]
            assert _list_int(section["detector_trigger_ratesA__Zdetector_codes"]) == section_spec["detector_codes"]
            assert _list_int(section["detector_trigger_ratesA__Zj_codes"]) == section_spec["j_codes"]
            assert _list_int(section["detector_trigger_ratesA__Zcounter_values"]) == section_spec["counter_values"]
        elif header == 0x00000031:
            assert section["veto_trigger_ratesA__Zlen_to_next_header"] == section_spec["len_to_next_header"]
            assert section["veto_trigger_ratesA__Zclocking_interval"] == section_spec["clocking_interval"]
            assert section["veto_trigger_ratesA__Znum_entries"] == section_spec["num_entries"]
            assert _list_int(section["veto_trigger_ratesA__Zdetector_code"]) == section_spec["detector_code"]
            assert _list_int(section["veto_trigger_ratesA__Zcounter_value_det_code"]) == section_spec["counter_value_det_code"]
        else:
            raise AssertionError(f"Unexpected record header: {header:#x}")
