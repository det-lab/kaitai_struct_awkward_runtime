#ifndef LISTS_H_
#define LISTS_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>
#include <fstream>
#include "awkward/LayoutBuilder.h"
#include "awkward/utils.h"
#include <vector>

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

enum Field_lists : std::size_t {listsA__Zsample_blk};
enum Field_sample_block : std::size_t {sample_blockA__Znum_samples, sample_blockA__Zsample};

using ListsBuilderType =
	RecordBuilder<
		RecordField<Field_lists::listsA__Zsample_blk, ListOffsetBuilder<int64_t, RecordBuilder<
			RecordField<Field_sample_block::sample_blockA__Znum_samples, NumpyBuilder<uint32_t>>,
			RecordField<Field_sample_block::sample_blockA__Zsample, ListOffsetBuilder<int64_t, NumpyBuilder<double>>>
		>>>
	>;


using Sample_blockBuilderType = decltype(std::declval<ListsBuilderType>().content<Field_lists::listsA__Zsample_blk>().content());

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct Awkward API: version 0.9 or later is required"
#endif

class lists_t : public kaitai::kstruct {

public:
    class sample_block_t;

    lists_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, lists_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~lists_t();

    class sample_block_t : public kaitai::kstruct {

    public:

        sample_block_t(Sample_blockBuilderType builder, kaitai::kstream* p__io, lists_t* p__parent = 0, lists_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~sample_block_t();

    private:
        uint32_t m_num_samples;
        std::vector<double>* m_sample;
        lists_t* m__root;
        lists_t* m__parent;

    public:
        uint32_t num_samples() const { return m_num_samples; }
        std::vector<double>* sample() const { return m_sample; }
        lists_t* _root() const { return m__root; }
        lists_t* _parent() const { return m__parent; }
        Sample_blockBuilderType sample_block_builder;
    };

private:
    std::vector<sample_block_t*>* m_sample_blk;
    lists_t* m__root;
    kaitai::kstruct* m__parent;

public:
    std::vector<sample_block_t*>* sample_blk() const { return m_sample_blk; }
    lists_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    ListsBuilderType lists_builder;
};

#ifndef USE_LISTS_
#define USE_LISTS_

std::map<std::string, ListsBuilderType*> builder_map;
std::vector<std::string>* builder_keys;

ListsBuilderType* load(std::string file_path);

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

#endif // USE_LISTS_


#endif  // LISTS_H_
