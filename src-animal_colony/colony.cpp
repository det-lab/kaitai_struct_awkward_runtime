// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "colony.h"

UserDefinedMap colony_fields_map({
	{Field_colony::colonyA__Zanimal_entry, "colonyA__Zanimal_entry"},
	{Field_colony::colonyA__Zcolony_entry, "colonyA__Zcolony_entry"}});

UserDefinedMap animal_array_fields_map({
	{Field_animal_array::animal_arrayA__Zlegs, "animal_arrayA__Zlegs"},
	{Field_animal_array::animal_arrayA__Zanimal, "animal_arrayA__Zanimal"},
	{Field_animal_array::animal_arrayA__Zlifespan, "animal_arrayA__Zlifespan"}});

UserDefinedMap colony_array_fields_map({
	{Field_colony_array::colony_arrayA__Zname, "colony_arrayA__Zname"},
	{Field_colony_array::colony_arrayA__Zint, "colony_arrayA__Zint"},
	{Field_colony_array::colony_arrayA__Zbirthday, "colony_arrayA__Zbirthday"}});

colony_t::colony_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, colony_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_animal_entry = 0;
    m_colony_entry = 0;

    colony_builder.set_fields(colony_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void colony_t::_read() {
    m_animal_entry = new std::vector<animal_array_t*>();
    const int l_animal_entry = 8;
    auto& animal_entry_listoffsetbuilder = colony_builder.content<Field_colony::colonyA__Zanimal_entry>();
    animal_entry_listoffsetbuilder.begin_list();
    for (int i = 0; i < l_animal_entry; i++) {
        auto& animal_array_recordbuilder = colony_builder.content<Field_colony::colonyA__Zanimal_entry>().content();
        m_animal_entry->push_back(new animal_array_t(animal_array_recordbuilder, m__io, this, m__root));
    }
    animal_entry_listoffsetbuilder.end_list();
    m_colony_entry = new std::vector<colony_array_t*>();
    {
        int i = 0;
        auto& colony_entry_listoffsetbuilder = colony_builder.content<Field_colony::colonyA__Zcolony_entry>();
        colony_entry_listoffsetbuilder.begin_list();
        while (!m__io->is_eof()) {
            auto& colony_array_recordbuilder = colony_builder.content<Field_colony::colonyA__Zcolony_entry>().content();
            m_colony_entry->push_back(new colony_array_t(colony_array_recordbuilder, m__io, this, m__root));
            i++;
        }
        colony_entry_listoffsetbuilder.end_list();
    }
}

colony_t::~colony_t() {
    _clean_up();
}

void colony_t::_clean_up() {
    if (m_animal_entry) {
        for (std::vector<animal_array_t*>::iterator it = m_animal_entry->begin(); it != m_animal_entry->end(); ++it) {
            delete *it;
        }
        delete m_animal_entry; m_animal_entry = 0;
    }
    if (m_colony_entry) {
        for (std::vector<colony_array_t*>::iterator it = m_colony_entry->begin(); it != m_colony_entry->end(); ++it) {
            delete *it;
        }
        delete m_colony_entry; m_colony_entry = 0;
    }
}

colony_t::animal_array_t::animal_array_t(Animal_arrayBuilderType builder, kaitai::kstream* p__io, colony_t* p__parent, colony_t* p__root) : kaitai::kstruct(p__io),
	animal_array_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    animal_array_builder.set_fields(animal_array_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void colony_t::animal_array_t::_read() {
    m_legs = m__io->read_u4le();
    auto& legs_builder = animal_array_builder.content<Field_animal_array::animal_arrayA__Zlegs>();
    legs_builder.append(m_legs);
    m_animal = kaitai::kstream::bytes_to_str(m__io->read_bytes(10), "ASCII");
    auto& animal_stringbuilder = animal_array_builder.content<Field_animal_array::animal_arrayA__Zanimal>();
    animal_stringbuilder.append(m_animal);
    m_lifespan = m__io->read_f8le();
    auto& lifespan_builder = animal_array_builder.content<Field_animal_array::animal_arrayA__Zlifespan>();
    lifespan_builder.append(m_lifespan);
}

colony_t::animal_array_t::~animal_array_t() {
    _clean_up();
}

void colony_t::animal_array_t::_clean_up() {
}

colony_t::colony_array_t::colony_array_t(Colony_arrayBuilderType builder, kaitai::kstream* p__io, colony_t* p__parent, colony_t* p__root) : kaitai::kstruct(p__io),
	colony_array_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    colony_array_builder.set_fields(colony_array_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void colony_t::colony_array_t::_read() {
    m_name = kaitai::kstream::bytes_to_str(m__io->read_bytes(10), "ASCII");
    auto& name_stringbuilder = colony_array_builder.content<Field_colony_array::colony_arrayA__Zname>();
    name_stringbuilder.append(m_name);
    m_int = m__io->read_u4le();
    auto& int_builder = colony_array_builder.content<Field_colony_array::colony_arrayA__Zint>();
    int_builder.append(m_int);
    m_birthday = kaitai::kstream::bytes_to_str(m__io->read_bytes(10), "ASCII");
    auto& birthday_stringbuilder = colony_array_builder.content<Field_colony_array::colony_arrayA__Zbirthday>();
    birthday_stringbuilder.append(m_birthday);
}

colony_t::colony_array_t::~colony_array_t() {
    _clean_up();
}

void colony_t::colony_array_t::_clean_up() {
}

#ifdef USE_COLONY_

std::map<std::string, ColonyBuilderType*> builder_map;
std::vector<std::string>* builder_keys;

ColonyBuilderType* load(std::string file_path) {
    std::ifstream infile(file_path, std::ifstream::binary);
    kaitai::kstream ks(&infile);
    builder_keys = new std::vector<std::string>();
    colony_t* obj = new colony_t(&ks);
    builder_map[file_path] = &(obj->colony_builder);
    return builder_map[file_path];
}

extern "C" {

    Result fill(const char* file_path) {
        Result result;
        std::string error_message;
        ColonyBuilderType* builder = load(file_path);
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
        builder_keys->push_back(reinterpret_cast<ColonyBuilderType*>(builder)->form());
        return builder_keys->back().c_str();
    }

    int64_t length(void* builder) {
        return reinterpret_cast<ColonyBuilderType*>(builder)->length();
    }

    int64_t num_buffers(void* builder) {
        return awkward::num_buffers_helper(reinterpret_cast<ColonyBuilderType*>(builder));
    }

    const char* buffer_name(void* builder, int64_t index) {
        builder_keys->push_back(awkward::buffer_name_helper(reinterpret_cast<ColonyBuilderType*>(builder))[index]);
        return builder_keys->back().c_str();
    }

    int64_t buffer_size(void* builder, int64_t index) {
        return awkward::buffer_size_helper(reinterpret_cast<ColonyBuilderType*>(builder))[index];
    }

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index) {
        reinterpret_cast<ColonyBuilderType*>(from_builder)->to_buffer(to_buffer, name);
    }

    void deallocate(void* builder) {
        delete builder_keys;
        reinterpret_cast<ColonyBuilderType*>(builder)->clear();
    }
}

#endif // USE_COLONY_

