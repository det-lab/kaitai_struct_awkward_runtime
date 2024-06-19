// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "scdms.h"

UserDefinedMap scdms_fields_map({
	{Field_scdms::scdmsA__Zscdms_hdr, "scdmsA__Zscdms_hdr"},
	{Field_scdms::scdmsA__Zn_triggers, "scdmsA__Zn_triggers"},
	{Field_scdms::scdmsA__Zscdms_footer, "scdmsA__Zscdms_footer"}});

UserDefinedMap scdms_header_fields_map({
	{Field_scdms_header::scdms_headerA__Zpacked, "scdms_headerA__Zpacked"},
	{Field_scdms_header::scdms_headerA__Zoverall_header, "scdms_headerA__Zoverall_header"},
	{Field_scdms_header::scdms_headerA__Ztotal_triggers, "scdms_headerA__Ztotal_triggers"},
	{Field_scdms_header::scdms_headerA__Zformat_version, "scdms_headerA__Zformat_version"}});

UserDefinedMap v_two_trigger_fields_map({
	{Field_v_two_trigger::v_two_triggerA__Ztrigger_meta, "v_two_triggerA__Ztrigger_meta"},
	{Field_v_two_trigger::v_two_triggerA__Zn_primitives, "v_two_triggerA__Zn_primitives"},
	{Field_v_two_trigger::v_two_triggerA__Zpacked, "v_two_triggerA__Zpacked"},
	{Field_v_two_trigger::v_two_triggerA__Zn_detectors, "v_two_triggerA__Zn_detectors"},
	{Field_v_two_trigger::v_two_triggerA__Zdetectors_in_event, "v_two_triggerA__Zdetectors_in_event"},
	{Field_v_two_trigger::v_two_triggerA__Zdet_header, "v_two_triggerA__Zdet_header"}});

UserDefinedMap v_two_trig_meta_fields_map({
	{Field_v_two_trig_meta::v_two_trig_metaA__Zpacked_1, "v_two_trig_metaA__Zpacked_1"},
	{Field_v_two_trig_meta::v_two_trig_metaA__Ztrigger_id, "v_two_trig_metaA__Ztrigger_id"},
	{Field_v_two_trig_meta::v_two_trig_metaA__Zevent_number, "v_two_trig_metaA__Zevent_number"},
	{Field_v_two_trig_meta::v_two_trig_metaA__Zpacked_2, "v_two_trig_metaA__Zpacked_2"},
	{Field_v_two_trig_meta::v_two_trig_metaA__Zglobal_timestamp_low, "v_two_trig_metaA__Zglobal_timestamp_low"},
	{Field_v_two_trig_meta::v_two_trig_metaA__Zglobal_timestamp_high, "v_two_trig_metaA__Zglobal_timestamp_high"},
	{Field_v_two_trig_meta::v_two_trig_metaA__Zpacked_3, "v_two_trig_metaA__Zpacked_3"},
	{Field_v_two_trig_meta::v_two_trig_metaA__Zlength_of_entry, "v_two_trig_metaA__Zlength_of_entry"},
	{Field_v_two_trig_meta::v_two_trig_metaA__Zprim_header, "v_two_trig_metaA__Zprim_header"},
	{Field_v_two_trig_meta::v_two_trig_metaA__Znum_primitives, "v_two_trig_metaA__Znum_primitives"},
	{Field_v_two_trig_meta::v_two_trig_metaA__Ztrigger_type, "v_two_trig_metaA__Ztrigger_type"},
	{Field_v_two_trig_meta::v_two_trig_metaA__Zreadout_bitmask, "v_two_trig_metaA__Zreadout_bitmask"},
	{Field_v_two_trig_meta::v_two_trig_metaA__Zevent_size, "v_two_trig_metaA__Zevent_size"},
	{Field_v_two_trig_meta::v_two_trig_metaA__Ztrig_header, "v_two_trig_metaA__Ztrig_header"}});

UserDefinedMap primitive_fields_map({
	{Field_primitive::primitiveA__Zpacked_1, "primitiveA__Zpacked_1"},
	{Field_primitive::primitiveA__Zut, "primitiveA__Zut"},
	{Field_primitive::primitiveA__Zpacked_2, "primitiveA__Zpacked_2"},
	{Field_primitive::primitiveA__Zrt_run_time, "primitiveA__Zrt_run_time"},
	{Field_primitive::primitiveA__Ztrig_time, "primitiveA__Ztrig_time"},
	{Field_primitive::primitiveA__Zpacked_3, "primitiveA__Zpacked_3"},
	{Field_primitive::primitiveA__Zpeak_amplitude, "primitiveA__Zpeak_amplitude"},
	{Field_primitive::primitiveA__Ztrig_word, "primitiveA__Ztrig_word"},
	{Field_primitive::primitiveA__Zrt_time_fraction, "primitiveA__Zrt_time_fraction"},
	{Field_primitive::primitiveA__Zpileup, "primitiveA__Zpileup"},
	{Field_primitive::primitiveA__Zdet_id, "primitiveA__Zdet_id"},
	{Field_primitive::primitiveA__Ztrig_time_fraction, "primitiveA__Ztrig_time_fraction"},
	{Field_primitive::primitiveA__Zmask_pairs, "primitiveA__Zmask_pairs"},
	{Field_primitive::primitiveA__Zindex, "primitiveA__Zindex"},
	{Field_primitive::primitiveA__Ztrig_status, "primitiveA__Ztrig_status"},
	{Field_primitive::primitiveA__Zprim_dcrc_header, "primitiveA__Zprim_dcrc_header"}});

UserDefinedMap detector_fields_map({
	{Field_detector::detectorA__Zdetector_meta, "detectorA__Zdetector_meta"},
	{Field_detector::detectorA__Zn_channels, "detectorA__Zn_channels"}});

UserDefinedMap det_meta_fields_map({
	{Field_det_meta::det_metaA__Zpacked_1, "det_metaA__Zpacked_1"},
	{Field_det_meta::det_metaA__Zdcrc0_version, "det_metaA__Zdcrc0_version"},
	{Field_det_meta::det_metaA__Zdcrc0_serial_num, "det_metaA__Zdcrc0_serial_num"},
	{Field_det_meta::det_metaA__Zdcrc1_version, "det_metaA__Zdcrc1_version"},
	{Field_det_meta::det_metaA__Zdcrc1_serial_num, "det_metaA__Zdcrc1_serial_num"},
	{Field_det_meta::det_metaA__Zpacked_2, "det_metaA__Zpacked_2"},
	{Field_det_meta::det_metaA__Zpacked_3, "det_metaA__Zpacked_3"},
	{Field_det_meta::det_metaA__Zpacked_4, "det_metaA__Zpacked_4"},
	{Field_det_meta::det_metaA__Zreadout_header, "det_metaA__Zreadout_header"},
	{Field_det_meta::det_metaA__Zseries_time_fraction, "det_metaA__Zseries_time_fraction"},
	{Field_det_meta::det_metaA__Znum_channels_to_follow, "det_metaA__Znum_channels_to_follow"},
	{Field_det_meta::det_metaA__Zdet_id, "det_metaA__Zdet_id"},
	{Field_det_meta::det_metaA__Zdet_type, "det_metaA__Zdet_type"},
	{Field_det_meta::det_metaA__Zindex, "det_metaA__Zindex"},
	{Field_det_meta::det_metaA__Zdcrc_header, "det_metaA__Zdcrc_header"},
	{Field_det_meta::det_metaA__Zchannel_header, "det_metaA__Zchannel_header"},
	{Field_det_meta::det_metaA__Zseries_time, "det_metaA__Zseries_time"},
	{Field_det_meta::det_metaA__Zreadout_status, "det_metaA__Zreadout_status"}});

UserDefinedMap channel_fields_map({
	{Field_channel::channelA__Zpacked, "channelA__Zpacked"},
	{Field_channel::channelA__Zn_pre_pulse_samples, "channelA__Zn_pre_pulse_samples"},
	{Field_channel::channelA__Zn_on_pulse_samples, "channelA__Zn_on_pulse_samples"},
	{Field_channel::channelA__Zn_post_pulse_samples, "channelA__Zn_post_pulse_samples"},
	{Field_channel::channelA__Zsample_rate_low, "channelA__Zsample_rate_low"},
	{Field_channel::channelA__Zsample_rate_high, "channelA__Zsample_rate_high"},
	{Field_channel::channelA__Zsample, "channelA__Zsample"},
	{Field_channel::channelA__Zch_type, "channelA__Zch_type"},
	{Field_channel::channelA__Zch_num, "channelA__Zch_num"},
	{Field_channel::channelA__Zpre_trigger_offset, "channelA__Zpre_trigger_offset"},
	{Field_channel::channelA__Zchnl_header, "channelA__Zchnl_header"}});

UserDefinedMap trailer_fields_map({
	{Field_trailer::trailerA__Zpacked, "trailerA__Zpacked"},
	{Field_trailer::trailerA__Zn_preceeding_triggers, "trailerA__Zn_preceeding_triggers"},
	{Field_trailer::trailerA__Ztrailer_header, "trailerA__Ztrailer_header"}});

scdms_t::scdms_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, scdms_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_scdms_hdr = 0;
    m_n_triggers = 0;
    m_scdms_footer = 0;

    scdms_builder.set_fields(scdms_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void scdms_t::_read() {
    auto& scdms_header_recordbuilder = scdms_builder.content<Field_scdms::scdmsA__Zscdms_hdr>();
    m_scdms_hdr = new scdms_header_t(scdms_header_recordbuilder, m__io, this, m__root);
    m_n_triggers = new std::vector<v_two_trigger_t*>();
    const int l_n_triggers = scdms_hdr()->total_triggers();
    auto& n_triggers_listoffsetbuilder = scdms_builder.content<Field_scdms::scdmsA__Zn_triggers>();
    n_triggers_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_n_triggers; i++) {
        auto& v_two_trigger_recordbuilder = scdms_builder.content<Field_scdms::scdmsA__Zn_triggers>().content();
        m_n_triggers->push_back(new v_two_trigger_t(v_two_trigger_recordbuilder, m__io, this, m__root));
    }
    n_triggers_listoffsetbuilder.end_list();
    auto& trailer_recordbuilder = scdms_builder.content<Field_scdms::scdmsA__Zscdms_footer>();
    m_scdms_footer = new trailer_t(trailer_recordbuilder, m__io, this, m__root);
}

scdms_t::~scdms_t() {
    _clean_up();
}

void scdms_t::_clean_up() {
    if (m_scdms_hdr) {
        delete m_scdms_hdr; m_scdms_hdr = 0;
    }
    if (m_n_triggers) {
        for (std::vector<v_two_trigger_t*>::iterator it = m_n_triggers->begin(); it != m_n_triggers->end(); ++it) {
            delete *it;
        }
        delete m_n_triggers; m_n_triggers = 0;
    }
    if (m_scdms_footer) {
        delete m_scdms_footer; m_scdms_footer = 0;
    }
}

scdms_t::v_two_trigger_t::v_two_trigger_t(V_two_triggerBuilderType builder, kaitai::kstream* p__io, scdms_t* p__parent, scdms_t* p__root) : kaitai::kstruct(p__io),
	v_two_trigger_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_trigger_meta = 0;
    m_n_primitives = 0;
    m_n_detectors = 0;
    f_detectors_in_event = false;
    f_det_header = false;

    v_two_trigger_builder.set_fields(v_two_trigger_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void scdms_t::v_two_trigger_t::_read() {
    auto& v_two_trig_meta_recordbuilder = v_two_trigger_builder.content<Field_v_two_trigger::v_two_triggerA__Ztrigger_meta>();
    m_trigger_meta = new v_two_trig_meta_t(v_two_trig_meta_recordbuilder, m__io, this, m__root);
    m_n_primitives = new std::vector<primitive_t*>();
    const int l_n_primitives = trigger_meta()->num_primitives();
    auto& n_primitives_listoffsetbuilder = v_two_trigger_builder.content<Field_v_two_trigger::v_two_triggerA__Zn_primitives>();
    n_primitives_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_n_primitives; i++) {
        auto& primitive_recordbuilder = v_two_trigger_builder.content<Field_v_two_trigger::v_two_triggerA__Zn_primitives>().content();
        m_n_primitives->push_back(new primitive_t(primitive_recordbuilder, m__io, this, m__root));
    }
    n_primitives_listoffsetbuilder.end_list();
    m_packed = m__io->read_u4le();
    auto& packed_builder = v_two_trigger_builder.content<Field_v_two_trigger::v_two_triggerA__Zpacked>();
    packed_builder.append(m_packed);
    m_n_detectors = new std::vector<detector_t*>();
    const int l_n_detectors = detectors_in_event();
    auto& n_detectors_listoffsetbuilder = v_two_trigger_builder.content<Field_v_two_trigger::v_two_triggerA__Zn_detectors>();
    n_detectors_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_n_detectors; i++) {
        auto& detector_recordbuilder = v_two_trigger_builder.content<Field_v_two_trigger::v_two_triggerA__Zn_detectors>().content();
        m_n_detectors->push_back(new detector_t(detector_recordbuilder, m__io, this, m__root));
    }
    n_detectors_listoffsetbuilder.end_list();
    auto& det_header_instancebuilder = v_two_trigger_builder.content<Field_v_two_trigger::v_two_triggerA__Zdet_header>();
    det_header_instancebuilder.append(det_header());
    auto& detectors_in_event_instancebuilder = v_two_trigger_builder.content<Field_v_two_trigger::v_two_triggerA__Zdetectors_in_event>();
    detectors_in_event_instancebuilder.append(detectors_in_event());
}

scdms_t::v_two_trigger_t::~v_two_trigger_t() {
    _clean_up();
}

void scdms_t::v_two_trigger_t::_clean_up() {
    if (m_trigger_meta) {
        delete m_trigger_meta; m_trigger_meta = 0;
    }
    if (m_n_primitives) {
        for (std::vector<primitive_t*>::iterator it = m_n_primitives->begin(); it != m_n_primitives->end(); ++it) {
            delete *it;
        }
        delete m_n_primitives; m_n_primitives = 0;
    }
    if (m_n_detectors) {
        for (std::vector<detector_t*>::iterator it = m_n_detectors->begin(); it != m_n_detectors->end(); ++it) {
            delete *it;
        }
        delete m_n_detectors; m_n_detectors = 0;
    }
}

int32_t scdms_t::v_two_trigger_t::detectors_in_event() {
    if (f_detectors_in_event) {
        return m_detectors_in_event;
    }
    m_detectors_in_event = (packed() & 268435455);
    f_detectors_in_event = true;
    return m_detectors_in_event;
}

scdms_t::headers_t scdms_t::v_two_trigger_t::det_header() {
    if (f_det_header) {
        return m_det_header;
    }
    m_det_header = static_cast<scdms_t::headers_t>(((packed() & 4026531840UL) >> 28));
    f_det_header = true;
    return m_det_header;
}

scdms_t::channel_t::channel_t(ChannelBuilderType builder, kaitai::kstream* p__io, scdms_t::detector_t* p__parent, scdms_t* p__root) : kaitai::kstruct(p__io),
	channel_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_sample = 0;
    f_ch_type = false;
    f_ch_num = false;
    f_pre_trigger_offset = false;
    f_chnl_header = false;

    channel_builder.set_fields(channel_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void scdms_t::channel_t::_read() {
    m_packed = m__io->read_u4le();
    auto& packed_builder = channel_builder.content<Field_channel::channelA__Zpacked>();
    packed_builder.append(m_packed);
    m_n_pre_pulse_samples = m__io->read_u4le();
    auto& n_pre_pulse_samples_builder = channel_builder.content<Field_channel::channelA__Zn_pre_pulse_samples>();
    n_pre_pulse_samples_builder.append(m_n_pre_pulse_samples);
    m_n_on_pulse_samples = m__io->read_u4le();
    auto& n_on_pulse_samples_builder = channel_builder.content<Field_channel::channelA__Zn_on_pulse_samples>();
    n_on_pulse_samples_builder.append(m_n_on_pulse_samples);
    m_n_post_pulse_samples = m__io->read_u4le();
    auto& n_post_pulse_samples_builder = channel_builder.content<Field_channel::channelA__Zn_post_pulse_samples>();
    n_post_pulse_samples_builder.append(m_n_post_pulse_samples);
    m_sample_rate_low = m__io->read_u2le();
    auto& sample_rate_low_builder = channel_builder.content<Field_channel::channelA__Zsample_rate_low>();
    sample_rate_low_builder.append(m_sample_rate_low);
    m_sample_rate_high = m__io->read_u2le();
    auto& sample_rate_high_builder = channel_builder.content<Field_channel::channelA__Zsample_rate_high>();
    sample_rate_high_builder.append(m_sample_rate_high);
    m_sample = new std::vector<uint16_t>();
    const int l_sample = ((n_pre_pulse_samples() + n_on_pulse_samples()) + n_post_pulse_samples());
    auto& sample_listoffsetbuilder = channel_builder.content<Field_channel::channelA__Zsample>();
    sample_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_sample; i++) {
        m_sample->push_back(m__io->read_u2le());
        auto& sample_builder = sample_listoffsetbuilder.content();
        sample_builder.append(m_sample->at(m_sample->size() - 1));
    }
    sample_listoffsetbuilder.end_list();
    auto& ch_type_instancebuilder = channel_builder.content<Field_channel::channelA__Zch_type>();
    ch_type_instancebuilder.append(ch_type());
    auto& pre_trigger_offset_instancebuilder = channel_builder.content<Field_channel::channelA__Zpre_trigger_offset>();
    pre_trigger_offset_instancebuilder.append(pre_trigger_offset());
    auto& chnl_header_instancebuilder = channel_builder.content<Field_channel::channelA__Zchnl_header>();
    chnl_header_instancebuilder.append(chnl_header());
    auto& ch_num_instancebuilder = channel_builder.content<Field_channel::channelA__Zch_num>();
    ch_num_instancebuilder.append(ch_num());
}

scdms_t::channel_t::~channel_t() {
    _clean_up();
}

void scdms_t::channel_t::_clean_up() {
    if (m_sample) {
        delete m_sample; m_sample = 0;
    }
}

int32_t scdms_t::channel_t::ch_type() {
    if (f_ch_type) {
        return m_ch_type;
    }
    m_ch_type = (packed() & 3);
    f_ch_type = true;
    return m_ch_type;
}

int32_t scdms_t::channel_t::ch_num() {
    if (f_ch_num) {
        return m_ch_num;
    }
    m_ch_num = ((packed() & 60) >> 2);
    f_ch_num = true;
    return m_ch_num;
}

int32_t scdms_t::channel_t::pre_trigger_offset() {
    if (f_pre_trigger_offset) {
        return m_pre_trigger_offset;
    }
    m_pre_trigger_offset = ((packed() & 268435392) >> 6);
    f_pre_trigger_offset = true;
    return m_pre_trigger_offset;
}

scdms_t::headers_t scdms_t::channel_t::chnl_header() {
    if (f_chnl_header) {
        return m_chnl_header;
    }
    m_chnl_header = static_cast<scdms_t::headers_t>(((packed() & 4026531840UL) >> 28));
    f_chnl_header = true;
    return m_chnl_header;
}

scdms_t::detector_t::detector_t(DetectorBuilderType builder, kaitai::kstream* p__io, scdms_t::v_two_trigger_t* p__parent, scdms_t* p__root) : kaitai::kstruct(p__io),
	detector_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_detector_meta = 0;
    m_n_channels = 0;

    detector_builder.set_fields(detector_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void scdms_t::detector_t::_read() {
    auto& det_meta_recordbuilder = detector_builder.content<Field_detector::detectorA__Zdetector_meta>();
    m_detector_meta = new det_meta_t(det_meta_recordbuilder, m__io, this, m__root);
    m_n_channels = new std::vector<channel_t*>();
    const int l_n_channels = detector_meta()->num_channels_to_follow();
    auto& n_channels_listoffsetbuilder = detector_builder.content<Field_detector::detectorA__Zn_channels>();
    n_channels_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_n_channels; i++) {
        auto& channel_recordbuilder = detector_builder.content<Field_detector::detectorA__Zn_channels>().content();
        m_n_channels->push_back(new channel_t(channel_recordbuilder, m__io, this, m__root));
    }
    n_channels_listoffsetbuilder.end_list();
}

scdms_t::detector_t::~detector_t() {
    _clean_up();
}

void scdms_t::detector_t::_clean_up() {
    if (m_detector_meta) {
        delete m_detector_meta; m_detector_meta = 0;
    }
    if (m_n_channels) {
        for (std::vector<channel_t*>::iterator it = m_n_channels->begin(); it != m_n_channels->end(); ++it) {
            delete *it;
        }
        delete m_n_channels; m_n_channels = 0;
    }
}

scdms_t::scdms_header_t::scdms_header_t(Scdms_headerBuilderType builder, kaitai::kstream* p__io, scdms_t* p__parent, scdms_t* p__root) : kaitai::kstruct(p__io),
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

void scdms_t::scdms_header_t::_read() {
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

scdms_t::scdms_header_t::~scdms_header_t() {
    _clean_up();
}

void scdms_t::scdms_header_t::_clean_up() {
}

scdms_t::headers_t scdms_t::scdms_header_t::overall_header() {
    if (f_overall_header) {
        return m_overall_header;
    }
    m_overall_header = static_cast<scdms_t::headers_t>(((packed() & 4026531840UL) >> 28));
    f_overall_header = true;
    return m_overall_header;
}

int32_t scdms_t::scdms_header_t::total_triggers() {
    if (f_total_triggers) {
        return m_total_triggers;
    }
    m_total_triggers = (packed() & 4095);
    f_total_triggers = true;
    return m_total_triggers;
}

int32_t scdms_t::scdms_header_t::format_version() {
    if (f_format_version) {
        return m_format_version;
    }
    m_format_version = ((packed() & 268431360) >> 12);
    f_format_version = true;
    return m_format_version;
}

scdms_t::v_two_trig_meta_t::v_two_trig_meta_t(V_two_trig_metaBuilderType builder, kaitai::kstream* p__io, scdms_t::v_two_trigger_t* p__parent, scdms_t* p__root) : kaitai::kstruct(p__io),
	v_two_trig_meta_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_prim_header = false;
    f_num_primitives = false;
    f_trigger_type = false;
    f_readout_bitmask = false;
    f_event_size = false;
    f_trig_header = false;

    v_two_trig_meta_builder.set_fields(v_two_trig_meta_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void scdms_t::v_two_trig_meta_t::_read() {
    m_packed_1 = m__io->read_u4le();
    auto& packed_1_builder = v_two_trig_meta_builder.content<Field_v_two_trig_meta::v_two_trig_metaA__Zpacked_1>();
    packed_1_builder.append(m_packed_1);
    m_trigger_id = m__io->read_u4le();
    auto& trigger_id_builder = v_two_trig_meta_builder.content<Field_v_two_trig_meta::v_two_trig_metaA__Ztrigger_id>();
    trigger_id_builder.append(m_trigger_id);
    m_event_number = m__io->read_u4le();
    auto& event_number_builder = v_two_trig_meta_builder.content<Field_v_two_trig_meta::v_two_trig_metaA__Zevent_number>();
    event_number_builder.append(m_event_number);
    m_packed_2 = m__io->read_u4le();
    auto& packed_2_builder = v_two_trig_meta_builder.content<Field_v_two_trig_meta::v_two_trig_metaA__Zpacked_2>();
    packed_2_builder.append(m_packed_2);
    m_global_timestamp_low = m__io->read_u4le();
    auto& global_timestamp_low_builder = v_two_trig_meta_builder.content<Field_v_two_trig_meta::v_two_trig_metaA__Zglobal_timestamp_low>();
    global_timestamp_low_builder.append(m_global_timestamp_low);
    m_global_timestamp_high = m__io->read_u4le();
    auto& global_timestamp_high_builder = v_two_trig_meta_builder.content<Field_v_two_trig_meta::v_two_trig_metaA__Zglobal_timestamp_high>();
    global_timestamp_high_builder.append(m_global_timestamp_high);
    m_packed_3 = m__io->read_u4le();
    auto& packed_3_builder = v_two_trig_meta_builder.content<Field_v_two_trig_meta::v_two_trig_metaA__Zpacked_3>();
    packed_3_builder.append(m_packed_3);
    m_length_of_entry = m__io->read_u4le();
    auto& length_of_entry_builder = v_two_trig_meta_builder.content<Field_v_two_trig_meta::v_two_trig_metaA__Zlength_of_entry>();
    length_of_entry_builder.append(m_length_of_entry);
    auto& event_size_instancebuilder = v_two_trig_meta_builder.content<Field_v_two_trig_meta::v_two_trig_metaA__Zevent_size>();
    event_size_instancebuilder.append(event_size());
    auto& num_primitives_instancebuilder = v_two_trig_meta_builder.content<Field_v_two_trig_meta::v_two_trig_metaA__Znum_primitives>();
    num_primitives_instancebuilder.append(num_primitives());
    auto& prim_header_instancebuilder = v_two_trig_meta_builder.content<Field_v_two_trig_meta::v_two_trig_metaA__Zprim_header>();
    prim_header_instancebuilder.append(prim_header());
    auto& trigger_type_instancebuilder = v_two_trig_meta_builder.content<Field_v_two_trig_meta::v_two_trig_metaA__Ztrigger_type>();
    trigger_type_instancebuilder.append(trigger_type());
    auto& readout_bitmask_instancebuilder = v_two_trig_meta_builder.content<Field_v_two_trig_meta::v_two_trig_metaA__Zreadout_bitmask>();
    readout_bitmask_instancebuilder.append(readout_bitmask());
    auto& trig_header_instancebuilder = v_two_trig_meta_builder.content<Field_v_two_trig_meta::v_two_trig_metaA__Ztrig_header>();
    trig_header_instancebuilder.append(trig_header());
}

scdms_t::v_two_trig_meta_t::~v_two_trig_meta_t() {
    _clean_up();
}

void scdms_t::v_two_trig_meta_t::_clean_up() {
}

scdms_t::headers_t scdms_t::v_two_trig_meta_t::prim_header() {
    if (f_prim_header) {
        return m_prim_header;
    }
    m_prim_header = static_cast<scdms_t::headers_t>(((packed_3() & 4026531840UL) >> 28));
    f_prim_header = true;
    return m_prim_header;
}

int32_t scdms_t::v_two_trig_meta_t::num_primitives() {
    if (f_num_primitives) {
        return m_num_primitives;
    }
    m_num_primitives = (packed_3() & 268435455);
    f_num_primitives = true;
    return m_num_primitives;
}

scdms_t::trigger_types_t scdms_t::v_two_trig_meta_t::trigger_type() {
    if (f_trigger_type) {
        return m_trigger_type;
    }
    m_trigger_type = static_cast<scdms_t::trigger_types_t>((packed_2() & 15));
    f_trigger_type = true;
    return m_trigger_type;
}

int32_t scdms_t::v_two_trig_meta_t::readout_bitmask() {
    if (f_readout_bitmask) {
        return m_readout_bitmask;
    }
    m_readout_bitmask = ((packed_2() & 4294967040UL) >> 8);
    f_readout_bitmask = true;
    return m_readout_bitmask;
}

int32_t scdms_t::v_two_trig_meta_t::event_size() {
    if (f_event_size) {
        return m_event_size;
    }
    m_event_size = (packed_1() & 268435455);
    f_event_size = true;
    return m_event_size;
}

scdms_t::headers_t scdms_t::v_two_trig_meta_t::trig_header() {
    if (f_trig_header) {
        return m_trig_header;
    }
    m_trig_header = static_cast<scdms_t::headers_t>(((packed_1() & 4026531840UL) >> 28));
    f_trig_header = true;
    return m_trig_header;
}

scdms_t::trailer_t::trailer_t(TrailerBuilderType builder, kaitai::kstream* p__io, scdms_t* p__parent, scdms_t* p__root) : kaitai::kstruct(p__io),
	trailer_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_n_preceeding_triggers = false;
    f_trailer_header = false;

    trailer_builder.set_fields(trailer_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void scdms_t::trailer_t::_read() {
    m_packed = m__io->read_u4le();
    auto& packed_builder = trailer_builder.content<Field_trailer::trailerA__Zpacked>();
    packed_builder.append(m_packed);
    auto& trailer_header_instancebuilder = trailer_builder.content<Field_trailer::trailerA__Ztrailer_header>();
    trailer_header_instancebuilder.append(trailer_header());
    auto& n_preceeding_triggers_instancebuilder = trailer_builder.content<Field_trailer::trailerA__Zn_preceeding_triggers>();
    n_preceeding_triggers_instancebuilder.append(n_preceeding_triggers());
}

scdms_t::trailer_t::~trailer_t() {
    _clean_up();
}

void scdms_t::trailer_t::_clean_up() {
}

int32_t scdms_t::trailer_t::n_preceeding_triggers() {
    if (f_n_preceeding_triggers) {
        return m_n_preceeding_triggers;
    }
    m_n_preceeding_triggers = (packed() & 268435455);
    f_n_preceeding_triggers = true;
    return m_n_preceeding_triggers;
}

scdms_t::headers_t scdms_t::trailer_t::trailer_header() {
    if (f_trailer_header) {
        return m_trailer_header;
    }
    m_trailer_header = static_cast<scdms_t::headers_t>(((packed() & 4026531840UL) >> 28));
    f_trailer_header = true;
    return m_trailer_header;
}

scdms_t::primitive_t::primitive_t(PrimitiveBuilderType builder, kaitai::kstream* p__io, scdms_t::v_two_trigger_t* p__parent, scdms_t* p__root) : kaitai::kstruct(p__io),
	primitive_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_rt_time_fraction = false;
    f_pileup = false;
    f_det_id = false;
    f_trig_time_fraction = false;
    f_mask_pairs = false;
    f_index = false;
    f_trig_status = false;
    f_prim_dcrc_header = false;

    primitive_builder.set_fields(primitive_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void scdms_t::primitive_t::_read() {
    m_packed_1 = m__io->read_u4le();
    auto& packed_1_builder = primitive_builder.content<Field_primitive::primitiveA__Zpacked_1>();
    packed_1_builder.append(m_packed_1);
    m_ut = m__io->read_u4le();
    auto& ut_builder = primitive_builder.content<Field_primitive::primitiveA__Zut>();
    ut_builder.append(m_ut);
    m_packed_2 = m__io->read_u4le();
    auto& packed_2_builder = primitive_builder.content<Field_primitive::primitiveA__Zpacked_2>();
    packed_2_builder.append(m_packed_2);
    m_rt_run_time = m__io->read_u2le();
    auto& rt_run_time_builder = primitive_builder.content<Field_primitive::primitiveA__Zrt_run_time>();
    rt_run_time_builder.append(m_rt_run_time);
    m_trig_time = m__io->read_u2le();
    auto& trig_time_builder = primitive_builder.content<Field_primitive::primitiveA__Ztrig_time>();
    trig_time_builder.append(m_trig_time);
    m_packed_3 = m__io->read_u4le();
    auto& packed_3_builder = primitive_builder.content<Field_primitive::primitiveA__Zpacked_3>();
    packed_3_builder.append(m_packed_3);
    m_peak_amplitude = m__io->read_u2le();
    auto& peak_amplitude_builder = primitive_builder.content<Field_primitive::primitiveA__Zpeak_amplitude>();
    peak_amplitude_builder.append(m_peak_amplitude);
    m_trig_word = m__io->read_u2le();
    auto& trig_word_builder = primitive_builder.content<Field_primitive::primitiveA__Ztrig_word>();
    trig_word_builder.append(m_trig_word);
    auto& rt_time_fraction_instancebuilder = primitive_builder.content<Field_primitive::primitiveA__Zrt_time_fraction>();
    rt_time_fraction_instancebuilder.append(rt_time_fraction());
    auto& index_instancebuilder = primitive_builder.content<Field_primitive::primitiveA__Zindex>();
    index_instancebuilder.append(index());
    auto& trig_status_instancebuilder = primitive_builder.content<Field_primitive::primitiveA__Ztrig_status>();
    trig_status_instancebuilder.append(trig_status());
    auto& det_id_instancebuilder = primitive_builder.content<Field_primitive::primitiveA__Zdet_id>();
    det_id_instancebuilder.append(det_id());
    auto& mask_pairs_instancebuilder = primitive_builder.content<Field_primitive::primitiveA__Zmask_pairs>();
    mask_pairs_instancebuilder.append(mask_pairs());
    auto& pileup_instancebuilder = primitive_builder.content<Field_primitive::primitiveA__Zpileup>();
    pileup_instancebuilder.append(pileup());
    auto& trig_time_fraction_instancebuilder = primitive_builder.content<Field_primitive::primitiveA__Ztrig_time_fraction>();
    trig_time_fraction_instancebuilder.append(trig_time_fraction());
    auto& prim_dcrc_header_instancebuilder = primitive_builder.content<Field_primitive::primitiveA__Zprim_dcrc_header>();
    prim_dcrc_header_instancebuilder.append(prim_dcrc_header());
}

scdms_t::primitive_t::~primitive_t() {
    _clean_up();
}

void scdms_t::primitive_t::_clean_up() {
}

int32_t scdms_t::primitive_t::rt_time_fraction() {
    if (f_rt_time_fraction) {
        return m_rt_time_fraction;
    }
    m_rt_time_fraction = (packed_2() & 16777215);
    f_rt_time_fraction = true;
    return m_rt_time_fraction;
}

int32_t scdms_t::primitive_t::pileup() {
    if (f_pileup) {
        return m_pileup;
    }
    m_pileup = ((packed_1() & 3072) >> 10);
    f_pileup = true;
    return m_pileup;
}

int32_t scdms_t::primitive_t::det_id() {
    if (f_det_id) {
        return m_det_id;
    }
    m_det_id = ((packed_1() & 1020) >> 2);
    f_det_id = true;
    return m_det_id;
}

int32_t scdms_t::primitive_t::trig_time_fraction() {
    if (f_trig_time_fraction) {
        return m_trig_time_fraction;
    }
    m_trig_time_fraction = (packed_3() & 16777215);
    f_trig_time_fraction = true;
    return m_trig_time_fraction;
}

int32_t scdms_t::primitive_t::mask_pairs() {
    if (f_mask_pairs) {
        return m_mask_pairs;
    }
    m_mask_pairs = ((packed_3() & 4278190080UL) >> 24);
    f_mask_pairs = true;
    return m_mask_pairs;
}

int32_t scdms_t::primitive_t::index() {
    if (f_index) {
        return m_index;
    }
    m_index = (packed_1() & 3);
    f_index = true;
    return m_index;
}

int32_t scdms_t::primitive_t::trig_status() {
    if (f_trig_status) {
        return m_trig_status;
    }
    m_trig_status = ((packed_1() & 61440) >> 12);
    f_trig_status = true;
    return m_trig_status;
}

scdms_t::headers_t scdms_t::primitive_t::prim_dcrc_header() {
    if (f_prim_dcrc_header) {
        return m_prim_dcrc_header;
    }
    m_prim_dcrc_header = static_cast<scdms_t::headers_t>(((packed_1() & 4026531840UL) >> 28));
    f_prim_dcrc_header = true;
    return m_prim_dcrc_header;
}

scdms_t::det_meta_t::det_meta_t(Det_metaBuilderType builder, kaitai::kstream* p__io, scdms_t::detector_t* p__parent, scdms_t* p__root) : kaitai::kstruct(p__io),
	det_meta_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    f_readout_header = false;
    f_series_time_fraction = false;
    f_num_channels_to_follow = false;
    f_det_id = false;
    f_det_type = false;
    f_index = false;
    f_dcrc_header = false;
    f_channel_header = false;
    f_series_time = false;
    f_readout_status = false;

    det_meta_builder.set_fields(det_meta_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void scdms_t::det_meta_t::_read() {
    m_packed_1 = m__io->read_u4le();
    auto& packed_1_builder = det_meta_builder.content<Field_det_meta::det_metaA__Zpacked_1>();
    packed_1_builder.append(m_packed_1);
    m_dcrc0_version = m__io->read_u1();
    auto& dcrc0_version_builder = det_meta_builder.content<Field_det_meta::det_metaA__Zdcrc0_version>();
    dcrc0_version_builder.append(m_dcrc0_version);
    m_dcrc0_serial_num = m__io->read_u1();
    auto& dcrc0_serial_num_builder = det_meta_builder.content<Field_det_meta::det_metaA__Zdcrc0_serial_num>();
    dcrc0_serial_num_builder.append(m_dcrc0_serial_num);
    m_dcrc1_version = m__io->read_u1();
    auto& dcrc1_version_builder = det_meta_builder.content<Field_det_meta::det_metaA__Zdcrc1_version>();
    dcrc1_version_builder.append(m_dcrc1_version);
    m_dcrc1_serial_num = m__io->read_u1();
    auto& dcrc1_serial_num_builder = det_meta_builder.content<Field_det_meta::det_metaA__Zdcrc1_serial_num>();
    dcrc1_serial_num_builder.append(m_dcrc1_serial_num);
    m_packed_2 = m__io->read_u4le();
    auto& packed_2_builder = det_meta_builder.content<Field_det_meta::det_metaA__Zpacked_2>();
    packed_2_builder.append(m_packed_2);
    m_packed_3 = m__io->read_u4le();
    auto& packed_3_builder = det_meta_builder.content<Field_det_meta::det_metaA__Zpacked_3>();
    packed_3_builder.append(m_packed_3);
    m_packed_4 = m__io->read_u4le();
    auto& packed_4_builder = det_meta_builder.content<Field_det_meta::det_metaA__Zpacked_4>();
    packed_4_builder.append(m_packed_4);
    auto& series_time_instancebuilder = det_meta_builder.content<Field_det_meta::det_metaA__Zseries_time>();
    series_time_instancebuilder.append(series_time());
    auto& det_type_instancebuilder = det_meta_builder.content<Field_det_meta::det_metaA__Zdet_type>();
    det_type_instancebuilder.append(det_type());
    auto& index_instancebuilder = det_meta_builder.content<Field_det_meta::det_metaA__Zindex>();
    index_instancebuilder.append(index());
    auto& channel_header_instancebuilder = det_meta_builder.content<Field_det_meta::det_metaA__Zchannel_header>();
    channel_header_instancebuilder.append(channel_header());
    auto& readout_header_instancebuilder = det_meta_builder.content<Field_det_meta::det_metaA__Zreadout_header>();
    readout_header_instancebuilder.append(readout_header());
    auto& dcrc_header_instancebuilder = det_meta_builder.content<Field_det_meta::det_metaA__Zdcrc_header>();
    dcrc_header_instancebuilder.append(dcrc_header());
    auto& det_id_instancebuilder = det_meta_builder.content<Field_det_meta::det_metaA__Zdet_id>();
    det_id_instancebuilder.append(det_id());
    auto& num_channels_to_follow_instancebuilder = det_meta_builder.content<Field_det_meta::det_metaA__Znum_channels_to_follow>();
    num_channels_to_follow_instancebuilder.append(num_channels_to_follow());
    auto& readout_status_instancebuilder = det_meta_builder.content<Field_det_meta::det_metaA__Zreadout_status>();
    readout_status_instancebuilder.append(readout_status());
    auto& series_time_fraction_instancebuilder = det_meta_builder.content<Field_det_meta::det_metaA__Zseries_time_fraction>();
    series_time_fraction_instancebuilder.append(series_time_fraction());
}

scdms_t::det_meta_t::~det_meta_t() {
    _clean_up();
}

void scdms_t::det_meta_t::_clean_up() {
}

scdms_t::headers_t scdms_t::det_meta_t::readout_header() {
    if (f_readout_header) {
        return m_readout_header;
    }
    m_readout_header = static_cast<scdms_t::headers_t>(((packed_2() & 4026531840UL) >> 28));
    f_readout_header = true;
    return m_readout_header;
}

int32_t scdms_t::det_meta_t::series_time_fraction() {
    if (f_series_time_fraction) {
        return m_series_time_fraction;
    }
    m_series_time_fraction = (packed_3() & 16777215);
    f_series_time_fraction = true;
    return m_series_time_fraction;
}

int32_t scdms_t::det_meta_t::num_channels_to_follow() {
    if (f_num_channels_to_follow) {
        return m_num_channels_to_follow;
    }
    m_num_channels_to_follow = (packed_4() & 268435455);
    f_num_channels_to_follow = true;
    return m_num_channels_to_follow;
}

int32_t scdms_t::det_meta_t::det_id() {
    if (f_det_id) {
        return m_det_id;
    }
    m_det_id = ((packed_1() & 1020) >> 2);
    f_det_id = true;
    return m_det_id;
}

int32_t scdms_t::det_meta_t::det_type() {
    if (f_det_type) {
        return m_det_type;
    }
    m_det_type = ((packed_1() & 268434432) >> 10);
    f_det_type = true;
    return m_det_type;
}

int32_t scdms_t::det_meta_t::index() {
    if (f_index) {
        return m_index;
    }
    m_index = (packed_1() & 3);
    f_index = true;
    return m_index;
}

scdms_t::headers_t scdms_t::det_meta_t::dcrc_header() {
    if (f_dcrc_header) {
        return m_dcrc_header;
    }
    m_dcrc_header = static_cast<scdms_t::headers_t>(((packed_1() & 4026531840UL) >> 28));
    f_dcrc_header = true;
    return m_dcrc_header;
}

scdms_t::headers_t scdms_t::det_meta_t::channel_header() {
    if (f_channel_header) {
        return m_channel_header;
    }
    m_channel_header = static_cast<scdms_t::headers_t>(((packed_4() & 4026531840UL) >> 28));
    f_channel_header = true;
    return m_channel_header;
}

int32_t scdms_t::det_meta_t::series_time() {
    if (f_series_time) {
        return m_series_time;
    }
    m_series_time = (packed_2() & 65535);
    f_series_time = true;
    return m_series_time;
}

int32_t scdms_t::det_meta_t::readout_status() {
    if (f_readout_status) {
        return m_readout_status;
    }
    m_readout_status = ((packed_2() & 268369920) >> 16);
    f_readout_status = true;
    return m_readout_status;
}

#ifdef USE_SCDMS_

ScdmsBuilderType* load(std::string file_path) {
    std::ifstream infile(file_path, std::ifstream::binary);
    kaitai::kstream ks(&infile);
    builder_keys = new std::vector<std::string>();
    scdms_t* obj = new scdms_t(&ks);
    builder_map[file_path] = &(obj->scdms_builder);
    return builder_map[file_path];
}

extern "C" {

    Result fill(const char* file_path) {
        Result result;
        std::string error_message;
        ScdmsBuilderType* builder = load(file_path);
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
        builder_keys->push_back(reinterpret_cast<ScdmsBuilderType*>(builder)->form());
        return builder_keys->back().c_str();
    }

    int64_t length(void* builder) {
        return reinterpret_cast<ScdmsBuilderType*>(builder)->length();
    }

    int64_t num_buffers(void* builder) {
        return awkward::num_buffers_helper(reinterpret_cast<ScdmsBuilderType*>(builder));
    }

    const char* buffer_name(void* builder, int64_t index) {
        builder_keys->push_back(awkward::buffer_name_helper(reinterpret_cast<ScdmsBuilderType*>(builder))[index]);
        return builder_keys->back().c_str();
    }

    int64_t buffer_size(void* builder, int64_t index) {
        return awkward::buffer_size_helper(reinterpret_cast<ScdmsBuilderType*>(builder))[index];
    }

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index) {
        reinterpret_cast<ScdmsBuilderType*>(from_builder)->to_buffer(to_buffer, name);
    }

    void deallocate(void* builder) {
        delete builder_keys;
        reinterpret_cast<ScdmsBuilderType*>(builder)->clear();
    }
}

#endif // USE_SCDMS_

