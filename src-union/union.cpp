// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "union.h"

UserDefinedMap union_fields_map({
	{Field_union::unionA__Zunion_hdr, "unionA__Zunion_hdr"},
	{Field_union::unionA__Zunion_cases, "unionA__Zunion_cases"}});

UserDefinedMap union_header_fields_map({
	{Field_union_header::union_headerA__Zflags, "union_headerA__Zflags"}});

UserDefinedMap case16_fields_map({
	{Field_case16::case16A__Zname, "case16A__Zname"},
	{Field_case16::case16A__Zsize, "case16A__Zsize"}});

UserDefinedMap case32_fields_map({
	{Field_case32::case32A__Zname, "case32A__Zname"},
	{Field_case32::case32A__Zsize, "case32A__Zsize"}});

UserDefinedMap case64_fields_map({
	{Field_case64::case64A__Zname, "case64A__Zname"},
	{Field_case64::case64A__Zsize, "case64A__Zsize"}});

union_t::union_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, union_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_union_hdr = 0;
    m_union_cases = 0;

    union_builder.set_fields(union_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void union_t::_read() {
    auto& union_header_recordbuilder = union_builder.content<Field_union::unionA__Zunion_hdr>();
    m_union_hdr = new union_header_t(union_header_recordbuilder, m__io, this, m__root);
    m_union_cases = new std::vector<kaitai::kstruct*>();
    {
        int i = 0;
        auto& union_cases_listoffsetbuilder = union_builder.content<Field_union::unionA__Zunion_cases>();
        union_cases_listoffsetbuilder.begin_list();
        while (!m__io->is_eof()) {
            auto& union_cases_unionbuilder = union_cases_listoffsetbuilder.content();
            switch ((union_hdr()->flags() & (1 << 4))) {
            case 0: {
                union_cases_unionbuilder.append_content<0>();
                auto& case16_recordbuilder = union_builder.content<Field_union::unionA__Zunion_cases>().content().content<0>();
                m_union_cases->push_back(new case16_t(case16_recordbuilder, m__io, this, m__root));
                break;
            }
            case 1: {
                union_cases_unionbuilder.append_content<1>();
                auto& case32_recordbuilder = union_builder.content<Field_union::unionA__Zunion_cases>().content().content<1>();
                m_union_cases->push_back(new case32_t(case32_recordbuilder, m__io, this, m__root));
                break;
            }
            default: {
                union_cases_unionbuilder.append_content<2>();
                auto& case64_recordbuilder = union_builder.content<Field_union::unionA__Zunion_cases>().content().content<2>();
                m_union_cases->push_back(new case64_t(case64_recordbuilder, m__io, this, m__root));
                break;
            }
            }
            i++;
        }
        union_cases_listoffsetbuilder.end_list();
    }
}

union_t::~union_t() {
    _clean_up();
}

void union_t::_clean_up() {
    if (m_union_hdr) {
        delete m_union_hdr; m_union_hdr = 0;
    }
    if (m_union_cases) {
        for (std::vector<kaitai::kstruct*>::iterator it = m_union_cases->begin(); it != m_union_cases->end(); ++it) {
            delete *it;
        }
        delete m_union_cases; m_union_cases = 0;
    }
}

union_t::union_header_t::union_header_t(Union_headerBuilderType builder, kaitai::kstream* p__io, union_t* p__parent, union_t* p__root) : kaitai::kstruct(p__io),
	union_header_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    union_header_builder.set_fields(union_header_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void union_t::union_header_t::_read() {
    m_flags = m__io->read_u4le();
    auto& flags_builder = union_header_builder.content<Field_union_header::union_headerA__Zflags>();
    flags_builder.append(m_flags);
}

union_t::union_header_t::~union_header_t() {
    _clean_up();
}

void union_t::union_header_t::_clean_up() {
}

union_t::case16_t::case16_t(Case16BuilderType builder, kaitai::kstream* p__io, union_t* p__parent, union_t* p__root) : kaitai::kstruct(p__io),
	case16_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    case16_builder.set_fields(case16_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void union_t::case16_t::_read() {
    m_name = kaitai::kstream::bytes_to_str(m__io->read_bytes(4), "UTF-8");
    auto& name_listoffsetbuilder = case16_builder.content<Field_case16::case16A__Zname>();
    name_listoffsetbuilder.begin_list();
    auto& name_builder = name_listoffsetbuilder.content();
    name_listoffsetbuilder.set_parameters("\"__array__\": \"string\"");
    name_builder.set_parameters("\"__array__\" : \"char\"");
    for (int i = 0; i < m_name.length(); i++) {
        name_builder.append(m_name[i]);
    }
    name_listoffsetbuilder.end_list();
    m_size = m__io->read_u2le();
    auto& size_builder = case16_builder.content<Field_case16::case16A__Zsize>();
    size_builder.append(m_size);
}

union_t::case16_t::~case16_t() {
    _clean_up();
}

void union_t::case16_t::_clean_up() {
}

union_t::case32_t::case32_t(Case32BuilderType builder, kaitai::kstream* p__io, union_t* p__parent, union_t* p__root) : kaitai::kstruct(p__io),
	case32_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    case32_builder.set_fields(case32_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void union_t::case32_t::_read() {
    m_name = kaitai::kstream::bytes_to_str(m__io->read_bytes(4), "UTF-8");
    auto& name_listoffsetbuilder = case32_builder.content<Field_case32::case32A__Zname>();
    name_listoffsetbuilder.begin_list();
    auto& name_builder = name_listoffsetbuilder.content();
    name_listoffsetbuilder.set_parameters("\"__array__\": \"string\"");
    name_builder.set_parameters("\"__array__\" : \"char\"");
    for (int i = 0; i < m_name.length(); i++) {
        name_builder.append(m_name[i]);
    }
    name_listoffsetbuilder.end_list();
    m_size = m__io->read_u4le();
    auto& size_builder = case32_builder.content<Field_case32::case32A__Zsize>();
    size_builder.append(m_size);
}

union_t::case32_t::~case32_t() {
    _clean_up();
}

void union_t::case32_t::_clean_up() {
}

union_t::case64_t::case64_t(Case64BuilderType builder, kaitai::kstream* p__io, union_t* p__parent, union_t* p__root) : kaitai::kstruct(p__io),
	case64_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    case64_builder.set_fields(case64_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void union_t::case64_t::_read() {
    m_name = kaitai::kstream::bytes_to_str(m__io->read_bytes(4), "UTF-8");
    auto& name_listoffsetbuilder = case64_builder.content<Field_case64::case64A__Zname>();
    name_listoffsetbuilder.begin_list();
    auto& name_builder = name_listoffsetbuilder.content();
    name_listoffsetbuilder.set_parameters("\"__array__\": \"string\"");
    name_builder.set_parameters("\"__array__\" : \"char\"");
    for (int i = 0; i < m_name.length(); i++) {
        name_builder.append(m_name[i]);
    }
    name_listoffsetbuilder.end_list();
    m_size = m__io->read_u4le();
    auto& size_builder = case64_builder.content<Field_case64::case64A__Zsize>();
    size_builder.append(m_size);
}

union_t::case64_t::~case64_t() {
    _clean_up();
}

void union_t::case64_t::_clean_up() {
}

#ifdef USE_UNION_

UnionBuilderType* load(std::string file_path) {
    std::ifstream infile(file_path, std::ifstream::binary);
    kaitai::kstream ks(&infile);
    builder_keys = new std::vector<std::string>();
    union_t* obj = new union_t(&ks);
    builder_map[file_path] = &(obj->union_builder);
    return builder_map[file_path];
}

extern "C" {

    Result fill(const char* file_path) {
        Result result;
        std::string error_message;
        UnionBuilderType* builder = load(file_path);
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
        builder_keys->push_back(reinterpret_cast<UnionBuilderType*>(builder)->form());
        return builder_keys->back().c_str();
    }

    int64_t length(void* builder) {
        return reinterpret_cast<UnionBuilderType*>(builder)->length();
    }

    int64_t num_buffers(void* builder) {
        return awkward::num_buffers_helper(reinterpret_cast<UnionBuilderType*>(builder));
    }

    const char* buffer_name(void* builder, int64_t index) {
        builder_keys->push_back(awkward::buffer_name_helper(reinterpret_cast<UnionBuilderType*>(builder))[index]);
        return builder_keys->back().c_str();
    }

    int64_t buffer_size(void* builder, int64_t index) {
        return awkward::buffer_size_helper(reinterpret_cast<UnionBuilderType*>(builder))[index];
    }

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index) {
        reinterpret_cast<UnionBuilderType*>(from_builder)->to_buffer(to_buffer, name);
    }

    void deallocate(void* builder) {
        delete builder_keys;
        reinterpret_cast<UnionBuilderType*>(builder)->clear();
    }
}

#endif // USE_UNION_

