// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "records.h"

UserDefinedMap records_fields_map({
	{Field_records::recordsA__Zlevel1, "recordsA__Zlevel1"}});

UserDefinedMap one_fields_map({
	{Field_one::oneA__Zlevel2, "oneA__Zlevel2"}});

UserDefinedMap two_fields_map({
	{Field_two::twoA__Zlevel3, "twoA__Zlevel3"}});

UserDefinedMap three_fields_map({
	{Field_three::threeA__Zlevel4, "threeA__Zlevel4"}});

records_t::records_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, records_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_level1 = 0;

    records_builder.set_fields(records_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void records_t::_read() {
    m_level1 = new std::vector<one_t*>();
    {
        int i = 0;
        auto& level1_listoffsetbuilder = records_builder.content<Field_records::recordsA__Zlevel1>();
        level1_listoffsetbuilder.begin_list();
        while (!m__io->is_eof()) {
            auto& one_recordbuilder = records_builder.content<Field_records::recordsA__Zlevel1>().content();
            m_level1->push_back(new one_t(one_recordbuilder, m__io, this, m__root));
            i++;
        }
        level1_listoffsetbuilder.end_list();
    }
}

records_t::~records_t() {
    _clean_up();
}

void records_t::_clean_up() {
    if (m_level1) {
        for (std::vector<one_t*>::iterator it = m_level1->begin(); it != m_level1->end(); ++it) {
            delete *it;
        }
        delete m_level1; m_level1 = 0;
    }
}

records_t::one_t::one_t(OneBuilderType builder, kaitai::kstream* p__io, records_t* p__parent, records_t* p__root) : kaitai::kstruct(p__io),
	one_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_level2 = 0;

    one_builder.set_fields(one_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void records_t::one_t::_read() {
    m_level2 = new std::vector<two_t*>();
    {
        int i = 0;
        auto& level2_listoffsetbuilder = one_builder.content<Field_one::oneA__Zlevel2>();
        level2_listoffsetbuilder.begin_list();
        while (!m__io->is_eof()) {
            auto& two_recordbuilder = one_builder.content<Field_one::oneA__Zlevel2>().content();
            m_level2->push_back(new two_t(two_recordbuilder, m__io, this, m__root));
            i++;
        }
        level2_listoffsetbuilder.end_list();
    }
}

records_t::one_t::~one_t() {
    _clean_up();
}

void records_t::one_t::_clean_up() {
    if (m_level2) {
        for (std::vector<two_t*>::iterator it = m_level2->begin(); it != m_level2->end(); ++it) {
            delete *it;
        }
        delete m_level2; m_level2 = 0;
    }
}

records_t::two_t::two_t(TwoBuilderType builder, kaitai::kstream* p__io, records_t::one_t* p__parent, records_t* p__root) : kaitai::kstruct(p__io),
	two_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_level3 = 0;

    two_builder.set_fields(two_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void records_t::two_t::_read() {
    m_level3 = new std::vector<three_t*>();
    {
        int i = 0;
        auto& level3_listoffsetbuilder = two_builder.content<Field_two::twoA__Zlevel3>();
        level3_listoffsetbuilder.begin_list();
        while (!m__io->is_eof()) {
            auto& three_recordbuilder = two_builder.content<Field_two::twoA__Zlevel3>().content();
            m_level3->push_back(new three_t(three_recordbuilder, m__io, this, m__root));
            i++;
        }
        level3_listoffsetbuilder.end_list();
    }
}

records_t::two_t::~two_t() {
    _clean_up();
}

void records_t::two_t::_clean_up() {
    if (m_level3) {
        for (std::vector<three_t*>::iterator it = m_level3->begin(); it != m_level3->end(); ++it) {
            delete *it;
        }
        delete m_level3; m_level3 = 0;
    }
}

records_t::three_t::three_t(ThreeBuilderType builder, kaitai::kstream* p__io, records_t::two_t* p__parent, records_t* p__root) : kaitai::kstruct(p__io),
	three_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    three_builder.set_fields(three_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void records_t::three_t::_read() {
    m_level4 = m__io->read_u4le();
    auto& level4_builder = three_builder.content<Field_three::threeA__Zlevel4>();
    level4_builder.append(m_level4);
}

records_t::three_t::~three_t() {
    _clean_up();
}

void records_t::three_t::_clean_up() {
}

#ifdef USE_RECORDS_

RecordsBuilderType* load(std::string file_path) {
    std::ifstream infile(file_path, std::ifstream::binary);
    kaitai::kstream ks(&infile);
    builder_keys = new std::vector<std::string>();
    records_t* obj = new records_t(&ks);
    builder_map[file_path] = &(obj->records_builder);
    return builder_map[file_path];
}

extern "C" {

    Result fill(const char* file_path) {
        Result result;
        std::string error_message;
        RecordsBuilderType* builder = load(file_path);
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
        builder_keys->push_back(reinterpret_cast<RecordsBuilderType*>(builder)->form());
        return builder_keys->back().c_str();
    }

    int64_t length(void* builder) {
        return reinterpret_cast<RecordsBuilderType*>(builder)->length();
    }

    int64_t num_buffers(void* builder) {
        return awkward::num_buffers_helper(reinterpret_cast<RecordsBuilderType*>(builder));
    }

    const char* buffer_name(void* builder, int64_t index) {
        builder_keys->push_back(awkward::buffer_name_helper(reinterpret_cast<RecordsBuilderType*>(builder))[index]);
        return builder_keys->back().c_str();
    }

    int64_t buffer_size(void* builder, int64_t index) {
        return awkward::buffer_size_helper(reinterpret_cast<RecordsBuilderType*>(builder))[index];
    }

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index) {
        reinterpret_cast<RecordsBuilderType*>(from_builder)->to_buffer(to_buffer, name);
    }

    void deallocate(void* builder) {
        delete builder_keys;
        reinterpret_cast<RecordsBuilderType*>(builder)->clear();
    }
}

#endif // USE_RECORDS_

