// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "hello_world.h"

UserDefinedMap hello_world_fields_map({
	{Field_hello_world::hello_worldA__Zone, "hello_worldA__Zone"}});

hello_world_t::hello_world_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, hello_world_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;

    hello_world_builder.set_fields(hello_world_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void hello_world_t::_read() {
    m_one = m__io->read_u1();
    auto& one_builder = hello_world_builder.content<Field_hello_world::hello_worldA__Zone>();
    one_builder.append(m_one);
}

hello_world_t::~hello_world_t() {
    _clean_up();
}

void hello_world_t::_clean_up() {
}

#ifdef USE_HELLO_WORLD_

Hello_worldBuilderType* load(std::string file_path) {
    std::ifstream infile(file_path, std::ifstream::binary);
    kaitai::kstream ks(&infile);
    builder_keys = new std::vector<std::string>();
    hello_world_t* obj = new hello_world_t(&ks);
    builder_map[file_path] = &(obj->hello_world_builder);
    return builder_map[file_path];
}

extern "C" {

    Result fill(const char* file_path) {
        Result result;
        std::string error_message;
        Hello_worldBuilderType* builder = load(file_path);
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
        builder_keys->push_back(reinterpret_cast<Hello_worldBuilderType*>(builder)->form());
        return builder_keys->back().c_str();
    }

    int64_t length(void* builder) {
        return reinterpret_cast<Hello_worldBuilderType*>(builder)->length();
    }

    int64_t num_buffers(void* builder) {
        return awkward::num_buffers_helper(reinterpret_cast<Hello_worldBuilderType*>(builder));
    }

    const char* buffer_name(void* builder, int64_t index) {
        builder_keys->push_back(awkward::buffer_name_helper(reinterpret_cast<Hello_worldBuilderType*>(builder))[index]);
        return builder_keys->back().c_str();
    }

    int64_t buffer_size(void* builder, int64_t index) {
        return awkward::buffer_size_helper(reinterpret_cast<Hello_worldBuilderType*>(builder))[index];
    }

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index) {
        reinterpret_cast<Hello_worldBuilderType*>(from_builder)->to_buffer(to_buffer, name);
    }

    void deallocate(void* builder) {
        delete builder_keys;
        reinterpret_cast<Hello_worldBuilderType*>(builder)->clear();
    }
}

#endif // USE_HELLO_WORLD_

