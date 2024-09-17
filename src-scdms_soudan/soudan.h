#ifndef SOUDAN_H_
#define SOUDAN_H_

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

enum Field_soudan : std::size_t {soudanA__Zfile_hdr, soudanA__Zdetector_hdr, soudanA__Zhdrs, soudanA__Zlogical_rcrds};
enum Field_two_word_file_header : std::size_t {two_word_file_headerA__Zendian_indicator, two_word_file_headerA__Zdata_format};
enum Field_format_word : std::size_t {format_wordA__Zdaq_major, format_wordA__Zdaq_minor, format_wordA__Zdata_format_major, format_wordA__Zdata_format_minor};
enum Field_detector_config_header : std::size_t {detector_config_headerA__Zheader_num, detector_config_headerA__Zconfig_record_len, detector_config_headerA__Zrepeat_value};
enum Field_header_list : std::size_t {header_listA__Zheader_num, header_listA__Zphonon_config, header_listA__Zcharge_config};
enum Field_phonon_config_header : std::size_t {phonon_config_headerA__Zphonon_channel_config_record_len, phonon_config_headerA__Zdetector_code, phonon_config_headerA__Ztower_num, phonon_config_headerA__Zpost_amp_gain, phonon_config_headerA__Zqet_bias, phonon_config_headerA__Zsquid_bias, phonon_config_headerA__Zsquid_lockpoint, phonon_config_headerA__Zrtf_offset, phonon_config_headerA__Zvariable_gain, phonon_config_headerA__Zdelta_t, phonon_config_headerA__Ztrigger_time, phonon_config_headerA__Ztrace_len};
enum Field_charge_config_header : std::size_t {charge_config_headerA__Zcharge_config_len, charge_config_headerA__Zdetector_code, charge_config_headerA__Ztower_num, charge_config_headerA__Zchannel_post_amp, charge_config_headerA__Zchannel_bias, charge_config_headerA__Zrtf_offset, charge_config_headerA__Zdelta_t, charge_config_headerA__Ztrigger_time, charge_config_headerA__Ztrace_len};
enum Field_logical_records : std::size_t {logical_recordsA__Zevent_hdr, logical_recordsA__Zadmin_rcrd, logical_recordsA__Ztrigger_rcrd, logical_recordsA__Ztlb_trig_mask_rcrd, logical_recordsA__Zgps_data, logical_recordsA__Ztrace_rcrd, logical_recordsA__Zsoudan_buffer};
enum Field_event_header : std::size_t {event_headerA__Zevent_header_word, event_headerA__Zevent_size, event_headerA__Zevent_identifier, event_headerA__Zevent_class, event_headerA__Zevent_category, event_headerA__Zevent_type};
enum Field_administrative_record : std::size_t {administrative_recordA__Zheader_num, administrative_recordA__Zadmin_len, administrative_recordA__Zseries_num_1, administrative_recordA__Zseries_num_2, administrative_recordA__Zevent_num_in_series, administrative_recordA__Zseconds_from_epoch, administrative_recordA__Ztime_from_last_event, administrative_recordA__Zlive_time_from_last_event};
enum Field_trigger_record_format : std::size_t {trigger_record_formatA__Ztrigger_header, trigger_record_formatA__Ztrigger_len, trigger_record_formatA__Ztrigger_time, trigger_record_formatA__Zindividual_trigger_mask};
enum Field_tlb_trigger_mask_record : std::size_t {tlb_trigger_mask_recordA__Ztlb_mask_header, tlb_trigger_mask_recordA__Ztlb_len, tlb_trigger_mask_recordA__Ztower_mask};
enum Field_gps_data : std::size_t {gps_dataA__Ztlb_mask_header, gps_dataA__Zlen, gps_dataA__Zgps_year_day, gps_dataA__Zgps_status_hour_minute_second, gps_dataA__Zgps_microsecs_from_gps_second, gps_dataA__Zlen_value};
enum Field_trace_data : std::size_t {trace_dataA__Ztrace_rcrd, trace_dataA__Zsample_data};
enum Field_trace_record : std::size_t {trace_recordA__Zheader_num, trace_recordA__Ztrace_len, trace_recordA__Ztrace_bookkeeping_header, trace_recordA__Zbookkeeping_len, trace_recordA__Zdigitizer_base_address, trace_recordA__Zdigitizer_channel, trace_recordA__Zdetector_code, trace_recordA__Ztimebase_header, trace_recordA__Ztimebase_len, trace_recordA__Zt0_in_ns, trace_recordA__Zdelta_t_ns, trace_recordA__Znum_of_points, trace_recordA__Zsecond_trace_header, trace_recordA__Znum_samples};
enum Field_data_sample : std::size_t {data_sampleA__Zdata_selection, data_sampleA__Zsample_a, data_sampleA__Zsample_b};
enum Field_soudan_history_buffer : std::size_t {soudan_history_bufferA__Zhistory_buffer_header, soudan_history_bufferA__Zhistory_buffer_len, soudan_history_bufferA__Znum_time_nvt, soudan_history_bufferA__Ztime_nvt, soudan_history_bufferA__Znum_veto_mask_words, soudan_history_bufferA__Ztime_n_minus_veto_mask, soudan_history_bufferA__Znum_trigger_times, soudan_history_bufferA__Ztimes, soudan_history_bufferA__Znum_trigger_mask_words_per_time, soudan_history_bufferA__Ztimes_minus_trigger_mask};

using SoudanBuilderType =
	RecordBuilder<
		RecordField<Field_soudan::soudanA__Zfile_hdr, RecordBuilder<
			RecordField<Field_two_word_file_header::two_word_file_headerA__Zendian_indicator, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
			RecordField<Field_two_word_file_header::two_word_file_headerA__Zdata_format, RecordBuilder<
				RecordField<Field_format_word::format_wordA__Zdaq_major, NumpyBuilder<uint8_t>>,
				RecordField<Field_format_word::format_wordA__Zdaq_minor, NumpyBuilder<uint8_t>>,
				RecordField<Field_format_word::format_wordA__Zdata_format_major, NumpyBuilder<uint8_t>>,
				RecordField<Field_format_word::format_wordA__Zdata_format_minor, NumpyBuilder<uint8_t>>
			>>
		>>,
		RecordField<Field_soudan::soudanA__Zdetector_hdr, RecordBuilder<
			RecordField<Field_detector_config_header::detector_config_headerA__Zheader_num, NumpyBuilder<uint32_t>>,
			RecordField<Field_detector_config_header::detector_config_headerA__Zconfig_record_len, NumpyBuilder<uint32_t>>,
			RecordField<Field_detector_config_header::detector_config_headerA__Zrepeat_value, NumpyBuilder<int32_t>>
		>>,
		RecordField<Field_soudan::soudanA__Zhdrs, ListOffsetBuilder<int64_t, RecordBuilder<
			RecordField<Field_header_list::header_listA__Zheader_num, NumpyBuilder<uint32_t>>,
			RecordField<Field_header_list::header_listA__Zphonon_config, IndexedOptionBuilder<int64_t, RecordBuilder<
				RecordField<Field_phonon_config_header::phonon_config_headerA__Zphonon_channel_config_record_len, NumpyBuilder<uint32_t>>,
				RecordField<Field_phonon_config_header::phonon_config_headerA__Zdetector_code, NumpyBuilder<int32_t>>,
				RecordField<Field_phonon_config_header::phonon_config_headerA__Ztower_num, NumpyBuilder<int32_t>>,
				RecordField<Field_phonon_config_header::phonon_config_headerA__Zpost_amp_gain, NumpyBuilder<int32_t>>,
				RecordField<Field_phonon_config_header::phonon_config_headerA__Zqet_bias, NumpyBuilder<int32_t>>,
				RecordField<Field_phonon_config_header::phonon_config_headerA__Zsquid_bias, NumpyBuilder<int32_t>>,
				RecordField<Field_phonon_config_header::phonon_config_headerA__Zsquid_lockpoint, NumpyBuilder<int32_t>>,
				RecordField<Field_phonon_config_header::phonon_config_headerA__Zrtf_offset, NumpyBuilder<int32_t>>,
				RecordField<Field_phonon_config_header::phonon_config_headerA__Zvariable_gain, NumpyBuilder<int32_t>>,
				RecordField<Field_phonon_config_header::phonon_config_headerA__Zdelta_t, NumpyBuilder<int32_t>>,
				RecordField<Field_phonon_config_header::phonon_config_headerA__Ztrigger_time, NumpyBuilder<int32_t>>,
				RecordField<Field_phonon_config_header::phonon_config_headerA__Ztrace_len, NumpyBuilder<int32_t>>
			>>>,
			RecordField<Field_header_list::header_listA__Zcharge_config, IndexedOptionBuilder<int64_t, RecordBuilder<
				RecordField<Field_charge_config_header::charge_config_headerA__Zcharge_config_len, NumpyBuilder<uint32_t>>,
				RecordField<Field_charge_config_header::charge_config_headerA__Zdetector_code, NumpyBuilder<int32_t>>,
				RecordField<Field_charge_config_header::charge_config_headerA__Ztower_num, NumpyBuilder<int32_t>>,
				RecordField<Field_charge_config_header::charge_config_headerA__Zchannel_post_amp, NumpyBuilder<int32_t>>,
				RecordField<Field_charge_config_header::charge_config_headerA__Zchannel_bias, NumpyBuilder<int32_t>>,
				RecordField<Field_charge_config_header::charge_config_headerA__Zrtf_offset, NumpyBuilder<int32_t>>,
				RecordField<Field_charge_config_header::charge_config_headerA__Zdelta_t, NumpyBuilder<int32_t>>,
				RecordField<Field_charge_config_header::charge_config_headerA__Ztrigger_time, NumpyBuilder<int32_t>>,
				RecordField<Field_charge_config_header::charge_config_headerA__Ztrace_len, NumpyBuilder<int32_t>>
			>>>
		>>>,
		RecordField<Field_soudan::soudanA__Zlogical_rcrds, ListOffsetBuilder<int64_t, RecordBuilder<
			RecordField<Field_logical_records::logical_recordsA__Zevent_hdr, RecordBuilder<
				RecordField<Field_event_header::event_headerA__Zevent_header_word, NumpyBuilder<uint32_t>>,
				RecordField<Field_event_header::event_headerA__Zevent_size, NumpyBuilder<uint32_t>>,
				RecordField<Field_event_header::event_headerA__Zevent_identifier, NumpyBuilder<int32_t>>,
				RecordField<Field_event_header::event_headerA__Zevent_class, NumpyBuilder<int32_t>>,
				RecordField<Field_event_header::event_headerA__Zevent_category, NumpyBuilder<int32_t>>,
				RecordField<Field_event_header::event_headerA__Zevent_type, NumpyBuilder<int32_t>>
			>>,
			RecordField<Field_logical_records::logical_recordsA__Zadmin_rcrd, RecordBuilder<
				RecordField<Field_administrative_record::administrative_recordA__Zheader_num, NumpyBuilder<uint32_t>>,
				RecordField<Field_administrative_record::administrative_recordA__Zadmin_len, NumpyBuilder<uint32_t>>,
				RecordField<Field_administrative_record::administrative_recordA__Zseries_num_1, NumpyBuilder<uint32_t>>,
				RecordField<Field_administrative_record::administrative_recordA__Zseries_num_2, NumpyBuilder<uint32_t>>,
				RecordField<Field_administrative_record::administrative_recordA__Zevent_num_in_series, NumpyBuilder<uint32_t>>,
				RecordField<Field_administrative_record::administrative_recordA__Zseconds_from_epoch, NumpyBuilder<uint32_t>>,
				RecordField<Field_administrative_record::administrative_recordA__Ztime_from_last_event, NumpyBuilder<uint32_t>>,
				RecordField<Field_administrative_record::administrative_recordA__Zlive_time_from_last_event, NumpyBuilder<uint32_t>>
			>>,
			RecordField<Field_logical_records::logical_recordsA__Ztrigger_rcrd, RecordBuilder<
				RecordField<Field_trigger_record_format::trigger_record_formatA__Ztrigger_header, NumpyBuilder<uint32_t>>,
				RecordField<Field_trigger_record_format::trigger_record_formatA__Ztrigger_len, NumpyBuilder<uint32_t>>,
				RecordField<Field_trigger_record_format::trigger_record_formatA__Ztrigger_time, NumpyBuilder<uint32_t>>,
				RecordField<Field_trigger_record_format::trigger_record_formatA__Zindividual_trigger_mask, ListOffsetBuilder<int64_t, NumpyBuilder<uint32_t>>>
			>>,
			RecordField<Field_logical_records::logical_recordsA__Ztlb_trig_mask_rcrd, RecordBuilder<
				RecordField<Field_tlb_trigger_mask_record::tlb_trigger_mask_recordA__Ztlb_mask_header, NumpyBuilder<uint32_t>>,
				RecordField<Field_tlb_trigger_mask_record::tlb_trigger_mask_recordA__Ztlb_len, NumpyBuilder<uint32_t>>,
				RecordField<Field_tlb_trigger_mask_record::tlb_trigger_mask_recordA__Ztower_mask, ListOffsetBuilder<int64_t, NumpyBuilder<uint32_t>>>
			>>,
			RecordField<Field_logical_records::logical_recordsA__Zgps_data, RecordBuilder<
				RecordField<Field_gps_data::gps_dataA__Ztlb_mask_header, NumpyBuilder<uint32_t>>,
				RecordField<Field_gps_data::gps_dataA__Zlen, NumpyBuilder<uint32_t>>,
				RecordField<Field_gps_data::gps_dataA__Zgps_year_day, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
				RecordField<Field_gps_data::gps_dataA__Zgps_status_hour_minute_second, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
				RecordField<Field_gps_data::gps_dataA__Zgps_microsecs_from_gps_second, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
				RecordField<Field_gps_data::gps_dataA__Zlen_value, NumpyBuilder<int8_t>>
			>>,
			RecordField<Field_logical_records::logical_recordsA__Ztrace_rcrd, ListOffsetBuilder<int64_t, RecordBuilder<
				RecordField<Field_trace_data::trace_dataA__Ztrace_rcrd, RecordBuilder<
					RecordField<Field_trace_record::trace_recordA__Zheader_num, NumpyBuilder<uint32_t>>,
					RecordField<Field_trace_record::trace_recordA__Ztrace_len, NumpyBuilder<uint32_t>>,
					RecordField<Field_trace_record::trace_recordA__Ztrace_bookkeeping_header, NumpyBuilder<uint32_t>>,
					RecordField<Field_trace_record::trace_recordA__Zbookkeeping_len, NumpyBuilder<uint32_t>>,
					RecordField<Field_trace_record::trace_recordA__Zdigitizer_base_address, NumpyBuilder<uint32_t>>,
					RecordField<Field_trace_record::trace_recordA__Zdigitizer_channel, NumpyBuilder<uint32_t>>,
					RecordField<Field_trace_record::trace_recordA__Zdetector_code, NumpyBuilder<uint32_t>>,
					RecordField<Field_trace_record::trace_recordA__Ztimebase_header, NumpyBuilder<uint32_t>>,
					RecordField<Field_trace_record::trace_recordA__Ztimebase_len, NumpyBuilder<uint32_t>>,
					RecordField<Field_trace_record::trace_recordA__Zt0_in_ns, NumpyBuilder<int32_t>>,
					RecordField<Field_trace_record::trace_recordA__Zdelta_t_ns, NumpyBuilder<uint32_t>>,
					RecordField<Field_trace_record::trace_recordA__Znum_of_points, NumpyBuilder<uint32_t>>,
					RecordField<Field_trace_record::trace_recordA__Zsecond_trace_header, NumpyBuilder<uint32_t>>,
					RecordField<Field_trace_record::trace_recordA__Znum_samples, NumpyBuilder<uint32_t>>
				>>,
				RecordField<Field_trace_data::trace_dataA__Zsample_data, ListOffsetBuilder<int64_t, RecordBuilder<
					RecordField<Field_data_sample::data_sampleA__Zdata_selection, NumpyBuilder<uint32_t>>,
					RecordField<Field_data_sample::data_sampleA__Zsample_a, NumpyBuilder<int32_t>>,
					RecordField<Field_data_sample::data_sampleA__Zsample_b, NumpyBuilder<int32_t>>
				>>>
			>>>,
			RecordField<Field_logical_records::logical_recordsA__Zsoudan_buffer, RecordBuilder<
				RecordField<Field_soudan_history_buffer::soudan_history_bufferA__Zhistory_buffer_header, NumpyBuilder<uint32_t>>,
				RecordField<Field_soudan_history_buffer::soudan_history_bufferA__Zhistory_buffer_len, NumpyBuilder<uint32_t>>,
				RecordField<Field_soudan_history_buffer::soudan_history_bufferA__Znum_time_nvt, NumpyBuilder<uint32_t>>,
				RecordField<Field_soudan_history_buffer::soudan_history_bufferA__Ztime_nvt, ListOffsetBuilder<int64_t, NumpyBuilder<uint32_t>>>,
				RecordField<Field_soudan_history_buffer::soudan_history_bufferA__Znum_veto_mask_words, NumpyBuilder<uint32_t>>,
				RecordField<Field_soudan_history_buffer::soudan_history_bufferA__Ztime_n_minus_veto_mask, ListOffsetBuilder<int64_t, NumpyBuilder<uint32_t>>>,
				RecordField<Field_soudan_history_buffer::soudan_history_bufferA__Znum_trigger_times, NumpyBuilder<uint32_t>>,
				RecordField<Field_soudan_history_buffer::soudan_history_bufferA__Ztimes, ListOffsetBuilder<int64_t, NumpyBuilder<uint32_t>>>,
				RecordField<Field_soudan_history_buffer::soudan_history_bufferA__Znum_trigger_mask_words_per_time, NumpyBuilder<uint32_t>>,
				RecordField<Field_soudan_history_buffer::soudan_history_bufferA__Ztimes_minus_trigger_mask, ListOffsetBuilder<int64_t, NumpyBuilder<uint32_t>>>
			>>
		>>>
	>;


using Header_listBuilderType = decltype(std::declval<SoudanBuilderType>().content<Field_soudan::soudanA__Zhdrs>().content());
using Charge_config_headerBuilderType = decltype(std::declval<Header_listBuilderType>().content<Field_header_list::header_listA__Zcharge_config>().content());
using Phonon_config_headerBuilderType = decltype(std::declval<Header_listBuilderType>().content<Field_header_list::header_listA__Zphonon_config>().content());
using Logical_recordsBuilderType = decltype(std::declval<SoudanBuilderType>().content<Field_soudan::soudanA__Zlogical_rcrds>().content());
using Tlb_trigger_mask_recordBuilderType = decltype(std::declval<Logical_recordsBuilderType>().content<Field_logical_records::logical_recordsA__Ztlb_trig_mask_rcrd>());
using Event_headerBuilderType = decltype(std::declval<Logical_recordsBuilderType>().content<Field_logical_records::logical_recordsA__Zevent_hdr>());
using Trigger_record_formatBuilderType = decltype(std::declval<Logical_recordsBuilderType>().content<Field_logical_records::logical_recordsA__Ztrigger_rcrd>());
using Administrative_recordBuilderType = decltype(std::declval<Logical_recordsBuilderType>().content<Field_logical_records::logical_recordsA__Zadmin_rcrd>());
using Trace_dataBuilderType = decltype(std::declval<Logical_recordsBuilderType>().content<Field_logical_records::logical_recordsA__Ztrace_rcrd>().content());
using Data_sampleBuilderType = decltype(std::declval<Trace_dataBuilderType>().content<Field_trace_data::trace_dataA__Zsample_data>().content());
using Trace_recordBuilderType = decltype(std::declval<Trace_dataBuilderType>().content<Field_trace_data::trace_dataA__Ztrace_rcrd>());
using Soudan_history_bufferBuilderType = decltype(std::declval<Logical_recordsBuilderType>().content<Field_logical_records::logical_recordsA__Zsoudan_buffer>());
using Gps_dataBuilderType = decltype(std::declval<Logical_recordsBuilderType>().content<Field_logical_records::logical_recordsA__Zgps_data>());
using Detector_config_headerBuilderType = decltype(std::declval<SoudanBuilderType>().content<Field_soudan::soudanA__Zdetector_hdr>());
using Two_word_file_headerBuilderType = decltype(std::declval<SoudanBuilderType>().content<Field_soudan::soudanA__Zfile_hdr>());
using Format_wordBuilderType = decltype(std::declval<Two_word_file_headerBuilderType>().content<Field_two_word_file_header::two_word_file_headerA__Zdata_format>());

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct Awkward API: version 0.9 or later is required"
#endif

class soudan_t : public kaitai::kstruct {

public:
    class logical_records_t;
    class trace_record_t;
    class detector_config_header_t;
    class trace_data_t;
    class administrative_record_t;
    class two_word_file_header_t;
    class tlb_trigger_mask_record_t;
    class event_header_t;
    class format_word_t;
    class soudan_history_buffer_t;
    class gps_data_t;
    class phonon_config_header_t;
    class header_list_t;
    class charge_config_header_t;
    class data_sample_t;
    class trigger_record_format_t;

    soudan_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, soudan_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~soudan_t();

    class logical_records_t : public kaitai::kstruct {

    public:

        logical_records_t(Logical_recordsBuilderType builder, kaitai::kstream* p__io, soudan_t* p__parent = 0, soudan_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~logical_records_t();

    private:
        event_header_t* m_event_hdr;
        administrative_record_t* m_admin_rcrd;
        trigger_record_format_t* m_trigger_rcrd;
        tlb_trigger_mask_record_t* m_tlb_trig_mask_rcrd;
        gps_data_t* m_gps_data;
        std::vector<trace_data_t*>* m_trace_rcrd;
        soudan_history_buffer_t* m_soudan_buffer;
        soudan_t* m__root;
        soudan_t* m__parent;

    public:
        event_header_t* event_hdr() const { return m_event_hdr; }
        administrative_record_t* admin_rcrd() const { return m_admin_rcrd; }
        trigger_record_format_t* trigger_rcrd() const { return m_trigger_rcrd; }
        tlb_trigger_mask_record_t* tlb_trig_mask_rcrd() const { return m_tlb_trig_mask_rcrd; }
        gps_data_t* gps_data() const { return m_gps_data; }
        std::vector<trace_data_t*>* trace_rcrd() const { return m_trace_rcrd; }
        soudan_history_buffer_t* soudan_buffer() const { return m_soudan_buffer; }
        soudan_t* _root() const { return m__root; }
        soudan_t* _parent() const { return m__parent; }
        Logical_recordsBuilderType logical_records_builder;
    };

    class trace_record_t : public kaitai::kstruct {

    public:

        trace_record_t(Trace_recordBuilderType builder, kaitai::kstream* p__io, soudan_t::trace_data_t* p__parent = 0, soudan_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~trace_record_t();

    private:
        uint32_t m_header_num;
        uint32_t m_trace_len;
        uint32_t m_trace_bookkeeping_header;
        uint32_t m_bookkeeping_len;
        uint32_t m_digitizer_base_address;
        uint32_t m_digitizer_channel;
        uint32_t m_detector_code;
        uint32_t m_timebase_header;
        uint32_t m_timebase_len;
        int32_t m_t0_in_ns;
        uint32_t m_delta_t_ns;
        uint32_t m_num_of_points;
        uint32_t m_second_trace_header;
        uint32_t m_num_samples;
        soudan_t* m__root;
        soudan_t::trace_data_t* m__parent;

    public:

        /**
         * 0x0000 0011
         */
        uint32_t header_num() const { return m_header_num; }
        uint32_t trace_len() const { return m_trace_len; }

        /**
         * 0x0000 0011
         */
        uint32_t trace_bookkeeping_header() const { return m_trace_bookkeeping_header; }
        uint32_t bookkeeping_len() const { return m_bookkeeping_len; }
        uint32_t digitizer_base_address() const { return m_digitizer_base_address; }
        uint32_t digitizer_channel() const { return m_digitizer_channel; }
        uint32_t detector_code() const { return m_detector_code; }

        /**
         * 0x0000 0012
         */
        uint32_t timebase_header() const { return m_timebase_header; }
        uint32_t timebase_len() const { return m_timebase_len; }
        int32_t t0_in_ns() const { return m_t0_in_ns; }
        uint32_t delta_t_ns() const { return m_delta_t_ns; }
        uint32_t num_of_points() const { return m_num_of_points; }

        /**
         * 0x0000 0013
         */
        uint32_t second_trace_header() const { return m_second_trace_header; }

        /**
         * Should be a power of two
         * (1024, 2048, 4096, etc)
         */
        uint32_t num_samples() const { return m_num_samples; }
        soudan_t* _root() const { return m__root; }
        soudan_t::trace_data_t* _parent() const { return m__parent; }
        Trace_recordBuilderType trace_record_builder;
    };

    class detector_config_header_t : public kaitai::kstruct {

    public:

        detector_config_header_t(Detector_config_headerBuilderType builder, kaitai::kstream* p__io, soudan_t* p__parent = 0, soudan_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~detector_config_header_t();

    private:
        bool f_repeat_value;
        int32_t m_repeat_value;

    public:
        int32_t repeat_value();

    private:
        uint32_t m_header_num;
        uint32_t m_config_record_len;
        soudan_t* m__root;
        soudan_t* m__parent;

    public:
        uint32_t header_num() const { return m_header_num; }
        uint32_t config_record_len() const { return m_config_record_len; }
        soudan_t* _root() const { return m__root; }
        soudan_t* _parent() const { return m__parent; }
        Detector_config_headerBuilderType detector_config_header_builder;
    };

    class trace_data_t : public kaitai::kstruct {

    public:

        trace_data_t(Trace_dataBuilderType builder, kaitai::kstream* p__io, soudan_t::logical_records_t* p__parent = 0, soudan_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~trace_data_t();

    private:
        trace_record_t* m_trace_rcrd;
        std::vector<data_sample_t*>* m_sample_data;
        soudan_t* m__root;
        soudan_t::logical_records_t* m__parent;

    public:
        trace_record_t* trace_rcrd() const { return m_trace_rcrd; }
        std::vector<data_sample_t*>* sample_data() const { return m_sample_data; }
        soudan_t* _root() const { return m__root; }
        soudan_t::logical_records_t* _parent() const { return m__parent; }
        Trace_dataBuilderType trace_data_builder;
    };

    class administrative_record_t : public kaitai::kstruct {

    public:

        administrative_record_t(Administrative_recordBuilderType builder, kaitai::kstream* p__io, soudan_t::logical_records_t* p__parent = 0, soudan_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~administrative_record_t();

    private:
        uint32_t m_header_num;
        uint32_t m_admin_len;
        uint32_t m_series_num_1;
        uint32_t m_series_num_2;
        uint32_t m_event_num_in_series;
        uint32_t m_seconds_from_epoch;
        uint32_t m_time_from_last_event;
        uint32_t m_live_time_from_last_event;
        soudan_t* m__root;
        soudan_t::logical_records_t* m__parent;

    public:

        /**
         * 0x0000 0002: Admin, Long Series Num
         *              (Event Num, Timestamp, Livetime, ...)
         */
        uint32_t header_num() const { return m_header_num; }

        /**
         * 24 bytes
         */
        uint32_t admin_len() const { return m_admin_len; }

        /**
         * LLYYMMDD
         */
        uint32_t series_num_1() const { return m_series_num_1; }

        /**
         * HHMM
         */
        uint32_t series_num_2() const { return m_series_num_2; }
        uint32_t event_num_in_series() const { return m_event_num_in_series; }

        /**
         * Event time
         * Epoch defined as Jan 1st 1904 for SUF (MAC artifact)
         * Epoch defined as Jan 1st 1970 for Soudan
         */
        uint32_t seconds_from_epoch() const { return m_seconds_from_epoch; }

        /**
         * Time in Milliseconds
         */
        uint32_t time_from_last_event() const { return m_time_from_last_event; }

        /**
         * Time in Milliseconds
         */
        uint32_t live_time_from_last_event() const { return m_live_time_from_last_event; }
        soudan_t* _root() const { return m__root; }
        soudan_t::logical_records_t* _parent() const { return m__parent; }
        Administrative_recordBuilderType administrative_record_builder;
    };

    class two_word_file_header_t : public kaitai::kstruct {

    public:

        two_word_file_header_t(Two_word_file_headerBuilderType builder, kaitai::kstream* p__io, soudan_t* p__parent = 0, soudan_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~two_word_file_header_t();

    private:
        std::string m_endian_indicator;
        format_word_t* m_data_format;
        soudan_t* m__root;
        soudan_t* m__parent;

    public:

        /**
         * le if '[4, 3, 2, 1]'
         * be if '[1, 2, 3, 4]'
         */
        std::string endian_indicator() const { return m_endian_indicator; }
        format_word_t* data_format() const { return m_data_format; }
        soudan_t* _root() const { return m__root; }
        soudan_t* _parent() const { return m__parent; }
        Two_word_file_headerBuilderType two_word_file_header_builder;
    };

    class tlb_trigger_mask_record_t : public kaitai::kstruct {

    public:

        tlb_trigger_mask_record_t(Tlb_trigger_mask_recordBuilderType builder, kaitai::kstream* p__io, soudan_t::logical_records_t* p__parent = 0, soudan_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~tlb_trigger_mask_record_t();

    private:
        uint32_t m_tlb_mask_header;
        uint32_t m_tlb_len;
        std::vector<uint32_t>* m_tower_mask;
        soudan_t* m__root;
        soudan_t::logical_records_t* m__parent;

    public:
        uint32_t tlb_mask_header() const { return m_tlb_mask_header; }
        uint32_t tlb_len() const { return m_tlb_len; }
        std::vector<uint32_t>* tower_mask() const { return m_tower_mask; }
        soudan_t* _root() const { return m__root; }
        soudan_t::logical_records_t* _parent() const { return m__parent; }
        Tlb_trigger_mask_recordBuilderType tlb_trigger_mask_record_builder;
    };

    class event_header_t : public kaitai::kstruct {

    public:

        event_header_t(Event_headerBuilderType builder, kaitai::kstream* p__io, soudan_t::logical_records_t* p__parent = 0, soudan_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~event_header_t();

    private:
        bool f_event_identifier;
        int32_t m_event_identifier;

    public:
        int32_t event_identifier();

    private:
        bool f_event_class;
        int32_t m_event_class;

    public:

        /**
         * 0x0: Raw
         * 0x1: Processed
         * 0x2: Monte Carlo
         */
        int32_t event_class();

    private:
        bool f_event_category;
        int32_t m_event_category;

    public:

        /**
         * 0x0: Per Trigger
         * 0x1: Occasional
         * 0x2: Begin File Series
         * 0x3: Begin File
         * 0x4: End File
         * 0x5: End File Series
         * 0x6: Per Trigger w/ Selective Readout of Detectors that Cross Threshold
         */
        int32_t event_category();

    private:
        bool f_event_type;
        int32_t m_event_type;

    public:

        /**
         * 0x0: Wimp Search
         * 0x1: 60Co Calibration
         * 0x2: 60Co Low Energy Calibration
         * 0x3: Neutron Calibration
         * 0x4: Random Triggers
         * 0x5: Pulser Triggers
         * 0x6: Test
         * 0x7: Data Monitering Event
         * 0x8: 137Cs Calibration
         * 0x9: 133Ba Calibration
         * 0xa: Veto OR Multiplicity Trigger
         */
        int32_t event_type();

    private:
        uint32_t m_event_header_word;
        uint32_t m_event_size;
        soudan_t* m__root;
        soudan_t::logical_records_t* m__parent;

    public:
        uint32_t event_header_word() const { return m_event_header_word; }
        uint32_t event_size() const { return m_event_size; }
        soudan_t* _root() const { return m__root; }
        soudan_t::logical_records_t* _parent() const { return m__parent; }
        Event_headerBuilderType event_header_builder;
    };

    class format_word_t : public kaitai::kstruct {

    public:

        format_word_t(Format_wordBuilderType builder, kaitai::kstream* p__io, soudan_t::two_word_file_header_t* p__parent = 0, soudan_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~format_word_t();

    private:
        uint8_t m_daq_major;
        uint8_t m_daq_minor;
        uint8_t m_data_format_major;
        uint8_t m_data_format_minor;
        soudan_t* m__root;
        soudan_t::two_word_file_header_t* m__parent;

    public:
        uint8_t daq_major() const { return m_daq_major; }
        uint8_t daq_minor() const { return m_daq_minor; }
        uint8_t data_format_major() const { return m_data_format_major; }
        uint8_t data_format_minor() const { return m_data_format_minor; }
        soudan_t* _root() const { return m__root; }
        soudan_t::two_word_file_header_t* _parent() const { return m__parent; }
        Format_wordBuilderType format_word_builder;
    };

    class soudan_history_buffer_t : public kaitai::kstruct {

    public:

        soudan_history_buffer_t(Soudan_history_bufferBuilderType builder, kaitai::kstream* p__io, soudan_t::logical_records_t* p__parent = 0, soudan_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~soudan_history_buffer_t();

    private:
        uint32_t m_history_buffer_header;
        uint32_t m_history_buffer_len;
        uint32_t m_num_time_nvt;
        std::vector<uint32_t>* m_time_nvt;
        uint32_t m_num_veto_mask_words;
        std::vector<uint32_t>* m_time_n_minus_veto_mask;
        uint32_t m_num_trigger_times;
        std::vector<uint32_t>* m_times;
        uint32_t m_num_trigger_mask_words_per_time;
        std::vector<uint32_t>* m_times_minus_trigger_mask;
        soudan_t* m__root;
        soudan_t::logical_records_t* m__parent;

    public:

        /**
         * 0x0000 0021
         */
        uint32_t history_buffer_header() const { return m_history_buffer_header; }
        uint32_t history_buffer_len() const { return m_history_buffer_len; }
        uint32_t num_time_nvt() const { return m_num_time_nvt; }
        std::vector<uint32_t>* time_nvt() const { return m_time_nvt; }
        uint32_t num_veto_mask_words() const { return m_num_veto_mask_words; }
        std::vector<uint32_t>* time_n_minus_veto_mask() const { return m_time_n_minus_veto_mask; }
        uint32_t num_trigger_times() const { return m_num_trigger_times; }
        std::vector<uint32_t>* times() const { return m_times; }
        uint32_t num_trigger_mask_words_per_time() const { return m_num_trigger_mask_words_per_time; }
        std::vector<uint32_t>* times_minus_trigger_mask() const { return m_times_minus_trigger_mask; }
        soudan_t* _root() const { return m__root; }
        soudan_t::logical_records_t* _parent() const { return m__parent; }
        Soudan_history_bufferBuilderType soudan_history_buffer_builder;
    };

    class gps_data_t : public kaitai::kstruct {

    public:

        gps_data_t(Gps_dataBuilderType builder, kaitai::kstream* p__io, soudan_t::logical_records_t* p__parent = 0, soudan_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~gps_data_t();

    private:
        bool f_len_value;
        int8_t m_len_value;

    public:
        int8_t len_value();

    private:
        uint32_t m_tlb_mask_header;
        uint32_t m_len;
        std::string m_gps_year_day;
        std::string m_gps_status_hour_minute_second;
        std::string m_gps_microsecs_from_gps_second;
        soudan_t* m__root;
        soudan_t::logical_records_t* m__parent;

    public:
        uint32_t tlb_mask_header() const { return m_tlb_mask_header; }
        uint32_t len() const { return m_len; }
        std::string gps_year_day() const { return m_gps_year_day; }
        std::string gps_status_hour_minute_second() const { return m_gps_status_hour_minute_second; }
        std::string gps_microsecs_from_gps_second() const { return m_gps_microsecs_from_gps_second; }
        soudan_t* _root() const { return m__root; }
        soudan_t::logical_records_t* _parent() const { return m__parent; }
        Gps_dataBuilderType gps_data_builder;
    };

    class phonon_config_header_t : public kaitai::kstruct {

    public:

        phonon_config_header_t(Phonon_config_headerBuilderType builder, kaitai::kstream* p__io, soudan_t::header_list_t* p__parent = 0, soudan_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~phonon_config_header_t();

    private:
        uint32_t m_phonon_channel_config_record_len;
        int32_t m_detector_code;
        int32_t m_tower_num;
        int32_t m_post_amp_gain;
        int32_t m_qet_bias;
        int32_t m_squid_bias;
        int32_t m_squid_lockpoint;
        int32_t m_rtf_offset;
        int32_t m_variable_gain;
        int32_t m_delta_t;
        int32_t m_trigger_time;
        int32_t m_trace_len;
        soudan_t* m__root;
        soudan_t::header_list_t* m__parent;

    public:
        uint32_t phonon_channel_config_record_len() const { return m_phonon_channel_config_record_len; }
        int32_t detector_code() const { return m_detector_code; }
        int32_t tower_num() const { return m_tower_num; }
        int32_t post_amp_gain() const { return m_post_amp_gain; }
        int32_t qet_bias() const { return m_qet_bias; }
        int32_t squid_bias() const { return m_squid_bias; }
        int32_t squid_lockpoint() const { return m_squid_lockpoint; }
        int32_t rtf_offset() const { return m_rtf_offset; }
        int32_t variable_gain() const { return m_variable_gain; }
        int32_t delta_t() const { return m_delta_t; }
        int32_t trigger_time() const { return m_trigger_time; }
        int32_t trace_len() const { return m_trace_len; }
        soudan_t* _root() const { return m__root; }
        soudan_t::header_list_t* _parent() const { return m__parent; }
        Phonon_config_headerBuilderType phonon_config_header_builder;
    };

    class header_list_t : public kaitai::kstruct {

    public:

        header_list_t(Header_listBuilderType builder, kaitai::kstream* p__io, soudan_t* p__parent = 0, soudan_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~header_list_t();

    private:
        uint32_t m_header_num;
        phonon_config_header_t* m_phonon_config;
        bool n_phonon_config;

    public:
        bool _is_null_phonon_config() { phonon_config(); return n_phonon_config; };

    private:
        charge_config_header_t* m_charge_config;
        bool n_charge_config;

    public:
        bool _is_null_charge_config() { charge_config(); return n_charge_config; };

    private:
        soudan_t* m__root;
        soudan_t* m__parent;

    public:
        uint32_t header_num() const { return m_header_num; }
        phonon_config_header_t* phonon_config() const { return m_phonon_config; }
        charge_config_header_t* charge_config() const { return m_charge_config; }
        soudan_t* _root() const { return m__root; }
        soudan_t* _parent() const { return m__parent; }
        Header_listBuilderType header_list_builder;
    };

    class charge_config_header_t : public kaitai::kstruct {

    public:

        charge_config_header_t(Charge_config_headerBuilderType builder, kaitai::kstream* p__io, soudan_t::header_list_t* p__parent = 0, soudan_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~charge_config_header_t();

    private:
        uint32_t m_charge_config_len;
        int32_t m_detector_code;
        int32_t m_tower_num;
        int32_t m_channel_post_amp;
        int32_t m_channel_bias;
        int32_t m_rtf_offset;
        int32_t m_delta_t;
        int32_t m_trigger_time;
        int32_t m_trace_len;
        soudan_t* m__root;
        soudan_t::header_list_t* m__parent;

    public:
        uint32_t charge_config_len() const { return m_charge_config_len; }
        int32_t detector_code() const { return m_detector_code; }
        int32_t tower_num() const { return m_tower_num; }
        int32_t channel_post_amp() const { return m_channel_post_amp; }
        int32_t channel_bias() const { return m_channel_bias; }
        int32_t rtf_offset() const { return m_rtf_offset; }
        int32_t delta_t() const { return m_delta_t; }
        int32_t trigger_time() const { return m_trigger_time; }
        int32_t trace_len() const { return m_trace_len; }
        soudan_t* _root() const { return m__root; }
        soudan_t::header_list_t* _parent() const { return m__parent; }
        Charge_config_headerBuilderType charge_config_header_builder;
    };

    class data_sample_t : public kaitai::kstruct {

    public:

        data_sample_t(Data_sampleBuilderType builder, kaitai::kstream* p__io, soudan_t::trace_data_t* p__parent = 0, soudan_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~data_sample_t();

    private:
        bool f_sample_a;
        int32_t m_sample_a;

    public:
        int32_t sample_a();

    private:
        bool f_sample_b;
        int32_t m_sample_b;

    public:
        int32_t sample_b();

    private:
        uint32_t m_data_selection;
        soudan_t* m__root;
        soudan_t::trace_data_t* m__parent;

    public:
        uint32_t data_selection() const { return m_data_selection; }
        soudan_t* _root() const { return m__root; }
        soudan_t::trace_data_t* _parent() const { return m__parent; }
        Data_sampleBuilderType data_sample_builder;
    };

    class trigger_record_format_t : public kaitai::kstruct {

    public:

        trigger_record_format_t(Trigger_record_formatBuilderType builder, kaitai::kstream* p__io, soudan_t::logical_records_t* p__parent = 0, soudan_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~trigger_record_format_t();

    private:
        uint32_t m_trigger_header;
        uint32_t m_trigger_len;
        uint32_t m_trigger_time;
        std::vector<uint32_t>* m_individual_trigger_mask;
        soudan_t* m__root;
        soudan_t::logical_records_t* m__parent;

    public:
        uint32_t trigger_header() const { return m_trigger_header; }
        uint32_t trigger_len() const { return m_trigger_len; }
        uint32_t trigger_time() const { return m_trigger_time; }
        std::vector<uint32_t>* individual_trigger_mask() const { return m_individual_trigger_mask; }
        soudan_t* _root() const { return m__root; }
        soudan_t::logical_records_t* _parent() const { return m__parent; }
        Trigger_record_formatBuilderType trigger_record_format_builder;
    };

private:
    two_word_file_header_t* m_file_hdr;
    detector_config_header_t* m_detector_hdr;
    std::vector<header_list_t*>* m_hdrs;
    std::vector<logical_records_t*>* m_logical_rcrds;
    soudan_t* m__root;
    kaitai::kstruct* m__parent;

public:
    two_word_file_header_t* file_hdr() const { return m_file_hdr; }
    detector_config_header_t* detector_hdr() const { return m_detector_hdr; }
    std::vector<header_list_t*>* hdrs() const { return m_hdrs; }
    std::vector<logical_records_t*>* logical_rcrds() const { return m_logical_rcrds; }
    soudan_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    SoudanBuilderType soudan_builder;
};

#ifndef USE_SOUDAN_
#define USE_SOUDAN_

std::map<std::string, SoudanBuilderType*> builder_map;
std::vector<std::string>* builder_keys;

SoudanBuilderType* load(std::string file_path);

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

#endif // USE_SOUDAN_


#endif  // SOUDAN_H_
