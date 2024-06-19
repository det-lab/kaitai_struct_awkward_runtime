#ifndef COLONY_H_
#define COLONY_H_

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
template<class PRIMITIVE>
using StringBuilder = awkward::LayoutBuilder::String<PRIMITIVE>;
template<class PRIMITIVE, class BUILDER>
using IndexedBuilder = awkward::LayoutBuilder::Indexed<PRIMITIVE, BUILDER>;
template<class PRIMITIVE, class BUILDER>
using IndexedOptionBuilder = awkward::LayoutBuilder::IndexedOption<PRIMITIVE, BUILDER>;
template<class... BUILDERS>
using UnionBuilder = awkward::LayoutBuilder::Union<int8_t, uint32_t, BUILDERS...>;

enum Field_colony : std::size_t {colonyA__Zanimal_entry, colonyA__Zcolony_entry};
enum Field_animal_array : std::size_t {animal_arrayA__Zlegs, animal_arrayA__Zanimal, animal_arrayA__Zlifespan};
enum Field_colony_array : std::size_t {colony_arrayA__Zname, colony_arrayA__Zint, colony_arrayA__Zbirthday};

using ColonyBuilderType =
	RecordBuilder<
		RecordField<Field_colony::colonyA__Zanimal_entry, ListOffsetBuilder<int64_t, RecordBuilder<
			RecordField<Field_animal_array::animal_arrayA__Zlegs, NumpyBuilder<uint32_t>>,
			RecordField<Field_animal_array::animal_arrayA__Zanimal, StringBuilder<int64_t>>,
			RecordField<Field_animal_array::animal_arrayA__Zlifespan, NumpyBuilder<double>>
		>>>,
		RecordField<Field_colony::colonyA__Zcolony_entry, ListOffsetBuilder<int64_t, RecordBuilder<
			RecordField<Field_colony_array::colony_arrayA__Zname, StringBuilder<int64_t>>,
			RecordField<Field_colony_array::colony_arrayA__Zint, NumpyBuilder<uint32_t>>,
			RecordField<Field_colony_array::colony_arrayA__Zbirthday, StringBuilder<int64_t>>
		>>>
	>;


using Animal_arrayBuilderType = decltype(std::declval<ColonyBuilderType>().content<Field_colony::colonyA__Zanimal_entry>().content());
using Colony_arrayBuilderType = decltype(std::declval<ColonyBuilderType>().content<Field_colony::colonyA__Zcolony_entry>().content());

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct Awkward API: version 0.9 or later is required"
#endif

class colony_t : public kaitai::kstruct {

public:
    class animal_array_t;
    class colony_array_t;

    colony_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, colony_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~colony_t();

    class animal_array_t : public kaitai::kstruct {

    public:

        animal_array_t(Animal_arrayBuilderType builder, kaitai::kstream* p__io, colony_t* p__parent = 0, colony_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~animal_array_t();

    private:
        uint32_t m_legs;
        std::string m_animal;
        double m_lifespan;
        colony_t* m__root;
        colony_t* m__parent;

    public:
        uint32_t legs() const { return m_legs; }
        std::string animal() const { return m_animal; }
        double lifespan() const { return m_lifespan; }
        colony_t* _root() const { return m__root; }
        colony_t* _parent() const { return m__parent; }
        Animal_arrayBuilderType animal_array_builder;
    };

    class colony_array_t : public kaitai::kstruct {

    public:

        colony_array_t(Colony_arrayBuilderType builder, kaitai::kstream* p__io, colony_t* p__parent = 0, colony_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~colony_array_t();

    private:
        std::string m_name;
        uint32_t m_int;
        std::string m_birthday;
        colony_t* m__root;
        colony_t* m__parent;

    public:
        std::string name() const { return m_name; }
        uint32_t int() const { return m_int; }
        std::string birthday() const { return m_birthday; }
        colony_t* _root() const { return m__root; }
        colony_t* _parent() const { return m__parent; }
        Colony_arrayBuilderType colony_array_builder;
    };

private:
    std::vector<animal_array_t*>* m_animal_entry;
    std::vector<colony_array_t*>* m_colony_entry;
    colony_t* m__root;
    kaitai::kstruct* m__parent;

public:
    std::vector<animal_array_t*>* animal_entry() const { return m_animal_entry; }
    std::vector<colony_array_t*>* colony_entry() const { return m_colony_entry; }
    colony_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    ColonyBuilderType colony_builder;
};

#ifndef USE_COLONY_
#define USE_COLONY_

ColonyBuilderType* load(std::string file_path);

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

#endif // USE_COLONY_


#endif  // COLONY_H_
