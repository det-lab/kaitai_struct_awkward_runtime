// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "lists.h"

UserDefinedMap lists_fields_map({
	{Field_lists::listsA__Zsample_blk, "listsA__Zsample_blk"}});

UserDefinedMap sample_block_fields_map({
	{Field_sample_block::sample_blockA__Znum_samples, "sample_blockA__Znum_samples"},
	{Field_sample_block::sample_blockA__Zsample, "sample_blockA__Zsample"}});

lists_t::lists_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, lists_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_sample_blk = 0;

    lists_builder.set_fields(lists_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void lists_t::_read() {
    m_sample_blk = new std::vector<sample_block_t*>();
    {
        int i = 0;
        auto& sample_blk_listoffsetbuilder = lists_builder.content<Field_lists::listsA__Zsample_blk>();
        sample_blk_listoffsetbuilder.begin_list();
        while (!m__io->is_eof()) {
            auto& sample_block_recordbuilder = lists_builder.content<Field_lists::listsA__Zsample_blk>().content();
            m_sample_blk->push_back(new sample_block_t(sample_block_recordbuilder, m__io, this, m__root));
            i++;
        }
        sample_blk_listoffsetbuilder.end_list();
    }
}

lists_t::~lists_t() {
    _clean_up();
}

void lists_t::_clean_up() {
    if (m_sample_blk) {
        for (std::vector<sample_block_t*>::iterator it = m_sample_blk->begin(); it != m_sample_blk->end(); ++it) {
            delete *it;
        }
        delete m_sample_blk; m_sample_blk = 0;
    }
}

lists_t::sample_block_t::sample_block_t(Sample_blockBuilderType builder, kaitai::kstream* p__io, lists_t* p__parent, lists_t* p__root) : kaitai::kstruct(p__io),
	sample_block_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;
    m_sample = 0;

    sample_block_builder.set_fields(sample_block_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void lists_t::sample_block_t::_read() {
    m_num_samples = m__io->read_u4le();
    auto& num_samples_builder = sample_block_builder.content<Field_sample_block::sample_blockA__Znum_samples>();
    num_samples_builder.append(m_num_samples);
    m_sample = new std::vector<double>();
    const int l_sample = num_samples();
    auto& sample_listoffsetbuilder = sample_block_builder.content<Field_sample_block::sample_blockA__Zsample>();
    sample_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_sample; i++) {
        m_sample->push_back(m__io->read_f8le());
        auto& sample_builder = sample_listoffsetbuilder.content();
        sample_builder.append(m_sample->at(m_sample->size() - 1));
    }
    sample_listoffsetbuilder.end_list();
}

lists_t::sample_block_t::~sample_block_t() {
    _clean_up();
}

void lists_t::sample_block_t::_clean_up() {
    if (m_sample) {
        delete m_sample; m_sample = 0;
    }
}

#ifdef USE_LISTS_

ListsBuilderType* load(std::string file_path) {
    std::ifstream infile(file_path, std::ifstream::binary);
    kaitai::kstream ks(&infile);
    builder_keys = new std::vector<std::string>();
    lists_t* obj = new lists_t(&ks);
    builder_map[file_path] = &(obj->lists_builder);
    return builder_map[file_path];
}

extern "C" {

    Result fill(const char* file_path) {
        Result result;
        std::string error_message;
        ListsBuilderType* builder = load(file_path);
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
        builder_keys->push_back(reinterpret_cast<ListsBuilderType*>(builder)->form());
        return builder_keys->back().c_str();
    }

    int64_t length(void* builder) {
        return reinterpret_cast<ListsBuilderType*>(builder)->length();
    }

    int64_t num_buffers(void* builder) {
        return awkward::num_buffers_helper(reinterpret_cast<ListsBuilderType*>(builder));
    }

    const char* buffer_name(void* builder, int64_t index) {
        builder_keys->push_back(awkward::buffer_name_helper(reinterpret_cast<ListsBuilderType*>(builder))[index]);
        return builder_keys->back().c_str();
    }

    int64_t buffer_size(void* builder, int64_t index) {
        return awkward::buffer_size_helper(reinterpret_cast<ListsBuilderType*>(builder))[index];
    }

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index) {
        reinterpret_cast<ListsBuilderType*>(from_builder)->to_buffer(to_buffer, name);
    }

    void deallocate(void* builder) {
        delete builder_keys;
        reinterpret_cast<ListsBuilderType*>(builder)->clear();
    }
}

#endif // USE_LISTS_

