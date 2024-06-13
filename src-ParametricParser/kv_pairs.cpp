// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kv_pairs.h"

UserDefinedMap kv_pairs_fields_map({
	{Field_kv_pairs::kv_pairsA__Zshort_pairs, "kv_pairsA__Zshort_pairs"},
	{Field_kv_pairs::kv_pairsA__Zlong_pairs, "kv_pairsA__Zlong_pairs"}});

UserDefinedMap kv_pair_fields_map({
	{Field_kv_pair::kv_pairA__Zkey, "kv_pairA__Zkey"},
	{Field_kv_pair::kv_pairA__Zvalue, "kv_pairA__Zvalue"}});

kv_pairs_t::kv_pairs_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, kv_pairs_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_short_pairs = 0;
    m_long_pairs = 0;

    kv_pairs_builder.set_fields(kv_pairs_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void kv_pairs_t::_read() {
    m_short_pairs = new std::vector<kv_pair_t*>();
    const int l_short_pairs = 256;
    auto& short_pairs_listoffsetbuilder = kv_pairs_builder.content<Field_kv_pairs::kv_pairsA__Zshort_pairs>();
    short_pairs_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_short_pairs; i++) {
        auto& kv_pair_recordbuilder = kv_pairs_builder.content<Field_kv_pairs::kv_pairsA__Zshort_pairs>().content();
        m_short_pairs->push_back(new kv_pair_t(kv_pair_recordbuilder, 3, m__io, this, m__root));
    }
    short_pairs_listoffsetbuilder.end_list();
    m_long_pairs = new std::vector<kv_pair_t*>();
    const int l_long_pairs = 256;
    auto& long_pairs_listoffsetbuilder = kv_pairs_builder.content<Field_kv_pairs::kv_pairsA__Zlong_pairs>();
    long_pairs_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_long_pairs; i++) {
        auto& kv_pair_recordbuilder = kv_pairs_builder.content<Field_kv_pairs::kv_pairsA__Zlong_pairs>().content();
        m_long_pairs->push_back(new kv_pair_t(kv_pair_recordbuilder, 8, m__io, this, m__root));
    }
    long_pairs_listoffsetbuilder.end_list();
}

kv_pairs_t::~kv_pairs_t() {
    _clean_up();
}

void kv_pairs_t::_clean_up() {
    if (m_short_pairs) {
        for (std::vector<kv_pair_t*>::iterator it = m_short_pairs->begin(); it != m_short_pairs->end(); ++it) {
            delete *it;
        }
        delete m_short_pairs; m_short_pairs = 0;
    }
    if (m_long_pairs) {
        for (std::vector<kv_pair_t*>::iterator it = m_long_pairs->begin(); it != m_long_pairs->end(); ++it) {
            delete *it;
        }
        delete m_long_pairs; m_long_pairs = 0;
    }
}

kv_pairs_t::kv_pair_t::kv_pair_t(uint16_t p_len_key, Kv_pairBuilderType builder, kaitai::kstream* p__io, kv_pairs_t* p__parent, kv_pairs_t* p__root) : kaitai::kstruct(p__io),
	kv_pair_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_len_key = p_len_key;

    kv_pair_builder.set_fields(kv_pair_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void kv_pairs_t::kv_pair_t::_read() {
    m_key = kaitai::kstream::bytes_to_str(m__io->read_bytes(len_key()), "ASCII");
    auto& key_listoffsetbuilder = kv_pair_builder.content<Field_kv_pair::kv_pairA__Zkey>();
    key_listoffsetbuilder.begin_list();
    auto& key_builder = key_listoffsetbuilder.content();
    key_listoffsetbuilder.set_parameters("\"__array__\": \"string\"");
    key_builder.set_parameters("\"__array__\" : \"char\"");
    for (int i = 0; i < m_key.length(); i++) {
        key_builder.append(m_key[i]);
    }
    key_listoffsetbuilder.end_list();
    m_value = kaitai::kstream::bytes_to_str(m__io->read_bytes_term(0, false, true, true), "ASCII");
    auto& value_listoffsetbuilder = kv_pair_builder.content<Field_kv_pair::kv_pairA__Zvalue>();
    value_listoffsetbuilder.begin_list();
    auto& value_builder = value_listoffsetbuilder.content();
    value_listoffsetbuilder.set_parameters("\"__array__\": \"string\"");
    value_builder.set_parameters("\"__array__\" : \"char\"");
    for (int i = 0; i < m_value.length(); i++) {
        value_builder.append(m_value[i]);
    }
    value_listoffsetbuilder.end_list();
}

kv_pairs_t::kv_pair_t::~kv_pair_t() {
    _clean_up();
}

void kv_pairs_t::kv_pair_t::_clean_up() {
}

#ifdef USE_KV_PAIRS_

Kv_pairsBuilderType* load(std::string file_path) {
    std::ifstream infile(file_path, std::ifstream::binary);
    kaitai::kstream ks(&infile);
    builder_keys = new std::vector<std::string>();
    kv_pairs_t* obj = new kv_pairs_t(&ks);
    builder_map[file_path] = &(obj->kv_pairs_builder);
    return builder_map[file_path];
}

extern "C" {

    Result fill(const char* file_path) {
        Result result;
        std::string error_message;
        Kv_pairsBuilderType* builder = load(file_path);
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
        builder_keys->push_back(reinterpret_cast<Kv_pairsBuilderType*>(builder)->form());
        return builder_keys->back().c_str();
    }

    int64_t length(void* builder) {
        return reinterpret_cast<Kv_pairsBuilderType*>(builder)->length();
    }

    int64_t num_buffers(void* builder) {
        return awkward::num_buffers_helper(reinterpret_cast<Kv_pairsBuilderType*>(builder));
    }

    const char* buffer_name(void* builder, int64_t index) {
        builder_keys->push_back(awkward::buffer_name_helper(reinterpret_cast<Kv_pairsBuilderType*>(builder))[index]);
        return builder_keys->back().c_str();
    }

    int64_t buffer_size(void* builder, int64_t index) {
        return awkward::buffer_size_helper(reinterpret_cast<Kv_pairsBuilderType*>(builder))[index];
    }

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index) {
        reinterpret_cast<Kv_pairsBuilderType*>(from_builder)->to_buffer(to_buffer, name);
    }

    void deallocate(void* builder) {
        delete builder_keys;
        reinterpret_cast<Kv_pairsBuilderType*>(builder)->clear();
    }
}

#endif // USE_KV_PAIRS_

