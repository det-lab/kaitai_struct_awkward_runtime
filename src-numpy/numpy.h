#ifndef NUMPY_H_
#define NUMPY_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>
#include <fstream>
#include "awkward/LayoutBuilder.h"
#include "awkward/utils.h"

using UserDefinedMap = std::map<std::size_t, std::string>;
template<class... BUILDERS>
using RecordBuilder = awkward::LayoutBuilder::Record<UserDefinedMap, BUILDERS...>;
template<std::size_t field_name, class BUILDER>
using RecordField = awkward::LayoutBuilder::Field<field_name, BUILDER>;
template<class PRIMITIVE, class BUILDER>
using ListOffsetBuilder = awkward::LayoutBuilder::ListOffset<PRIMITIVE, BUILDER>;
template<class PRIMITIVE>
using NumpyBuilder = awkward::LayoutBuilder::Numpy<PRIMITIVE>;
template<class PRIMITIVE, class BUILDER>
using IndexedOptionBuilder = awkward::LayoutBuilder::IndexedOption<PRIMITIVE, BUILDER>;
template<class... BUILDERS>
using UnionBuilder = awkward::LayoutBuilder::Union<int8_t, uint32_t, BUILDERS...>;

enum Field_numpy : std::size_t {numpyA__Znumpy_array};

using NumpyBuilderType =
	RecordBuilder<
		RecordField<Field_numpy::numpyA__Znumpy_array, NumpyBuilder<uint32_t>>
	>;



#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct Awkward API: version 0.9 or later is required"
#endif

class numpy_t : public kaitai::kstruct {

public:

    numpy_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, numpy_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~numpy_t();

private:
    uint32_t m_numpy_array;
    numpy_t* m__root;
    kaitai::kstruct* m__parent;

public:
    uint32_t numpy_array() const { return m_numpy_array; }
    numpy_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    NumpyBuilderType numpy_builder;
};

#ifndef USE_NUMPY_
#define USE_NUMPY_

std::map<std::string, NumpyBuilderType*> builder_map;
std::vector<std::string>* builder_keys;

NumpyBuilderType* load(std::string file_path);

extern "C" {

    struct Result {
        void* builder;
        const char* error_message;
    };

    Result fill(const char* file_path);

    const char* form(void* builder);

    int64_t length(void* builder);

    int64_t num_buffers(void* builder);

    const char* buffer_name(void* builder, int64_t index);

    int64_t buffer_size(void* builder, int64_t index);

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index);

    void deallocate(void* builder);
}

#endif // USE_NUMPY_


#endif  // NUMPY_H_
