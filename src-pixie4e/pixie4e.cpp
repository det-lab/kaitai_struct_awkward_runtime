// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "pixie4e.h"

UserDefinedMap pixie4e_fields_map({
	{Field_pixie4e::pixie4eA__Zfile_header, "pixie4eA__Zfile_header"},
	{Field_pixie4e::pixie4eA__Zevents, "pixie4eA__Zevents"},
	{Field_pixie4e::pixie4eA__Zfile_footer, "pixie4eA__Zfile_footer"}});

UserDefinedMap pixie4e_header_fields_map({
	{Field_pixie4e_header::pixie4e_headerA__Zblk_size, "pixie4e_headerA__Zblk_size"},
	{Field_pixie4e_header::pixie4e_headerA__Zmod_num, "pixie4e_headerA__Zmod_num"},
	{Field_pixie4e_header::pixie4e_headerA__Zrun_format, "pixie4e_headerA__Zrun_format"},
	{Field_pixie4e_header::pixie4e_headerA__Zchan_head_len, "pixie4e_headerA__Zchan_head_len"},
	{Field_pixie4e_header::pixie4e_headerA__Zcoinc_pat, "pixie4e_headerA__Zcoinc_pat"},
	{Field_pixie4e_header::pixie4e_headerA__Zcoinc_win, "pixie4e_headerA__Zcoinc_win"},
	{Field_pixie4e_header::pixie4e_headerA__Zmax_comb_event_len, "pixie4e_headerA__Zmax_comb_event_len"},
	{Field_pixie4e_header::pixie4e_headerA__Zboard_version, "pixie4e_headerA__Zboard_version"},
	{Field_pixie4e_header::pixie4e_headerA__Zevent_length_0, "pixie4e_headerA__Zevent_length_0"},
	{Field_pixie4e_header::pixie4e_headerA__Zevent_length_1, "pixie4e_headerA__Zevent_length_1"},
	{Field_pixie4e_header::pixie4e_headerA__Zevent_length_2, "pixie4e_headerA__Zevent_length_2"},
	{Field_pixie4e_header::pixie4e_headerA__Zevent_length_3, "pixie4e_headerA__Zevent_length_3"},
	{Field_pixie4e_header::pixie4e_headerA__Zserial_number, "pixie4e_headerA__Zserial_number"},
	{Field_pixie4e_header::pixie4e_headerA__Zreserved, "pixie4e_headerA__Zreserved"}});

UserDefinedMap event_fields_map({
	{Field_event::eventA__Zelements, "eventA__Zelements"}});

UserDefinedMap element_fields_map({
	{Field_element::elementA__Zheader, "elementA__Zheader"},
	{Field_element::elementA__Zdata, "elementA__Zdata"}});

UserDefinedMap channel_header_fields_map({
	{Field_channel_header::channel_headerA__Zevt_pattern, "channel_headerA__Zevt_pattern"},
	{Field_channel_header::channel_headerA__Zevt_info, "channel_headerA__Zevt_info"},
	{Field_channel_header::channel_headerA__Znum_trace_blks, "channel_headerA__Znum_trace_blks"},
	{Field_channel_header::channel_headerA__Znum_trace_blks_prev, "channel_headerA__Znum_trace_blks_prev"},
	{Field_channel_header::channel_headerA__Ztrig_time_lo, "channel_headerA__Ztrig_time_lo"},
	{Field_channel_header::channel_headerA__Ztrig_time_mi, "channel_headerA__Ztrig_time_mi"},
	{Field_channel_header::channel_headerA__Ztrig_time_hi, "channel_headerA__Ztrig_time_hi"},
	{Field_channel_header::channel_headerA__Ztrig_time_x, "channel_headerA__Ztrig_time_x"},
	{Field_channel_header::channel_headerA__Zenergy, "channel_headerA__Zenergy"},
	{Field_channel_header::channel_headerA__Zchan_no, "channel_headerA__Zchan_no"},
	{Field_channel_header::channel_headerA__Zuser_psa_value, "channel_headerA__Zuser_psa_value"},
	{Field_channel_header::channel_headerA__Zxia_psa_value, "channel_headerA__Zxia_psa_value"},
	{Field_channel_header::channel_headerA__Zextended_psa_values, "channel_headerA__Zextended_psa_values"},
	{Field_channel_header::channel_headerA__Zreserved, "channel_headerA__Zreserved"},
	{Field_channel_header::channel_headerA__Ztimestamp_full, "channel_headerA__Ztimestamp_full"}});

UserDefinedMap pixie_eor_fields_map({
	{Field_pixie_eor::pixie_eorA__Zevt_pattern, "pixie_eorA__Zevt_pattern"},
	{Field_pixie_eor::pixie_eorA__Zevt_info, "pixie_eorA__Zevt_info"},
	{Field_pixie_eor::pixie_eorA__Znum_trace_blks, "pixie_eorA__Znum_trace_blks"},
	{Field_pixie_eor::pixie_eorA__Znum_trace_blks_prev, "pixie_eorA__Znum_trace_blks_prev"},
	{Field_pixie_eor::pixie_eorA__Zreserved, "pixie_eorA__Zreserved"}});

pixie4e_t::pixie4e_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, pixie4e_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_file_header = 0;
    m__io__raw_file_header = 0;
    m_events = 0;
    m__io__raw_events = 0;
    m_file_footer = 0;
    m__io__raw_file_footer = 0;

    pixie4e_builder.set_fields(pixie4e_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void pixie4e_t::_read() {
    auto& pixie4e_header_recordbuilder = pixie4e_builder.content<Field_pixie4e::pixie4eA__Zfile_header>();
    m__raw_file_header = m__io->read_bytes(64);
    m__io__raw_file_header = new kaitai::kstream(m__raw_file_header);
    m_file_header = new pixie4e_header_t(pixie4e_header_recordbuilder, m__io__raw_file_header, this, m__root);
    auto& event_recordbuilder = pixie4e_builder.content<Field_pixie4e::pixie4eA__Zevents>();
    m__raw_events = m__io->read_bytes((_io()->size() - 128));
    m__io__raw_events = new kaitai::kstream(m__raw_events);
    m_events = new event_t(event_recordbuilder, m__io__raw_events, this, m__root);
    auto& pixie_eor_recordbuilder = pixie4e_builder.content<Field_pixie4e::pixie4eA__Zfile_footer>();
    m__raw_file_footer = m__io->read_bytes(64);
    m__io__raw_file_footer = new kaitai::kstream(m__raw_file_footer);
    m_file_footer = new pixie_eor_t(pixie_eor_recordbuilder, m__io__raw_file_footer, this, m__root);
}

pixie4e_t::~pixie4e_t() {
    _clean_up();
}

void pixie4e_t::_clean_up() {
    if (m__io__raw_file_header) {
        delete m__io__raw_file_header; m__io__raw_file_header = 0;
    }
    if (m_file_header) {
        delete m_file_header; m_file_header = 0;
    }
    if (m__io__raw_events) {
        delete m__io__raw_events; m__io__raw_events = 0;
    }
    if (m_events) {
        delete m_events; m_events = 0;
    }
    if (m__io__raw_file_footer) {
        delete m__io__raw_file_footer; m__io__raw_file_footer = 0;
    }
    if (m_file_footer) {
        delete m_file_footer; m_file_footer = 0;
    }
}

pixie4e_t::event_t::event_t(EventBuilderType builder, kaitai::kstream* p__io, pixie4e_t* p__parent, pixie4e_t* p__root) : kaitai::kstruct(p__io),
	event_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_elements = 0;

    event_builder.set_fields(event_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void pixie4e_t::event_t::_read() {
    m_elements = new std::vector<element_t*>();
    {
        int i = 0;
        auto& elements_listoffsetbuilder = event_builder.content<Field_event::eventA__Zelements>();
        elements_listoffsetbuilder.begin_list();
        while (!m__io->is_eof()) {
            auto& element_recordbuilder = event_builder.content<Field_event::eventA__Zelements>().content();
            m_elements->push_back(new element_t(element_recordbuilder, m__io, this, m__root));
            i++;
        }
        elements_listoffsetbuilder.end_list();
    }
}

pixie4e_t::event_t::~event_t() {
    _clean_up();
}

void pixie4e_t::event_t::_clean_up() {
    if (m_elements) {
        for (std::vector<element_t*>::iterator it = m_elements->begin(); it != m_elements->end(); ++it) {
            delete *it;
        }
        delete m_elements; m_elements = 0;
    }
}

pixie4e_t::element_t::element_t(ElementBuilderType builder, kaitai::kstream* p__io, pixie4e_t::event_t* p__parent, pixie4e_t* p__root) : kaitai::kstruct(p__io),
	element_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_header = 0;
    m_data = 0;

    element_builder.set_fields(element_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void pixie4e_t::element_t::_read() {
    auto& channel_header_recordbuilder = element_builder.content<Field_element::elementA__Zheader>();
    m_header = new channel_header_t(channel_header_recordbuilder, m__io, this, m__root);
    m_data = new std::vector<uint16_t>();
    const int l_data = (header()->num_trace_blks() * _root()->file_header()->blk_size());
    auto& data_listoffsetbuilder = element_builder.content<Field_element::elementA__Zdata>();
    data_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_data; i++) {
        m_data->push_back(m__io->read_u2le());
        auto& data_builder = data_listoffsetbuilder.content();
        data_builder.append(m_data->at(m_data->size() - 1));
    }
    data_listoffsetbuilder.end_list();
}

pixie4e_t::element_t::~element_t() {
    _clean_up();
}

void pixie4e_t::element_t::_clean_up() {
    if (m_header) {
        delete m_header; m_header = 0;
    }
    if (m_data) {
        delete m_data; m_data = 0;
    }
}

pixie4e_t::pixie_eor_t::pixie_eor_t(Pixie_eorBuilderType builder, kaitai::kstream* p__io, pixie4e_t* p__parent, pixie4e_t* p__root) : kaitai::kstruct(p__io),
	pixie_eor_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    pixie_eor_builder.set_fields(pixie_eor_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void pixie4e_t::pixie_eor_t::_read() {
    m_evt_pattern = m__io->read_u2le();
    auto& evt_pattern_builder = pixie_eor_builder.content<Field_pixie_eor::pixie_eorA__Zevt_pattern>();
    evt_pattern_builder.append(m_evt_pattern);
    m_evt_info = m__io->read_u2le();
    auto& evt_info_builder = pixie_eor_builder.content<Field_pixie_eor::pixie_eorA__Zevt_info>();
    evt_info_builder.append(m_evt_info);
    m_num_trace_blks = m__io->read_u2le();
    auto& num_trace_blks_builder = pixie_eor_builder.content<Field_pixie_eor::pixie_eorA__Znum_trace_blks>();
    num_trace_blks_builder.append(m_num_trace_blks);
    m_num_trace_blks_prev = m__io->read_u2le();
    auto& num_trace_blks_prev_builder = pixie_eor_builder.content<Field_pixie_eor::pixie_eorA__Znum_trace_blks_prev>();
    num_trace_blks_prev_builder.append(m_num_trace_blks_prev);
    m_reserved = m__io->read_u2le();
    auto& reserved_builder = pixie_eor_builder.content<Field_pixie_eor::pixie_eorA__Zreserved>();
    reserved_builder.append(m_reserved);
}

pixie4e_t::pixie_eor_t::~pixie_eor_t() {
    _clean_up();
}

void pixie4e_t::pixie_eor_t::_clean_up() {
}

pixie4e_t::pixie4e_header_t::pixie4e_header_t(Pixie4e_headerBuilderType builder, kaitai::kstream* p__io, pixie4e_t* p__parent, pixie4e_t* p__root) : kaitai::kstruct(p__io),
	pixie4e_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    pixie4e_header_builder.set_fields(pixie4e_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void pixie4e_t::pixie4e_header_t::_read() {
    m_blk_size = m__io->read_u2le();
    auto& blk_size_builder = pixie4e_header_builder.content<Field_pixie4e_header::pixie4e_headerA__Zblk_size>();
    blk_size_builder.append(m_blk_size);
    m_mod_num = m__io->read_u2le();
    auto& mod_num_builder = pixie4e_header_builder.content<Field_pixie4e_header::pixie4e_headerA__Zmod_num>();
    mod_num_builder.append(m_mod_num);
    m_run_format = m__io->read_u2le();
    auto& run_format_builder = pixie4e_header_builder.content<Field_pixie4e_header::pixie4e_headerA__Zrun_format>();
    run_format_builder.append(m_run_format);
    m_chan_head_len = m__io->read_u2le();
    auto& chan_head_len_builder = pixie4e_header_builder.content<Field_pixie4e_header::pixie4e_headerA__Zchan_head_len>();
    chan_head_len_builder.append(m_chan_head_len);
    m_coinc_pat = m__io->read_u2le();
    auto& coinc_pat_builder = pixie4e_header_builder.content<Field_pixie4e_header::pixie4e_headerA__Zcoinc_pat>();
    coinc_pat_builder.append(m_coinc_pat);
    m_coinc_win = m__io->read_u2le();
    auto& coinc_win_builder = pixie4e_header_builder.content<Field_pixie4e_header::pixie4e_headerA__Zcoinc_win>();
    coinc_win_builder.append(m_coinc_win);
    m_max_comb_event_len = m__io->read_u2le();
    auto& max_comb_event_len_builder = pixie4e_header_builder.content<Field_pixie4e_header::pixie4e_headerA__Zmax_comb_event_len>();
    max_comb_event_len_builder.append(m_max_comb_event_len);
    m_board_version = m__io->read_u2le();
    auto& board_version_builder = pixie4e_header_builder.content<Field_pixie4e_header::pixie4e_headerA__Zboard_version>();
    board_version_builder.append(m_board_version);
    m_event_length_0 = m__io->read_u2le();
    auto& event_length_0_builder = pixie4e_header_builder.content<Field_pixie4e_header::pixie4e_headerA__Zevent_length_0>();
    event_length_0_builder.append(m_event_length_0);
    m_event_length_1 = m__io->read_u2le();
    auto& event_length_1_builder = pixie4e_header_builder.content<Field_pixie4e_header::pixie4e_headerA__Zevent_length_1>();
    event_length_1_builder.append(m_event_length_1);
    m_event_length_2 = m__io->read_u2le();
    auto& event_length_2_builder = pixie4e_header_builder.content<Field_pixie4e_header::pixie4e_headerA__Zevent_length_2>();
    event_length_2_builder.append(m_event_length_2);
    m_event_length_3 = m__io->read_u2le();
    auto& event_length_3_builder = pixie4e_header_builder.content<Field_pixie4e_header::pixie4e_headerA__Zevent_length_3>();
    event_length_3_builder.append(m_event_length_3);
    m_serial_number = m__io->read_u2le();
    auto& serial_number_builder = pixie4e_header_builder.content<Field_pixie4e_header::pixie4e_headerA__Zserial_number>();
    serial_number_builder.append(m_serial_number);
    m_reserved = m__io->read_u2le();
    auto& reserved_builder = pixie4e_header_builder.content<Field_pixie4e_header::pixie4e_headerA__Zreserved>();
    reserved_builder.append(m_reserved);
}

pixie4e_t::pixie4e_header_t::~pixie4e_header_t() {
    _clean_up();
}

void pixie4e_t::pixie4e_header_t::_clean_up() {
}

pixie4e_t::channel_header_t::channel_header_t(Channel_headerBuilderType builder, kaitai::kstream* p__io, pixie4e_t::element_t* p__parent, pixie4e_t* p__root) : kaitai::kstruct(p__io),
	channel_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_extended_psa_values = 0;
    m_reserved = 0;
    f_timestamp_full = false;

    channel_header_builder.set_fields(channel_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void pixie4e_t::channel_header_t::_read() {
    m_evt_pattern = m__io->read_u2le();
    auto& evt_pattern_builder = channel_header_builder.content<Field_channel_header::channel_headerA__Zevt_pattern>();
    evt_pattern_builder.append(m_evt_pattern);
    m_evt_info = m__io->read_u2le();
    auto& evt_info_builder = channel_header_builder.content<Field_channel_header::channel_headerA__Zevt_info>();
    evt_info_builder.append(m_evt_info);
    m_num_trace_blks = m__io->read_u2le();
    auto& num_trace_blks_builder = channel_header_builder.content<Field_channel_header::channel_headerA__Znum_trace_blks>();
    num_trace_blks_builder.append(m_num_trace_blks);
    m_num_trace_blks_prev = m__io->read_u2le();
    auto& num_trace_blks_prev_builder = channel_header_builder.content<Field_channel_header::channel_headerA__Znum_trace_blks_prev>();
    num_trace_blks_prev_builder.append(m_num_trace_blks_prev);
    m_trig_time_lo = m__io->read_u2le();
    auto& trig_time_lo_builder = channel_header_builder.content<Field_channel_header::channel_headerA__Ztrig_time_lo>();
    trig_time_lo_builder.append(m_trig_time_lo);
    m_trig_time_mi = m__io->read_u2le();
    auto& trig_time_mi_builder = channel_header_builder.content<Field_channel_header::channel_headerA__Ztrig_time_mi>();
    trig_time_mi_builder.append(m_trig_time_mi);
    m_trig_time_hi = m__io->read_u2le();
    auto& trig_time_hi_builder = channel_header_builder.content<Field_channel_header::channel_headerA__Ztrig_time_hi>();
    trig_time_hi_builder.append(m_trig_time_hi);
    m_trig_time_x = m__io->read_u2le();
    auto& trig_time_x_builder = channel_header_builder.content<Field_channel_header::channel_headerA__Ztrig_time_x>();
    trig_time_x_builder.append(m_trig_time_x);
    m_energy = m__io->read_u2le();
    auto& energy_builder = channel_header_builder.content<Field_channel_header::channel_headerA__Zenergy>();
    energy_builder.append(m_energy);
    m_chan_no = m__io->read_u2le();
    auto& chan_no_builder = channel_header_builder.content<Field_channel_header::channel_headerA__Zchan_no>();
    chan_no_builder.append(m_chan_no);
    m_user_psa_value = m__io->read_u2le();
    auto& user_psa_value_builder = channel_header_builder.content<Field_channel_header::channel_headerA__Zuser_psa_value>();
    user_psa_value_builder.append(m_user_psa_value);
    m_xia_psa_value = m__io->read_u2le();
    auto& xia_psa_value_builder = channel_header_builder.content<Field_channel_header::channel_headerA__Zxia_psa_value>();
    xia_psa_value_builder.append(m_xia_psa_value);
    m_extended_psa_values = new std::vector<uint16_t>();
    const int l_extended_psa_values = 4;
    auto& extended_psa_values_listoffsetbuilder = channel_header_builder.content<Field_channel_header::channel_headerA__Zextended_psa_values>();
    extended_psa_values_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_extended_psa_values; i++) {
        m_extended_psa_values->push_back(m__io->read_u2le());
        auto& extended_psa_values_builder = extended_psa_values_listoffsetbuilder.content();
        extended_psa_values_builder.append(m_extended_psa_values->at(m_extended_psa_values->size() - 1));
    }
    extended_psa_values_listoffsetbuilder.end_list();
    m_reserved = new std::vector<uint16_t>();
    const int l_reserved = 16;
    auto& reserved_listoffsetbuilder = channel_header_builder.content<Field_channel_header::channel_headerA__Zreserved>();
    reserved_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_reserved; i++) {
        m_reserved->push_back(m__io->read_u2le());
        auto& reserved_builder = reserved_listoffsetbuilder.content();
        reserved_builder.append(m_reserved->at(m_reserved->size() - 1));
    }
    reserved_listoffsetbuilder.end_list();
    auto& timestamp_full_instancebuilder = channel_header_builder.content<Field_channel_header::channel_headerA__Ztimestamp_full>();
    timestamp_full_instancebuilder.append(timestamp_full());
}

pixie4e_t::channel_header_t::~channel_header_t() {
    _clean_up();
}

void pixie4e_t::channel_header_t::_clean_up() {
    if (m_extended_psa_values) {
        delete m_extended_psa_values; m_extended_psa_values = 0;
    }
    if (m_reserved) {
        delete m_reserved; m_reserved = 0;
    }
}

int32_t pixie4e_t::channel_header_t::timestamp_full() {
    if (f_timestamp_full) {
        return m_timestamp_full;
    }
    m_timestamp_full = ((trig_time_lo() + (trig_time_mi() << 16)) + (trig_time_hi() << 32));
    f_timestamp_full = true;
    return m_timestamp_full;
}

#ifdef USE_PIXIE4E_

Pixie4eBuilderType* load(std::string file_path) {
    std::ifstream infile(file_path, std::ifstream::binary);
    kaitai::kstream ks(&infile);
    builder_keys = new std::vector<std::string>();
    pixie4e_t* obj = new pixie4e_t(&ks);
    builder_map[file_path] = &(obj->pixie4e_builder);
    return builder_map[file_path];
}

extern "C" {

    Result fill(const char* file_path) {
        Result result;
        std::string error_message;
        Pixie4eBuilderType* builder = load(file_path);
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
        builder_keys->push_back(reinterpret_cast<Pixie4eBuilderType*>(builder)->form());
        return builder_keys->back().c_str();
    }

    int64_t length(void* builder) {
        return reinterpret_cast<Pixie4eBuilderType*>(builder)->length();
    }

    int64_t num_buffers(void* builder) {
        return awkward::num_buffers_helper(reinterpret_cast<Pixie4eBuilderType*>(builder));
    }

    const char* buffer_name(void* builder, int64_t index) {
        builder_keys->push_back(awkward::buffer_name_helper(reinterpret_cast<Pixie4eBuilderType*>(builder))[index]);
        return builder_keys->back().c_str();
    }

    int64_t buffer_size(void* builder, int64_t index) {
        return awkward::buffer_size_helper(reinterpret_cast<Pixie4eBuilderType*>(builder))[index];
    }

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index) {
        reinterpret_cast<Pixie4eBuilderType*>(from_builder)->to_buffer(to_buffer, name);
    }

    void deallocate(void* builder) {
        delete builder_keys;
        reinterpret_cast<Pixie4eBuilderType*>(builder)->clear();
    }
}

#endif // USE_PIXIE4E_

