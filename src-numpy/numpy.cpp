// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "numpy.h"

UserDefinedMap numpy_fields_map({
	{Field_numpy::numpyA__Znumpy_array, "numpyA__Znumpy_array"}});

numpy_t::numpy_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, numpy_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;

    numpy_builder.set_fields(numpy_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void numpy_t::_read() {
    m_numpy_array = m__io->read_u4le();
    auto& numpy_array_builder = numpy_builder.content<Field_numpy::numpyA__Znumpy_array>();
    numpy_array_builder.append(m_numpy_array);
}

numpy_t::~numpy_t() {
    _clean_up();
}

void numpy_t::_clean_up() {
}

#ifdef USE_NUMPY_

NumpyBuilderType* load(std::string file_path) {
    std::ifstream infile(file_path, std::ifstream::binary);
    kaitai::kstream ks(&infile);
    builder_keys = new std::vector<std::string>();
    numpy_t* obj = new numpy_t(&ks);
    builder_map[file_path] = &(obj->numpy_builder);
    return builder_map[file_path];
}

extern "C" {

    Result fill(const char* file_path) {
        Result result;
        std::string error_message;
        NumpyBuilderType* builder = load(file_path);
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
        builder_keys->push_back(reinterpret_cast<NumpyBuilderType*>(builder)->form());
        return builder_keys->back().c_str();
    }

    int64_t length(void* builder) {
        return reinterpret_cast<NumpyBuilderType*>(builder)->length();
    }

    int64_t num_buffers(void* builder) {
        return awkward::num_buffers_helper(reinterpret_cast<NumpyBuilderType*>(builder));
    }

    const char* buffer_name(void* builder, int64_t index) {
        builder_keys->push_back(awkward::buffer_name_helper(reinterpret_cast<NumpyBuilderType*>(builder))[index]);
        return builder_keys->back().c_str();
    }

    int64_t buffer_size(void* builder, int64_t index) {
        return awkward::buffer_size_helper(reinterpret_cast<NumpyBuilderType*>(builder))[index];
    }

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index) {
        reinterpret_cast<NumpyBuilderType*>(from_builder)->to_buffer(to_buffer, name);
    }

    void deallocate(void* builder) {
        delete builder_keys;
        reinterpret_cast<NumpyBuilderType*>(builder)->clear();
    }
}

#endif // USE_NUMPY_

