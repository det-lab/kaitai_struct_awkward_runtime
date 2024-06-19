#ifndef ANIMAL_H_
#define ANIMAL_H_

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

enum Field_animal : std::size_t {animalA__Zentry};
enum Field_animal_entry : std::size_t {animal_entryA__Zstr_len, animal_entryA__Zspecies, animal_entryA__Zage, animal_entryA__Zweight};

using AnimalBuilderType =
	RecordBuilder<
		RecordField<Field_animal::animalA__Zentry, ListOffsetBuilder<int64_t, RecordBuilder<
			RecordField<Field_animal_entry::animal_entryA__Zstr_len, NumpyBuilder<uint8_t>>,
			RecordField<Field_animal_entry::animal_entryA__Zspecies, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
			RecordField<Field_animal_entry::animal_entryA__Zage, NumpyBuilder<uint8_t>>,
			RecordField<Field_animal_entry::animal_entryA__Zweight, NumpyBuilder<uint16_t>>
		>>>
	>;


using Animal_entryBuilderType = decltype(std::declval<AnimalBuilderType>().content<Field_animal::animalA__Zentry>().content());

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct Awkward API: version 0.9 or later is required"
#endif

class animal_t : public kaitai::kstruct {

public:
    class animal_entry_t;

    animal_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, animal_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~animal_t();

    class animal_entry_t : public kaitai::kstruct {

    public:

        animal_entry_t(Animal_entryBuilderType builder, kaitai::kstream* p__io, animal_t* p__parent = 0, animal_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~animal_entry_t();

    private:
        uint8_t m_str_len;
        std::string m_species;
        uint8_t m_age;
        uint16_t m_weight;
        animal_t* m__root;
        animal_t* m__parent;

    public:
        uint8_t str_len() const { return m_str_len; }
        std::string species() const { return m_species; }
        uint8_t age() const { return m_age; }
        uint16_t weight() const { return m_weight; }
        animal_t* _root() const { return m__root; }
        animal_t* _parent() const { return m__parent; }
        Animal_entryBuilderType animal_entry_builder;
    };

private:
    std::vector<animal_entry_t*>* m_entry;
    animal_t* m__root;
    kaitai::kstruct* m__parent;

public:
    std::vector<animal_entry_t*>* entry() const { return m_entry; }
    animal_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    AnimalBuilderType animal_builder;
};

#ifndef USE_ANIMAL_
#define USE_ANIMAL_

std::map<std::string, AnimalBuilderType*> builder_map;
std::vector<std::string>* builder_keys;

AnimalBuilderType* load(std::string file_path);

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

#endif // USE_ANIMAL_


#endif  // ANIMAL_H_
