#ifndef UNION_H_
#define UNION_H_

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

enum Field_union : std::size_t {unionA__Zunion_hdr, unionA__Zunion_cases};
enum Field_union_header : std::size_t {union_headerA__Zflags};
enum Field_case16 : std::size_t {case16A__Zname, case16A__Zsize};
enum Field_case32 : std::size_t {case32A__Zname, case32A__Zsize};
enum Field_case64 : std::size_t {case64A__Zname, case64A__Zsize};

using UnionBuilderType =
	RecordBuilder<
		RecordField<Field_union::unionA__Zunion_hdr, RecordBuilder<
			RecordField<Field_union_header::union_headerA__Zflags, NumpyBuilder<uint32_t>>
		>>,
		RecordField<Field_union::unionA__Zunion_cases, ListOffsetBuilder<int64_t, UnionBuilder<
			RecordBuilder<
				RecordField<Field_case16::case16A__Zname, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
				RecordField<Field_case16::case16A__Zsize, NumpyBuilder<uint16_t>>
			>,
			RecordBuilder<
				RecordField<Field_case32::case32A__Zname, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
				RecordField<Field_case32::case32A__Zsize, NumpyBuilder<uint32_t>>
			>,
			RecordBuilder<
				RecordField<Field_case64::case64A__Zname, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
				RecordField<Field_case64::case64A__Zsize, NumpyBuilder<uint32_t>>
			>
		>>>
	>;


using Case32BuilderType = decltype(std::declval<UnionBuilderType>().content<Field_union::unionA__Zunion_cases>().content().content<1>());
using Case64BuilderType = decltype(std::declval<UnionBuilderType>().content<Field_union::unionA__Zunion_cases>().content().content<2>());
using Union_headerBuilderType = decltype(std::declval<UnionBuilderType>().content<Field_union::unionA__Zunion_hdr>());
using Case16BuilderType = decltype(std::declval<UnionBuilderType>().content<Field_union::unionA__Zunion_cases>().content().content<0>());

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct Awkward API: version 0.9 or later is required"
#endif

class union_t : public kaitai::kstruct {

public:
    class union_header_t;
    class case16_t;
    class case32_t;
    class case64_t;

    union_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, union_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~union_t();

    class union_header_t : public kaitai::kstruct {

    public:

        union_header_t(Union_headerBuilderType builder, kaitai::kstream* p__io, union_t* p__parent = 0, union_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~union_header_t();

    private:
        uint32_t m_flags;
        union_t* m__root;
        union_t* m__parent;

    public:
        uint32_t flags() const { return m_flags; }
        union_t* _root() const { return m__root; }
        union_t* _parent() const { return m__parent; }
        Union_headerBuilderType union_header_builder;
    };

    class case16_t : public kaitai::kstruct {

    public:

        case16_t(Case16BuilderType builder, kaitai::kstream* p__io, union_t* p__parent = 0, union_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~case16_t();

    private:
        std::string m_name;
        uint16_t m_size;
        union_t* m__root;
        union_t* m__parent;

    public:
        std::string name() const { return m_name; }
        uint16_t size() const { return m_size; }
        union_t* _root() const { return m__root; }
        union_t* _parent() const { return m__parent; }
        Case16BuilderType case16_builder;
    };

    class case32_t : public kaitai::kstruct {

    public:

        case32_t(Case32BuilderType builder, kaitai::kstream* p__io, union_t* p__parent = 0, union_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~case32_t();

    private:
        std::string m_name;
        uint32_t m_size;
        union_t* m__root;
        union_t* m__parent;

    public:
        std::string name() const { return m_name; }
        uint32_t size() const { return m_size; }
        union_t* _root() const { return m__root; }
        union_t* _parent() const { return m__parent; }
        Case32BuilderType case32_builder;
    };

    class case64_t : public kaitai::kstruct {

    public:

        case64_t(Case64BuilderType builder, kaitai::kstream* p__io, union_t* p__parent = 0, union_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~case64_t();

    private:
        std::string m_name;
        uint32_t m_size;
        union_t* m__root;
        union_t* m__parent;

    public:
        std::string name() const { return m_name; }
        uint32_t size() const { return m_size; }
        union_t* _root() const { return m__root; }
        union_t* _parent() const { return m__parent; }
        Case64BuilderType case64_builder;
    };

private:
    union_header_t* m_union_hdr;
    std::vector<kaitai::kstruct*>* m_union_cases;
    union_t* m__root;
    kaitai::kstruct* m__parent;

public:
    union_header_t* union_hdr() const { return m_union_hdr; }
    std::vector<kaitai::kstruct*>* union_cases() const { return m_union_cases; }
    union_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    UnionBuilderType union_builder;
};

#ifndef USE_UNION_
#define USE_UNION_

std::map<std::string, UnionBuilderType*> builder_map;
std::vector<std::string>* builder_keys;

UnionBuilderType* load(std::string file_path);

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

#endif // USE_UNION_


#endif  // UNION_H_
