#ifndef FAKE_H_
#define FAKE_H_

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

enum Field_fake : std::size_t {points};
enum Field_points : std::size_t {x, y, z};

using FakeBuilderType =
	RecordBuilder<
		RecordField<Field_fake::points, ListOffsetBuilder<int64_t, RecordBuilder<
			RecordField<Field_points::x, NumpyBuilder<uint32_t>>,
			RecordField<Field_points::y, NumpyBuilder<uint32_t>>,
			RecordField<Field_points::z, NumpyBuilder<uint32_t>>
		>>>
	>;
using PointsBuilderType = decltype(std::declval<FakeBuilderType>().content<Field_fake::points>().content());


#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct Awkward API: version 0.9 or later is required"
#endif

class fake_t : public kaitai::kstruct {

public:
    class point_t;

    fake_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, fake_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~fake_t();

    class point_t : public kaitai::kstruct {

    public:

        point_t(kaitai::kstream* p__io, fake_t* p__parent = 0, fake_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~point_t();

    private:
        uint32_t m_x;
        uint32_t m_y;
        uint32_t m_z;
        fake_t* m__root;
        fake_t* m__parent;

    public:
        uint32_t x() const { return m_x; }
        uint32_t y() const { return m_y; }
        uint32_t z() const { return m_z; }
        fake_t* _root() const { return m__root; }
        fake_t* _parent() const { return m__parent; }
        PointsBuilderType points_builder;
    };

private:
    std::vector<point_t*>* m_points;
    fake_t* m__root;
    kaitai::kstruct* m__parent;

public:
    std::vector<point_t*>* points() const { return m_points; }
    fake_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    FakeBuilderType fake_builder;
};

#ifdef USE_FAKE

std::map<std::string, FakeBuilderType*> builder_map;

FakeBuilderType* load(std::string file_path);

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

#endif // USE_FAKE


#endif  // FAKE_H_