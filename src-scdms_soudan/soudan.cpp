// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "soudan.h"

UserDefinedMap soudan_fields_map({
	{Field_soudan::soudanA__Zfile_hdr, "soudanA__Zfile_hdr"},
	{Field_soudan::soudanA__Zdetector_hdr, "soudanA__Zdetector_hdr"},
	{Field_soudan::soudanA__Zhdrs, "soudanA__Zhdrs"},
	{Field_soudan::soudanA__Zlogical_rcrds, "soudanA__Zlogical_rcrds"}});

UserDefinedMap two_word_file_header_fields_map({
	{Field_two_word_file_header::two_word_file_headerA__Zendian_indicator, "two_word_file_headerA__Zendian_indicator"},
	{Field_two_word_file_header::two_word_file_headerA__Zdata_format, "two_word_file_headerA__Zdata_format"}});

UserDefinedMap format_word_fields_map({
	{Field_format_word::format_wordA__Zdaq_major, "format_wordA__Zdaq_major"},
	{Field_format_word::format_wordA__Zdaq_minor, "format_wordA__Zdaq_minor"},
	{Field_format_word::format_wordA__Zdata_format_major, "format_wordA__Zdata_format_major"},
	{Field_format_word::format_wordA__Zdata_format_minor, "format_wordA__Zdata_format_minor"}});

UserDefinedMap detector_config_header_fields_map({
	{Field_detector_config_header::detector_config_headerA__Zheader_num, "detector_config_headerA__Zheader_num"},
	{Field_detector_config_header::detector_config_headerA__Zconfig_record_len, "detector_config_headerA__Zconfig_record_len"},
	{Field_detector_config_header::detector_config_headerA__Zrepeat_value, "detector_config_headerA__Zrepeat_value"}});

UserDefinedMap header_list_fields_map({
	{Field_header_list::header_listA__Zheader_num, "header_listA__Zheader_num"},
	{Field_header_list::header_listA__Zphonon_config, "header_listA__Zphonon_config"},
	{Field_header_list::header_listA__Zcharge_config, "header_listA__Zcharge_config"}});

UserDefinedMap phonon_config_header_fields_map({
	{Field_phonon_config_header::phonon_config_headerA__Zphonon_channel_config_record_len, "phonon_config_headerA__Zphonon_channel_config_record_len"},
	{Field_phonon_config_header::phonon_config_headerA__Zdetector_code, "phonon_config_headerA__Zdetector_code"},
	{Field_phonon_config_header::phonon_config_headerA__Ztower_num, "phonon_config_headerA__Ztower_num"},
	{Field_phonon_config_header::phonon_config_headerA__Zpost_amp_gain, "phonon_config_headerA__Zpost_amp_gain"},
	{Field_phonon_config_header::phonon_config_headerA__Zqet_bias, "phonon_config_headerA__Zqet_bias"},
	{Field_phonon_config_header::phonon_config_headerA__Zsquid_bias, "phonon_config_headerA__Zsquid_bias"},
	{Field_phonon_config_header::phonon_config_headerA__Zsquid_lockpoint, "phonon_config_headerA__Zsquid_lockpoint"},
	{Field_phonon_config_header::phonon_config_headerA__Zrtf_offset, "phonon_config_headerA__Zrtf_offset"},
	{Field_phonon_config_header::phonon_config_headerA__Zvariable_gain, "phonon_config_headerA__Zvariable_gain"},
	{Field_phonon_config_header::phonon_config_headerA__Zdelta_t, "phonon_config_headerA__Zdelta_t"},
	{Field_phonon_config_header::phonon_config_headerA__Ztrigger_time, "phonon_config_headerA__Ztrigger_time"},
	{Field_phonon_config_header::phonon_config_headerA__Ztrace_len, "phonon_config_headerA__Ztrace_len"}});

UserDefinedMap charge_config_header_fields_map({
	{Field_charge_config_header::charge_config_headerA__Zcharge_config_len, "charge_config_headerA__Zcharge_config_len"},
	{Field_charge_config_header::charge_config_headerA__Zdetector_code, "charge_config_headerA__Zdetector_code"},
	{Field_charge_config_header::charge_config_headerA__Ztower_num, "charge_config_headerA__Ztower_num"},
	{Field_charge_config_header::charge_config_headerA__Zchannel_post_amp, "charge_config_headerA__Zchannel_post_amp"},
	{Field_charge_config_header::charge_config_headerA__Zchannel_bias, "charge_config_headerA__Zchannel_bias"},
	{Field_charge_config_header::charge_config_headerA__Zrtf_offset, "charge_config_headerA__Zrtf_offset"},
	{Field_charge_config_header::charge_config_headerA__Zdelta_t, "charge_config_headerA__Zdelta_t"},
	{Field_charge_config_header::charge_config_headerA__Ztrigger_time, "charge_config_headerA__Ztrigger_time"},
	{Field_charge_config_header::charge_config_headerA__Ztrace_len, "charge_config_headerA__Ztrace_len"}});

UserDefinedMap logical_records_fields_map({
	{Field_logical_records::logical_recordsA__Zevent_hdr, "logical_recordsA__Zevent_hdr"},
	{Field_logical_records::logical_recordsA__Zadmin_rcrd, "logical_recordsA__Zadmin_rcrd"},
	{Field_logical_records::logical_recordsA__Ztrigger_rcrd, "logical_recordsA__Ztrigger_rcrd"},
	{Field_logical_records::logical_recordsA__Ztlb_trig_mask_rcrd, "logical_recordsA__Ztlb_trig_mask_rcrd"},
	{Field_logical_records::logical_recordsA__Zgps_data, "logical_recordsA__Zgps_data"},
	{Field_logical_records::logical_recordsA__Ztrace_rcrd, "logical_recordsA__Ztrace_rcrd"},
	{Field_logical_records::logical_recordsA__Zsoudan_buffer, "logical_recordsA__Zsoudan_buffer"}});

UserDefinedMap event_header_fields_map({
	{Field_event_header::event_headerA__Zevent_header_word, "event_headerA__Zevent_header_word"},
	{Field_event_header::event_headerA__Zevent_size, "event_headerA__Zevent_size"},
	{Field_event_header::event_headerA__Zevent_identifier, "event_headerA__Zevent_identifier"},
	{Field_event_header::event_headerA__Zevent_class, "event_headerA__Zevent_class"},
	{Field_event_header::event_headerA__Zevent_category, "event_headerA__Zevent_category"},
	{Field_event_header::event_headerA__Zevent_type, "event_headerA__Zevent_type"}});

UserDefinedMap administrative_record_fields_map({
	{Field_administrative_record::administrative_recordA__Zheader_num, "administrative_recordA__Zheader_num"},
	{Field_administrative_record::administrative_recordA__Zadmin_len, "administrative_recordA__Zadmin_len"},
	{Field_administrative_record::administrative_recordA__Zseries_num_1, "administrative_recordA__Zseries_num_1"},
	{Field_administrative_record::administrative_recordA__Zseries_num_2, "administrative_recordA__Zseries_num_2"},
	{Field_administrative_record::administrative_recordA__Zevent_num_in_series, "administrative_recordA__Zevent_num_in_series"},
	{Field_administrative_record::administrative_recordA__Zseconds_from_epoch, "administrative_recordA__Zseconds_from_epoch"},
	{Field_administrative_record::administrative_recordA__Ztime_from_last_event, "administrative_recordA__Ztime_from_last_event"},
	{Field_administrative_record::administrative_recordA__Zlive_time_from_last_event, "administrative_recordA__Zlive_time_from_last_event"}});

UserDefinedMap trigger_record_format_fields_map({
	{Field_trigger_record_format::trigger_record_formatA__Ztrigger_header, "trigger_record_formatA__Ztrigger_header"},
	{Field_trigger_record_format::trigger_record_formatA__Ztrigger_len, "trigger_record_formatA__Ztrigger_len"},
	{Field_trigger_record_format::trigger_record_formatA__Ztrigger_time, "trigger_record_formatA__Ztrigger_time"},
	{Field_trigger_record_format::trigger_record_formatA__Zindividual_trigger_mask, "trigger_record_formatA__Zindividual_trigger_mask"}});

UserDefinedMap tlb_trigger_mask_record_fields_map({
	{Field_tlb_trigger_mask_record::tlb_trigger_mask_recordA__Ztlb_mask_header, "tlb_trigger_mask_recordA__Ztlb_mask_header"},
	{Field_tlb_trigger_mask_record::tlb_trigger_mask_recordA__Ztlb_len, "tlb_trigger_mask_recordA__Ztlb_len"},
	{Field_tlb_trigger_mask_record::tlb_trigger_mask_recordA__Ztower_mask, "tlb_trigger_mask_recordA__Ztower_mask"}});

UserDefinedMap gps_data_fields_map({
	{Field_gps_data::gps_dataA__Ztlb_mask_header, "gps_dataA__Ztlb_mask_header"},
	{Field_gps_data::gps_dataA__Zlen, "gps_dataA__Zlen"},
	{Field_gps_data::gps_dataA__Zgps_year_day, "gps_dataA__Zgps_year_day"},
	{Field_gps_data::gps_dataA__Zgps_status_hour_minute_second, "gps_dataA__Zgps_status_hour_minute_second"},
	{Field_gps_data::gps_dataA__Zgps_microsecs_from_gps_second, "gps_dataA__Zgps_microsecs_from_gps_second"},
	{Field_gps_data::gps_dataA__Zlen_value, "gps_dataA__Zlen_value"}});

UserDefinedMap trace_data_fields_map({
	{Field_trace_data::trace_dataA__Ztrace_rcrd, "trace_dataA__Ztrace_rcrd"},
	{Field_trace_data::trace_dataA__Zsample_data, "trace_dataA__Zsample_data"}});

UserDefinedMap trace_record_fields_map({
	{Field_trace_record::trace_recordA__Zheader_num, "trace_recordA__Zheader_num"},
	{Field_trace_record::trace_recordA__Ztrace_len, "trace_recordA__Ztrace_len"},
	{Field_trace_record::trace_recordA__Ztrace_bookkeeping_header, "trace_recordA__Ztrace_bookkeeping_header"},
	{Field_trace_record::trace_recordA__Zbookkeeping_len, "trace_recordA__Zbookkeeping_len"},
	{Field_trace_record::trace_recordA__Zdigitizer_base_address, "trace_recordA__Zdigitizer_base_address"},
	{Field_trace_record::trace_recordA__Zdigitizer_channel, "trace_recordA__Zdigitizer_channel"},
	{Field_trace_record::trace_recordA__Zdetector_code, "trace_recordA__Zdetector_code"},
	{Field_trace_record::trace_recordA__Ztimebase_header, "trace_recordA__Ztimebase_header"},
	{Field_trace_record::trace_recordA__Ztimebase_len, "trace_recordA__Ztimebase_len"},
	{Field_trace_record::trace_recordA__Zt0_in_ns, "trace_recordA__Zt0_in_ns"},
	{Field_trace_record::trace_recordA__Zdelta_t_ns, "trace_recordA__Zdelta_t_ns"},
	{Field_trace_record::trace_recordA__Znum_of_points, "trace_recordA__Znum_of_points"},
	{Field_trace_record::trace_recordA__Zsecond_trace_header, "trace_recordA__Zsecond_trace_header"},
	{Field_trace_record::trace_recordA__Znum_samples, "trace_recordA__Znum_samples"}});

UserDefinedMap data_sample_fields_map({
	{Field_data_sample::data_sampleA__Zdata_selection, "data_sampleA__Zdata_selection"},
	{Field_data_sample::data_sampleA__Zsample_a, "data_sampleA__Zsample_a"},
	{Field_data_sample::data_sampleA__Zsample_b, "data_sampleA__Zsample_b"}});

UserDefinedMap soudan_history_buffer_fields_map({
	{Field_soudan_history_buffer::soudan_history_bufferA__Zhistory_buffer_header, "soudan_history_bufferA__Zhistory_buffer_header"},
	{Field_soudan_history_buffer::soudan_history_bufferA__Zhistory_buffer_len, "soudan_history_bufferA__Zhistory_buffer_len"},
	{Field_soudan_history_buffer::soudan_history_bufferA__Znum_time_nvt, "soudan_history_bufferA__Znum_time_nvt"},
	{Field_soudan_history_buffer::soudan_history_bufferA__Ztime_nvt, "soudan_history_bufferA__Ztime_nvt"},
	{Field_soudan_history_buffer::soudan_history_bufferA__Znum_veto_mask_words, "soudan_history_bufferA__Znum_veto_mask_words"},
	{Field_soudan_history_buffer::soudan_history_bufferA__Ztime_n_minus_veto_mask, "soudan_history_bufferA__Ztime_n_minus_veto_mask"},
	{Field_soudan_history_buffer::soudan_history_bufferA__Znum_trigger_times, "soudan_history_bufferA__Znum_trigger_times"},
	{Field_soudan_history_buffer::soudan_history_bufferA__Ztimes, "soudan_history_bufferA__Ztimes"},
	{Field_soudan_history_buffer::soudan_history_bufferA__Znum_trigger_mask_words_per_time, "soudan_history_bufferA__Znum_trigger_mask_words_per_time"},
	{Field_soudan_history_buffer::soudan_history_bufferA__Ztimes_minus_trigger_mask, "soudan_history_bufferA__Ztimes_minus_trigger_mask"}});

soudan_t::soudan_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_file_hdr = 0;
    m_detector_hdr = 0;
    m_hdrs = 0;
    m_logical_rcrds = 0;

    soudan_builder.set_fields(soudan_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::_read() {
    auto& two_word_file_header_recordbuilder = soudan_builder.content<Field_soudan::soudanA__Zfile_hdr>();
    m_file_hdr = new two_word_file_header_t(two_word_file_header_recordbuilder, m__io, this, m__root);
    auto& detector_config_header_recordbuilder = soudan_builder.content<Field_soudan::soudanA__Zdetector_hdr>();
    m_detector_hdr = new detector_config_header_t(detector_config_header_recordbuilder, m__io, this, m__root);
    m_hdrs = new std::vector<header_list_t*>();
    const int l_hdrs = detector_hdr()->repeat_value();
    auto& hdrs_listoffsetbuilder = soudan_builder.content<Field_soudan::soudanA__Zhdrs>();
    hdrs_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_hdrs; i++) {
        auto& header_list_recordbuilder = soudan_builder.content<Field_soudan::soudanA__Zhdrs>().content();
        m_hdrs->push_back(new header_list_t(header_list_recordbuilder, m__io, this, m__root));
    }
    hdrs_listoffsetbuilder.end_list();
    m_logical_rcrds = new std::vector<logical_records_t*>();
    {
        int i = 0;
        auto& logical_rcrds_listoffsetbuilder = soudan_builder.content<Field_soudan::soudanA__Zlogical_rcrds>();
        logical_rcrds_listoffsetbuilder.begin_list();
        while (!m__io->is_eof()) {
            auto& logical_records_recordbuilder = soudan_builder.content<Field_soudan::soudanA__Zlogical_rcrds>().content();
            m_logical_rcrds->push_back(new logical_records_t(logical_records_recordbuilder, m__io, this, m__root));
            i++;
        }
        logical_rcrds_listoffsetbuilder.end_list();
    }
}

soudan_t::~soudan_t() {
    _clean_up();
}

void soudan_t::_clean_up() {
    if (m_file_hdr) {
        delete m_file_hdr; m_file_hdr = 0;
    }
    if (m_detector_hdr) {
        delete m_detector_hdr; m_detector_hdr = 0;
    }
    if (m_hdrs) {
        for (std::vector<header_list_t*>::iterator it = m_hdrs->begin(); it != m_hdrs->end(); ++it) {
            delete *it;
        }
        delete m_hdrs; m_hdrs = 0;
    }
    if (m_logical_rcrds) {
        for (std::vector<logical_records_t*>::iterator it = m_logical_rcrds->begin(); it != m_logical_rcrds->end(); ++it) {
            delete *it;
        }
        delete m_logical_rcrds; m_logical_rcrds = 0;
    }
}

soudan_t::logical_records_t::logical_records_t(Logical_recordsBuilderType builder, kaitai::kstream* p__io, soudan_t* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io),
	logical_records_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_event_hdr = 0;
    m_admin_rcrd = 0;
    m_trigger_rcrd = 0;
    m_tlb_trig_mask_rcrd = 0;
    m_gps_data = 0;
    m_trace_rcrd = 0;
    m_soudan_buffer = 0;

    logical_records_builder.set_fields(logical_records_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::logical_records_t::_read() {
    auto& event_header_recordbuilder = logical_records_builder.content<Field_logical_records::logical_recordsA__Zevent_hdr>();
    m_event_hdr = new event_header_t(event_header_recordbuilder, m__io, this, m__root);
    auto& administrative_record_recordbuilder = logical_records_builder.content<Field_logical_records::logical_recordsA__Zadmin_rcrd>();
    m_admin_rcrd = new administrative_record_t(administrative_record_recordbuilder, m__io, this, m__root);
    auto& trigger_record_format_recordbuilder = logical_records_builder.content<Field_logical_records::logical_recordsA__Ztrigger_rcrd>();
    m_trigger_rcrd = new trigger_record_format_t(trigger_record_format_recordbuilder, m__io, this, m__root);
    auto& tlb_trigger_mask_record_recordbuilder = logical_records_builder.content<Field_logical_records::logical_recordsA__Ztlb_trig_mask_rcrd>();
    m_tlb_trig_mask_rcrd = new tlb_trigger_mask_record_t(tlb_trigger_mask_record_recordbuilder, m__io, this, m__root);
    auto& gps_data_recordbuilder = logical_records_builder.content<Field_logical_records::logical_recordsA__Zgps_data>();
    m_gps_data = new gps_data_t(gps_data_recordbuilder, m__io, this, m__root);
    m_trace_rcrd = new std::vector<trace_data_t*>();
    const int l_trace_rcrd = _root()->detector_hdr()->repeat_value();
    auto& trace_rcrd_listoffsetbuilder = logical_records_builder.content<Field_logical_records::logical_recordsA__Ztrace_rcrd>();
    trace_rcrd_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_trace_rcrd; i++) {
        auto& trace_data_recordbuilder = logical_records_builder.content<Field_logical_records::logical_recordsA__Ztrace_rcrd>().content();
        m_trace_rcrd->push_back(new trace_data_t(trace_data_recordbuilder, m__io, this, m__root));
    }
    trace_rcrd_listoffsetbuilder.end_list();
    auto& soudan_history_buffer_recordbuilder = logical_records_builder.content<Field_logical_records::logical_recordsA__Zsoudan_buffer>();
    m_soudan_buffer = new soudan_history_buffer_t(soudan_history_buffer_recordbuilder, m__io, this, m__root);
}

soudan_t::logical_records_t::~logical_records_t() {
    _clean_up();
}

void soudan_t::logical_records_t::_clean_up() {
    if (m_event_hdr) {
        delete m_event_hdr; m_event_hdr = 0;
    }
    if (m_admin_rcrd) {
        delete m_admin_rcrd; m_admin_rcrd = 0;
    }
    if (m_trigger_rcrd) {
        delete m_trigger_rcrd; m_trigger_rcrd = 0;
    }
    if (m_tlb_trig_mask_rcrd) {
        delete m_tlb_trig_mask_rcrd; m_tlb_trig_mask_rcrd = 0;
    }
    if (m_gps_data) {
        delete m_gps_data; m_gps_data = 0;
    }
    if (m_trace_rcrd) {
        for (std::vector<trace_data_t*>::iterator it = m_trace_rcrd->begin(); it != m_trace_rcrd->end(); ++it) {
            delete *it;
        }
        delete m_trace_rcrd; m_trace_rcrd = 0;
    }
    if (m_soudan_buffer) {
        delete m_soudan_buffer; m_soudan_buffer = 0;
    }
}

soudan_t::trace_record_t::trace_record_t(Trace_recordBuilderType builder, kaitai::kstream* p__io, soudan_t::trace_data_t* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io),
	trace_record_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    trace_record_builder.set_fields(trace_record_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::trace_record_t::_read() {
    m_header_num = m__io->read_u4le();
    auto& header_num_builder = trace_record_builder.content<Field_trace_record::trace_recordA__Zheader_num>();
    header_num_builder.append(m_header_num);
    m_trace_len = m__io->read_u4le();
    auto& trace_len_builder = trace_record_builder.content<Field_trace_record::trace_recordA__Ztrace_len>();
    trace_len_builder.append(m_trace_len);
    m_trace_bookkeeping_header = m__io->read_u4le();
    auto& trace_bookkeeping_header_builder = trace_record_builder.content<Field_trace_record::trace_recordA__Ztrace_bookkeeping_header>();
    trace_bookkeeping_header_builder.append(m_trace_bookkeeping_header);
    m_bookkeeping_len = m__io->read_u4le();
    auto& bookkeeping_len_builder = trace_record_builder.content<Field_trace_record::trace_recordA__Zbookkeeping_len>();
    bookkeeping_len_builder.append(m_bookkeeping_len);
    m_digitizer_base_address = m__io->read_u4le();
    auto& digitizer_base_address_builder = trace_record_builder.content<Field_trace_record::trace_recordA__Zdigitizer_base_address>();
    digitizer_base_address_builder.append(m_digitizer_base_address);
    m_digitizer_channel = m__io->read_u4le();
    auto& digitizer_channel_builder = trace_record_builder.content<Field_trace_record::trace_recordA__Zdigitizer_channel>();
    digitizer_channel_builder.append(m_digitizer_channel);
    m_detector_code = m__io->read_u4le();
    auto& detector_code_builder = trace_record_builder.content<Field_trace_record::trace_recordA__Zdetector_code>();
    detector_code_builder.append(m_detector_code);
    m_timebase_header = m__io->read_u4le();
    auto& timebase_header_builder = trace_record_builder.content<Field_trace_record::trace_recordA__Ztimebase_header>();
    timebase_header_builder.append(m_timebase_header);
    m_timebase_len = m__io->read_u4le();
    auto& timebase_len_builder = trace_record_builder.content<Field_trace_record::trace_recordA__Ztimebase_len>();
    timebase_len_builder.append(m_timebase_len);
    m_t0_in_ns = m__io->read_s4le();
    auto& t0_in_ns_builder = trace_record_builder.content<Field_trace_record::trace_recordA__Zt0_in_ns>();
    t0_in_ns_builder.append(m_t0_in_ns);
    m_delta_t_ns = m__io->read_u4le();
    auto& delta_t_ns_builder = trace_record_builder.content<Field_trace_record::trace_recordA__Zdelta_t_ns>();
    delta_t_ns_builder.append(m_delta_t_ns);
    m_num_of_points = m__io->read_u4le();
    auto& num_of_points_builder = trace_record_builder.content<Field_trace_record::trace_recordA__Znum_of_points>();
    num_of_points_builder.append(m_num_of_points);
    m_second_trace_header = m__io->read_u4le();
    auto& second_trace_header_builder = trace_record_builder.content<Field_trace_record::trace_recordA__Zsecond_trace_header>();
    second_trace_header_builder.append(m_second_trace_header);
    m_num_samples = m__io->read_u4le();
    auto& num_samples_builder = trace_record_builder.content<Field_trace_record::trace_recordA__Znum_samples>();
    num_samples_builder.append(m_num_samples);
}

soudan_t::trace_record_t::~trace_record_t() {
    _clean_up();
}

void soudan_t::trace_record_t::_clean_up() {
}

soudan_t::detector_config_header_t::detector_config_header_t(Detector_config_headerBuilderType builder, kaitai::kstream* p__io, soudan_t* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io),
	detector_config_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_repeat_value = false;

    detector_config_header_builder.set_fields(detector_config_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::detector_config_header_t::_read() {
    m_header_num = m__io->read_u4le();
    auto& header_num_builder = detector_config_header_builder.content<Field_detector_config_header::detector_config_headerA__Zheader_num>();
    header_num_builder.append(m_header_num);
    m_config_record_len = m__io->read_u4le();
    auto& config_record_len_builder = detector_config_header_builder.content<Field_detector_config_header::detector_config_headerA__Zconfig_record_len>();
    config_record_len_builder.append(m_config_record_len);
    auto& repeat_value_instancebuilder = detector_config_header_builder.content<Field_detector_config_header::detector_config_headerA__Zrepeat_value>();
    repeat_value_instancebuilder.append(repeat_value());
}

soudan_t::detector_config_header_t::~detector_config_header_t() {
    _clean_up();
}

void soudan_t::detector_config_header_t::_clean_up() {
}

int32_t soudan_t::detector_config_header_t::repeat_value() {
    if (f_repeat_value) {
        return m_repeat_value;
    }
    m_repeat_value = ((config_record_len() / 72) + (config_record_len() / 144));
    f_repeat_value = true;
    return m_repeat_value;
}

soudan_t::trace_data_t::trace_data_t(Trace_dataBuilderType builder, kaitai::kstream* p__io, soudan_t::logical_records_t* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io),
	trace_data_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_trace_rcrd = 0;
    m_sample_data = 0;

    trace_data_builder.set_fields(trace_data_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::trace_data_t::_read() {
    auto& trace_record_recordbuilder = trace_data_builder.content<Field_trace_data::trace_dataA__Ztrace_rcrd>();
    m_trace_rcrd = new trace_record_t(trace_record_recordbuilder, m__io, this, m__root);
    m_sample_data = new std::vector<data_sample_t*>();
    const int l_sample_data = (trace_rcrd()->num_samples() / 2);
    auto& sample_data_listoffsetbuilder = trace_data_builder.content<Field_trace_data::trace_dataA__Zsample_data>();
    sample_data_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_sample_data; i++) {
        auto& data_sample_recordbuilder = trace_data_builder.content<Field_trace_data::trace_dataA__Zsample_data>().content();
        m_sample_data->push_back(new data_sample_t(data_sample_recordbuilder, m__io, this, m__root));
    }
    sample_data_listoffsetbuilder.end_list();
}

soudan_t::trace_data_t::~trace_data_t() {
    _clean_up();
}

void soudan_t::trace_data_t::_clean_up() {
    if (m_trace_rcrd) {
        delete m_trace_rcrd; m_trace_rcrd = 0;
    }
    if (m_sample_data) {
        for (std::vector<data_sample_t*>::iterator it = m_sample_data->begin(); it != m_sample_data->end(); ++it) {
            delete *it;
        }
        delete m_sample_data; m_sample_data = 0;
    }
}

soudan_t::administrative_record_t::administrative_record_t(Administrative_recordBuilderType builder, kaitai::kstream* p__io, soudan_t::logical_records_t* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io),
	administrative_record_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    administrative_record_builder.set_fields(administrative_record_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::administrative_record_t::_read() {
    m_header_num = m__io->read_u4le();
    auto& header_num_builder = administrative_record_builder.content<Field_administrative_record::administrative_recordA__Zheader_num>();
    header_num_builder.append(m_header_num);
    m_admin_len = m__io->read_u4le();
    auto& admin_len_builder = administrative_record_builder.content<Field_administrative_record::administrative_recordA__Zadmin_len>();
    admin_len_builder.append(m_admin_len);
    m_series_num_1 = m__io->read_u4le();
    auto& series_num_1_builder = administrative_record_builder.content<Field_administrative_record::administrative_recordA__Zseries_num_1>();
    series_num_1_builder.append(m_series_num_1);
    m_series_num_2 = m__io->read_u4le();
    auto& series_num_2_builder = administrative_record_builder.content<Field_administrative_record::administrative_recordA__Zseries_num_2>();
    series_num_2_builder.append(m_series_num_2);
    m_event_num_in_series = m__io->read_u4le();
    auto& event_num_in_series_builder = administrative_record_builder.content<Field_administrative_record::administrative_recordA__Zevent_num_in_series>();
    event_num_in_series_builder.append(m_event_num_in_series);
    m_seconds_from_epoch = m__io->read_u4le();
    auto& seconds_from_epoch_builder = administrative_record_builder.content<Field_administrative_record::administrative_recordA__Zseconds_from_epoch>();
    seconds_from_epoch_builder.append(m_seconds_from_epoch);
    m_time_from_last_event = m__io->read_u4le();
    auto& time_from_last_event_builder = administrative_record_builder.content<Field_administrative_record::administrative_recordA__Ztime_from_last_event>();
    time_from_last_event_builder.append(m_time_from_last_event);
    m_live_time_from_last_event = m__io->read_u4le();
    auto& live_time_from_last_event_builder = administrative_record_builder.content<Field_administrative_record::administrative_recordA__Zlive_time_from_last_event>();
    live_time_from_last_event_builder.append(m_live_time_from_last_event);
}

soudan_t::administrative_record_t::~administrative_record_t() {
    _clean_up();
}

void soudan_t::administrative_record_t::_clean_up() {
}

soudan_t::two_word_file_header_t::two_word_file_header_t(Two_word_file_headerBuilderType builder, kaitai::kstream* p__io, soudan_t* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io),
	two_word_file_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_data_format = 0;

    two_word_file_header_builder.set_fields(two_word_file_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::two_word_file_header_t::_read() {
    m_endian_indicator = m__io->read_bytes(4);
    auto& endian_indicator_listoffsetbuilder = two_word_file_header_builder.content<Field_two_word_file_header::two_word_file_headerA__Zendian_indicator>();
    endian_indicator_listoffsetbuilder.begin_list();
    auto& endian_indicator_builder = endian_indicator_listoffsetbuilder.content();
    for (int i = 0; i < m_endian_indicator.length(); i++) {
        endian_indicator_builder.append(m_endian_indicator[i]);
    }
    endian_indicator_listoffsetbuilder.end_list();
    auto& format_word_recordbuilder = two_word_file_header_builder.content<Field_two_word_file_header::two_word_file_headerA__Zdata_format>();
    m_data_format = new format_word_t(format_word_recordbuilder, m__io, this, m__root);
}

soudan_t::two_word_file_header_t::~two_word_file_header_t() {
    _clean_up();
}

void soudan_t::two_word_file_header_t::_clean_up() {
    if (m_data_format) {
        delete m_data_format; m_data_format = 0;
    }
}

soudan_t::tlb_trigger_mask_record_t::tlb_trigger_mask_record_t(Tlb_trigger_mask_recordBuilderType builder, kaitai::kstream* p__io, soudan_t::logical_records_t* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io),
	tlb_trigger_mask_record_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_tower_mask = 0;

    tlb_trigger_mask_record_builder.set_fields(tlb_trigger_mask_record_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::tlb_trigger_mask_record_t::_read() {
    m_tlb_mask_header = m__io->read_u4le();
    auto& tlb_mask_header_builder = tlb_trigger_mask_record_builder.content<Field_tlb_trigger_mask_record::tlb_trigger_mask_recordA__Ztlb_mask_header>();
    tlb_mask_header_builder.append(m_tlb_mask_header);
    m_tlb_len = m__io->read_u4le();
    auto& tlb_len_builder = tlb_trigger_mask_record_builder.content<Field_tlb_trigger_mask_record::tlb_trigger_mask_recordA__Ztlb_len>();
    tlb_len_builder.append(m_tlb_len);
    m_tower_mask = new std::vector<uint32_t>();
    const int l_tower_mask = 6;
    auto& tower_mask_listoffsetbuilder = tlb_trigger_mask_record_builder.content<Field_tlb_trigger_mask_record::tlb_trigger_mask_recordA__Ztower_mask>();
    tower_mask_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_tower_mask; i++) {
        m_tower_mask->push_back(m__io->read_u4le());
        auto& tower_mask_builder = tower_mask_listoffsetbuilder.content();
        tower_mask_builder.append(m_tower_mask->at(m_tower_mask->size() - 1));
    }
    tower_mask_listoffsetbuilder.end_list();
}

soudan_t::tlb_trigger_mask_record_t::~tlb_trigger_mask_record_t() {
    _clean_up();
}

void soudan_t::tlb_trigger_mask_record_t::_clean_up() {
    if (m_tower_mask) {
        delete m_tower_mask; m_tower_mask = 0;
    }
}

soudan_t::event_header_t::event_header_t(Event_headerBuilderType builder, kaitai::kstream* p__io, soudan_t::logical_records_t* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io),
	event_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_event_identifier = false;
    f_event_class = false;
    f_event_category = false;
    f_event_type = false;

    event_header_builder.set_fields(event_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::event_header_t::_read() {
    m_event_header_word = m__io->read_u4le();
    auto& event_header_word_builder = event_header_builder.content<Field_event_header::event_headerA__Zevent_header_word>();
    event_header_word_builder.append(m_event_header_word);
    m_event_size = m__io->read_u4le();
    auto& event_size_builder = event_header_builder.content<Field_event_header::event_headerA__Zevent_size>();
    event_size_builder.append(m_event_size);
    auto& event_class_instancebuilder = event_header_builder.content<Field_event_header::event_headerA__Zevent_class>();
    event_class_instancebuilder.append(event_class());
    auto& event_identifier_instancebuilder = event_header_builder.content<Field_event_header::event_headerA__Zevent_identifier>();
    event_identifier_instancebuilder.append(event_identifier());
    auto& event_category_instancebuilder = event_header_builder.content<Field_event_header::event_headerA__Zevent_category>();
    event_category_instancebuilder.append(event_category());
    auto& event_type_instancebuilder = event_header_builder.content<Field_event_header::event_headerA__Zevent_type>();
    event_type_instancebuilder.append(event_type());
}

soudan_t::event_header_t::~event_header_t() {
    _clean_up();
}

void soudan_t::event_header_t::_clean_up() {
}

int32_t soudan_t::event_header_t::event_identifier() {
    if (f_event_identifier) {
        return m_event_identifier;
    }
    m_event_identifier = ((event_header_word() >> 16) & 65535);
    f_event_identifier = true;
    return m_event_identifier;
}

int32_t soudan_t::event_header_t::event_class() {
    if (f_event_class) {
        return m_event_class;
    }
    m_event_class = ((event_header_word() >> 8) & 15);
    f_event_class = true;
    return m_event_class;
}

int32_t soudan_t::event_header_t::event_category() {
    if (f_event_category) {
        return m_event_category;
    }
    m_event_category = ((event_header_word() >> 12) & 15);
    f_event_category = true;
    return m_event_category;
}

int32_t soudan_t::event_header_t::event_type() {
    if (f_event_type) {
        return m_event_type;
    }
    m_event_type = (event_header_word() & 255);
    f_event_type = true;
    return m_event_type;
}

soudan_t::format_word_t::format_word_t(Format_wordBuilderType builder, kaitai::kstream* p__io, soudan_t::two_word_file_header_t* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io),
	format_word_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    format_word_builder.set_fields(format_word_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::format_word_t::_read() {
    m_daq_major = m__io->read_u1();
    auto& daq_major_builder = format_word_builder.content<Field_format_word::format_wordA__Zdaq_major>();
    daq_major_builder.append(m_daq_major);
    m_daq_minor = m__io->read_u1();
    auto& daq_minor_builder = format_word_builder.content<Field_format_word::format_wordA__Zdaq_minor>();
    daq_minor_builder.append(m_daq_minor);
    m_data_format_major = m__io->read_u1();
    auto& data_format_major_builder = format_word_builder.content<Field_format_word::format_wordA__Zdata_format_major>();
    data_format_major_builder.append(m_data_format_major);
    m_data_format_minor = m__io->read_u1();
    auto& data_format_minor_builder = format_word_builder.content<Field_format_word::format_wordA__Zdata_format_minor>();
    data_format_minor_builder.append(m_data_format_minor);
}

soudan_t::format_word_t::~format_word_t() {
    _clean_up();
}

void soudan_t::format_word_t::_clean_up() {
}

soudan_t::soudan_history_buffer_t::soudan_history_buffer_t(Soudan_history_bufferBuilderType builder, kaitai::kstream* p__io, soudan_t::logical_records_t* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io),
	soudan_history_buffer_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_time_nvt = 0;
    m_time_n_minus_veto_mask = 0;
    m_times = 0;
    m_times_minus_trigger_mask = 0;

    soudan_history_buffer_builder.set_fields(soudan_history_buffer_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::soudan_history_buffer_t::_read() {
    m_history_buffer_header = m__io->read_u4le();
    auto& history_buffer_header_builder = soudan_history_buffer_builder.content<Field_soudan_history_buffer::soudan_history_bufferA__Zhistory_buffer_header>();
    history_buffer_header_builder.append(m_history_buffer_header);
    m_history_buffer_len = m__io->read_u4le();
    auto& history_buffer_len_builder = soudan_history_buffer_builder.content<Field_soudan_history_buffer::soudan_history_bufferA__Zhistory_buffer_len>();
    history_buffer_len_builder.append(m_history_buffer_len);
    m_num_time_nvt = m__io->read_u4le();
    auto& num_time_nvt_builder = soudan_history_buffer_builder.content<Field_soudan_history_buffer::soudan_history_bufferA__Znum_time_nvt>();
    num_time_nvt_builder.append(m_num_time_nvt);
    m_time_nvt = new std::vector<uint32_t>();
    const int l_time_nvt = num_time_nvt();
    auto& time_nvt_listoffsetbuilder = soudan_history_buffer_builder.content<Field_soudan_history_buffer::soudan_history_bufferA__Ztime_nvt>();
    time_nvt_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_time_nvt; i++) {
        m_time_nvt->push_back(m__io->read_u4le());
        auto& time_nvt_builder = time_nvt_listoffsetbuilder.content();
        time_nvt_builder.append(m_time_nvt->at(m_time_nvt->size() - 1));
    }
    time_nvt_listoffsetbuilder.end_list();
    m_num_veto_mask_words = m__io->read_u4le();
    auto& num_veto_mask_words_builder = soudan_history_buffer_builder.content<Field_soudan_history_buffer::soudan_history_bufferA__Znum_veto_mask_words>();
    num_veto_mask_words_builder.append(m_num_veto_mask_words);
    m_time_n_minus_veto_mask = new std::vector<uint32_t>();
    const int l_time_n_minus_veto_mask = (num_time_nvt() * num_veto_mask_words());
    auto& time_n_minus_veto_mask_listoffsetbuilder = soudan_history_buffer_builder.content<Field_soudan_history_buffer::soudan_history_bufferA__Ztime_n_minus_veto_mask>();
    time_n_minus_veto_mask_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_time_n_minus_veto_mask; i++) {
        m_time_n_minus_veto_mask->push_back(m__io->read_u4le());
        auto& time_n_minus_veto_mask_builder = time_n_minus_veto_mask_listoffsetbuilder.content();
        time_n_minus_veto_mask_builder.append(m_time_n_minus_veto_mask->at(m_time_n_minus_veto_mask->size() - 1));
    }
    time_n_minus_veto_mask_listoffsetbuilder.end_list();
    m_num_trigger_times = m__io->read_u4le();
    auto& num_trigger_times_builder = soudan_history_buffer_builder.content<Field_soudan_history_buffer::soudan_history_bufferA__Znum_trigger_times>();
    num_trigger_times_builder.append(m_num_trigger_times);
    m_times = new std::vector<uint32_t>();
    const int l_times = num_trigger_times();
    auto& times_listoffsetbuilder = soudan_history_buffer_builder.content<Field_soudan_history_buffer::soudan_history_bufferA__Ztimes>();
    times_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_times; i++) {
        m_times->push_back(m__io->read_u4le());
        auto& times_builder = times_listoffsetbuilder.content();
        times_builder.append(m_times->at(m_times->size() - 1));
    }
    times_listoffsetbuilder.end_list();
    m_num_trigger_mask_words_per_time = m__io->read_u4le();
    auto& num_trigger_mask_words_per_time_builder = soudan_history_buffer_builder.content<Field_soudan_history_buffer::soudan_history_bufferA__Znum_trigger_mask_words_per_time>();
    num_trigger_mask_words_per_time_builder.append(m_num_trigger_mask_words_per_time);
    m_times_minus_trigger_mask = new std::vector<uint32_t>();
    const int l_times_minus_trigger_mask = (num_trigger_mask_words_per_time() * num_trigger_times());
    auto& times_minus_trigger_mask_listoffsetbuilder = soudan_history_buffer_builder.content<Field_soudan_history_buffer::soudan_history_bufferA__Ztimes_minus_trigger_mask>();
    times_minus_trigger_mask_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_times_minus_trigger_mask; i++) {
        m_times_minus_trigger_mask->push_back(m__io->read_u4le());
        auto& times_minus_trigger_mask_builder = times_minus_trigger_mask_listoffsetbuilder.content();
        times_minus_trigger_mask_builder.append(m_times_minus_trigger_mask->at(m_times_minus_trigger_mask->size() - 1));
    }
    times_minus_trigger_mask_listoffsetbuilder.end_list();
}

soudan_t::soudan_history_buffer_t::~soudan_history_buffer_t() {
    _clean_up();
}

void soudan_t::soudan_history_buffer_t::_clean_up() {
    if (m_time_nvt) {
        delete m_time_nvt; m_time_nvt = 0;
    }
    if (m_time_n_minus_veto_mask) {
        delete m_time_n_minus_veto_mask; m_time_n_minus_veto_mask = 0;
    }
    if (m_times) {
        delete m_times; m_times = 0;
    }
    if (m_times_minus_trigger_mask) {
        delete m_times_minus_trigger_mask; m_times_minus_trigger_mask = 0;
    }
}

soudan_t::gps_data_t::gps_data_t(Gps_dataBuilderType builder, kaitai::kstream* p__io, soudan_t::logical_records_t* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io),
	gps_data_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_len_value = false;

    gps_data_builder.set_fields(gps_data_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::gps_data_t::_read() {
    m_tlb_mask_header = m__io->read_u4le();
    auto& tlb_mask_header_builder = gps_data_builder.content<Field_gps_data::gps_dataA__Ztlb_mask_header>();
    tlb_mask_header_builder.append(m_tlb_mask_header);
    m_len = m__io->read_u4le();
    auto& len_builder = gps_data_builder.content<Field_gps_data::gps_dataA__Zlen>();
    len_builder.append(m_len);
    m_gps_year_day = m__io->read_bytes(len_value());
    auto& gps_year_day_listoffsetbuilder = gps_data_builder.content<Field_gps_data::gps_dataA__Zgps_year_day>();
    gps_year_day_listoffsetbuilder.begin_list();
    auto& gps_year_day_builder = gps_year_day_listoffsetbuilder.content();
    for (int i = 0; i < m_gps_year_day.length(); i++) {
        gps_year_day_builder.append(m_gps_year_day[i]);
    }
    gps_year_day_listoffsetbuilder.end_list();
    m_gps_status_hour_minute_second = m__io->read_bytes(len_value());
    auto& gps_status_hour_minute_second_listoffsetbuilder = gps_data_builder.content<Field_gps_data::gps_dataA__Zgps_status_hour_minute_second>();
    gps_status_hour_minute_second_listoffsetbuilder.begin_list();
    auto& gps_status_hour_minute_second_builder = gps_status_hour_minute_second_listoffsetbuilder.content();
    for (int i = 0; i < m_gps_status_hour_minute_second.length(); i++) {
        gps_status_hour_minute_second_builder.append(m_gps_status_hour_minute_second[i]);
    }
    gps_status_hour_minute_second_listoffsetbuilder.end_list();
    m_gps_microsecs_from_gps_second = m__io->read_bytes(len_value());
    auto& gps_microsecs_from_gps_second_listoffsetbuilder = gps_data_builder.content<Field_gps_data::gps_dataA__Zgps_microsecs_from_gps_second>();
    gps_microsecs_from_gps_second_listoffsetbuilder.begin_list();
    auto& gps_microsecs_from_gps_second_builder = gps_microsecs_from_gps_second_listoffsetbuilder.content();
    for (int i = 0; i < m_gps_microsecs_from_gps_second.length(); i++) {
        gps_microsecs_from_gps_second_builder.append(m_gps_microsecs_from_gps_second[i]);
    }
    gps_microsecs_from_gps_second_listoffsetbuilder.end_list();
    auto& len_value_instancebuilder = gps_data_builder.content<Field_gps_data::gps_dataA__Zlen_value>();
    len_value_instancebuilder.append(len_value());
}

soudan_t::gps_data_t::~gps_data_t() {
    _clean_up();
}

void soudan_t::gps_data_t::_clean_up() {
}

int8_t soudan_t::gps_data_t::len_value() {
    if (f_len_value) {
        return m_len_value;
    }
    m_len_value = ((len() > 0) ? (4) : (0));
    f_len_value = true;
    return m_len_value;
}

soudan_t::phonon_config_header_t::phonon_config_header_t(Phonon_config_headerBuilderType builder, kaitai::kstream* p__io, soudan_t::header_list_t* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io),
	phonon_config_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    phonon_config_header_builder.set_fields(phonon_config_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::phonon_config_header_t::_read() {
    m_phonon_channel_config_record_len = m__io->read_u4le();
    auto& phonon_channel_config_record_len_builder = phonon_config_header_builder.content<Field_phonon_config_header::phonon_config_headerA__Zphonon_channel_config_record_len>();
    phonon_channel_config_record_len_builder.append(m_phonon_channel_config_record_len);
    m_detector_code = m__io->read_s4le();
    auto& detector_code_builder = phonon_config_header_builder.content<Field_phonon_config_header::phonon_config_headerA__Zdetector_code>();
    detector_code_builder.append(m_detector_code);
    m_tower_num = m__io->read_s4le();
    auto& tower_num_builder = phonon_config_header_builder.content<Field_phonon_config_header::phonon_config_headerA__Ztower_num>();
    tower_num_builder.append(m_tower_num);
    m_post_amp_gain = m__io->read_s4le();
    auto& post_amp_gain_builder = phonon_config_header_builder.content<Field_phonon_config_header::phonon_config_headerA__Zpost_amp_gain>();
    post_amp_gain_builder.append(m_post_amp_gain);
    m_qet_bias = m__io->read_s4le();
    auto& qet_bias_builder = phonon_config_header_builder.content<Field_phonon_config_header::phonon_config_headerA__Zqet_bias>();
    qet_bias_builder.append(m_qet_bias);
    m_squid_bias = m__io->read_s4le();
    auto& squid_bias_builder = phonon_config_header_builder.content<Field_phonon_config_header::phonon_config_headerA__Zsquid_bias>();
    squid_bias_builder.append(m_squid_bias);
    m_squid_lockpoint = m__io->read_s4le();
    auto& squid_lockpoint_builder = phonon_config_header_builder.content<Field_phonon_config_header::phonon_config_headerA__Zsquid_lockpoint>();
    squid_lockpoint_builder.append(m_squid_lockpoint);
    m_rtf_offset = m__io->read_s4le();
    auto& rtf_offset_builder = phonon_config_header_builder.content<Field_phonon_config_header::phonon_config_headerA__Zrtf_offset>();
    rtf_offset_builder.append(m_rtf_offset);
    m_variable_gain = m__io->read_s4le();
    auto& variable_gain_builder = phonon_config_header_builder.content<Field_phonon_config_header::phonon_config_headerA__Zvariable_gain>();
    variable_gain_builder.append(m_variable_gain);
    m_delta_t = m__io->read_s4le();
    auto& delta_t_builder = phonon_config_header_builder.content<Field_phonon_config_header::phonon_config_headerA__Zdelta_t>();
    delta_t_builder.append(m_delta_t);
    m_trigger_time = m__io->read_s4le();
    auto& trigger_time_builder = phonon_config_header_builder.content<Field_phonon_config_header::phonon_config_headerA__Ztrigger_time>();
    trigger_time_builder.append(m_trigger_time);
    m_trace_len = m__io->read_s4le();
    auto& trace_len_builder = phonon_config_header_builder.content<Field_phonon_config_header::phonon_config_headerA__Ztrace_len>();
    trace_len_builder.append(m_trace_len);
}

soudan_t::phonon_config_header_t::~phonon_config_header_t() {
    _clean_up();
}

void soudan_t::phonon_config_header_t::_clean_up() {
}

soudan_t::header_list_t::header_list_t(Header_listBuilderType builder, kaitai::kstream* p__io, soudan_t* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io),
	header_list_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_phonon_config = 0;
    m_charge_config = 0;

    header_list_builder.set_fields(header_list_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::header_list_t::_read() {
    m_header_num = m__io->read_u4le();
    auto& header_num_builder = header_list_builder.content<Field_header_list::header_listA__Zheader_num>();
    header_num_builder.append(m_header_num);
    n_phonon_config = true;
    auto& phonon_config_indexedoptionbuilder = header_list_builder.content<Field_header_list::header_listA__Zphonon_config>();
    if (header_num() == 65537) {
        phonon_config_indexedoptionbuilder.append_valid();
        n_phonon_config = false;
        auto& phonon_config_header_recordbuilder = header_list_builder.content<Field_header_list::header_listA__Zphonon_config>().content();
        m_phonon_config = new phonon_config_header_t(phonon_config_header_recordbuilder, m__io, this, m__root);
    }
    else {
        phonon_config_indexedoptionbuilder.append_invalid();
    }

    n_charge_config = true;
    auto& charge_config_indexedoptionbuilder = header_list_builder.content<Field_header_list::header_listA__Zcharge_config>();
    if (header_num() == 65538) {
        charge_config_indexedoptionbuilder.append_valid();
        n_charge_config = false;
        auto& charge_config_header_recordbuilder = header_list_builder.content<Field_header_list::header_listA__Zcharge_config>().content();
        m_charge_config = new charge_config_header_t(charge_config_header_recordbuilder, m__io, this, m__root);
    }
    else {
        charge_config_indexedoptionbuilder.append_invalid();
    }

}

soudan_t::header_list_t::~header_list_t() {
    _clean_up();
}

void soudan_t::header_list_t::_clean_up() {
    if (!n_phonon_config) {
        if (m_phonon_config) {
            delete m_phonon_config; m_phonon_config = 0;
        }
    }
    if (!n_charge_config) {
        if (m_charge_config) {
            delete m_charge_config; m_charge_config = 0;
        }
    }
}

soudan_t::charge_config_header_t::charge_config_header_t(Charge_config_headerBuilderType builder, kaitai::kstream* p__io, soudan_t::header_list_t* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io),
	charge_config_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    charge_config_header_builder.set_fields(charge_config_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::charge_config_header_t::_read() {
    m_charge_config_len = m__io->read_u4le();
    auto& charge_config_len_builder = charge_config_header_builder.content<Field_charge_config_header::charge_config_headerA__Zcharge_config_len>();
    charge_config_len_builder.append(m_charge_config_len);
    m_detector_code = m__io->read_s4le();
    auto& detector_code_builder = charge_config_header_builder.content<Field_charge_config_header::charge_config_headerA__Zdetector_code>();
    detector_code_builder.append(m_detector_code);
    m_tower_num = m__io->read_s4le();
    auto& tower_num_builder = charge_config_header_builder.content<Field_charge_config_header::charge_config_headerA__Ztower_num>();
    tower_num_builder.append(m_tower_num);
    m_channel_post_amp = m__io->read_s4le();
    auto& channel_post_amp_builder = charge_config_header_builder.content<Field_charge_config_header::charge_config_headerA__Zchannel_post_amp>();
    channel_post_amp_builder.append(m_channel_post_amp);
    m_channel_bias = m__io->read_s4le();
    auto& channel_bias_builder = charge_config_header_builder.content<Field_charge_config_header::charge_config_headerA__Zchannel_bias>();
    channel_bias_builder.append(m_channel_bias);
    m_rtf_offset = m__io->read_s4le();
    auto& rtf_offset_builder = charge_config_header_builder.content<Field_charge_config_header::charge_config_headerA__Zrtf_offset>();
    rtf_offset_builder.append(m_rtf_offset);
    m_delta_t = m__io->read_s4le();
    auto& delta_t_builder = charge_config_header_builder.content<Field_charge_config_header::charge_config_headerA__Zdelta_t>();
    delta_t_builder.append(m_delta_t);
    m_trigger_time = m__io->read_s4le();
    auto& trigger_time_builder = charge_config_header_builder.content<Field_charge_config_header::charge_config_headerA__Ztrigger_time>();
    trigger_time_builder.append(m_trigger_time);
    m_trace_len = m__io->read_s4le();
    auto& trace_len_builder = charge_config_header_builder.content<Field_charge_config_header::charge_config_headerA__Ztrace_len>();
    trace_len_builder.append(m_trace_len);
}

soudan_t::charge_config_header_t::~charge_config_header_t() {
    _clean_up();
}

void soudan_t::charge_config_header_t::_clean_up() {
}

soudan_t::data_sample_t::data_sample_t(Data_sampleBuilderType builder, kaitai::kstream* p__io, soudan_t::trace_data_t* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io),
	data_sample_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_sample_a = false;
    f_sample_b = false;

    data_sample_builder.set_fields(data_sample_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::data_sample_t::_read() {
    m_data_selection = m__io->read_u4le();
    auto& data_selection_builder = data_sample_builder.content<Field_data_sample::data_sampleA__Zdata_selection>();
    data_selection_builder.append(m_data_selection);
    auto& sample_b_instancebuilder = data_sample_builder.content<Field_data_sample::data_sampleA__Zsample_b>();
    sample_b_instancebuilder.append(sample_b());
    auto& sample_a_instancebuilder = data_sample_builder.content<Field_data_sample::data_sampleA__Zsample_a>();
    sample_a_instancebuilder.append(sample_a());
}

soudan_t::data_sample_t::~data_sample_t() {
    _clean_up();
}

void soudan_t::data_sample_t::_clean_up() {
}

int32_t soudan_t::data_sample_t::sample_a() {
    if (f_sample_a) {
        return m_sample_a;
    }
    m_sample_a = ((data_selection() >> 16) & 65535);
    f_sample_a = true;
    return m_sample_a;
}

int32_t soudan_t::data_sample_t::sample_b() {
    if (f_sample_b) {
        return m_sample_b;
    }
    m_sample_b = (data_selection() & 65535);
    f_sample_b = true;
    return m_sample_b;
}

soudan_t::trigger_record_format_t::trigger_record_format_t(Trigger_record_formatBuilderType builder, kaitai::kstream* p__io, soudan_t::logical_records_t* p__parent, soudan_t* p__root) : kaitai::kstruct(p__io),
	trigger_record_format_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_individual_trigger_mask = 0;

    trigger_record_format_builder.set_fields(trigger_record_format_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void soudan_t::trigger_record_format_t::_read() {
    m_trigger_header = m__io->read_u4le();
    auto& trigger_header_builder = trigger_record_format_builder.content<Field_trigger_record_format::trigger_record_formatA__Ztrigger_header>();
    trigger_header_builder.append(m_trigger_header);
    m_trigger_len = m__io->read_u4le();
    auto& trigger_len_builder = trigger_record_format_builder.content<Field_trigger_record_format::trigger_record_formatA__Ztrigger_len>();
    trigger_len_builder.append(m_trigger_len);
    m_trigger_time = m__io->read_u4le();
    auto& trigger_time_builder = trigger_record_format_builder.content<Field_trigger_record_format::trigger_record_formatA__Ztrigger_time>();
    trigger_time_builder.append(m_trigger_time);
    m_individual_trigger_mask = new std::vector<uint32_t>();
    const int l_individual_trigger_mask = 6;
    auto& individual_trigger_mask_listoffsetbuilder = trigger_record_format_builder.content<Field_trigger_record_format::trigger_record_formatA__Zindividual_trigger_mask>();
    individual_trigger_mask_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_individual_trigger_mask; i++) {
        m_individual_trigger_mask->push_back(m__io->read_u4le());
        auto& individual_trigger_mask_builder = individual_trigger_mask_listoffsetbuilder.content();
        individual_trigger_mask_builder.append(m_individual_trigger_mask->at(m_individual_trigger_mask->size() - 1));
    }
    individual_trigger_mask_listoffsetbuilder.end_list();
}

soudan_t::trigger_record_format_t::~trigger_record_format_t() {
    _clean_up();
}

void soudan_t::trigger_record_format_t::_clean_up() {
    if (m_individual_trigger_mask) {
        delete m_individual_trigger_mask; m_individual_trigger_mask = 0;
    }
}

#ifdef USE_SOUDAN_

SoudanBuilderType* load(std::string file_path) {
    std::ifstream infile(file_path, std::ifstream::binary);
    kaitai::kstream ks(&infile);
    builder_keys = new std::vector<std::string>();
    soudan_t* obj = new soudan_t(&ks);
    builder_map[file_path] = &(obj->soudan_builder);
    return builder_map[file_path];
}

extern "C" {

    Result fill(const char* file_path) {
        Result result;
        std::string error_message;
        SoudanBuilderType* builder = load(file_path);
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
        builder_keys->push_back(reinterpret_cast<SoudanBuilderType*>(builder)->form());
        return builder_keys->back().c_str();
    }

    int64_t length(void* builder) {
        return reinterpret_cast<SoudanBuilderType*>(builder)->length();
    }

    int64_t num_buffers(void* builder) {
        return awkward::num_buffers_helper(reinterpret_cast<SoudanBuilderType*>(builder));
    }

    const char* buffer_name(void* builder, int64_t index) {
        builder_keys->push_back(awkward::buffer_name_helper(reinterpret_cast<SoudanBuilderType*>(builder))[index]);
        return builder_keys->back().c_str();
    }

    int64_t buffer_size(void* builder, int64_t index) {
        return awkward::buffer_size_helper(reinterpret_cast<SoudanBuilderType*>(builder))[index];
    }

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index) {
        reinterpret_cast<SoudanBuilderType*>(from_builder)->to_buffer(to_buffer, name);
    }

    void deallocate(void* builder) {
        delete builder_keys;
        reinterpret_cast<SoudanBuilderType*>(builder)->clear();
    }
}

#endif // USE_SOUDAN_

