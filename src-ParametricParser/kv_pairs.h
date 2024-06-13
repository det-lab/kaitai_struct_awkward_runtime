#ifndef KV_PAIRS_H_
#define KV_PAIRS_H_

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

enum Field_kv_pairs : std::size_t {kv_pairsA__Zshort_pairs, kv_pairsA__Zlong_pairs};
enum Field_kv_pair : std::size_t {kv_pairA__Zkey, kv_pairA__Zvalue};

using Kv_pairsBuilderType =
	RecordBuilder<
		RecordField<Field_kv_pairs::kv_pairsA__Zshort_pairs, ListOffsetBuilder<int64_t, RecordBuilder<
			RecordField<Field_kv_pair::kv_pairA__Zkey, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
			RecordField<Field_kv_pair::kv_pairA__Zvalue, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>
		>>>,
		RecordField<Field_kv_pairs::kv_pairsA__Zlong_pairs, ListOffsetBuilder<int64_t, RecordBuilder<
			RecordField<Field_kv_pair::kv_pairA__Zkey, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
			RecordField<Field_kv_pair::kv_pairA__Zvalue, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>
		>>>
	>;


using Kv_pairBuilderType = decltype(std::declval<Kv_pairsBuilderType>().content<Field_kv_pairs::kv_pairsA__Zlong_pairs>().content());

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct Awkward API: version 0.9 or later is required"
#endif

class kv_pairs_t : public kaitai::kstruct {

public:
    class kv_pair_t;

    kv_pairs_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, kv_pairs_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~kv_pairs_t();

    class kv_pair_t : public kaitai::kstruct {

    public:

        kv_pair_t(uint16_t p_len_key, Kv_pairBuilderType builder, kaitai::kstream* p__io, kv_pairs_t* p__parent = 0, kv_pairs_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~kv_pair_t();

    private:
        std::string m_key;
        std::string m_value;
        uint16_t m_len_key;
        kv_pairs_t* m__root;
        kv_pairs_t* m__parent;

    public:
        std::string key() const { return m_key; }
        std::string value() const { return m_value; }
        uint16_t len_key() const { return m_len_key; }
        kv_pairs_t* _root() const { return m__root; }
        kv_pairs_t* _parent() const { return m__parent; }
        Kv_pairBuilderType kv_pair_builder;
    };

private:
    std::vector<kv_pair_t*>* m_short_pairs;
    std::vector<kv_pair_t*>* m_long_pairs;
    kv_pairs_t* m__root;
    kaitai::kstruct* m__parent;

public:
    std::vector<kv_pair_t*>* short_pairs() const { return m_short_pairs; }
    std::vector<kv_pair_t*>* long_pairs() const { return m_long_pairs; }
    kv_pairs_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    Kv_pairsBuilderType kv_pairs_builder;
};

#ifndef USE_KV_PAIRS_
#define USE_KV_PAIRS_

std::map<std::string, Kv_pairsBuilderType*> builder_map;
std::vector<std::string>* builder_keys;

Kv_pairsBuilderType* load(std::string file_path);

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

#endif // USE_KV_PAIRS_


#endif  // KV_PAIRS_H_
