// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "fake.h"

UserDefinedMap fake_fields_map({
	{Field_fake::points, "points"}});

UserDefinedMap points_fields_map({
	{Field_points::x, "x"},
	{Field_points::y, "y"},
	{Field_points::z, "z"}});

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
        auto& sub_points_builder = fake_builder.content<Field_fake::points>();
        while (!m__io->is_eof()) {
            sub_points_builder.begin_list();
            m_points->push_back(new point_t(m__io, this, m__root));
            sub_points_builder.end_list();
            i++;
        }
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

fake_t::point_t::point_t(kaitai::kstream* p__io, fake_t* p__parent, fake_t* p__root) : kaitai::kstruct(p__io),
	points_builder(p__parent->fake_builder.content<Field_fake::points>().content()) {
    m__parent = p__parent;
    m__root = p__root;

    points_builder.set_fields(points_fields_map);

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void fake_t::point_t::_read() {
    m_x = m__io->read_u4le();
    auto& x_builder = points_builder.content<Field_points::x>();
    x_builder.append(m_x);
    m_y = m__io->read_u4le();
    auto& y_builder = points_builder.content<Field_points::y>();
    y_builder.append(m_y);
    m_z = m__io->read_u4le();
    auto& z_builder = points_builder.content<Field_points::z>();
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
            result.error_message = error_message.c_str();
        }
        return result;
    }

    const char* form(void* builder) {
        return strdup(reinterpret_cast<FakeBuilderType*>(builder)->form().c_str());
    }

    int64_t length(void* builder) {
        return reinterpret_cast<FakeBuilderType*>(builder)->length();
    }

    int64_t num_buffers(void* builder) {
        return awkward::num_buffers_helper(reinterpret_cast<FakeBuilderType*>(builder));
    }

    const char* buffer_name(void* builder, int64_t index) {
        return awkward::buffer_name_helper(reinterpret_cast<FakeBuilderType*>(builder))[index].c_str();
    }

    int64_t buffer_size(void* builder, int64_t index) {
        return awkward::buffer_size_helper(reinterpret_cast<FakeBuilderType*>(builder))[index];
    }

    void copy_into(const char* name, void* from_builder, void* to_buffer, int64_t index) {
        reinterpret_cast<FakeBuilderType*>(from_builder)->to_buffer(to_buffer, name);
    }

    void deallocate(void* builder) {
        reinterpret_cast<FakeBuilderType*>(builder)->clear();
    }
}

#endif // USE_FAKE_