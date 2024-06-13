// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "animal.h"

UserDefinedMap animal_fields_map({
	{Field_animal::animalA__Zentry, "animalA__Zentry"}});

UserDefinedMap animal_entry_fields_map({
	{Field_animal_entry::animal_entryA__Zstr_len, "animal_entryA__Zstr_len"},
	{Field_animal_entry::animal_entryA__Zspecies, "animal_entryA__Zspecies"},
	{Field_animal_entry::animal_entryA__Zage, "animal_entryA__Zage"},
	{Field_animal_entry::animal_entryA__Zweight, "animal_entryA__Zweight"}});

animal_t::animal_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, animal_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_entry = 0;

    animal_builder.set_fields(animal_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void animal_t::_read() {
    m_entry = new std::vector<animal_entry_t*>();
    {
        int i = 0;
        auto& entry_listoffsetbuilder = animal_builder.content<Field_animal::animalA__Zentry>();
        entry_listoffsetbuilder.begin_list();
        while (!m__io->is_eof()) {
            auto& animal_entry_recordbuilder = animal_builder.content<Field_animal::animalA__Zentry>().content();
            m_entry->push_back(new animal_entry_t(animal_entry_recordbuilder, m__io, this, m__root));
            i++;
        }
        entry_listoffsetbuilder.end_list();
    }
}

animal_t::~animal_t() {
    _clean_up();
}

void animal_t::_clean_up() {
    if (m_entry) {
        for (std::vector<animal_entry_t*>::iterator it = m_entry->begin(); it != m_entry->end(); ++it) {
            delete *it;
        }
        delete m_entry; m_entry = 0;
    }
}

animal_t::animal_entry_t::animal_entry_t(Animal_entryBuilderType builder, kaitai::kstream* p__io, animal_t* p__parent, animal_t* p__root) : kaitai::kstruct(p__io),
	animal_entry_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    animal_entry_builder.set_fields(animal_entry_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void animal_t::animal_entry_t::_read() {
    m_str_len = m__io->read_u1();
    auto& str_len_builder = animal_entry_builder.content<Field_animal_entry::animal_entryA__Zstr_len>();
    str_len_builder.append(m_str_len);
    m_species = kaitai::kstream::bytes_to_str(m__io->read_bytes(str_len()), "UTF-8");
    auto& species_listoffsetbuilder = animal_entry_builder.content<Field_animal_entry::animal_entryA__Zspecies>();
    species_listoffsetbuilder.begin_list();
    auto& species_builder = species_listoffsetbuilder.content();
    species_listoffsetbuilder.set_parameters("\"__array__\": \"string\"");
    species_builder.set_parameters("\"__array__\" : \"char\"");
    for (int i = 0; i < m_species.length(); i++) {
        species_builder.append(m_species[i]);
    }
    species_listoffsetbuilder.end_list();
    m_age = m__io->read_u1();
    auto& age_builder = animal_entry_builder.content<Field_animal_entry::animal_entryA__Zage>();
    age_builder.append(m_age);
    m_weight = m__io->read_u2le();
    auto& weight_builder = animal_entry_builder.content<Field_animal_entry::animal_entryA__Zweight>();
    weight_builder.append(m_weight);
}

animal_t::animal_entry_t::~animal_entry_t() {
    _clean_up();
}

void animal_t::animal_entry_t::_clean_up() {
}

#ifdef USE_ANIMAL_

AnimalBuilderType* load(std::string file_path) {
    std::ifstream infile(file_path, std::ifstream::binary);
    kaitai::kstream ks(&infile);
    builder_keys = new std::vector<std::string>();
    animal_t* obj = new animal_t(&ks);
    builder_map[file_path] = &(obj->animal_builder);
    return builder_map[file_path];
}

extern "C" {

    Result fill(const char* file_path) {
        Result result;
        std::string error_message;
        AnimalBuilderType* builder = load(file_path);
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
        builder_keys->push_back(reinterpret_cast<AnimalBuilderType*>(builder)->form());
        return builder_keys->back().c_str();
    }

    int64_t length(void* builder) {
        return reinterpret_cast<AnimalBuilderType*>(builder)->length();
    }

    int64_t num_buffers(void* builder) {
        return awkward::num_buffers_helper(reinterpret_cast<AnimalBuilderType*>(builder));
    }

    const char* buffer_name(void* builder, int64_t index) {
        builder_keys->push_back(awkward::buffer_name_helper(reinterpret_cast<AnimalBuilderType*>(builder))[index]);
        return builder_keys->back().c_str();
    }

    int64_t buffer_size(void* builder, int64_t index) {
        return awkward::buffer_size_helper(reinterpret_cast<AnimalBuilderType*>(builder))[index];
    }

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index) {
        reinterpret_cast<AnimalBuilderType*>(from_builder)->to_buffer(to_buffer, name);
    }

    void deallocate(void* builder) {
        delete builder_keys;
        reinterpret_cast<AnimalBuilderType*>(builder)->clear();
    }
}

#endif // USE_ANIMAL_

