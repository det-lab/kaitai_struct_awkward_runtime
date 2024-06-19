#ifndef INDEX_OPTION_H_
#define INDEX_OPTION_H_

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

enum Field_index_option : std::size_t {index_optionA__Zbank_header, index_optionA__Zbank1, index_optionA__Zbank2};
enum Field_bank_hdr : std::size_t {bank_hdrA__Zall_bank_size, bank_hdrA__Zflags};
enum Field_bank16 : std::size_t {bank16A__Zname, bank16A__Ztype, bank16A__Zsize};
enum Field_bank32 : std::size_t {bank32A__Zname, bank32A__Ztype, bank32A__Zsize};

using Index_optionBuilderType =
	RecordBuilder<
		RecordField<Field_index_option::index_optionA__Zbank_header, RecordBuilder<
			RecordField<Field_bank_hdr::bank_hdrA__Zall_bank_size, NumpyBuilder<uint32_t>>,
			RecordField<Field_bank_hdr::bank_hdrA__Zflags, NumpyBuilder<uint32_t>>
		>>,
		RecordField<Field_index_option::index_optionA__Zbank1, IndexedOptionBuilder<int64_t, RecordBuilder<
			RecordField<Field_bank16::bank16A__Zname, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
			RecordField<Field_bank16::bank16A__Ztype, NumpyBuilder<uint16_t>>,
			RecordField<Field_bank16::bank16A__Zsize, NumpyBuilder<uint16_t>>
		>>>,
		RecordField<Field_index_option::index_optionA__Zbank2, IndexedOptionBuilder<int64_t, RecordBuilder<
			RecordField<Field_bank32::bank32A__Zname, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
			RecordField<Field_bank32::bank32A__Ztype, NumpyBuilder<uint32_t>>,
			RecordField<Field_bank32::bank32A__Zsize, NumpyBuilder<uint32_t>>
		>>>
	>;


using Bank_hdrBuilderType = decltype(std::declval<Index_optionBuilderType>().content<Field_index_option::index_optionA__Zbank_header>());
using Bank32BuilderType = decltype(std::declval<Index_optionBuilderType>().content<Field_index_option::index_optionA__Zbank2>().content());
using Bank16BuilderType = decltype(std::declval<Index_optionBuilderType>().content<Field_index_option::index_optionA__Zbank1>().content());

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct Awkward API: version 0.9 or later is required"
#endif

class index_option_t : public kaitai::kstruct {

public:
    class bank_hdr_t;
    class bank16_t;
    class bank32_t;

    index_option_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, index_option_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~index_option_t();

    class bank_hdr_t : public kaitai::kstruct {

    public:

        bank_hdr_t(Bank_hdrBuilderType builder, kaitai::kstream* p__io, index_option_t* p__parent = 0, index_option_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~bank_hdr_t();

    private:
        uint32_t m_all_bank_size;
        uint32_t m_flags;
        index_option_t* m__root;
        index_option_t* m__parent;

    public:
        uint32_t all_bank_size() const { return m_all_bank_size; }
        uint32_t flags() const { return m_flags; }
        index_option_t* _root() const { return m__root; }
        index_option_t* _parent() const { return m__parent; }
        Bank_hdrBuilderType bank_hdr_builder;
    };

    class bank16_t : public kaitai::kstruct {

    public:

        bank16_t(Bank16BuilderType builder, kaitai::kstream* p__io, index_option_t* p__parent = 0, index_option_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~bank16_t();

    private:
        std::string m_name;
        uint16_t m_type;
        uint16_t m_size;
        index_option_t* m__root;
        index_option_t* m__parent;

    public:
        std::string name() const { return m_name; }
        uint16_t type() const { return m_type; }
        uint16_t size() const { return m_size; }
        index_option_t* _root() const { return m__root; }
        index_option_t* _parent() const { return m__parent; }
        Bank16BuilderType bank16_builder;
    };

    class bank32_t : public kaitai::kstruct {

    public:

        bank32_t(Bank32BuilderType builder, kaitai::kstream* p__io, index_option_t* p__parent = 0, index_option_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~bank32_t();

    private:
        std::string m_name;
        uint32_t m_type;
        uint32_t m_size;
        index_option_t* m__root;
        index_option_t* m__parent;

    public:
        std::string name() const { return m_name; }
        uint32_t type() const { return m_type; }
        uint32_t size() const { return m_size; }
        index_option_t* _root() const { return m__root; }
        index_option_t* _parent() const { return m__parent; }
        Bank32BuilderType bank32_builder;
    };

private:
    bank_hdr_t* m_bank_header;
    bank16_t* m_bank1;
    bool n_bank1;

public:
    bool _is_null_bank1() { bank1(); return n_bank1; };

private:
    bank32_t* m_bank2;
    bool n_bank2;

public:
    bool _is_null_bank2() { bank2(); return n_bank2; };

private:
    index_option_t* m__root;
    kaitai::kstruct* m__parent;

public:
    bank_hdr_t* bank_header() const { return m_bank_header; }
    bank16_t* bank1() const { return m_bank1; }
    bank32_t* bank2() const { return m_bank2; }
    index_option_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    Index_optionBuilderType index_option_builder;
};

#ifndef USE_INDEX_OPTION_
#define USE_INDEX_OPTION_

std::map<std::string, Index_optionBuilderType*> builder_map;
std::vector<std::string>* builder_keys;

Index_optionBuilderType* load(std::string file_path);

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

#endif // USE_INDEX_OPTION_


#endif  // INDEX_OPTION_H_
