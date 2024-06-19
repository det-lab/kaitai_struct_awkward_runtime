#ifndef RECORDS_H_
#define RECORDS_H_

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

enum Field_records : std::size_t {recordsA__Zlevel1};
enum Field_one : std::size_t {oneA__Zlevel2};
enum Field_two : std::size_t {twoA__Zlevel3};
enum Field_three : std::size_t {threeA__Zlevel4};

using RecordsBuilderType =
	RecordBuilder<
		RecordField<Field_records::recordsA__Zlevel1, ListOffsetBuilder<int64_t, RecordBuilder<
			RecordField<Field_one::oneA__Zlevel2, ListOffsetBuilder<int64_t, RecordBuilder<
				RecordField<Field_two::twoA__Zlevel3, ListOffsetBuilder<int64_t, RecordBuilder<
					RecordField<Field_three::threeA__Zlevel4, NumpyBuilder<uint32_t>>
				>>>
			>>>
		>>>
	>;


using OneBuilderType = decltype(std::declval<RecordsBuilderType>().content<Field_records::recordsA__Zlevel1>().content());
using TwoBuilderType = decltype(std::declval<OneBuilderType>().content<Field_one::oneA__Zlevel2>().content());
using ThreeBuilderType = decltype(std::declval<TwoBuilderType>().content<Field_two::twoA__Zlevel3>().content());

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct Awkward API: version 0.9 or later is required"
#endif

class records_t : public kaitai::kstruct {

public:
    class one_t;
    class two_t;
    class three_t;

    records_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, records_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~records_t();

    class one_t : public kaitai::kstruct {

    public:

        one_t(OneBuilderType builder, kaitai::kstream* p__io, records_t* p__parent = 0, records_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~one_t();

    private:
        std::vector<two_t*>* m_level2;
        records_t* m__root;
        records_t* m__parent;

    public:
        std::vector<two_t*>* level2() const { return m_level2; }
        records_t* _root() const { return m__root; }
        records_t* _parent() const { return m__parent; }
        OneBuilderType one_builder;
    };

    class two_t : public kaitai::kstruct {

    public:

        two_t(TwoBuilderType builder, kaitai::kstream* p__io, records_t::one_t* p__parent = 0, records_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~two_t();

    private:
        std::vector<three_t*>* m_level3;
        records_t* m__root;
        records_t::one_t* m__parent;

    public:
        std::vector<three_t*>* level3() const { return m_level3; }
        records_t* _root() const { return m__root; }
        records_t::one_t* _parent() const { return m__parent; }
        TwoBuilderType two_builder;
    };

    class three_t : public kaitai::kstruct {

    public:

        three_t(ThreeBuilderType builder, kaitai::kstream* p__io, records_t::two_t* p__parent = 0, records_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~three_t();

    private:
        uint32_t m_level4;
        records_t* m__root;
        records_t::two_t* m__parent;

    public:
        uint32_t level4() const { return m_level4; }
        records_t* _root() const { return m__root; }
        records_t::two_t* _parent() const { return m__parent; }
        ThreeBuilderType three_builder;
    };

private:
    std::vector<one_t*>* m_level1;
    records_t* m__root;
    kaitai::kstruct* m__parent;

public:
    std::vector<one_t*>* level1() const { return m_level1; }
    records_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    RecordsBuilderType records_builder;
};

#ifndef USE_RECORDS_
#define USE_RECORDS_

std::map<std::string, RecordsBuilderType*> builder_map;
std::vector<std::string>* builder_keys;

RecordsBuilderType* load(std::string file_path);

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

#endif // USE_RECORDS_


#endif  // RECORDS_H_
