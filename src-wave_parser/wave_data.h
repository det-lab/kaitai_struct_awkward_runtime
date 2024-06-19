#ifndef WAVE_DATA_H_
#define WAVE_DATA_H_

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

enum Field_wave_data : std::size_t {wave_dataA__Znum_hr_records, wave_dataA__Znum_mid_records, wave_dataA__Znum_peak_records, wave_dataA__Zhr_records, wave_dataA__Zmid_records, wave_dataA__Zpeak_records};
enum Field_record : std::size_t {recordA__Zidentifier, recordA__Zvalue};

using Wave_dataBuilderType =
	RecordBuilder<
		RecordField<Field_wave_data::wave_dataA__Znum_hr_records, NumpyBuilder<uint32_t>>,
		RecordField<Field_wave_data::wave_dataA__Znum_mid_records, NumpyBuilder<uint32_t>>,
		RecordField<Field_wave_data::wave_dataA__Znum_peak_records, NumpyBuilder<uint32_t>>,
		RecordField<Field_wave_data::wave_dataA__Zhr_records, ListOffsetBuilder<int64_t, RecordBuilder<
			RecordField<Field_record::recordA__Zidentifier, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
			RecordField<Field_record::recordA__Zvalue, NumpyBuilder<double>>
		>>>,
		RecordField<Field_wave_data::wave_dataA__Zmid_records, ListOffsetBuilder<int64_t, RecordBuilder<
			RecordField<Field_record::recordA__Zidentifier, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
			RecordField<Field_record::recordA__Zvalue, NumpyBuilder<double>>
		>>>,
		RecordField<Field_wave_data::wave_dataA__Zpeak_records, ListOffsetBuilder<int64_t, RecordBuilder<
			RecordField<Field_record::recordA__Zidentifier, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
			RecordField<Field_record::recordA__Zvalue, NumpyBuilder<double>>
		>>>
	>;


using RecordBuilderType = decltype(std::declval<Wave_dataBuilderType>().content<Field_wave_data::wave_dataA__Zpeak_records>().content());

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct Awkward API: version 0.9 or later is required"
#endif

class wave_data_t : public kaitai::kstruct {

public:
    class record_t;

    wave_data_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, wave_data_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~wave_data_t();

    class record_t : public kaitai::kstruct {

    public:

        record_t(RecordBuilderType builder, kaitai::kstream* p__io, wave_data_t* p__parent = 0, wave_data_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~record_t();

    private:
        std::string m_identifier;
        double m_value;
        wave_data_t* m__root;
        wave_data_t* m__parent;

    public:
        std::string identifier() const { return m_identifier; }
        double value() const { return m_value; }
        wave_data_t* _root() const { return m__root; }
        wave_data_t* _parent() const { return m__parent; }
        RecordBuilderType record_builder;
    };

private:
    uint32_t m_num_hr_records;
    uint32_t m_num_mid_records;
    uint32_t m_num_peak_records;
    std::vector<record_t*>* m_hr_records;
    std::vector<record_t*>* m_mid_records;
    std::vector<record_t*>* m_peak_records;
    wave_data_t* m__root;
    kaitai::kstruct* m__parent;

public:
    uint32_t num_hr_records() const { return m_num_hr_records; }
    uint32_t num_mid_records() const { return m_num_mid_records; }
    uint32_t num_peak_records() const { return m_num_peak_records; }
    std::vector<record_t*>* hr_records() const { return m_hr_records; }
    std::vector<record_t*>* mid_records() const { return m_mid_records; }
    std::vector<record_t*>* peak_records() const { return m_peak_records; }
    wave_data_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    Wave_dataBuilderType wave_data_builder;
};

#ifndef USE_WAVE_DATA_
#define USE_WAVE_DATA_

std::map<std::string, Wave_dataBuilderType*> builder_map;
std::vector<std::string>* builder_keys;

Wave_dataBuilderType* load(std::string file_path);

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

#endif // USE_WAVE_DATA_


#endif  // WAVE_DATA_H_
