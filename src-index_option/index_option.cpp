// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "index_option.h"

UserDefinedMap index_option_fields_map({
	{Field_index_option::index_optionA__Zbank_header, "index_optionA__Zbank_header"},
	{Field_index_option::index_optionA__Zbank1, "index_optionA__Zbank1"},
	{Field_index_option::index_optionA__Zbank2, "index_optionA__Zbank2"}});

UserDefinedMap bank_hdr_fields_map({
	{Field_bank_hdr::bank_hdrA__Zall_bank_size, "bank_hdrA__Zall_bank_size"},
	{Field_bank_hdr::bank_hdrA__Zflags, "bank_hdrA__Zflags"}});

UserDefinedMap bank16_fields_map({
	{Field_bank16::bank16A__Zname, "bank16A__Zname"},
	{Field_bank16::bank16A__Ztype, "bank16A__Ztype"},
	{Field_bank16::bank16A__Zsize, "bank16A__Zsize"}});

UserDefinedMap bank32_fields_map({
	{Field_bank32::bank32A__Zname, "bank32A__Zname"},
	{Field_bank32::bank32A__Ztype, "bank32A__Ztype"},
	{Field_bank32::bank32A__Zsize, "bank32A__Zsize"}});

index_option_t::index_option_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, index_option_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_bank_header = 0;
    m_bank1 = 0;
    m_bank2 = 0;

    index_option_builder.set_fields(index_option_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void index_option_t::_read() {
    auto& bank_hdr_recordbuilder = index_option_builder.content<Field_index_option::index_optionA__Zbank_header>();
    m_bank_header = new bank_hdr_t(bank_hdr_recordbuilder, m__io, this, m__root);
    n_bank1 = true;
    auto& bank1_indexedoptionbuilder = index_option_builder.content<Field_index_option::index_optionA__Zbank1>();
    if ((bank_header()->flags() & (1 << 4)) == 0) {
        bank1_indexedoptionbuilder.append_valid();
        n_bank1 = false;
        auto& bank16_recordbuilder = index_option_builder.content<Field_index_option::index_optionA__Zbank1>().content();
        m_bank1 = new bank16_t(bank16_recordbuilder, m__io, this, m__root);
    }
    else {
        bank1_indexedoptionbuilder.append_invalid();
    }

    n_bank2 = true;
    auto& bank2_indexedoptionbuilder = index_option_builder.content<Field_index_option::index_optionA__Zbank2>();
    if ((bank_header()->flags() & (1 << 4)) != 0) {
        bank2_indexedoptionbuilder.append_valid();
        n_bank2 = false;
        auto& bank32_recordbuilder = index_option_builder.content<Field_index_option::index_optionA__Zbank2>().content();
        m_bank2 = new bank32_t(bank32_recordbuilder, m__io, this, m__root);
    }
    else {
        bank2_indexedoptionbuilder.append_invalid();
    }

}

index_option_t::~index_option_t() {
    _clean_up();
}

void index_option_t::_clean_up() {
    if (m_bank_header) {
        delete m_bank_header; m_bank_header = 0;
    }
    if (!n_bank1) {
        if (m_bank1) {
            delete m_bank1; m_bank1 = 0;
        }
    }
    if (!n_bank2) {
        if (m_bank2) {
            delete m_bank2; m_bank2 = 0;
        }
    }
}

index_option_t::bank_hdr_t::bank_hdr_t(Bank_hdrBuilderType builder, kaitai::kstream* p__io, index_option_t* p__parent, index_option_t* p__root) : kaitai::kstruct(p__io),
	bank_hdr_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    bank_hdr_builder.set_fields(bank_hdr_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void index_option_t::bank_hdr_t::_read() {
    m_all_bank_size = m__io->read_u4le();
    auto& all_bank_size_builder = bank_hdr_builder.content<Field_bank_hdr::bank_hdrA__Zall_bank_size>();
    all_bank_size_builder.append(m_all_bank_size);
    m_flags = m__io->read_u4le();
    auto& flags_builder = bank_hdr_builder.content<Field_bank_hdr::bank_hdrA__Zflags>();
    flags_builder.append(m_flags);
}

index_option_t::bank_hdr_t::~bank_hdr_t() {
    _clean_up();
}

void index_option_t::bank_hdr_t::_clean_up() {
}

index_option_t::bank16_t::bank16_t(Bank16BuilderType builder, kaitai::kstream* p__io, index_option_t* p__parent, index_option_t* p__root) : kaitai::kstruct(p__io),
	bank16_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    bank16_builder.set_fields(bank16_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void index_option_t::bank16_t::_read() {
    m_name = kaitai::kstream::bytes_to_str(m__io->read_bytes(4), "UTF-8");
    auto& name_listoffsetbuilder = bank16_builder.content<Field_bank16::bank16A__Zname>();
    name_listoffsetbuilder.begin_list();
    auto& name_builder = name_listoffsetbuilder.content();
    name_listoffsetbuilder.set_parameters("\"__array__\": \"string\"");
    name_builder.set_parameters("\"__array__\" : \"char\"");
    for (int i = 0; i < m_name.length(); i++) {
        name_builder.append(m_name[i]);
    }
    name_listoffsetbuilder.end_list();
    m_type = m__io->read_u2le();
    auto& type_builder = bank16_builder.content<Field_bank16::bank16A__Ztype>();
    type_builder.append(m_type);
    m_size = m__io->read_u2le();
    auto& size_builder = bank16_builder.content<Field_bank16::bank16A__Zsize>();
    size_builder.append(m_size);
}

index_option_t::bank16_t::~bank16_t() {
    _clean_up();
}

void index_option_t::bank16_t::_clean_up() {
}

index_option_t::bank32_t::bank32_t(Bank32BuilderType builder, kaitai::kstream* p__io, index_option_t* p__parent, index_option_t* p__root) : kaitai::kstruct(p__io),
	bank32_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    bank32_builder.set_fields(bank32_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void index_option_t::bank32_t::_read() {
    m_name = kaitai::kstream::bytes_to_str(m__io->read_bytes(4), "UTF-8");
    auto& name_listoffsetbuilder = bank32_builder.content<Field_bank32::bank32A__Zname>();
    name_listoffsetbuilder.begin_list();
    auto& name_builder = name_listoffsetbuilder.content();
    name_listoffsetbuilder.set_parameters("\"__array__\": \"string\"");
    name_builder.set_parameters("\"__array__\" : \"char\"");
    for (int i = 0; i < m_name.length(); i++) {
        name_builder.append(m_name[i]);
    }
    name_listoffsetbuilder.end_list();
    m_type = m__io->read_u4le();
    auto& type_builder = bank32_builder.content<Field_bank32::bank32A__Ztype>();
    type_builder.append(m_type);
    m_size = m__io->read_u4le();
    auto& size_builder = bank32_builder.content<Field_bank32::bank32A__Zsize>();
    size_builder.append(m_size);
}

index_option_t::bank32_t::~bank32_t() {
    _clean_up();
}

void index_option_t::bank32_t::_clean_up() {
}

#ifdef USE_INDEX_OPTION_

Index_optionBuilderType* load(std::string file_path) {
    std::ifstream infile(file_path, std::ifstream::binary);
    kaitai::kstream ks(&infile);
    builder_keys = new std::vector<std::string>();
    index_option_t* obj = new index_option_t(&ks);
    builder_map[file_path] = &(obj->index_option_builder);
    return builder_map[file_path];
}

extern "C" {

    Result fill(const char* file_path) {
        Result result;
        std::string error_message;
        Index_optionBuilderType* builder = load(file_path);
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
        builder_keys->push_back(reinterpret_cast<Index_optionBuilderType*>(builder)->form());
        return builder_keys->back().c_str();
    }

    int64_t length(void* builder) {
        return reinterpret_cast<Index_optionBuilderType*>(builder)->length();
    }

    int64_t num_buffers(void* builder) {
        return awkward::num_buffers_helper(reinterpret_cast<Index_optionBuilderType*>(builder));
    }

    const char* buffer_name(void* builder, int64_t index) {
        builder_keys->push_back(awkward::buffer_name_helper(reinterpret_cast<Index_optionBuilderType*>(builder))[index]);
        return builder_keys->back().c_str();
    }

    int64_t buffer_size(void* builder, int64_t index) {
        return awkward::buffer_size_helper(reinterpret_cast<Index_optionBuilderType*>(builder))[index];
    }

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index) {
        reinterpret_cast<Index_optionBuilderType*>(from_builder)->to_buffer(to_buffer, name);
    }

    void deallocate(void* builder) {
        delete builder_keys;
        reinterpret_cast<Index_optionBuilderType*>(builder)->clear();
    }
}

#endif // USE_INDEX_OPTION_

