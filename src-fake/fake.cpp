// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "fake.h"

UserDefinedMap fake_fields_map({
	{Field_fake::fakeA__Zpoints, "fakeA__Zpoints"}});

UserDefinedMap point_fields_map({
	{Field_point::pointA__Zx, "pointA__Zx"},
	{Field_point::pointA__Zy, "pointA__Zy"},
	{Field_point::pointA__Zz, "pointA__Zz"}});

fake_t::fake_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, fake_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_points = 0;

    fake_builder.set_fields(fake_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void fake_t::_read() {
    m_points = new std::vector<point_t*>();
    {
        int i = 0;
        auto& points_listoffsetbuilder = fake_builder.content<Field_fake::fakeA__Zpoints>();
        points_listoffsetbuilder.begin_list();
        while (!m__io->is_eof()) {
            auto& point_recordbuilder = fake_builder.content<Field_fake::fakeA__Zpoints>().content();
            m_points->push_back(new point_t(point_recordbuilder, m__io, this, m__root));
            i++;
        }
        points_listoffsetbuilder.end_list();
    }
}

fake_t::~fake_t() {
    _clean_up();
}

void fake_t::_clean_up() {
    if (m_points) {
        for (std::vector<point_t*>::iterator it = m_points->begin(); it != m_points->end(); ++it) {
            delete *it;
        }
        delete m_points; m_points = 0;
    }
}

fake_t::point_t::point_t(PointBuilderType builder, kaitai::kstream* p__io, fake_t* p__parent, fake_t* p__root) : kaitai::kstruct(p__io),
	point_builder(builder) {
    m__parent = p__parent;
    m__root = p__root;

    point_builder.set_fields(point_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void fake_t::point_t::_read() {
    m_x = m__io->read_u4le();
    auto& x_builder = point_builder.content<Field_point::pointA__Zx>();
    x_builder.append(m_x);
    m_y = m__io->read_u4le();
    auto& y_builder = point_builder.content<Field_point::pointA__Zy>();
    y_builder.append(m_y);
    m_z = m__io->read_u4le();
    auto& z_builder = point_builder.content<Field_point::pointA__Zz>();
    z_builder.append(m_z);
}

fake_t::point_t::~point_t() {
    _clean_up();
}

void fake_t::point_t::_clean_up() {
}

#ifdef USE_FAKE_

FakeBuilderType* load(std::string file_path) {
    std::ifstream infile(file_path, std::ifstream::binary);
    kaitai::kstream ks(&infile);
    builder_keys = new std::vector<std::string>();
    fake_t* obj = new fake_t(&ks);
    builder_map[file_path] = &(obj->fake_builder);
    return builder_map[file_path];
}

extern "C" {

    Result fill(const char* file_path) {
        Result result;
        std::string error_message;
        FakeBuilderType* builder = load(file_path);
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
        builder_keys->push_back(reinterpret_cast<FakeBuilderType*>(builder)->form());
        return builder_keys->back().c_str();
    }

    int64_t length(void* builder) {
        return reinterpret_cast<FakeBuilderType*>(builder)->length();
    }

    int64_t num_buffers(void* builder) {
        return awkward::num_buffers_helper(reinterpret_cast<FakeBuilderType*>(builder));
    }

    const char* buffer_name(void* builder, int64_t index) {
        builder_keys->push_back(awkward::buffer_name_helper(reinterpret_cast<FakeBuilderType*>(builder))[index]);
        return builder_keys->back().c_str();
    }

    int64_t buffer_size(void* builder, int64_t index) {
        return awkward::buffer_size_helper(reinterpret_cast<FakeBuilderType*>(builder))[index];
    }

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index) {
        reinterpret_cast<FakeBuilderType*>(from_builder)->to_buffer(to_buffer, name);
    }

    void deallocate(void* builder) {
        delete builder_keys;
        reinterpret_cast<FakeBuilderType*>(builder)->clear();
    }
}

#endif // USE_FAKE_

