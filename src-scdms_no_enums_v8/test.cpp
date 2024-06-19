// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "test.h"

UserDefinedMap test_fields_map({
	{Field_test::testA__Zodb_hdr, "testA__Zodb_hdr"},
	{Field_test::testA__Zunknown, "testA__Zunknown"},
	{Field_test::testA__Zodb_size, "testA__Zodb_size"},
	{Field_test::testA__Zodb, "testA__Zodb"},
	{Field_test::testA__Zentry, "testA__Zentry"}});

UserDefinedMap entry_block_fields_map({
	{Field_entry_block::entry_blockA__Zmidas_hdr, "entry_blockA__Zmidas_hdr"},
	{Field_entry_block::entry_blockA__Zscdms_data, "entry_blockA__Zscdms_data"},
	{Field_entry_block::entry_blockA__Zdmc_data, "entry_blockA__Zdmc_data"},
	{Field_entry_block::entry_blockA__Zdata, "entry_blockA__Zdata"}});

UserDefinedMap midas_header_fields_map({
	{Field_midas_header::midas_headerA__Zevt_id, "midas_headerA__Zevt_id"},
	{Field_midas_header::midas_headerA__Ztrigger_mask, "midas_headerA__Ztrigger_mask"},
	{Field_midas_header::midas_headerA__Zserial_number, "midas_headerA__Zserial_number"},
	{Field_midas_header::midas_headerA__Ztime_stamp, "midas_headerA__Ztime_stamp"},
	{Field_midas_header::midas_headerA__Zevt_data_size, "midas_headerA__Zevt_data_size"},
	{Field_midas_header::midas_headerA__Zall_banks_size, "midas_headerA__Zall_banks_size"},
	{Field_midas_header::midas_headerA__Zflags, "midas_headerA__Zflags"},
	{Field_midas_header::midas_headerA__Zbank_name, "midas_headerA__Zbank_name"},
	{Field_midas_header::midas_headerA__Ztype, "midas_headerA__Ztype"},
	{Field_midas_header::midas_headerA__Zbank_size, "midas_headerA__Zbank_size"}});

UserDefinedMap scdms_data_block_fields_map({
	{Field_scdms_data_block::scdms_data_blockA__Zscdms_hdr, "scdms_data_blockA__Zscdms_hdr"},
	{Field_scdms_data_block::scdms_data_blockA__Ztrigger_blk, "scdms_data_blockA__Ztrigger_blk"},
	{Field_scdms_data_block::scdms_data_blockA__Zscdms_ftr, "scdms_data_blockA__Zscdms_ftr"}});

UserDefinedMap scdms_header_fields_map({
	{Field_scdms_header::scdms_headerA__Zpacked, "scdms_headerA__Zpacked"},
	{Field_scdms_header::scdms_headerA__Zoverall_header, "scdms_headerA__Zoverall_header"},
	{Field_scdms_header::scdms_headerA__Ztotal_triggers, "scdms_headerA__Ztotal_triggers"},
	{Field_scdms_header::scdms_headerA__Zformat_version, "scdms_headerA__Zformat_version"}});

UserDefinedMap trigger_block_fields_map({
	{Field_trigger_block::trigger_blockA__Zevent_hdr, "trigger_blockA__Zevent_hdr"},
	{Field_trigger_block::trigger_blockA__Znum_primitive_hdr, "trigger_blockA__Znum_primitive_hdr"},
	{Field_trigger_block::trigger_blockA__Zprimitive_blk, "trigger_blockA__Zprimitive_blk"},
	{Field_trigger_block::trigger_blockA__Zn_detectors, "trigger_blockA__Zn_detectors"},
	{Field_trigger_block::trigger_blockA__Zdetector_blk, "trigger_blockA__Zdetector_blk"},
	{Field_trigger_block::trigger_blockA__Zsdu_primitive_hdr, "trigger_blockA__Zsdu_primitive_hdr"},
	{Field_trigger_block::trigger_blockA__Zsdu_primitive_blk, "trigger_blockA__Zsdu_primitive_blk"},
	{Field_trigger_block::trigger_blockA__Znum_sdu_hdr, "trigger_blockA__Znum_sdu_hdr"},
	{Field_trigger_block::trigger_blockA__Zsdu_blk, "trigger_blockA__Zsdu_blk"}});

UserDefinedMap event_header_fields_map({
	{Field_event_header::event_headerA__Zpacked_event_size, "event_headerA__Zpacked_event_size"},
	{Field_event_header::event_headerA__Ztrigger_id, "event_headerA__Ztrigger_id"},
	{Field_event_header::event_headerA__Zevent_number, "event_headerA__Zevent_number"},
	{Field_event_header::event_headerA__Zpacked_type, "event_headerA__Zpacked_type"},
	{Field_event_header::event_headerA__Zglobal_timestamp_low, "event_headerA__Zglobal_timestamp_low"},
	{Field_event_header::event_headerA__Zglobal_timestamp_high, "event_headerA__Zglobal_timestamp_high"},
	{Field_event_header::event_headerA__Zpacked_poll_end, "event_headerA__Zpacked_poll_end"},
	{Field_event_header::event_headerA__Zpoll_time_fraction, "event_headerA__Zpoll_time_fraction"},
	{Field_event_header::event_headerA__Zpoll_cycle_end_time, "event_headerA__Zpoll_cycle_end_time"},
	{Field_event_header::event_headerA__Ztrigger_type, "event_headerA__Ztrigger_type"},
	{Field_event_header::event_headerA__Zreadout_bitmask, "event_headerA__Zreadout_bitmask"},
	{Field_event_header::event_headerA__Zevent_size, "event_headerA__Zevent_size"},
	{Field_event_header::event_headerA__Ztrig_header, "event_headerA__Ztrig_header"}});

UserDefinedMap num_primitive_header_fields_map({
	{Field_num_primitive_header::num_primitive_headerA__Zpacked_primitive_num, "num_primitive_headerA__Zpacked_primitive_num"},
	{Field_num_primitive_header::num_primitive_headerA__Zentry_length, "num_primitive_headerA__Zentry_length"},
	{Field_num_primitive_header::num_primitive_headerA__Znum_primitives, "num_primitive_headerA__Znum_primitives"},
	{Field_num_primitive_header::num_primitive_headerA__Zprim_header, "num_primitive_headerA__Zprim_header"}});

UserDefinedMap primitive_block_fields_map({
	{Field_primitive_block::primitive_blockA__Zpacked_primitive, "primitive_blockA__Zpacked_primitive"},
	{Field_primitive_block::primitive_blockA__Zrt_issue_time, "primitive_blockA__Zrt_issue_time"},
	{Field_primitive_block::primitive_blockA__Zrt_run_time_fraction_packed, "primitive_blockA__Zrt_run_time_fraction_packed"},
	{Field_primitive_block::primitive_blockA__Zprim_trig_time, "primitive_blockA__Zprim_trig_time"},
	{Field_primitive_block::primitive_blockA__Zrt_run_time, "primitive_blockA__Zrt_run_time"},
	{Field_primitive_block::primitive_blockA__Ztrigger_mask_packed, "primitive_blockA__Ztrigger_mask_packed"},
	{Field_primitive_block::primitive_blockA__Ztrig_word, "primitive_blockA__Ztrig_word"},
	{Field_primitive_block::primitive_blockA__Zprim_blank, "primitive_blockA__Zprim_blank"},
	{Field_primitive_block::primitive_blockA__Zpeak_amplitude, "primitive_blockA__Zpeak_amplitude"},
	{Field_primitive_block::primitive_blockA__Zpileup, "primitive_blockA__Zpileup"},
	{Field_primitive_block::primitive_blockA__Ztrig_time_frac, "primitive_blockA__Ztrig_time_frac"},
	{Field_primitive_block::primitive_blockA__Zdet_id, "primitive_blockA__Zdet_id"},
	{Field_primitive_block::primitive_blockA__Ztrig_mask, "primitive_blockA__Ztrig_mask"},
	{Field_primitive_block::primitive_blockA__Zindex, "primitive_blockA__Zindex"},
	{Field_primitive_block::primitive_blockA__Ztrig_status, "primitive_blockA__Ztrig_status"},
	{Field_primitive_block::primitive_blockA__Zprim_dcrc_header, "primitive_blockA__Zprim_dcrc_header"},
	{Field_primitive_block::primitive_blockA__Zrt_run_time_fraction, "primitive_blockA__Zrt_run_time_fraction"}});

UserDefinedMap detectors_fields_map({
	{Field_detectors::detectorsA__Zn_detectors_packed, "detectorsA__Zn_detectors_packed"},
	{Field_detectors::detectorsA__Zdetectors_in_event, "detectorsA__Zdetectors_in_event"},
	{Field_detectors::detectorsA__Znum_det_header, "detectorsA__Znum_det_header"}});

UserDefinedMap detector_block_fields_map({
	{Field_detector_block::detector_blockA__Zdetector_hdr, "detector_blockA__Zdetector_hdr"},
	{Field_detector_block::detector_blockA__Zreadout_hdr, "detector_blockA__Zreadout_hdr"},
	{Field_detector_block::detector_blockA__Znum_channels_hdr, "detector_blockA__Znum_channels_hdr"},
	{Field_detector_block::detector_blockA__Zchannel_blk, "detector_blockA__Zchannel_blk"}});

UserDefinedMap detector_header_fields_map({
	{Field_detector_header::detector_headerA__Zdetector_hdr_packed, "detector_headerA__Zdetector_hdr_packed"},
	{Field_detector_header::detector_headerA__Zdcrc1_serial_nbr, "detector_headerA__Zdcrc1_serial_nbr"},
	{Field_detector_header::detector_headerA__Zdcrc1_version, "detector_headerA__Zdcrc1_version"},
	{Field_detector_header::detector_headerA__Zdcrc2_serial_nbr, "detector_headerA__Zdcrc2_serial_nbr"},
	{Field_detector_header::detector_headerA__Zdcrc2_version, "detector_headerA__Zdcrc2_version"},
	{Field_detector_header::detector_headerA__Zdetector_type, "detector_headerA__Zdetector_type"},
	{Field_detector_header::detector_headerA__Zindex, "detector_headerA__Zindex"},
	{Field_detector_header::detector_headerA__Zdet_id, "detector_headerA__Zdet_id"},
	{Field_detector_header::detector_headerA__Zdetector_header, "detector_headerA__Zdetector_header"}});

UserDefinedMap readout_header_fields_map({
	{Field_readout_header::readout_headerA__Zreadout_hdr_packed_1, "readout_headerA__Zreadout_hdr_packed_1"},
	{Field_readout_header::readout_headerA__Zreadout_hdr_packed_2, "readout_headerA__Zreadout_hdr_packed_2"},
	{Field_readout_header::readout_headerA__Zwaveform_read_start_time, "readout_headerA__Zwaveform_read_start_time"},
	{Field_readout_header::readout_headerA__Zwaveform_read_end_time, "readout_headerA__Zwaveform_read_end_time"},
	{Field_readout_header::readout_headerA__Zwaveform_read_start_time_fraction, "readout_headerA__Zwaveform_read_start_time_fraction"},
	{Field_readout_header::readout_headerA__Zwaveform_read_end_time_fraction, "readout_headerA__Zwaveform_read_end_time_fraction"},
	{Field_readout_header::readout_headerA__Zreadout_header, "readout_headerA__Zreadout_header"},
	{Field_readout_header::readout_headerA__Zseries_time_fraction, "readout_headerA__Zseries_time_fraction"},
	{Field_readout_header::readout_headerA__Zseries_time, "readout_headerA__Zseries_time"},
	{Field_readout_header::readout_headerA__Zhas_thermometry_readout, "readout_headerA__Zhas_thermometry_readout"},
	{Field_readout_header::readout_headerA__Zreadout_status, "readout_headerA__Zreadout_status"}});

UserDefinedMap num_channels_header_fields_map({
	{Field_num_channels_header::num_channels_headerA__Znum_channels_packed, "num_channels_headerA__Znum_channels_packed"},
	{Field_num_channels_header::num_channels_headerA__Zchannels_header, "num_channels_headerA__Zchannels_header"},
	{Field_num_channels_header::num_channels_headerA__Znum_channels, "num_channels_headerA__Znum_channels"}});

UserDefinedMap channel_block_fields_map({
	{Field_channel_block::channel_blockA__Zchannel_packed, "channel_blockA__Zchannel_packed"},
	{Field_channel_block::channel_blockA__Znum_pre_pulse_samples, "channel_blockA__Znum_pre_pulse_samples"},
	{Field_channel_block::channel_blockA__Znum_on_pulse_samples, "channel_blockA__Znum_on_pulse_samples"},
	{Field_channel_block::channel_blockA__Znum_post_pulse_samples, "channel_blockA__Znum_post_pulse_samples"},
	{Field_channel_block::channel_blockA__Zsample_rate, "channel_blockA__Zsample_rate"},
	{Field_channel_block::channel_blockA__Zdownsample_factor, "channel_blockA__Zdownsample_factor"},
	{Field_channel_block::channel_blockA__Zsample, "channel_blockA__Zsample"},
	{Field_channel_block::channel_blockA__Zpre_trigger_offset, "channel_blockA__Zpre_trigger_offset"},
	{Field_channel_block::channel_blockA__Zchannel_type, "channel_blockA__Zchannel_type"},
	{Field_channel_block::channel_blockA__Zhas_baseline_control, "channel_blockA__Zhas_baseline_control"},
	{Field_channel_block::channel_blockA__Zchannel_num, "channel_blockA__Zchannel_num"},
	{Field_channel_block::channel_blockA__Zchannel_flag, "channel_blockA__Zchannel_flag"}});

UserDefinedMap sdu_primitive_header_fields_map({
	{Field_sdu_primitive_header::sdu_primitive_headerA__Zsdu_num_primitive_packed, "sdu_primitive_headerA__Zsdu_num_primitive_packed"},
	{Field_sdu_primitive_header::sdu_primitive_headerA__Zsdu_entry_length, "sdu_primitive_headerA__Zsdu_entry_length"},
	{Field_sdu_primitive_header::sdu_primitive_headerA__Zsdu_header, "sdu_primitive_headerA__Zsdu_header"},
	{Field_sdu_primitive_header::sdu_primitive_headerA__Znum_sdu_primitives, "sdu_primitive_headerA__Znum_sdu_primitives"},
	{Field_sdu_primitive_header::sdu_primitive_headerA__Zhas_sdu_data, "sdu_primitive_headerA__Zhas_sdu_data"}});

UserDefinedMap sdu_primitive_block_fields_map({
	{Field_sdu_primitive_block::sdu_primitive_blockA__Zsdu_block_header, "sdu_primitive_blockA__Zsdu_block_header"},
	{Field_sdu_primitive_block::sdu_primitive_blockA__Zrt_issue_ut, "sdu_primitive_blockA__Zrt_issue_ut"},
	{Field_sdu_primitive_block::sdu_primitive_blockA__Zrt_run_time_fraction_packed, "sdu_primitive_blockA__Zrt_run_time_fraction_packed"},
	{Field_sdu_primitive_block::sdu_primitive_blockA__Ztrigger_time, "sdu_primitive_blockA__Ztrigger_time"},
	{Field_sdu_primitive_block::sdu_primitive_blockA__Zrt_run_time, "sdu_primitive_blockA__Zrt_run_time"},
	{Field_sdu_primitive_block::sdu_primitive_blockA__Ztrigger_time_fraction_packed, "sdu_primitive_blockA__Ztrigger_time_fraction_packed"},
	{Field_sdu_primitive_block::sdu_primitive_blockA__Ztrigger_word, "sdu_primitive_blockA__Ztrigger_word"},
	{Field_sdu_primitive_block::sdu_primitive_blockA__Zblank, "sdu_primitive_blockA__Zblank"},
	{Field_sdu_primitive_block::sdu_primitive_blockA__Zpeak_amplitude, "sdu_primitive_blockA__Zpeak_amplitude"},
	{Field_sdu_primitive_block::sdu_primitive_blockA__Zrt_run_time_fraction, "sdu_primitive_blockA__Zrt_run_time_fraction"},
	{Field_sdu_primitive_block::sdu_primitive_blockA__Ztrigger_time_fraction, "sdu_primitive_blockA__Ztrigger_time_fraction"}});

UserDefinedMap num_sdu_header_fields_map({
	{Field_num_sdu_header::num_sdu_headerA__Znum_sdu_packed, "num_sdu_headerA__Znum_sdu_packed"},
	{Field_num_sdu_header::num_sdu_headerA__Znum_sdu, "num_sdu_headerA__Znum_sdu"},
	{Field_num_sdu_header::num_sdu_headerA__Znum_sdu_flag, "num_sdu_headerA__Znum_sdu_flag"}});

UserDefinedMap sdu_block_fields_map({
	{Field_sdu_block::sdu_blockA__Zsdu_readout_header_packed, "sdu_blockA__Zsdu_readout_header_packed"},
	{Field_sdu_block::sdu_blockA__Zsdu_series_time_fraction_packed, "sdu_blockA__Zsdu_series_time_fraction_packed"},
	{Field_sdu_block::sdu_blockA__Zsdu_read_start_time, "sdu_blockA__Zsdu_read_start_time"},
	{Field_sdu_block::sdu_blockA__Zsdu_read_end_time, "sdu_blockA__Zsdu_read_end_time"},
	{Field_sdu_block::sdu_blockA__Zsdu_read_start_time_fraction, "sdu_blockA__Zsdu_read_start_time_fraction"},
	{Field_sdu_block::sdu_blockA__Zsdu_read_end_time_fraction, "sdu_blockA__Zsdu_read_end_time_fraction"},
	{Field_sdu_block::sdu_blockA__Zsdu_num_channels_header_packed, "sdu_blockA__Zsdu_num_channels_header_packed"},
	{Field_sdu_block::sdu_blockA__Zsdu_channel_blk, "sdu_blockA__Zsdu_channel_blk"},
	{Field_sdu_block::sdu_blockA__Zsdu_series_time_fraction, "sdu_blockA__Zsdu_series_time_fraction"},
	{Field_sdu_block::sdu_blockA__Zsdu_readout_status, "sdu_blockA__Zsdu_readout_status"},
	{Field_sdu_block::sdu_blockA__Zsdu_readout_flag, "sdu_blockA__Zsdu_readout_flag"},
	{Field_sdu_block::sdu_blockA__Znum_sdu_channels, "sdu_blockA__Znum_sdu_channels"},
	{Field_sdu_block::sdu_blockA__Znum_sdu_channels_flag, "sdu_blockA__Znum_sdu_channels_flag"},
	{Field_sdu_block::sdu_blockA__Zsdu_series_time, "sdu_blockA__Zsdu_series_time"}});

UserDefinedMap sdu_channel_block_fields_map({
	{Field_sdu_channel_block::sdu_channel_blockA__Zsdu_channel_header_packed, "sdu_channel_blockA__Zsdu_channel_header_packed"},
	{Field_sdu_channel_block::sdu_channel_blockA__Zsdu_num_samples, "sdu_channel_blockA__Zsdu_num_samples"},
	{Field_sdu_channel_block::sdu_channel_blockA__Zblank, "sdu_channel_blockA__Zblank"},
	{Field_sdu_channel_block::sdu_channel_blockA__Zsample_rate, "sdu_channel_blockA__Zsample_rate"},
	{Field_sdu_channel_block::sdu_channel_blockA__Zsdu_channel_sample, "sdu_channel_blockA__Zsdu_channel_sample"},
	{Field_sdu_channel_block::sdu_channel_blockA__Zsdu_channel_flag, "sdu_channel_blockA__Zsdu_channel_flag"},
	{Field_sdu_channel_block::sdu_channel_blockA__Zsdu_pre_trigger_offset, "sdu_channel_blockA__Zsdu_pre_trigger_offset"},
	{Field_sdu_channel_block::sdu_channel_blockA__Zsdu_channel_type, "sdu_channel_blockA__Zsdu_channel_type"},
	{Field_sdu_channel_block::sdu_channel_blockA__Zsdu_channel_num, "sdu_channel_blockA__Zsdu_channel_num"}});

UserDefinedMap scdms_footer_fields_map({
	{Field_scdms_footer::scdms_footerA__Zpreceeding_triggers_packed, "scdms_footerA__Zpreceeding_triggers_packed"},
	{Field_scdms_footer::scdms_footerA__Zpreceeding_triggers_flag, "scdms_footerA__Zpreceeding_triggers_flag"},
	{Field_scdms_footer::scdms_footerA__Zpreceeding_triggers_num, "scdms_footerA__Zpreceeding_triggers_num"}});

test_t::test_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, test_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_entry = 0;

    test_builder.set_fields(test_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::_read() {
    m_odb_hdr = m__io->read_u2le();
    auto& odb_hdr_builder = test_builder.content<Field_test::testA__Zodb_hdr>();
    odb_hdr_builder.append(m_odb_hdr);
    m_unknown = m__io->read_bytes(10);
    auto& unknown_listoffsetbuilder = test_builder.content<Field_test::testA__Zunknown>();
    unknown_listoffsetbuilder.begin_list();
    auto& unknown_builder = unknown_listoffsetbuilder.content();
    for (int i = 0; i < m_unknown.length(); i++) {
        unknown_builder.append(m_unknown[i]);
    }
    unknown_listoffsetbuilder.end_list();
    m_odb_size = m__io->read_u4le();
    auto& odb_size_builder = test_builder.content<Field_test::testA__Zodb_size>();
    odb_size_builder.append(m_odb_size);
    m_odb = m__io->read_bytes(odb_size());
    auto& odb_listoffsetbuilder = test_builder.content<Field_test::testA__Zodb>();
    odb_listoffsetbuilder.begin_list();
    auto& odb_builder = odb_listoffsetbuilder.content();
    for (int i = 0; i < m_odb.length(); i++) {
        odb_builder.append(m_odb[i]);
    }
    odb_listoffsetbuilder.end_list();
    m_entry = new std::vector<entry_block_t*>();
    {
        int i = 0;
        auto& entry_listoffsetbuilder = test_builder.content<Field_test::testA__Zentry>();
        entry_listoffsetbuilder.begin_list();
        while (!m__io->is_eof()) {
            auto& entry_block_recordbuilder = test_builder.content<Field_test::testA__Zentry>().content();
            m_entry->push_back(new entry_block_t(entry_block_recordbuilder, m__io, this, m__root));
            i++;
        }
        entry_listoffsetbuilder.end_list();
    }
}

test_t::~test_t() {
    _clean_up();
}

void test_t::_clean_up() {
    if (m_entry) {
        for (std::vector<entry_block_t*>::iterator it = m_entry->begin(); it != m_entry->end(); ++it) {
            delete *it;
        }
        delete m_entry; m_entry = 0;
    }
}

test_t::trigger_block_t::trigger_block_t(Trigger_blockBuilderType builder, kaitai::kstream* p__io, test_t::scdms_data_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	trigger_block_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_event_hdr = 0;
    m_num_primitive_hdr = 0;
    m_primitive_blk = 0;
    m_n_detectors = 0;
    m_detector_blk = 0;
    m_sdu_primitive_hdr = 0;
    m_sdu_primitive_blk = 0;
    m_num_sdu_hdr = 0;
    m_sdu_blk = 0;

    trigger_block_builder.set_fields(trigger_block_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::trigger_block_t::_read() {
    auto& event_header_recordbuilder = trigger_block_builder.content<Field_trigger_block::trigger_blockA__Zevent_hdr>();
    m_event_hdr = new event_header_t(event_header_recordbuilder, m__io, this, m__root);
    auto& num_primitive_header_recordbuilder = trigger_block_builder.content<Field_trigger_block::trigger_blockA__Znum_primitive_hdr>();
    m_num_primitive_hdr = new num_primitive_header_t(num_primitive_header_recordbuilder, m__io, this, m__root);
    m_primitive_blk = new std::vector<primitive_block_t*>();
    const int l_primitive_blk = num_primitive_hdr()->num_primitives();
    auto& primitive_blk_listoffsetbuilder = trigger_block_builder.content<Field_trigger_block::trigger_blockA__Zprimitive_blk>();
    primitive_blk_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_primitive_blk; i++) {
        auto& primitive_block_recordbuilder = trigger_block_builder.content<Field_trigger_block::trigger_blockA__Zprimitive_blk>().content();
        m_primitive_blk->push_back(new primitive_block_t(primitive_block_recordbuilder, m__io, this, m__root));
    }
    primitive_blk_listoffsetbuilder.end_list();
    auto& detectors_recordbuilder = trigger_block_builder.content<Field_trigger_block::trigger_blockA__Zn_detectors>();
    m_n_detectors = new detectors_t(detectors_recordbuilder, m__io, this, m__root);
    m_detector_blk = new std::vector<detector_block_t*>();
    const int l_detector_blk = n_detectors()->detectors_in_event();
    auto& detector_blk_listoffsetbuilder = trigger_block_builder.content<Field_trigger_block::trigger_blockA__Zdetector_blk>();
    detector_blk_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_detector_blk; i++) {
        auto& detector_block_recordbuilder = trigger_block_builder.content<Field_trigger_block::trigger_blockA__Zdetector_blk>().content();
        m_detector_blk->push_back(new detector_block_t(detector_block_recordbuilder, m__io, this, m__root));
    }
    detector_blk_listoffsetbuilder.end_list();
    auto& sdu_primitive_header_recordbuilder = trigger_block_builder.content<Field_trigger_block::trigger_blockA__Zsdu_primitive_hdr>();
    m_sdu_primitive_hdr = new sdu_primitive_header_t(sdu_primitive_header_recordbuilder, m__io, this, m__root);
    m_sdu_primitive_blk = new std::vector<sdu_primitive_block_t*>();
    const int l_sdu_primitive_blk = sdu_primitive_hdr()->num_sdu_primitives();
    auto& sdu_primitive_blk_listoffsetbuilder = trigger_block_builder.content<Field_trigger_block::trigger_blockA__Zsdu_primitive_blk>();
    sdu_primitive_blk_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_sdu_primitive_blk; i++) {
        auto& sdu_primitive_block_recordbuilder = trigger_block_builder.content<Field_trigger_block::trigger_blockA__Zsdu_primitive_blk>().content();
        m_sdu_primitive_blk->push_back(new sdu_primitive_block_t(sdu_primitive_block_recordbuilder, m__io, this, m__root));
    }
    sdu_primitive_blk_listoffsetbuilder.end_list();
    auto& num_sdu_header_recordbuilder = trigger_block_builder.content<Field_trigger_block::trigger_blockA__Znum_sdu_hdr>();
    m_num_sdu_hdr = new num_sdu_header_t(num_sdu_header_recordbuilder, m__io, this, m__root);
    m_sdu_blk = new std::vector<sdu_block_t*>();
    const int l_sdu_blk = num_sdu_hdr()->num_sdu();
    auto& sdu_blk_listoffsetbuilder = trigger_block_builder.content<Field_trigger_block::trigger_blockA__Zsdu_blk>();
    sdu_blk_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_sdu_blk; i++) {
        auto& sdu_block_recordbuilder = trigger_block_builder.content<Field_trigger_block::trigger_blockA__Zsdu_blk>().content();
        m_sdu_blk->push_back(new sdu_block_t(sdu_block_recordbuilder, m__io, this, m__root));
    }
    sdu_blk_listoffsetbuilder.end_list();
}

test_t::trigger_block_t::~trigger_block_t() {
    _clean_up();
}

void test_t::trigger_block_t::_clean_up() {
    if (m_event_hdr) {
        delete m_event_hdr; m_event_hdr = 0;
    }
    if (m_num_primitive_hdr) {
        delete m_num_primitive_hdr; m_num_primitive_hdr = 0;
    }
    if (m_primitive_blk) {
        for (std::vector<primitive_block_t*>::iterator it = m_primitive_blk->begin(); it != m_primitive_blk->end(); ++it) {
            delete *it;
        }
        delete m_primitive_blk; m_primitive_blk = 0;
    }
    if (m_n_detectors) {
        delete m_n_detectors; m_n_detectors = 0;
    }
    if (m_detector_blk) {
        for (std::vector<detector_block_t*>::iterator it = m_detector_blk->begin(); it != m_detector_blk->end(); ++it) {
            delete *it;
        }
        delete m_detector_blk; m_detector_blk = 0;
    }
    if (m_sdu_primitive_hdr) {
        delete m_sdu_primitive_hdr; m_sdu_primitive_hdr = 0;
    }
    if (m_sdu_primitive_blk) {
        for (std::vector<sdu_primitive_block_t*>::iterator it = m_sdu_primitive_blk->begin(); it != m_sdu_primitive_blk->end(); ++it) {
            delete *it;
        }
        delete m_sdu_primitive_blk; m_sdu_primitive_blk = 0;
    }
    if (m_num_sdu_hdr) {
        delete m_num_sdu_hdr; m_num_sdu_hdr = 0;
    }
    if (m_sdu_blk) {
        for (std::vector<sdu_block_t*>::iterator it = m_sdu_blk->begin(); it != m_sdu_blk->end(); ++it) {
            delete *it;
        }
        delete m_sdu_blk; m_sdu_blk = 0;
    }
}

test_t::primitive_block_t::primitive_block_t(Primitive_blockBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	primitive_block_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_pileup = false;
    f_trig_time_frac = false;
    f_det_id = false;
    f_trig_mask = false;
    f_index = false;
    f_trig_status = false;
    f_prim_dcrc_header = false;
    f_rt_run_time_fraction = false;

    primitive_block_builder.set_fields(primitive_block_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::primitive_block_t::_read() {
    m_packed_primitive = m__io->read_u4le();
    auto& packed_primitive_builder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Zpacked_primitive>();
    packed_primitive_builder.append(m_packed_primitive);
    m_rt_issue_time = m__io->read_u4le();
    auto& rt_issue_time_builder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Zrt_issue_time>();
    rt_issue_time_builder.append(m_rt_issue_time);
    m_rt_run_time_fraction_packed = m__io->read_u4le();
    auto& rt_run_time_fraction_packed_builder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Zrt_run_time_fraction_packed>();
    rt_run_time_fraction_packed_builder.append(m_rt_run_time_fraction_packed);
    m_prim_trig_time = m__io->read_u2le();
    auto& prim_trig_time_builder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Zprim_trig_time>();
    prim_trig_time_builder.append(m_prim_trig_time);
    m_rt_run_time = m__io->read_u2le();
    auto& rt_run_time_builder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Zrt_run_time>();
    rt_run_time_builder.append(m_rt_run_time);
    m_trigger_mask_packed = m__io->read_u4le();
    auto& trigger_mask_packed_builder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Ztrigger_mask_packed>();
    trigger_mask_packed_builder.append(m_trigger_mask_packed);
    m_trig_word = m__io->read_u2le();
    auto& trig_word_builder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Ztrig_word>();
    trig_word_builder.append(m_trig_word);
    m_prim_blank = m__io->read_u2le();
    auto& prim_blank_builder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Zprim_blank>();
    prim_blank_builder.append(m_prim_blank);
    m_peak_amplitude = m__io->read_u4le();
    auto& peak_amplitude_builder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Zpeak_amplitude>();
    peak_amplitude_builder.append(m_peak_amplitude);
    auto& trig_time_frac_instancebuilder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Ztrig_time_frac>();
    trig_time_frac_instancebuilder.append(trig_time_frac());
    auto& index_instancebuilder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Zindex>();
    index_instancebuilder.append(index());
    auto& trig_status_instancebuilder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Ztrig_status>();
    trig_status_instancebuilder.append(trig_status());
    auto& rt_run_time_fraction_instancebuilder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Zrt_run_time_fraction>();
    rt_run_time_fraction_instancebuilder.append(rt_run_time_fraction());
    auto& det_id_instancebuilder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Zdet_id>();
    det_id_instancebuilder.append(det_id());
    auto& pileup_instancebuilder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Zpileup>();
    pileup_instancebuilder.append(pileup());
    auto& trig_mask_instancebuilder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Ztrig_mask>();
    trig_mask_instancebuilder.append(trig_mask());
    auto& prim_dcrc_header_instancebuilder = primitive_block_builder.content<Field_primitive_block::primitive_blockA__Zprim_dcrc_header>();
    prim_dcrc_header_instancebuilder.append(prim_dcrc_header());
}

test_t::primitive_block_t::~primitive_block_t() {
    _clean_up();
}

void test_t::primitive_block_t::_clean_up() {
}

int32_t test_t::primitive_block_t::pileup() {
    if (f_pileup) {
        return m_pileup;
    }
    m_pileup = ((packed_primitive() & 3072) >> 10);
    f_pileup = true;
    return m_pileup;
}

int32_t test_t::primitive_block_t::trig_time_frac() {
    if (f_trig_time_frac) {
        return m_trig_time_frac;
    }
    m_trig_time_frac = (trigger_mask_packed() & 16777215);
    f_trig_time_frac = true;
    return m_trig_time_frac;
}

int32_t test_t::primitive_block_t::det_id() {
    if (f_det_id) {
        return m_det_id;
    }
    m_det_id = ((packed_primitive() & 1020) >> 2);
    f_det_id = true;
    return m_det_id;
}

int32_t test_t::primitive_block_t::trig_mask() {
    if (f_trig_mask) {
        return m_trig_mask;
    }
    m_trig_mask = ((trigger_mask_packed() & 4278190080UL) >> 24);
    f_trig_mask = true;
    return m_trig_mask;
}

int32_t test_t::primitive_block_t::index() {
    if (f_index) {
        return m_index;
    }
    m_index = (packed_primitive() & 3);
    f_index = true;
    return m_index;
}

int32_t test_t::primitive_block_t::trig_status() {
    if (f_trig_status) {
        return m_trig_status;
    }
    m_trig_status = ((packed_primitive() & 61440) >> 12);
    f_trig_status = true;
    return m_trig_status;
}

int32_t test_t::primitive_block_t::prim_dcrc_header() {
    if (f_prim_dcrc_header) {
        return m_prim_dcrc_header;
    }
    m_prim_dcrc_header = ((packed_primitive() & 4026531840UL) >> 28);
    f_prim_dcrc_header = true;
    return m_prim_dcrc_header;
}

int32_t test_t::primitive_block_t::rt_run_time_fraction() {
    if (f_rt_run_time_fraction) {
        return m_rt_run_time_fraction;
    }
    m_rt_run_time_fraction = (rt_run_time_fraction_packed() & 16777215);
    f_rt_run_time_fraction = true;
    return m_rt_run_time_fraction;
}

test_t::channel_block_t::channel_block_t(Channel_blockBuilderType builder, kaitai::kstream* p__io, test_t::detector_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	channel_block_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_sample = 0;
    f_pre_trigger_offset = false;
    f_channel_type = false;
    f_has_baseline_control = false;
    f_channel_num = false;
    f_channel_flag = false;

    channel_block_builder.set_fields(channel_block_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::channel_block_t::_read() {
    m_channel_packed = m__io->read_u4le();
    auto& channel_packed_builder = channel_block_builder.content<Field_channel_block::channel_blockA__Zchannel_packed>();
    channel_packed_builder.append(m_channel_packed);
    m_num_pre_pulse_samples = m__io->read_u4le();
    auto& num_pre_pulse_samples_builder = channel_block_builder.content<Field_channel_block::channel_blockA__Znum_pre_pulse_samples>();
    num_pre_pulse_samples_builder.append(m_num_pre_pulse_samples);
    m_num_on_pulse_samples = m__io->read_u4le();
    auto& num_on_pulse_samples_builder = channel_block_builder.content<Field_channel_block::channel_blockA__Znum_on_pulse_samples>();
    num_on_pulse_samples_builder.append(m_num_on_pulse_samples);
    m_num_post_pulse_samples = m__io->read_u4le();
    auto& num_post_pulse_samples_builder = channel_block_builder.content<Field_channel_block::channel_blockA__Znum_post_pulse_samples>();
    num_post_pulse_samples_builder.append(m_num_post_pulse_samples);
    m_sample_rate = m__io->read_u2le();
    auto& sample_rate_builder = channel_block_builder.content<Field_channel_block::channel_blockA__Zsample_rate>();
    sample_rate_builder.append(m_sample_rate);
    m_downsample_factor = m__io->read_u2le();
    auto& downsample_factor_builder = channel_block_builder.content<Field_channel_block::channel_blockA__Zdownsample_factor>();
    downsample_factor_builder.append(m_downsample_factor);
    m_sample = new std::vector<uint16_t>();
    const int l_sample = ((num_pre_pulse_samples() + num_on_pulse_samples()) + num_post_pulse_samples());
    auto& sample_listoffsetbuilder = channel_block_builder.content<Field_channel_block::channel_blockA__Zsample>();
    sample_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_sample; i++) {
        m_sample->push_back(m__io->read_u2le());
        auto& sample_builder = sample_listoffsetbuilder.content();
        sample_builder.append(m_sample->at(m_sample->size() - 1));
    }
    sample_listoffsetbuilder.end_list();
    auto& has_baseline_control_instancebuilder = channel_block_builder.content<Field_channel_block::channel_blockA__Zhas_baseline_control>();
    has_baseline_control_instancebuilder.append(has_baseline_control());
    auto& channel_flag_instancebuilder = channel_block_builder.content<Field_channel_block::channel_blockA__Zchannel_flag>();
    channel_flag_instancebuilder.append(channel_flag());
    auto& pre_trigger_offset_instancebuilder = channel_block_builder.content<Field_channel_block::channel_blockA__Zpre_trigger_offset>();
    pre_trigger_offset_instancebuilder.append(pre_trigger_offset());
    auto& channel_num_instancebuilder = channel_block_builder.content<Field_channel_block::channel_blockA__Zchannel_num>();
    channel_num_instancebuilder.append(channel_num());
    auto& channel_type_instancebuilder = channel_block_builder.content<Field_channel_block::channel_blockA__Zchannel_type>();
    channel_type_instancebuilder.append(channel_type());
}

test_t::channel_block_t::~channel_block_t() {
    _clean_up();
}

void test_t::channel_block_t::_clean_up() {
    if (m_sample) {
        delete m_sample; m_sample = 0;
    }
}

int32_t test_t::channel_block_t::pre_trigger_offset() {
    if (f_pre_trigger_offset) {
        return m_pre_trigger_offset;
    }
    m_pre_trigger_offset = ((channel_packed() & 268435392) >> 7);
    f_pre_trigger_offset = true;
    return m_pre_trigger_offset;
}

int32_t test_t::channel_block_t::channel_type() {
    if (f_channel_type) {
        return m_channel_type;
    }
    m_channel_type = (channel_packed() & 1);
    f_channel_type = true;
    return m_channel_type;
}

int32_t test_t::channel_block_t::has_baseline_control() {
    if (f_has_baseline_control) {
        return m_has_baseline_control;
    }
    m_has_baseline_control = ((channel_packed() & 2) >> 1);
    f_has_baseline_control = true;
    return m_has_baseline_control;
}

int32_t test_t::channel_block_t::channel_num() {
    if (f_channel_num) {
        return m_channel_num;
    }
    m_channel_num = ((channel_packed() & 60) >> 2);
    f_channel_num = true;
    return m_channel_num;
}

int32_t test_t::channel_block_t::channel_flag() {
    if (f_channel_flag) {
        return m_channel_flag;
    }
    m_channel_flag = ((channel_packed() & 4026531840UL) >> 28);
    f_channel_flag = true;
    return m_channel_flag;
}

test_t::num_channels_header_t::num_channels_header_t(Num_channels_headerBuilderType builder, kaitai::kstream* p__io, test_t::detector_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	num_channels_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_channels_header = false;
    f_num_channels = false;

    num_channels_header_builder.set_fields(num_channels_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::num_channels_header_t::_read() {
    m_num_channels_packed = m__io->read_u4le();
    auto& num_channels_packed_builder = num_channels_header_builder.content<Field_num_channels_header::num_channels_headerA__Znum_channels_packed>();
    num_channels_packed_builder.append(m_num_channels_packed);
    auto& channels_header_instancebuilder = num_channels_header_builder.content<Field_num_channels_header::num_channels_headerA__Zchannels_header>();
    channels_header_instancebuilder.append(channels_header());
    auto& num_channels_instancebuilder = num_channels_header_builder.content<Field_num_channels_header::num_channels_headerA__Znum_channels>();
    num_channels_instancebuilder.append(num_channels());
}

test_t::num_channels_header_t::~num_channels_header_t() {
    _clean_up();
}

void test_t::num_channels_header_t::_clean_up() {
}

int32_t test_t::num_channels_header_t::channels_header() {
    if (f_channels_header) {
        return m_channels_header;
    }
    m_channels_header = ((num_channels_packed() & 4026531840UL) >> 28);
    f_channels_header = true;
    return m_channels_header;
}

int32_t test_t::num_channels_header_t::num_channels() {
    if (f_num_channels) {
        return m_num_channels;
    }
    m_num_channels = (num_channels_packed() & 268435455);
    f_num_channels = true;
    return m_num_channels;
}

test_t::event_header_t::event_header_t(Event_headerBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	event_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_poll_cycle_end_time = false;
    f_trigger_type = false;
    f_readout_bitmask = false;
    f_event_size = false;
    f_trig_header = false;

    event_header_builder.set_fields(event_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::event_header_t::_read() {
    m_packed_event_size = m__io->read_u4le();
    auto& packed_event_size_builder = event_header_builder.content<Field_event_header::event_headerA__Zpacked_event_size>();
    packed_event_size_builder.append(m_packed_event_size);
    m_trigger_id = m__io->read_u4le();
    auto& trigger_id_builder = event_header_builder.content<Field_event_header::event_headerA__Ztrigger_id>();
    trigger_id_builder.append(m_trigger_id);
    m_event_number = m__io->read_u4le();
    auto& event_number_builder = event_header_builder.content<Field_event_header::event_headerA__Zevent_number>();
    event_number_builder.append(m_event_number);
    m_packed_type = m__io->read_u4le();
    auto& packed_type_builder = event_header_builder.content<Field_event_header::event_headerA__Zpacked_type>();
    packed_type_builder.append(m_packed_type);
    m_global_timestamp_low = m__io->read_u4le();
    auto& global_timestamp_low_builder = event_header_builder.content<Field_event_header::event_headerA__Zglobal_timestamp_low>();
    global_timestamp_low_builder.append(m_global_timestamp_low);
    m_global_timestamp_high = m__io->read_u4le();
    auto& global_timestamp_high_builder = event_header_builder.content<Field_event_header::event_headerA__Zglobal_timestamp_high>();
    global_timestamp_high_builder.append(m_global_timestamp_high);
    m_packed_poll_end = m__io->read_u4le();
    auto& packed_poll_end_builder = event_header_builder.content<Field_event_header::event_headerA__Zpacked_poll_end>();
    packed_poll_end_builder.append(m_packed_poll_end);
    m_poll_time_fraction = m__io->read_u4le();
    auto& poll_time_fraction_builder = event_header_builder.content<Field_event_header::event_headerA__Zpoll_time_fraction>();
    poll_time_fraction_builder.append(m_poll_time_fraction);
    auto& poll_cycle_end_time_instancebuilder = event_header_builder.content<Field_event_header::event_headerA__Zpoll_cycle_end_time>();
    poll_cycle_end_time_instancebuilder.append(poll_cycle_end_time());
    auto& event_size_instancebuilder = event_header_builder.content<Field_event_header::event_headerA__Zevent_size>();
    event_size_instancebuilder.append(event_size());
    auto& trigger_type_instancebuilder = event_header_builder.content<Field_event_header::event_headerA__Ztrigger_type>();
    trigger_type_instancebuilder.append(trigger_type());
    auto& readout_bitmask_instancebuilder = event_header_builder.content<Field_event_header::event_headerA__Zreadout_bitmask>();
    readout_bitmask_instancebuilder.append(readout_bitmask());
    auto& trig_header_instancebuilder = event_header_builder.content<Field_event_header::event_headerA__Ztrig_header>();
    trig_header_instancebuilder.append(trig_header());
}

test_t::event_header_t::~event_header_t() {
    _clean_up();
}

void test_t::event_header_t::_clean_up() {
}

int32_t test_t::event_header_t::poll_cycle_end_time() {
    if (f_poll_cycle_end_time) {
        return m_poll_cycle_end_time;
    }
    m_poll_cycle_end_time = (packed_poll_end() & 65535);
    f_poll_cycle_end_time = true;
    return m_poll_cycle_end_time;
}

int32_t test_t::event_header_t::trigger_type() {
    if (f_trigger_type) {
        return m_trigger_type;
    }
    m_trigger_type = (packed_type() & 15);
    f_trigger_type = true;
    return m_trigger_type;
}

int32_t test_t::event_header_t::readout_bitmask() {
    if (f_readout_bitmask) {
        return m_readout_bitmask;
    }
    m_readout_bitmask = ((packed_type() & 4294967040UL) >> 8);
    f_readout_bitmask = true;
    return m_readout_bitmask;
}

int32_t test_t::event_header_t::event_size() {
    if (f_event_size) {
        return m_event_size;
    }
    m_event_size = (packed_event_size() & 268435455);
    f_event_size = true;
    return m_event_size;
}

int32_t test_t::event_header_t::trig_header() {
    if (f_trig_header) {
        return m_trig_header;
    }
    m_trig_header = ((packed_event_size() & 4026531840UL) >> 28);
    f_trig_header = true;
    return m_trig_header;
}

test_t::sdu_primitive_header_t::sdu_primitive_header_t(Sdu_primitive_headerBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	sdu_primitive_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_sdu_header = false;
    f_num_sdu_primitives = false;
    f_has_sdu_data = false;

    sdu_primitive_header_builder.set_fields(sdu_primitive_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::sdu_primitive_header_t::_read() {
    m_sdu_num_primitive_packed = m__io->read_u4le();
    auto& sdu_num_primitive_packed_builder = sdu_primitive_header_builder.content<Field_sdu_primitive_header::sdu_primitive_headerA__Zsdu_num_primitive_packed>();
    sdu_num_primitive_packed_builder.append(m_sdu_num_primitive_packed);
    m_sdu_entry_length = m__io->read_u4le();
    auto& sdu_entry_length_builder = sdu_primitive_header_builder.content<Field_sdu_primitive_header::sdu_primitive_headerA__Zsdu_entry_length>();
    sdu_entry_length_builder.append(m_sdu_entry_length);
    auto& has_sdu_data_instancebuilder = sdu_primitive_header_builder.content<Field_sdu_primitive_header::sdu_primitive_headerA__Zhas_sdu_data>();
    has_sdu_data_instancebuilder.append(has_sdu_data());
    auto& sdu_header_instancebuilder = sdu_primitive_header_builder.content<Field_sdu_primitive_header::sdu_primitive_headerA__Zsdu_header>();
    sdu_header_instancebuilder.append(sdu_header());
    auto& num_sdu_primitives_instancebuilder = sdu_primitive_header_builder.content<Field_sdu_primitive_header::sdu_primitive_headerA__Znum_sdu_primitives>();
    num_sdu_primitives_instancebuilder.append(num_sdu_primitives());
}

test_t::sdu_primitive_header_t::~sdu_primitive_header_t() {
    _clean_up();
}

void test_t::sdu_primitive_header_t::_clean_up() {
}

int32_t test_t::sdu_primitive_header_t::sdu_header() {
    if (f_sdu_header) {
        return m_sdu_header;
    }
    m_sdu_header = ((sdu_num_primitive_packed() & 4026531840UL) >> 28);
    f_sdu_header = true;
    return m_sdu_header;
}

int32_t test_t::sdu_primitive_header_t::num_sdu_primitives() {
    if (f_num_sdu_primitives) {
        return m_num_sdu_primitives;
    }
    m_num_sdu_primitives = (sdu_num_primitive_packed() & 134217727);
    f_num_sdu_primitives = true;
    return m_num_sdu_primitives;
}

int32_t test_t::sdu_primitive_header_t::has_sdu_data() {
    if (f_has_sdu_data) {
        return m_has_sdu_data;
    }
    m_has_sdu_data = ((sdu_num_primitive_packed() & 16777216) >> 27);
    f_has_sdu_data = true;
    return m_has_sdu_data;
}

test_t::detector_header_t::detector_header_t(Detector_headerBuilderType builder, kaitai::kstream* p__io, test_t::detector_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	detector_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_detector_type = false;
    f_index = false;
    f_det_id = false;
    f_detector_header = false;

    detector_header_builder.set_fields(detector_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::detector_header_t::_read() {
    m_detector_hdr_packed = m__io->read_u4le();
    auto& detector_hdr_packed_builder = detector_header_builder.content<Field_detector_header::detector_headerA__Zdetector_hdr_packed>();
    detector_hdr_packed_builder.append(m_detector_hdr_packed);
    m_dcrc1_serial_nbr = m__io->read_u1();
    auto& dcrc1_serial_nbr_builder = detector_header_builder.content<Field_detector_header::detector_headerA__Zdcrc1_serial_nbr>();
    dcrc1_serial_nbr_builder.append(m_dcrc1_serial_nbr);
    m_dcrc1_version = m__io->read_u1();
    auto& dcrc1_version_builder = detector_header_builder.content<Field_detector_header::detector_headerA__Zdcrc1_version>();
    dcrc1_version_builder.append(m_dcrc1_version);
    m_dcrc2_serial_nbr = m__io->read_u1();
    auto& dcrc2_serial_nbr_builder = detector_header_builder.content<Field_detector_header::detector_headerA__Zdcrc2_serial_nbr>();
    dcrc2_serial_nbr_builder.append(m_dcrc2_serial_nbr);
    m_dcrc2_version = m__io->read_u1();
    auto& dcrc2_version_builder = detector_header_builder.content<Field_detector_header::detector_headerA__Zdcrc2_version>();
    dcrc2_version_builder.append(m_dcrc2_version);
    auto& index_instancebuilder = detector_header_builder.content<Field_detector_header::detector_headerA__Zindex>();
    index_instancebuilder.append(index());
    auto& detector_type_instancebuilder = detector_header_builder.content<Field_detector_header::detector_headerA__Zdetector_type>();
    detector_type_instancebuilder.append(detector_type());
    auto& det_id_instancebuilder = detector_header_builder.content<Field_detector_header::detector_headerA__Zdet_id>();
    det_id_instancebuilder.append(det_id());
    auto& detector_header_instancebuilder = detector_header_builder.content<Field_detector_header::detector_headerA__Zdetector_header>();
    detector_header_instancebuilder.append(detector_header());
}

test_t::detector_header_t::~detector_header_t() {
    _clean_up();
}

void test_t::detector_header_t::_clean_up() {
}

int32_t test_t::detector_header_t::detector_type() {
    if (f_detector_type) {
        return m_detector_type;
    }
    m_detector_type = ((detector_hdr_packed() & 268434432) >> 10);
    f_detector_type = true;
    return m_detector_type;
}

int32_t test_t::detector_header_t::index() {
    if (f_index) {
        return m_index;
    }
    m_index = (detector_hdr_packed() & 3);
    f_index = true;
    return m_index;
}

int32_t test_t::detector_header_t::det_id() {
    if (f_det_id) {
        return m_det_id;
    }
    m_det_id = ((detector_hdr_packed() & 1020) >> 2);
    f_det_id = true;
    return m_det_id;
}

int32_t test_t::detector_header_t::detector_header() {
    if (f_detector_header) {
        return m_detector_header;
    }
    m_detector_header = ((detector_hdr_packed() & 4026531840UL) >> 28);
    f_detector_header = true;
    return m_detector_header;
}

test_t::detectors_t::detectors_t(DetectorsBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	detectors_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_detectors_in_event = false;
    f_num_det_header = false;

    detectors_builder.set_fields(detectors_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::detectors_t::_read() {
    m_n_detectors_packed = m__io->read_u4le();
    auto& n_detectors_packed_builder = detectors_builder.content<Field_detectors::detectorsA__Zn_detectors_packed>();
    n_detectors_packed_builder.append(m_n_detectors_packed);
    auto& num_det_header_instancebuilder = detectors_builder.content<Field_detectors::detectorsA__Znum_det_header>();
    num_det_header_instancebuilder.append(num_det_header());
    auto& detectors_in_event_instancebuilder = detectors_builder.content<Field_detectors::detectorsA__Zdetectors_in_event>();
    detectors_in_event_instancebuilder.append(detectors_in_event());
}

test_t::detectors_t::~detectors_t() {
    _clean_up();
}

void test_t::detectors_t::_clean_up() {
}

int32_t test_t::detectors_t::detectors_in_event() {
    if (f_detectors_in_event) {
        return m_detectors_in_event;
    }
    m_detectors_in_event = (n_detectors_packed() & 268435455);
    f_detectors_in_event = true;
    return m_detectors_in_event;
}

int32_t test_t::detectors_t::num_det_header() {
    if (f_num_det_header) {
        return m_num_det_header;
    }
    m_num_det_header = ((n_detectors_packed() & 4026531840UL) >> 28);
    f_num_det_header = true;
    return m_num_det_header;
}

test_t::num_sdu_header_t::num_sdu_header_t(Num_sdu_headerBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	num_sdu_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_num_sdu = false;
    f_num_sdu_flag = false;

    num_sdu_header_builder.set_fields(num_sdu_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::num_sdu_header_t::_read() {
    m_num_sdu_packed = m__io->read_u4le();
    auto& num_sdu_packed_builder = num_sdu_header_builder.content<Field_num_sdu_header::num_sdu_headerA__Znum_sdu_packed>();
    num_sdu_packed_builder.append(m_num_sdu_packed);
    auto& num_sdu_instancebuilder = num_sdu_header_builder.content<Field_num_sdu_header::num_sdu_headerA__Znum_sdu>();
    num_sdu_instancebuilder.append(num_sdu());
    auto& num_sdu_flag_instancebuilder = num_sdu_header_builder.content<Field_num_sdu_header::num_sdu_headerA__Znum_sdu_flag>();
    num_sdu_flag_instancebuilder.append(num_sdu_flag());
}

test_t::num_sdu_header_t::~num_sdu_header_t() {
    _clean_up();
}

void test_t::num_sdu_header_t::_clean_up() {
}

int32_t test_t::num_sdu_header_t::num_sdu() {
    if (f_num_sdu) {
        return m_num_sdu;
    }
    m_num_sdu = (num_sdu_packed() & 268435455);
    f_num_sdu = true;
    return m_num_sdu;
}

int32_t test_t::num_sdu_header_t::num_sdu_flag() {
    if (f_num_sdu_flag) {
        return m_num_sdu_flag;
    }
    m_num_sdu_flag = ((num_sdu_packed() & 4026531840UL) >> 28);
    f_num_sdu_flag = true;
    return m_num_sdu_flag;
}

test_t::detector_block_t::detector_block_t(Detector_blockBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	detector_block_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_detector_hdr = 0;
    m_readout_hdr = 0;
    m_num_channels_hdr = 0;
    m_channel_blk = 0;

    detector_block_builder.set_fields(detector_block_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::detector_block_t::_read() {
    auto& detector_header_recordbuilder = detector_block_builder.content<Field_detector_block::detector_blockA__Zdetector_hdr>();
    m_detector_hdr = new detector_header_t(detector_header_recordbuilder, m__io, this, m__root);
    auto& readout_header_recordbuilder = detector_block_builder.content<Field_detector_block::detector_blockA__Zreadout_hdr>();
    m_readout_hdr = new readout_header_t(readout_header_recordbuilder, m__io, this, m__root);
    auto& num_channels_header_recordbuilder = detector_block_builder.content<Field_detector_block::detector_blockA__Znum_channels_hdr>();
    m_num_channels_hdr = new num_channels_header_t(num_channels_header_recordbuilder, m__io, this, m__root);
    m_channel_blk = new std::vector<channel_block_t*>();
    const int l_channel_blk = num_channels_hdr()->num_channels();
    auto& channel_blk_listoffsetbuilder = detector_block_builder.content<Field_detector_block::detector_blockA__Zchannel_blk>();
    channel_blk_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_channel_blk; i++) {
        auto& channel_block_recordbuilder = detector_block_builder.content<Field_detector_block::detector_blockA__Zchannel_blk>().content();
        m_channel_blk->push_back(new channel_block_t(channel_block_recordbuilder, m__io, this, m__root));
    }
    channel_blk_listoffsetbuilder.end_list();
}

test_t::detector_block_t::~detector_block_t() {
    _clean_up();
}

void test_t::detector_block_t::_clean_up() {
    if (m_detector_hdr) {
        delete m_detector_hdr; m_detector_hdr = 0;
    }
    if (m_readout_hdr) {
        delete m_readout_hdr; m_readout_hdr = 0;
    }
    if (m_num_channels_hdr) {
        delete m_num_channels_hdr; m_num_channels_hdr = 0;
    }
    if (m_channel_blk) {
        for (std::vector<channel_block_t*>::iterator it = m_channel_blk->begin(); it != m_channel_blk->end(); ++it) {
            delete *it;
        }
        delete m_channel_blk; m_channel_blk = 0;
    }
}

test_t::scdms_header_t::scdms_header_t(Scdms_headerBuilderType builder, kaitai::kstream* p__io, test_t::scdms_data_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	scdms_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_overall_header = false;
    f_total_triggers = false;
    f_format_version = false;

    scdms_header_builder.set_fields(scdms_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::scdms_header_t::_read() {
    m_packed = m__io->read_u4le();
    auto& packed_builder = scdms_header_builder.content<Field_scdms_header::scdms_headerA__Zpacked>();
    packed_builder.append(m_packed);
    auto& format_version_instancebuilder = scdms_header_builder.content<Field_scdms_header::scdms_headerA__Zformat_version>();
    format_version_instancebuilder.append(format_version());
    auto& overall_header_instancebuilder = scdms_header_builder.content<Field_scdms_header::scdms_headerA__Zoverall_header>();
    overall_header_instancebuilder.append(overall_header());
    auto& total_triggers_instancebuilder = scdms_header_builder.content<Field_scdms_header::scdms_headerA__Ztotal_triggers>();
    total_triggers_instancebuilder.append(total_triggers());
}

test_t::scdms_header_t::~scdms_header_t() {
    _clean_up();
}

void test_t::scdms_header_t::_clean_up() {
}

int32_t test_t::scdms_header_t::overall_header() {
    if (f_overall_header) {
        return m_overall_header;
    }
    m_overall_header = ((packed() & 4026531840UL) >> 28);
    f_overall_header = true;
    return m_overall_header;
}

int32_t test_t::scdms_header_t::total_triggers() {
    if (f_total_triggers) {
        return m_total_triggers;
    }
    m_total_triggers = (packed() & 4095);
    f_total_triggers = true;
    return m_total_triggers;
}

int32_t test_t::scdms_header_t::format_version() {
    if (f_format_version) {
        return m_format_version;
    }
    m_format_version = ((packed() & 268431360) >> 12);
    f_format_version = true;
    return m_format_version;
}

test_t::sdu_primitive_block_t::sdu_primitive_block_t(Sdu_primitive_blockBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	sdu_primitive_block_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_rt_run_time_fraction = false;
    f_trigger_time_fraction = false;

    sdu_primitive_block_builder.set_fields(sdu_primitive_block_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::sdu_primitive_block_t::_read() {
    m_sdu_block_header = m__io->read_u4le();
    auto& sdu_block_header_builder = sdu_primitive_block_builder.content<Field_sdu_primitive_block::sdu_primitive_blockA__Zsdu_block_header>();
    sdu_block_header_builder.append(m_sdu_block_header);
    m_rt_issue_ut = m__io->read_u4le();
    auto& rt_issue_ut_builder = sdu_primitive_block_builder.content<Field_sdu_primitive_block::sdu_primitive_blockA__Zrt_issue_ut>();
    rt_issue_ut_builder.append(m_rt_issue_ut);
    m_rt_run_time_fraction_packed = m__io->read_u4le();
    auto& rt_run_time_fraction_packed_builder = sdu_primitive_block_builder.content<Field_sdu_primitive_block::sdu_primitive_blockA__Zrt_run_time_fraction_packed>();
    rt_run_time_fraction_packed_builder.append(m_rt_run_time_fraction_packed);
    m_trigger_time = m__io->read_u2le();
    auto& trigger_time_builder = sdu_primitive_block_builder.content<Field_sdu_primitive_block::sdu_primitive_blockA__Ztrigger_time>();
    trigger_time_builder.append(m_trigger_time);
    m_rt_run_time = m__io->read_u2le();
    auto& rt_run_time_builder = sdu_primitive_block_builder.content<Field_sdu_primitive_block::sdu_primitive_blockA__Zrt_run_time>();
    rt_run_time_builder.append(m_rt_run_time);
    m_trigger_time_fraction_packed = m__io->read_u4le();
    auto& trigger_time_fraction_packed_builder = sdu_primitive_block_builder.content<Field_sdu_primitive_block::sdu_primitive_blockA__Ztrigger_time_fraction_packed>();
    trigger_time_fraction_packed_builder.append(m_trigger_time_fraction_packed);
    m_trigger_word = m__io->read_u2le();
    auto& trigger_word_builder = sdu_primitive_block_builder.content<Field_sdu_primitive_block::sdu_primitive_blockA__Ztrigger_word>();
    trigger_word_builder.append(m_trigger_word);
    m_blank = m__io->read_u4le();
    auto& blank_builder = sdu_primitive_block_builder.content<Field_sdu_primitive_block::sdu_primitive_blockA__Zblank>();
    blank_builder.append(m_blank);
    m_peak_amplitude = m__io->read_u2le();
    auto& peak_amplitude_builder = sdu_primitive_block_builder.content<Field_sdu_primitive_block::sdu_primitive_blockA__Zpeak_amplitude>();
    peak_amplitude_builder.append(m_peak_amplitude);
    auto& trigger_time_fraction_instancebuilder = sdu_primitive_block_builder.content<Field_sdu_primitive_block::sdu_primitive_blockA__Ztrigger_time_fraction>();
    trigger_time_fraction_instancebuilder.append(trigger_time_fraction());
    auto& rt_run_time_fraction_instancebuilder = sdu_primitive_block_builder.content<Field_sdu_primitive_block::sdu_primitive_blockA__Zrt_run_time_fraction>();
    rt_run_time_fraction_instancebuilder.append(rt_run_time_fraction());
}

test_t::sdu_primitive_block_t::~sdu_primitive_block_t() {
    _clean_up();
}

void test_t::sdu_primitive_block_t::_clean_up() {
}

int32_t test_t::sdu_primitive_block_t::rt_run_time_fraction() {
    if (f_rt_run_time_fraction) {
        return m_rt_run_time_fraction;
    }
    m_rt_run_time_fraction = (rt_run_time_fraction_packed() & 16777215);
    f_rt_run_time_fraction = true;
    return m_rt_run_time_fraction;
}

int32_t test_t::sdu_primitive_block_t::trigger_time_fraction() {
    if (f_trigger_time_fraction) {
        return m_trigger_time_fraction;
    }
    m_trigger_time_fraction = (trigger_time_fraction_packed() & 16777215);
    f_trigger_time_fraction = true;
    return m_trigger_time_fraction;
}

test_t::scdms_footer_t::scdms_footer_t(Scdms_footerBuilderType builder, kaitai::kstream* p__io, test_t::scdms_data_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	scdms_footer_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_preceeding_triggers_flag = false;
    f_preceeding_triggers_num = false;

    scdms_footer_builder.set_fields(scdms_footer_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::scdms_footer_t::_read() {
    m_preceeding_triggers_packed = m__io->read_u4le();
    auto& preceeding_triggers_packed_builder = scdms_footer_builder.content<Field_scdms_footer::scdms_footerA__Zpreceeding_triggers_packed>();
    preceeding_triggers_packed_builder.append(m_preceeding_triggers_packed);
    auto& preceeding_triggers_num_instancebuilder = scdms_footer_builder.content<Field_scdms_footer::scdms_footerA__Zpreceeding_triggers_num>();
    preceeding_triggers_num_instancebuilder.append(preceeding_triggers_num());
    auto& preceeding_triggers_flag_instancebuilder = scdms_footer_builder.content<Field_scdms_footer::scdms_footerA__Zpreceeding_triggers_flag>();
    preceeding_triggers_flag_instancebuilder.append(preceeding_triggers_flag());
}

test_t::scdms_footer_t::~scdms_footer_t() {
    _clean_up();
}

void test_t::scdms_footer_t::_clean_up() {
}

int32_t test_t::scdms_footer_t::preceeding_triggers_flag() {
    if (f_preceeding_triggers_flag) {
        return m_preceeding_triggers_flag;
    }
    m_preceeding_triggers_flag = ((preceeding_triggers_packed() & 4026531840UL) >> 28);
    f_preceeding_triggers_flag = true;
    return m_preceeding_triggers_flag;
}

int32_t test_t::scdms_footer_t::preceeding_triggers_num() {
    if (f_preceeding_triggers_num) {
        return m_preceeding_triggers_num;
    }
    m_preceeding_triggers_num = (preceeding_triggers_packed() & 268435455);
    f_preceeding_triggers_num = true;
    return m_preceeding_triggers_num;
}

test_t::num_primitive_header_t::num_primitive_header_t(Num_primitive_headerBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	num_primitive_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_num_primitives = false;
    f_prim_header = false;

    num_primitive_header_builder.set_fields(num_primitive_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::num_primitive_header_t::_read() {
    m_packed_primitive_num = m__io->read_u4le();
    auto& packed_primitive_num_builder = num_primitive_header_builder.content<Field_num_primitive_header::num_primitive_headerA__Zpacked_primitive_num>();
    packed_primitive_num_builder.append(m_packed_primitive_num);
    m_entry_length = m__io->read_u4le();
    auto& entry_length_builder = num_primitive_header_builder.content<Field_num_primitive_header::num_primitive_headerA__Zentry_length>();
    entry_length_builder.append(m_entry_length);
    auto& num_primitives_instancebuilder = num_primitive_header_builder.content<Field_num_primitive_header::num_primitive_headerA__Znum_primitives>();
    num_primitives_instancebuilder.append(num_primitives());
    auto& prim_header_instancebuilder = num_primitive_header_builder.content<Field_num_primitive_header::num_primitive_headerA__Zprim_header>();
    prim_header_instancebuilder.append(prim_header());
}

test_t::num_primitive_header_t::~num_primitive_header_t() {
    _clean_up();
}

void test_t::num_primitive_header_t::_clean_up() {
}

int32_t test_t::num_primitive_header_t::num_primitives() {
    if (f_num_primitives) {
        return m_num_primitives;
    }
    m_num_primitives = (packed_primitive_num() & 268435455);
    f_num_primitives = true;
    return m_num_primitives;
}

int32_t test_t::num_primitive_header_t::prim_header() {
    if (f_prim_header) {
        return m_prim_header;
    }
    m_prim_header = ((packed_primitive_num() & 4026531840UL) >> 28);
    f_prim_header = true;
    return m_prim_header;
}

test_t::readout_header_t::readout_header_t(Readout_headerBuilderType builder, kaitai::kstream* p__io, test_t::detector_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	readout_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_readout_header = false;
    f_series_time_fraction = false;
    f_series_time = false;
    f_has_thermometry_readout = false;
    f_readout_status = false;

    readout_header_builder.set_fields(readout_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::readout_header_t::_read() {
    m_readout_hdr_packed_1 = m__io->read_u4le();
    auto& readout_hdr_packed_1_builder = readout_header_builder.content<Field_readout_header::readout_headerA__Zreadout_hdr_packed_1>();
    readout_hdr_packed_1_builder.append(m_readout_hdr_packed_1);
    m_readout_hdr_packed_2 = m__io->read_u4le();
    auto& readout_hdr_packed_2_builder = readout_header_builder.content<Field_readout_header::readout_headerA__Zreadout_hdr_packed_2>();
    readout_hdr_packed_2_builder.append(m_readout_hdr_packed_2);
    m_waveform_read_start_time = m__io->read_u2le();
    auto& waveform_read_start_time_builder = readout_header_builder.content<Field_readout_header::readout_headerA__Zwaveform_read_start_time>();
    waveform_read_start_time_builder.append(m_waveform_read_start_time);
    m_waveform_read_end_time = m__io->read_u2le();
    auto& waveform_read_end_time_builder = readout_header_builder.content<Field_readout_header::readout_headerA__Zwaveform_read_end_time>();
    waveform_read_end_time_builder.append(m_waveform_read_end_time);
    m_waveform_read_start_time_fraction = m__io->read_u4le();
    auto& waveform_read_start_time_fraction_builder = readout_header_builder.content<Field_readout_header::readout_headerA__Zwaveform_read_start_time_fraction>();
    waveform_read_start_time_fraction_builder.append(m_waveform_read_start_time_fraction);
    m_waveform_read_end_time_fraction = m__io->read_u4le();
    auto& waveform_read_end_time_fraction_builder = readout_header_builder.content<Field_readout_header::readout_headerA__Zwaveform_read_end_time_fraction>();
    waveform_read_end_time_fraction_builder.append(m_waveform_read_end_time_fraction);
    auto& series_time_instancebuilder = readout_header_builder.content<Field_readout_header::readout_headerA__Zseries_time>();
    series_time_instancebuilder.append(series_time());
    auto& readout_header_instancebuilder = readout_header_builder.content<Field_readout_header::readout_headerA__Zreadout_header>();
    readout_header_instancebuilder.append(readout_header());
    auto& has_thermometry_readout_instancebuilder = readout_header_builder.content<Field_readout_header::readout_headerA__Zhas_thermometry_readout>();
    has_thermometry_readout_instancebuilder.append(has_thermometry_readout());
    auto& readout_status_instancebuilder = readout_header_builder.content<Field_readout_header::readout_headerA__Zreadout_status>();
    readout_status_instancebuilder.append(readout_status());
    auto& series_time_fraction_instancebuilder = readout_header_builder.content<Field_readout_header::readout_headerA__Zseries_time_fraction>();
    series_time_fraction_instancebuilder.append(series_time_fraction());
}

test_t::readout_header_t::~readout_header_t() {
    _clean_up();
}

void test_t::readout_header_t::_clean_up() {
}

int32_t test_t::readout_header_t::readout_header() {
    if (f_readout_header) {
        return m_readout_header;
    }
    m_readout_header = ((readout_hdr_packed_1() & 4026531840UL) >> 28);
    f_readout_header = true;
    return m_readout_header;
}

int32_t test_t::readout_header_t::series_time_fraction() {
    if (f_series_time_fraction) {
        return m_series_time_fraction;
    }
    m_series_time_fraction = (readout_hdr_packed_2() & 65535);
    f_series_time_fraction = true;
    return m_series_time_fraction;
}

int32_t test_t::readout_header_t::series_time() {
    if (f_series_time) {
        return m_series_time;
    }
    m_series_time = (readout_hdr_packed_1() & 65535);
    f_series_time = true;
    return m_series_time;
}

int32_t test_t::readout_header_t::has_thermometry_readout() {
    if (f_has_thermometry_readout) {
        return m_has_thermometry_readout;
    }
    m_has_thermometry_readout = ((readout_hdr_packed_2() & 268435456) >> 31);
    f_has_thermometry_readout = true;
    return m_has_thermometry_readout;
}

int32_t test_t::readout_header_t::readout_status() {
    if (f_readout_status) {
        return m_readout_status;
    }
    m_readout_status = ((readout_hdr_packed_1() & 268369920) >> 16);
    f_readout_status = true;
    return m_readout_status;
}

test_t::entry_block_t::entry_block_t(Entry_blockBuilderType builder, kaitai::kstream* p__io, test_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	entry_block_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_midas_hdr = 0;
    m_scdms_data = 0;

    entry_block_builder.set_fields(entry_block_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::entry_block_t::_read() {
    auto& midas_header_recordbuilder = entry_block_builder.content<Field_entry_block::entry_blockA__Zmidas_hdr>();
    m_midas_hdr = new midas_header_t(midas_header_recordbuilder, m__io, this, m__root);
    n_scdms_data = true;
    auto& scdms_data_indexedoptionbuilder = entry_block_builder.content<Field_entry_block::entry_blockA__Zscdms_data>();
    if (midas_hdr()->bank_name() == (std::string("SCD0"))) {
        scdms_data_indexedoptionbuilder.append_valid();
        n_scdms_data = false;
        auto& scdms_data_block_recordbuilder = entry_block_builder.content<Field_entry_block::entry_blockA__Zscdms_data>().content();
        m_scdms_data = new scdms_data_block_t(scdms_data_block_recordbuilder, m__io, this, m__root);
    }
    else {
        scdms_data_indexedoptionbuilder.append_invalid();
    }

    n_dmc_data = true;
    auto& dmc_data_indexedoptionbuilder = entry_block_builder.content<Field_entry_block::entry_blockA__Zdmc_data>();
    if (midas_hdr()->bank_name() == (std::string("DMC0"))) {
        dmc_data_indexedoptionbuilder.append_valid();
        n_dmc_data = false;
        m_dmc_data = m__io->read_bytes(midas_hdr()->bank_size());
        auto& dmc_data_listoffsetbuilder = dmc_data_indexedoptionbuilder.content();
        dmc_data_listoffsetbuilder.begin_list();
        auto& dmc_data_builder = dmc_data_listoffsetbuilder.content();
        for (int i = 0; i < m_dmc_data.length(); i++) {
            dmc_data_builder.append(m_dmc_data[i]);
        }
        dmc_data_listoffsetbuilder.end_list();
    }
    else {
        dmc_data_indexedoptionbuilder.append_invalid();
    }

    n_data = true;
    auto& data_indexedoptionbuilder = entry_block_builder.content<Field_entry_block::entry_blockA__Zdata>();
    if ( ((midas_hdr()->bank_name() != std::string("SCD0")) && (midas_hdr()->bank_name() != std::string("DMC0"))) ) {
        data_indexedoptionbuilder.append_valid();
        n_data = false;
        m_data = m__io->read_bytes(midas_hdr()->bank_size());
        auto& data_listoffsetbuilder = data_indexedoptionbuilder.content();
        data_listoffsetbuilder.begin_list();
        auto& data_builder = data_listoffsetbuilder.content();
        for (int i = 0; i < m_data.length(); i++) {
            data_builder.append(m_data[i]);
        }
        data_listoffsetbuilder.end_list();
    }
    else {
        data_indexedoptionbuilder.append_invalid();
    }

}

test_t::entry_block_t::~entry_block_t() {
    _clean_up();
}

void test_t::entry_block_t::_clean_up() {
    if (m_midas_hdr) {
        delete m_midas_hdr; m_midas_hdr = 0;
    }
    if (!n_scdms_data) {
        if (m_scdms_data) {
            delete m_scdms_data; m_scdms_data = 0;
        }
    }
    if (!n_dmc_data) {
    }
    if (!n_data) {
    }
}

test_t::sdu_channel_block_t::sdu_channel_block_t(Sdu_channel_blockBuilderType builder, kaitai::kstream* p__io, test_t::sdu_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	sdu_channel_block_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_sdu_channel_sample = 0;
    f_sdu_channel_flag = false;
    f_sdu_pre_trigger_offset = false;
    f_sdu_channel_type = false;
    f_sdu_channel_num = false;

    sdu_channel_block_builder.set_fields(sdu_channel_block_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::sdu_channel_block_t::_read() {
    m_sdu_channel_header_packed = m__io->read_u4le();
    auto& sdu_channel_header_packed_builder = sdu_channel_block_builder.content<Field_sdu_channel_block::sdu_channel_blockA__Zsdu_channel_header_packed>();
    sdu_channel_header_packed_builder.append(m_sdu_channel_header_packed);
    m_sdu_num_samples = m__io->read_u4le();
    auto& sdu_num_samples_builder = sdu_channel_block_builder.content<Field_sdu_channel_block::sdu_channel_blockA__Zsdu_num_samples>();
    sdu_num_samples_builder.append(m_sdu_num_samples);
    m_blank = m__io->read_u2le();
    auto& blank_builder = sdu_channel_block_builder.content<Field_sdu_channel_block::sdu_channel_blockA__Zblank>();
    blank_builder.append(m_blank);
    m_sample_rate = m__io->read_u2le();
    auto& sample_rate_builder = sdu_channel_block_builder.content<Field_sdu_channel_block::sdu_channel_blockA__Zsample_rate>();
    sample_rate_builder.append(m_sample_rate);
    m_sdu_channel_sample = new std::vector<uint16_t>();
    const int l_sdu_channel_sample = sdu_num_samples();
    auto& sdu_channel_sample_listoffsetbuilder = sdu_channel_block_builder.content<Field_sdu_channel_block::sdu_channel_blockA__Zsdu_channel_sample>();
    sdu_channel_sample_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_sdu_channel_sample; i++) {
        m_sdu_channel_sample->push_back(m__io->read_u2le());
        auto& sdu_channel_sample_builder = sdu_channel_sample_listoffsetbuilder.content();
        sdu_channel_sample_builder.append(m_sdu_channel_sample->at(m_sdu_channel_sample->size() - 1));
    }
    sdu_channel_sample_listoffsetbuilder.end_list();
    auto& sdu_pre_trigger_offset_instancebuilder = sdu_channel_block_builder.content<Field_sdu_channel_block::sdu_channel_blockA__Zsdu_pre_trigger_offset>();
    sdu_pre_trigger_offset_instancebuilder.append(sdu_pre_trigger_offset());
    auto& sdu_channel_num_instancebuilder = sdu_channel_block_builder.content<Field_sdu_channel_block::sdu_channel_blockA__Zsdu_channel_num>();
    sdu_channel_num_instancebuilder.append(sdu_channel_num());
    auto& sdu_channel_flag_instancebuilder = sdu_channel_block_builder.content<Field_sdu_channel_block::sdu_channel_blockA__Zsdu_channel_flag>();
    sdu_channel_flag_instancebuilder.append(sdu_channel_flag());
    auto& sdu_channel_type_instancebuilder = sdu_channel_block_builder.content<Field_sdu_channel_block::sdu_channel_blockA__Zsdu_channel_type>();
    sdu_channel_type_instancebuilder.append(sdu_channel_type());
}

test_t::sdu_channel_block_t::~sdu_channel_block_t() {
    _clean_up();
}

void test_t::sdu_channel_block_t::_clean_up() {
    if (m_sdu_channel_sample) {
        delete m_sdu_channel_sample; m_sdu_channel_sample = 0;
    }
}

int32_t test_t::sdu_channel_block_t::sdu_channel_flag() {
    if (f_sdu_channel_flag) {
        return m_sdu_channel_flag;
    }
    m_sdu_channel_flag = ((sdu_channel_header_packed() & 4026531840UL) >> 28);
    f_sdu_channel_flag = true;
    return m_sdu_channel_flag;
}

int32_t test_t::sdu_channel_block_t::sdu_pre_trigger_offset() {
    if (f_sdu_pre_trigger_offset) {
        return m_sdu_pre_trigger_offset;
    }
    m_sdu_pre_trigger_offset = ((sdu_channel_header_packed() & 268435392) >> 7);
    f_sdu_pre_trigger_offset = true;
    return m_sdu_pre_trigger_offset;
}

int32_t test_t::sdu_channel_block_t::sdu_channel_type() {
    if (f_sdu_channel_type) {
        return m_sdu_channel_type;
    }
    m_sdu_channel_type = ((sdu_channel_header_packed() & 56) >> 3);
    f_sdu_channel_type = true;
    return m_sdu_channel_type;
}

int32_t test_t::sdu_channel_block_t::sdu_channel_num() {
    if (f_sdu_channel_num) {
        return m_sdu_channel_num;
    }
    m_sdu_channel_num = (sdu_channel_header_packed() & 7);
    f_sdu_channel_num = true;
    return m_sdu_channel_num;
}

test_t::scdms_data_block_t::scdms_data_block_t(Scdms_data_blockBuilderType builder, kaitai::kstream* p__io, test_t::entry_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	scdms_data_block_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_scdms_hdr = 0;
    m_trigger_blk = 0;
    m_scdms_ftr = 0;

    scdms_data_block_builder.set_fields(scdms_data_block_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::scdms_data_block_t::_read() {
    auto& scdms_header_recordbuilder = scdms_data_block_builder.content<Field_scdms_data_block::scdms_data_blockA__Zscdms_hdr>();
    m_scdms_hdr = new scdms_header_t(scdms_header_recordbuilder, m__io, this, m__root);
    m_trigger_blk = new std::vector<trigger_block_t*>();
    const int l_trigger_blk = scdms_hdr()->total_triggers();
    auto& trigger_blk_listoffsetbuilder = scdms_data_block_builder.content<Field_scdms_data_block::scdms_data_blockA__Ztrigger_blk>();
    trigger_blk_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_trigger_blk; i++) {
        auto& trigger_block_recordbuilder = scdms_data_block_builder.content<Field_scdms_data_block::scdms_data_blockA__Ztrigger_blk>().content();
        m_trigger_blk->push_back(new trigger_block_t(trigger_block_recordbuilder, m__io, this, m__root));
    }
    trigger_blk_listoffsetbuilder.end_list();
    auto& scdms_footer_recordbuilder = scdms_data_block_builder.content<Field_scdms_data_block::scdms_data_blockA__Zscdms_ftr>();
    m_scdms_ftr = new scdms_footer_t(scdms_footer_recordbuilder, m__io, this, m__root);
}

test_t::scdms_data_block_t::~scdms_data_block_t() {
    _clean_up();
}

void test_t::scdms_data_block_t::_clean_up() {
    if (m_scdms_hdr) {
        delete m_scdms_hdr; m_scdms_hdr = 0;
    }
    if (m_trigger_blk) {
        for (std::vector<trigger_block_t*>::iterator it = m_trigger_blk->begin(); it != m_trigger_blk->end(); ++it) {
            delete *it;
        }
        delete m_trigger_blk; m_trigger_blk = 0;
    }
    if (m_scdms_ftr) {
        delete m_scdms_ftr; m_scdms_ftr = 0;
    }
}

test_t::midas_header_t::midas_header_t(Midas_headerBuilderType builder, kaitai::kstream* p__io, test_t::entry_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	midas_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    midas_header_builder.set_fields(midas_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::midas_header_t::_read() {
    m_evt_id = m__io->read_u2le();
    auto& evt_id_builder = midas_header_builder.content<Field_midas_header::midas_headerA__Zevt_id>();
    evt_id_builder.append(m_evt_id);
    m_trigger_mask = m__io->read_u2le();
    auto& trigger_mask_builder = midas_header_builder.content<Field_midas_header::midas_headerA__Ztrigger_mask>();
    trigger_mask_builder.append(m_trigger_mask);
    m_serial_number = m__io->read_u4le();
    auto& serial_number_builder = midas_header_builder.content<Field_midas_header::midas_headerA__Zserial_number>();
    serial_number_builder.append(m_serial_number);
    m_time_stamp = m__io->read_u4le();
    auto& time_stamp_builder = midas_header_builder.content<Field_midas_header::midas_headerA__Ztime_stamp>();
    time_stamp_builder.append(m_time_stamp);
    m_evt_data_size = m__io->read_u4le();
    auto& evt_data_size_builder = midas_header_builder.content<Field_midas_header::midas_headerA__Zevt_data_size>();
    evt_data_size_builder.append(m_evt_data_size);
    m_all_banks_size = m__io->read_u4le();
    auto& all_banks_size_builder = midas_header_builder.content<Field_midas_header::midas_headerA__Zall_banks_size>();
    all_banks_size_builder.append(m_all_banks_size);
    m_flags = m__io->read_u4le();
    auto& flags_builder = midas_header_builder.content<Field_midas_header::midas_headerA__Zflags>();
    flags_builder.append(m_flags);
    m_bank_name = kaitai::kstream::bytes_to_str(m__io->read_bytes(4), "UTF-8");
    auto& bank_name_listoffsetbuilder = midas_header_builder.content<Field_midas_header::midas_headerA__Zbank_name>();
    bank_name_listoffsetbuilder.begin_list();
    auto& bank_name_builder = bank_name_listoffsetbuilder.content();
    bank_name_listoffsetbuilder.set_parameters("\"__array__\": \"string\"");
    bank_name_builder.set_parameters("\"__array__\" : \"char\"");
    for (int i = 0; i < m_bank_name.length(); i++) {
        bank_name_builder.append(m_bank_name[i]);
    }
    bank_name_listoffsetbuilder.end_list();
    m_type = m__io->read_u4le();
    auto& type_builder = midas_header_builder.content<Field_midas_header::midas_headerA__Ztype>();
    type_builder.append(m_type);
    m_bank_size = m__io->read_u4le();
    auto& bank_size_builder = midas_header_builder.content<Field_midas_header::midas_headerA__Zbank_size>();
    bank_size_builder.append(m_bank_size);
}

test_t::midas_header_t::~midas_header_t() {
    _clean_up();
}

void test_t::midas_header_t::_clean_up() {
}

test_t::sdu_block_t::sdu_block_t(Sdu_blockBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent, test_t* p__root) : kaitai::kstruct(p__io),
	sdu_block_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_sdu_channel_blk = 0;
    f_sdu_series_time_fraction = false;
    f_sdu_readout_status = false;
    f_sdu_readout_flag = false;
    f_num_sdu_channels = false;
    f_num_sdu_channels_flag = false;
    f_sdu_series_time = false;

    sdu_block_builder.set_fields(sdu_block_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void test_t::sdu_block_t::_read() {
    m_sdu_readout_header_packed = m__io->read_u4le();
    auto& sdu_readout_header_packed_builder = sdu_block_builder.content<Field_sdu_block::sdu_blockA__Zsdu_readout_header_packed>();
    sdu_readout_header_packed_builder.append(m_sdu_readout_header_packed);
    m_sdu_series_time_fraction_packed = m__io->read_u4le();
    auto& sdu_series_time_fraction_packed_builder = sdu_block_builder.content<Field_sdu_block::sdu_blockA__Zsdu_series_time_fraction_packed>();
    sdu_series_time_fraction_packed_builder.append(m_sdu_series_time_fraction_packed);
    m_sdu_read_start_time = m__io->read_u2le();
    auto& sdu_read_start_time_builder = sdu_block_builder.content<Field_sdu_block::sdu_blockA__Zsdu_read_start_time>();
    sdu_read_start_time_builder.append(m_sdu_read_start_time);
    m_sdu_read_end_time = m__io->read_u2le();
    auto& sdu_read_end_time_builder = sdu_block_builder.content<Field_sdu_block::sdu_blockA__Zsdu_read_end_time>();
    sdu_read_end_time_builder.append(m_sdu_read_end_time);
    m_sdu_read_start_time_fraction = m__io->read_u4le();
    auto& sdu_read_start_time_fraction_builder = sdu_block_builder.content<Field_sdu_block::sdu_blockA__Zsdu_read_start_time_fraction>();
    sdu_read_start_time_fraction_builder.append(m_sdu_read_start_time_fraction);
    m_sdu_read_end_time_fraction = m__io->read_u4le();
    auto& sdu_read_end_time_fraction_builder = sdu_block_builder.content<Field_sdu_block::sdu_blockA__Zsdu_read_end_time_fraction>();
    sdu_read_end_time_fraction_builder.append(m_sdu_read_end_time_fraction);
    m_sdu_num_channels_header_packed = m__io->read_u4le();
    auto& sdu_num_channels_header_packed_builder = sdu_block_builder.content<Field_sdu_block::sdu_blockA__Zsdu_num_channels_header_packed>();
    sdu_num_channels_header_packed_builder.append(m_sdu_num_channels_header_packed);
    m_sdu_channel_blk = new std::vector<sdu_channel_block_t*>();
    const int l_sdu_channel_blk = num_sdu_channels();
    auto& sdu_channel_blk_listoffsetbuilder = sdu_block_builder.content<Field_sdu_block::sdu_blockA__Zsdu_channel_blk>();
    sdu_channel_blk_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_sdu_channel_blk; i++) {
        auto& sdu_channel_block_recordbuilder = sdu_block_builder.content<Field_sdu_block::sdu_blockA__Zsdu_channel_blk>().content();
        m_sdu_channel_blk->push_back(new sdu_channel_block_t(sdu_channel_block_recordbuilder, m__io, this, m__root));
    }
    sdu_channel_blk_listoffsetbuilder.end_list();
    auto& sdu_readout_status_instancebuilder = sdu_block_builder.content<Field_sdu_block::sdu_blockA__Zsdu_readout_status>();
    sdu_readout_status_instancebuilder.append(sdu_readout_status());
    auto& sdu_readout_flag_instancebuilder = sdu_block_builder.content<Field_sdu_block::sdu_blockA__Zsdu_readout_flag>();
    sdu_readout_flag_instancebuilder.append(sdu_readout_flag());
    auto& sdu_series_time_instancebuilder = sdu_block_builder.content<Field_sdu_block::sdu_blockA__Zsdu_series_time>();
    sdu_series_time_instancebuilder.append(sdu_series_time());
    auto& num_sdu_channels_instancebuilder = sdu_block_builder.content<Field_sdu_block::sdu_blockA__Znum_sdu_channels>();
    num_sdu_channels_instancebuilder.append(num_sdu_channels());
    auto& sdu_series_time_fraction_instancebuilder = sdu_block_builder.content<Field_sdu_block::sdu_blockA__Zsdu_series_time_fraction>();
    sdu_series_time_fraction_instancebuilder.append(sdu_series_time_fraction());
    auto& num_sdu_channels_flag_instancebuilder = sdu_block_builder.content<Field_sdu_block::sdu_blockA__Znum_sdu_channels_flag>();
    num_sdu_channels_flag_instancebuilder.append(num_sdu_channels_flag());
}

test_t::sdu_block_t::~sdu_block_t() {
    _clean_up();
}

void test_t::sdu_block_t::_clean_up() {
    if (m_sdu_channel_blk) {
        for (std::vector<sdu_channel_block_t*>::iterator it = m_sdu_channel_blk->begin(); it != m_sdu_channel_blk->end(); ++it) {
            delete *it;
        }
        delete m_sdu_channel_blk; m_sdu_channel_blk = 0;
    }
}

int32_t test_t::sdu_block_t::sdu_series_time_fraction() {
    if (f_sdu_series_time_fraction) {
        return m_sdu_series_time_fraction;
    }
    m_sdu_series_time_fraction = (sdu_readout_header_packed() & 16777215);
    f_sdu_series_time_fraction = true;
    return m_sdu_series_time_fraction;
}

int32_t test_t::sdu_block_t::sdu_readout_status() {
    if (f_sdu_readout_status) {
        return m_sdu_readout_status;
    }
    m_sdu_readout_status = ((sdu_readout_header_packed() & 268369920) >> 16);
    f_sdu_readout_status = true;
    return m_sdu_readout_status;
}

int32_t test_t::sdu_block_t::sdu_readout_flag() {
    if (f_sdu_readout_flag) {
        return m_sdu_readout_flag;
    }
    m_sdu_readout_flag = ((sdu_readout_header_packed() & 4026531840UL) >> 28);
    f_sdu_readout_flag = true;
    return m_sdu_readout_flag;
}

int32_t test_t::sdu_block_t::num_sdu_channels() {
    if (f_num_sdu_channels) {
        return m_num_sdu_channels;
    }
    m_num_sdu_channels = (sdu_num_channels_header_packed() & 16777215);
    f_num_sdu_channels = true;
    return m_num_sdu_channels;
}

int32_t test_t::sdu_block_t::num_sdu_channels_flag() {
    if (f_num_sdu_channels_flag) {
        return m_num_sdu_channels_flag;
    }
    m_num_sdu_channels_flag = ((sdu_num_channels_header_packed() & 4026531840UL) >> 28);
    f_num_sdu_channels_flag = true;
    return m_num_sdu_channels_flag;
}

int32_t test_t::sdu_block_t::sdu_series_time() {
    if (f_sdu_series_time) {
        return m_sdu_series_time;
    }
    m_sdu_series_time = (sdu_readout_header_packed() & 65535);
    f_sdu_series_time = true;
    return m_sdu_series_time;
}

#ifdef USE_TEST_

TestBuilderType* load(std::string file_path) {
    std::ifstream infile(file_path, std::ifstream::binary);
    kaitai::kstream ks(&infile);
    builder_keys = new std::vector<std::string>();
    test_t* obj = new test_t(&ks);
    builder_map[file_path] = &(obj->test_builder);
    return builder_map[file_path];
}

extern "C" {

    Result fill(const char* file_path) {
        Result result;
        std::string error_message;
        TestBuilderType* builder = load(file_path);
        bool is_valid = builder->is_valid(error_message);
        if (is_valid) {
            result.builder = builder;
            result.error_message = NULL;
        }
        else {
            result.builder = NULL;
            builder_keys->push_back(error_message);
            result.error_message = builder_keys->back().c_str();
        }
        return result;
    }

    const char* form(void* builder) {
        builder_keys->push_back(reinterpret_cast<TestBuilderType*>(builder)->form());
        return builder_keys->back().c_str();
    }

    int64_t length(void* builder) {
        return reinterpret_cast<TestBuilderType*>(builder)->length();
    }

    int64_t num_buffers(void* builder) {
        return awkward::num_buffers_helper(reinterpret_cast<TestBuilderType*>(builder));
    }

    const char* buffer_name(void* builder, int64_t index) {
        builder_keys->push_back(awkward::buffer_name_helper(reinterpret_cast<TestBuilderType*>(builder))[index]);
        return builder_keys->back().c_str();
    }

    int64_t buffer_size(void* builder, int64_t index) {
        return awkward::buffer_size_helper(reinterpret_cast<TestBuilderType*>(builder))[index];
    }

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index) {
        reinterpret_cast<TestBuilderType*>(from_builder)->to_buffer(to_buffer, name);
    }

    void deallocate(void* builder) {
        delete builder_keys;
        reinterpret_cast<TestBuilderType*>(builder)->clear();
    }
}

#endif // USE_TEST_

