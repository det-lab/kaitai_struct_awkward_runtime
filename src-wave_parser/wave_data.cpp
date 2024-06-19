// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "wave_data.h"

UserDefinedMap wave_data_fields_map({
	{Field_wave_data::wave_dataA__Znum_hr_records, "wave_dataA__Znum_hr_records"},
	{Field_wave_data::wave_dataA__Znum_mid_records, "wave_dataA__Znum_mid_records"},
	{Field_wave_data::wave_dataA__Znum_peak_records, "wave_dataA__Znum_peak_records"},
	{Field_wave_data::wave_dataA__Zhr_records, "wave_dataA__Zhr_records"},
	{Field_wave_data::wave_dataA__Zmid_records, "wave_dataA__Zmid_records"},
	{Field_wave_data::wave_dataA__Zpeak_records, "wave_dataA__Zpeak_records"}});

UserDefinedMap record_fields_map({
	{Field_record::recordA__Zidentifier, "recordA__Zidentifier"},
	{Field_record::recordA__Zvalue, "recordA__Zvalue"}});

wave_data_t::wave_data_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, wave_data_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_hr_records = 0;
    m_mid_records = 0;
    m_peak_records = 0;

    wave_data_builder.set_fields(wave_data_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void wave_data_t::_read() {
    m_num_hr_records = m__io->read_u4le();
    auto& num_hr_records_builder = wave_data_builder.content<Field_wave_data::wave_dataA__Znum_hr_records>();
    num_hr_records_builder.append(m_num_hr_records);
    m_num_mid_records = m__io->read_u4le();
    auto& num_mid_records_builder = wave_data_builder.content<Field_wave_data::wave_dataA__Znum_mid_records>();
    num_mid_records_builder.append(m_num_mid_records);
    m_num_peak_records = m__io->read_u4le();
    auto& num_peak_records_builder = wave_data_builder.content<Field_wave_data::wave_dataA__Znum_peak_records>();
    num_peak_records_builder.append(m_num_peak_records);
    m_hr_records = new std::vector<record_t*>();
    const int l_hr_records = num_hr_records();
    auto& hr_records_listoffsetbuilder = wave_data_builder.content<Field_wave_data::wave_dataA__Zhr_records>();
    hr_records_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_hr_records; i++) {
        auto& record_recordbuilder = wave_data_builder.content<Field_wave_data::wave_dataA__Zhr_records>().content();
        m_hr_records->push_back(new record_t(record_recordbuilder, m__io, this, m__root));
    }
    hr_records_listoffsetbuilder.end_list();
    m_mid_records = new std::vector<record_t*>();
    const int l_mid_records = num_mid_records();
    auto& mid_records_listoffsetbuilder = wave_data_builder.content<Field_wave_data::wave_dataA__Zmid_records>();
    mid_records_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_mid_records; i++) {
        auto& record_recordbuilder = wave_data_builder.content<Field_wave_data::wave_dataA__Zmid_records>().content();
        m_mid_records->push_back(new record_t(record_recordbuilder, m__io, this, m__root));
    }
    mid_records_listoffsetbuilder.end_list();
    m_peak_records = new std::vector<record_t*>();
    const int l_peak_records = num_peak_records();
    auto& peak_records_listoffsetbuilder = wave_data_builder.content<Field_wave_data::wave_dataA__Zpeak_records>();
    peak_records_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_peak_records; i++) {
        auto& record_recordbuilder = wave_data_builder.content<Field_wave_data::wave_dataA__Zpeak_records>().content();
        m_peak_records->push_back(new record_t(record_recordbuilder, m__io, this, m__root));
    }
    peak_records_listoffsetbuilder.end_list();
}

wave_data_t::~wave_data_t() {
    _clean_up();
}

void wave_data_t::_clean_up() {
    if (m_hr_records) {
        for (std::vector<record_t*>::iterator it = m_hr_records->begin(); it != m_hr_records->end(); ++it) {
            delete *it;
        }
        delete m_hr_records; m_hr_records = 0;
    }
    if (m_mid_records) {
        for (std::vector<record_t*>::iterator it = m_mid_records->begin(); it != m_mid_records->end(); ++it) {
            delete *it;
        }
        delete m_mid_records; m_mid_records = 0;
    }
    if (m_peak_records) {
        for (std::vector<record_t*>::iterator it = m_peak_records->begin(); it != m_peak_records->end(); ++it) {
            delete *it;
        }
        delete m_peak_records; m_peak_records = 0;
    }
}

wave_data_t::record_t::record_t(RecordBuilderType builder, kaitai::kstream* p__io, wave_data_t* p__parent, wave_data_t* p__root) : kaitai::kstruct(p__io),
	record_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    record_builder.set_fields(record_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void wave_data_t::record_t::_read() {
    m_identifier = kaitai::kstream::bytes_to_str(m__io->read_bytes(10), "ASCII");
    auto& identifier_listoffsetbuilder = record_builder.content<Field_record::recordA__Zidentifier>();
    identifier_listoffsetbuilder.begin_list();
    auto& identifier_builder = identifier_listoffsetbuilder.content();
    identifier_listoffsetbuilder.set_parameters("\"__array__\": \"string\"");
    identifier_builder.set_parameters("\"__array__\" : \"char\"");
    for (int i = 0; i < m_identifier.length(); i++) {
        identifier_builder.append(m_identifier[i]);
    }
    identifier_listoffsetbuilder.end_list();
    m_value = m__io->read_f8le();
    auto& value_builder = record_builder.content<Field_record::recordA__Zvalue>();
    value_builder.append(m_value);
}

wave_data_t::record_t::~record_t() {
    _clean_up();
}

void wave_data_t::record_t::_clean_up() {
}

#ifdef USE_WAVE_DATA_

Wave_dataBuilderType* load(std::string file_path) {
    std::ifstream infile(file_path, std::ifstream::binary);
    kaitai::kstream ks(&infile);
    builder_keys = new std::vector<std::string>();
    wave_data_t* obj = new wave_data_t(&ks);
    builder_map[file_path] = &(obj->wave_data_builder);
    return builder_map[file_path];
}

extern "C" {

    Result fill(const char* file_path) {
        Result result;
        std::string error_message;
        Wave_dataBuilderType* builder = load(file_path);
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
        builder_keys->push_back(reinterpret_cast<Wave_dataBuilderType*>(builder)->form());
        return builder_keys->back().c_str();
    }

    int64_t length(void* builder) {
        return reinterpret_cast<Wave_dataBuilderType*>(builder)->length();
    }

    int64_t num_buffers(void* builder) {
        return awkward::num_buffers_helper(reinterpret_cast<Wave_dataBuilderType*>(builder));
    }

    const char* buffer_name(void* builder, int64_t index) {
        builder_keys->push_back(awkward::buffer_name_helper(reinterpret_cast<Wave_dataBuilderType*>(builder))[index]);
        return builder_keys->back().c_str();
    }

    int64_t buffer_size(void* builder, int64_t index) {
        return awkward::buffer_size_helper(reinterpret_cast<Wave_dataBuilderType*>(builder))[index];
    }

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index) {
        reinterpret_cast<Wave_dataBuilderType*>(from_builder)->to_buffer(to_buffer, name);
    }

    void deallocate(void* builder) {
        delete builder_keys;
        reinterpret_cast<Wave_dataBuilderType*>(builder)->clear();
    }
}

#endif // USE_WAVE_DATA_

