#ifndef SCDMS_H_
#define SCDMS_H_

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

enum Field_scdms : std::size_t {scdmsA__Zscdms_hdr, scdmsA__Zn_triggers, scdmsA__Zscdms_footer};
enum Field_scdms_header : std::size_t {scdms_headerA__Zpacked, scdms_headerA__Zoverall_header, scdms_headerA__Ztotal_triggers, scdms_headerA__Zformat_version};
enum Field_v_two_trigger : std::size_t {v_two_triggerA__Ztrigger_meta, v_two_triggerA__Zn_primitives, v_two_triggerA__Zpacked, v_two_triggerA__Zn_detectors, v_two_triggerA__Zdetectors_in_event, v_two_triggerA__Zdet_header};
enum Field_v_two_trig_meta : std::size_t {v_two_trig_metaA__Zpacked_1, v_two_trig_metaA__Ztrigger_id, v_two_trig_metaA__Zevent_number, v_two_trig_metaA__Zpacked_2, v_two_trig_metaA__Zglobal_timestamp_low, v_two_trig_metaA__Zglobal_timestamp_high, v_two_trig_metaA__Zpacked_3, v_two_trig_metaA__Zlength_of_entry, v_two_trig_metaA__Zprim_header, v_two_trig_metaA__Znum_primitives, v_two_trig_metaA__Ztrigger_type, v_two_trig_metaA__Zreadout_bitmask, v_two_trig_metaA__Zevent_size, v_two_trig_metaA__Ztrig_header};
enum Field_primitive : std::size_t {primitiveA__Zpacked_1, primitiveA__Zut, primitiveA__Zpacked_2, primitiveA__Zrt_run_time, primitiveA__Ztrig_time, primitiveA__Zpacked_3, primitiveA__Zpeak_amplitude, primitiveA__Ztrig_word, primitiveA__Zrt_time_fraction, primitiveA__Zpileup, primitiveA__Zdet_id, primitiveA__Ztrig_time_fraction, primitiveA__Zmask_pairs, primitiveA__Zindex, primitiveA__Ztrig_status, primitiveA__Zprim_dcrc_header};
enum Field_detector : std::size_t {detectorA__Zdetector_meta, detectorA__Zn_channels};
enum Field_det_meta : std::size_t {det_metaA__Zpacked_1, det_metaA__Zdcrc0_version, det_metaA__Zdcrc0_serial_num, det_metaA__Zdcrc1_version, det_metaA__Zdcrc1_serial_num, det_metaA__Zpacked_2, det_metaA__Zpacked_3, det_metaA__Zpacked_4, det_metaA__Zreadout_header, det_metaA__Zseries_time_fraction, det_metaA__Znum_channels_to_follow, det_metaA__Zdet_id, det_metaA__Zdet_type, det_metaA__Zindex, det_metaA__Zdcrc_header, det_metaA__Zchannel_header, det_metaA__Zseries_time, det_metaA__Zreadout_status};
enum Field_channel : std::size_t {channelA__Zpacked, channelA__Zn_pre_pulse_samples, channelA__Zn_on_pulse_samples, channelA__Zn_post_pulse_samples, channelA__Zsample_rate_low, channelA__Zsample_rate_high, channelA__Zsample, channelA__Zch_type, channelA__Zch_num, channelA__Zpre_trigger_offset, channelA__Zchnl_header};
enum Field_trailer : std::size_t {trailerA__Zpacked, trailerA__Zn_preceeding_triggers, trailerA__Ztrailer_header};

using ScdmsBuilderType =
	RecordBuilder<
		RecordField<Field_scdms::scdmsA__Zscdms_hdr, RecordBuilder<
			RecordField<Field_scdms_header::scdms_headerA__Zpacked, NumpyBuilder<uint32_t>>,
			RecordField<Field_scdms_header::scdms_headerA__Zoverall_header, NumpyBuilder<int32_t>>,
			RecordField<Field_scdms_header::scdms_headerA__Ztotal_triggers, NumpyBuilder<int32_t>>,
			RecordField<Field_scdms_header::scdms_headerA__Zformat_version, NumpyBuilder<int32_t>>
		>>,
		RecordField<Field_scdms::scdmsA__Zn_triggers, ListOffsetBuilder<int64_t, RecordBuilder<
			RecordField<Field_v_two_trigger::v_two_triggerA__Ztrigger_meta, RecordBuilder<
				RecordField<Field_v_two_trig_meta::v_two_trig_metaA__Zpacked_1, NumpyBuilder<uint32_t>>,
				RecordField<Field_v_two_trig_meta::v_two_trig_metaA__Ztrigger_id, NumpyBuilder<uint32_t>>,
				RecordField<Field_v_two_trig_meta::v_two_trig_metaA__Zevent_number, NumpyBuilder<uint32_t>>,
				RecordField<Field_v_two_trig_meta::v_two_trig_metaA__Zpacked_2, NumpyBuilder<uint32_t>>,
				RecordField<Field_v_two_trig_meta::v_two_trig_metaA__Zglobal_timestamp_low, NumpyBuilder<uint32_t>>,
				RecordField<Field_v_two_trig_meta::v_two_trig_metaA__Zglobal_timestamp_high, NumpyBuilder<uint32_t>>,
				RecordField<Field_v_two_trig_meta::v_two_trig_metaA__Zpacked_3, NumpyBuilder<uint32_t>>,
				RecordField<Field_v_two_trig_meta::v_two_trig_metaA__Zlength_of_entry, NumpyBuilder<uint32_t>>,
				RecordField<Field_v_two_trig_meta::v_two_trig_metaA__Zprim_header, NumpyBuilder<int32_t>>,
				RecordField<Field_v_two_trig_meta::v_two_trig_metaA__Znum_primitives, NumpyBuilder<int32_t>>,
				RecordField<Field_v_two_trig_meta::v_two_trig_metaA__Ztrigger_type, NumpyBuilder<int32_t>>,
				RecordField<Field_v_two_trig_meta::v_two_trig_metaA__Zreadout_bitmask, NumpyBuilder<int32_t>>,
				RecordField<Field_v_two_trig_meta::v_two_trig_metaA__Zevent_size, NumpyBuilder<int32_t>>,
				RecordField<Field_v_two_trig_meta::v_two_trig_metaA__Ztrig_header, NumpyBuilder<int32_t>>
			>>,
			RecordField<Field_v_two_trigger::v_two_triggerA__Zn_primitives, ListOffsetBuilder<int64_t, RecordBuilder<
				RecordField<Field_primitive::primitiveA__Zpacked_1, NumpyBuilder<uint32_t>>,
				RecordField<Field_primitive::primitiveA__Zut, NumpyBuilder<uint32_t>>,
				RecordField<Field_primitive::primitiveA__Zpacked_2, NumpyBuilder<uint32_t>>,
				RecordField<Field_primitive::primitiveA__Zrt_run_time, NumpyBuilder<uint16_t>>,
				RecordField<Field_primitive::primitiveA__Ztrig_time, NumpyBuilder<uint16_t>>,
				RecordField<Field_primitive::primitiveA__Zpacked_3, NumpyBuilder<uint32_t>>,
				RecordField<Field_primitive::primitiveA__Zpeak_amplitude, NumpyBuilder<uint16_t>>,
				RecordField<Field_primitive::primitiveA__Ztrig_word, NumpyBuilder<uint16_t>>,
				RecordField<Field_primitive::primitiveA__Zrt_time_fraction, NumpyBuilder<int32_t>>,
				RecordField<Field_primitive::primitiveA__Zpileup, NumpyBuilder<int32_t>>,
				RecordField<Field_primitive::primitiveA__Zdet_id, NumpyBuilder<int32_t>>,
				RecordField<Field_primitive::primitiveA__Ztrig_time_fraction, NumpyBuilder<int32_t>>,
				RecordField<Field_primitive::primitiveA__Zmask_pairs, NumpyBuilder<int32_t>>,
				RecordField<Field_primitive::primitiveA__Zindex, NumpyBuilder<int32_t>>,
				RecordField<Field_primitive::primitiveA__Ztrig_status, NumpyBuilder<int32_t>>,
				RecordField<Field_primitive::primitiveA__Zprim_dcrc_header, NumpyBuilder<int32_t>>
			>>>,
			RecordField<Field_v_two_trigger::v_two_triggerA__Zpacked, NumpyBuilder<uint32_t>>,
			RecordField<Field_v_two_trigger::v_two_triggerA__Zn_detectors, ListOffsetBuilder<int64_t, RecordBuilder<
				RecordField<Field_detector::detectorA__Zdetector_meta, RecordBuilder<
					RecordField<Field_det_meta::det_metaA__Zpacked_1, NumpyBuilder<uint32_t>>,
					RecordField<Field_det_meta::det_metaA__Zdcrc0_version, NumpyBuilder<uint8_t>>,
					RecordField<Field_det_meta::det_metaA__Zdcrc0_serial_num, NumpyBuilder<uint8_t>>,
					RecordField<Field_det_meta::det_metaA__Zdcrc1_version, NumpyBuilder<uint8_t>>,
					RecordField<Field_det_meta::det_metaA__Zdcrc1_serial_num, NumpyBuilder<uint8_t>>,
					RecordField<Field_det_meta::det_metaA__Zpacked_2, NumpyBuilder<uint32_t>>,
					RecordField<Field_det_meta::det_metaA__Zpacked_3, NumpyBuilder<uint32_t>>,
					RecordField<Field_det_meta::det_metaA__Zpacked_4, NumpyBuilder<uint32_t>>,
					RecordField<Field_det_meta::det_metaA__Zreadout_header, NumpyBuilder<int32_t>>,
					RecordField<Field_det_meta::det_metaA__Zseries_time_fraction, NumpyBuilder<int32_t>>,
					RecordField<Field_det_meta::det_metaA__Znum_channels_to_follow, NumpyBuilder<int32_t>>,
					RecordField<Field_det_meta::det_metaA__Zdet_id, NumpyBuilder<int32_t>>,
					RecordField<Field_det_meta::det_metaA__Zdet_type, NumpyBuilder<int32_t>>,
					RecordField<Field_det_meta::det_metaA__Zindex, NumpyBuilder<int32_t>>,
					RecordField<Field_det_meta::det_metaA__Zdcrc_header, NumpyBuilder<int32_t>>,
					RecordField<Field_det_meta::det_metaA__Zchannel_header, NumpyBuilder<int32_t>>,
					RecordField<Field_det_meta::det_metaA__Zseries_time, NumpyBuilder<int32_t>>,
					RecordField<Field_det_meta::det_metaA__Zreadout_status, NumpyBuilder<int32_t>>
				>>,
				RecordField<Field_detector::detectorA__Zn_channels, ListOffsetBuilder<int64_t, RecordBuilder<
					RecordField<Field_channel::channelA__Zpacked, NumpyBuilder<uint32_t>>,
					RecordField<Field_channel::channelA__Zn_pre_pulse_samples, NumpyBuilder<uint32_t>>,
					RecordField<Field_channel::channelA__Zn_on_pulse_samples, NumpyBuilder<uint32_t>>,
					RecordField<Field_channel::channelA__Zn_post_pulse_samples, NumpyBuilder<uint32_t>>,
					RecordField<Field_channel::channelA__Zsample_rate_low, NumpyBuilder<uint16_t>>,
					RecordField<Field_channel::channelA__Zsample_rate_high, NumpyBuilder<uint16_t>>,
					RecordField<Field_channel::channelA__Zsample, ListOffsetBuilder<int64_t, NumpyBuilder<uint16_t>>>,
					RecordField<Field_channel::channelA__Zch_type, NumpyBuilder<int32_t>>,
					RecordField<Field_channel::channelA__Zch_num, NumpyBuilder<int32_t>>,
					RecordField<Field_channel::channelA__Zpre_trigger_offset, NumpyBuilder<int32_t>>,
					RecordField<Field_channel::channelA__Zchnl_header, NumpyBuilder<int32_t>>
				>>>
			>>>,
			RecordField<Field_v_two_trigger::v_two_triggerA__Zdetectors_in_event, NumpyBuilder<int32_t>>,
			RecordField<Field_v_two_trigger::v_two_triggerA__Zdet_header, NumpyBuilder<int32_t>>
		>>>,
		RecordField<Field_scdms::scdmsA__Zscdms_footer, RecordBuilder<
			RecordField<Field_trailer::trailerA__Zpacked, NumpyBuilder<uint32_t>>,
			RecordField<Field_trailer::trailerA__Zn_preceeding_triggers, NumpyBuilder<int32_t>>,
			RecordField<Field_trailer::trailerA__Ztrailer_header, NumpyBuilder<int32_t>>
		>>
	>;


using TrailerBuilderType = decltype(std::declval<ScdmsBuilderType>().content<Field_scdms::scdmsA__Zscdms_footer>());
using Scdms_headerBuilderType = decltype(std::declval<ScdmsBuilderType>().content<Field_scdms::scdmsA__Zscdms_hdr>());
using V_two_triggerBuilderType = decltype(std::declval<ScdmsBuilderType>().content<Field_scdms::scdmsA__Zn_triggers>().content());
using PrimitiveBuilderType = decltype(std::declval<V_two_triggerBuilderType>().content<Field_v_two_trigger::v_two_triggerA__Zn_primitives>().content());
using DetectorBuilderType = decltype(std::declval<V_two_triggerBuilderType>().content<Field_v_two_trigger::v_two_triggerA__Zn_detectors>().content());
using Det_metaBuilderType = decltype(std::declval<DetectorBuilderType>().content<Field_detector::detectorA__Zdetector_meta>());
using ChannelBuilderType = decltype(std::declval<DetectorBuilderType>().content<Field_detector::detectorA__Zn_channels>().content());
using V_two_trig_metaBuilderType = decltype(std::declval<V_two_triggerBuilderType>().content<Field_v_two_trigger::v_two_triggerA__Ztrigger_meta>());

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct Awkward API: version 0.9 or later is required"
#endif

class scdms_t : public kaitai::kstruct {

public:
    class v_two_trigger_t;
    class channel_t;
    class detector_t;
    class scdms_header_t;
    class v_two_trig_meta_t;
    class trailer_t;
    class primitive_t;
    class det_meta_t;

    enum headers_t {
        HEADERS_CHANNEL_HDR = 0,
        HEADERS_WAVEFORM_HDR = 1,
        HEADERS_DCRC_HDR = 2,
        HEADERS_DETECTOR_HDR = 3,
        HEADERS_READOUT_HDR = 4,
        HEADERS_TRIGGER_HDR = 5,
        HEADERS_PRIM_DCRC_HDR = 6,
        HEADERS_PRIMITIVE_HDR = 7,
        HEADERS_TRAILER = 8,
        HEADERS_SCDMS_HDR = 9
    };

    enum trigger_types_t {
        TRIGGER_TYPES_PHYSICS = 1,
        TRIGGER_TYPES_BORR = 2,
        TRIGGER_TYPES_IRR = 3,
        TRIGGER_TYPES_EORR = 4,
        TRIGGER_TYPES_BCR = 5,
        TRIGGER_TYPES_BORTS = 6,
        TRIGGER_TYPES_EORTS = 7
    };

    scdms_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, scdms_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~scdms_t();

    class v_two_trigger_t : public kaitai::kstruct {

    public:

        v_two_trigger_t(V_two_triggerBuilderType builder, kaitai::kstream* p__io, scdms_t* p__parent = 0, scdms_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~v_two_trigger_t();

    private:
        bool f_detectors_in_event;
        int32_t m_detectors_in_event;

    public:
        int32_t detectors_in_event();

    private:
        bool f_det_header;
        headers_t m_det_header;

    public:
        headers_t det_header();

    private:
        v_two_trig_meta_t* m_trigger_meta;
        std::vector<primitive_t*>* m_n_primitives;
        uint32_t m_packed;
        std::vector<detector_t*>* m_n_detectors;
        scdms_t* m__root;
        scdms_t* m__parent;

    public:
        v_two_trig_meta_t* trigger_meta() const { return m_trigger_meta; }
        std::vector<primitive_t*>* n_primitives() const { return m_n_primitives; }
        uint32_t packed() const { return m_packed; }
        std::vector<detector_t*>* n_detectors() const { return m_n_detectors; }
        scdms_t* _root() const { return m__root; }
        scdms_t* _parent() const { return m__parent; }
        V_two_triggerBuilderType v_two_trigger_builder;
    };

    class channel_t : public kaitai::kstruct {

    public:

        channel_t(ChannelBuilderType builder, kaitai::kstream* p__io, scdms_t::detector_t* p__parent = 0, scdms_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~channel_t();

    private:
        bool f_ch_type;
        int32_t m_ch_type;

    public:
        int32_t ch_type();

    private:
        bool f_ch_num;
        int32_t m_ch_num;

    public:
        int32_t ch_num();

    private:
        bool f_pre_trigger_offset;
        int32_t m_pre_trigger_offset;

    public:
        int32_t pre_trigger_offset();

    private:
        bool f_chnl_header;
        headers_t m_chnl_header;

    public:
        headers_t chnl_header();

    private:
        uint32_t m_packed;
        uint32_t m_n_pre_pulse_samples;
        uint32_t m_n_on_pulse_samples;
        uint32_t m_n_post_pulse_samples;
        uint16_t m_sample_rate_low;
        uint16_t m_sample_rate_high;
        std::vector<uint16_t>* m_sample;
        scdms_t* m__root;
        scdms_t::detector_t* m__parent;

    public:
        uint32_t packed() const { return m_packed; }
        uint32_t n_pre_pulse_samples() const { return m_n_pre_pulse_samples; }
        uint32_t n_on_pulse_samples() const { return m_n_on_pulse_samples; }
        uint32_t n_post_pulse_samples() const { return m_n_post_pulse_samples; }
        uint16_t sample_rate_low() const { return m_sample_rate_low; }
        uint16_t sample_rate_high() const { return m_sample_rate_high; }
        std::vector<uint16_t>* sample() const { return m_sample; }
        scdms_t* _root() const { return m__root; }
        scdms_t::detector_t* _parent() const { return m__parent; }
        ChannelBuilderType channel_builder;
    };

    class detector_t : public kaitai::kstruct {

    public:

        detector_t(DetectorBuilderType builder, kaitai::kstream* p__io, scdms_t::v_two_trigger_t* p__parent = 0, scdms_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~detector_t();

    private:
        det_meta_t* m_detector_meta;
        std::vector<channel_t*>* m_n_channels;
        scdms_t* m__root;
        scdms_t::v_two_trigger_t* m__parent;

    public:
        det_meta_t* detector_meta() const { return m_detector_meta; }
        std::vector<channel_t*>* n_channels() const { return m_n_channels; }
        scdms_t* _root() const { return m__root; }
        scdms_t::v_two_trigger_t* _parent() const { return m__parent; }
        DetectorBuilderType detector_builder;
    };

    class scdms_header_t : public kaitai::kstruct {

    public:

        scdms_header_t(Scdms_headerBuilderType builder, kaitai::kstream* p__io, scdms_t* p__parent = 0, scdms_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~scdms_header_t();

    private:
        bool f_overall_header;
        headers_t m_overall_header;

    public:
        headers_t overall_header();

    private:
        bool f_total_triggers;
        int32_t m_total_triggers;

    public:
        int32_t total_triggers();

    private:
        bool f_format_version;
        int32_t m_format_version;

    public:
        int32_t format_version();

    private:
        uint32_t m_packed;
        scdms_t* m__root;
        scdms_t* m__parent;

    public:
        uint32_t packed() const { return m_packed; }
        scdms_t* _root() const { return m__root; }
        scdms_t* _parent() const { return m__parent; }
        Scdms_headerBuilderType scdms_header_builder;
    };

    class v_two_trig_meta_t : public kaitai::kstruct {

    public:

        v_two_trig_meta_t(V_two_trig_metaBuilderType builder, kaitai::kstream* p__io, scdms_t::v_two_trigger_t* p__parent = 0, scdms_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~v_two_trig_meta_t();

    private:
        bool f_prim_header;
        headers_t m_prim_header;

    public:
        headers_t prim_header();

    private:
        bool f_num_primitives;
        int32_t m_num_primitives;

    public:
        int32_t num_primitives();

    private:
        bool f_trigger_type;
        trigger_types_t m_trigger_type;

    public:
        trigger_types_t trigger_type();

    private:
        bool f_readout_bitmask;
        int32_t m_readout_bitmask;

    public:
        int32_t readout_bitmask();

    private:
        bool f_event_size;
        int32_t m_event_size;

    public:
        int32_t event_size();

    private:
        bool f_trig_header;
        headers_t m_trig_header;

    public:
        headers_t trig_header();

    private:
        uint32_t m_packed_1;
        uint32_t m_trigger_id;
        uint32_t m_event_number;
        uint32_t m_packed_2;
        uint32_t m_global_timestamp_low;
        uint32_t m_global_timestamp_high;
        uint32_t m_packed_3;
        uint32_t m_length_of_entry;
        scdms_t* m__root;
        scdms_t::v_two_trigger_t* m__parent;

    public:
        uint32_t packed_1() const { return m_packed_1; }
        uint32_t trigger_id() const { return m_trigger_id; }
        uint32_t event_number() const { return m_event_number; }
        uint32_t packed_2() const { return m_packed_2; }
        uint32_t global_timestamp_low() const { return m_global_timestamp_low; }
        uint32_t global_timestamp_high() const { return m_global_timestamp_high; }
        uint32_t packed_3() const { return m_packed_3; }

        /**
         * Length of Entry in Bytes
         */
        uint32_t length_of_entry() const { return m_length_of_entry; }
        scdms_t* _root() const { return m__root; }
        scdms_t::v_two_trigger_t* _parent() const { return m__parent; }
        V_two_trig_metaBuilderType v_two_trig_meta_builder;
    };

    class trailer_t : public kaitai::kstruct {

    public:

        trailer_t(TrailerBuilderType builder, kaitai::kstream* p__io, scdms_t* p__parent = 0, scdms_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~trailer_t();

    private:
        bool f_n_preceeding_triggers;
        int32_t m_n_preceeding_triggers;

    public:
        int32_t n_preceeding_triggers();

    private:
        bool f_trailer_header;
        headers_t m_trailer_header;

    public:
        headers_t trailer_header();

    private:
        uint32_t m_packed;
        scdms_t* m__root;
        scdms_t* m__parent;

    public:
        uint32_t packed() const { return m_packed; }
        scdms_t* _root() const { return m__root; }
        scdms_t* _parent() const { return m__parent; }
        TrailerBuilderType trailer_builder;
    };

    class primitive_t : public kaitai::kstruct {

    public:

        primitive_t(PrimitiveBuilderType builder, kaitai::kstream* p__io, scdms_t::v_two_trigger_t* p__parent = 0, scdms_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~primitive_t();

    private:
        bool f_rt_time_fraction;
        int32_t m_rt_time_fraction;

    public:
        int32_t rt_time_fraction();

    private:
        bool f_pileup;
        int32_t m_pileup;

    public:
        int32_t pileup();

    private:
        bool f_det_id;
        int32_t m_det_id;

    public:
        int32_t det_id();

    private:
        bool f_trig_time_fraction;
        int32_t m_trig_time_fraction;

    public:
        int32_t trig_time_fraction();

    private:
        bool f_mask_pairs;
        int32_t m_mask_pairs;

    public:
        int32_t mask_pairs();

    private:
        bool f_index;
        int32_t m_index;

    public:
        int32_t index();

    private:
        bool f_trig_status;
        int32_t m_trig_status;

    public:
        int32_t trig_status();

    private:
        bool f_prim_dcrc_header;
        headers_t m_prim_dcrc_header;

    public:
        headers_t prim_dcrc_header();

    private:
        uint32_t m_packed_1;
        uint32_t m_ut;
        uint32_t m_packed_2;
        uint16_t m_rt_run_time;
        uint16_t m_trig_time;
        uint32_t m_packed_3;
        uint16_t m_peak_amplitude;
        uint16_t m_trig_word;
        scdms_t* m__root;
        scdms_t::v_two_trigger_t* m__parent;

    public:
        uint32_t packed_1() const { return m_packed_1; }
        uint32_t ut() const { return m_ut; }
        uint32_t packed_2() const { return m_packed_2; }
        uint16_t rt_run_time() const { return m_rt_run_time; }
        uint16_t trig_time() const { return m_trig_time; }
        uint32_t packed_3() const { return m_packed_3; }
        uint16_t peak_amplitude() const { return m_peak_amplitude; }
        uint16_t trig_word() const { return m_trig_word; }
        scdms_t* _root() const { return m__root; }
        scdms_t::v_two_trigger_t* _parent() const { return m__parent; }
        PrimitiveBuilderType primitive_builder;
    };

    class det_meta_t : public kaitai::kstruct {

    public:

        det_meta_t(Det_metaBuilderType builder, kaitai::kstream* p__io, scdms_t::detector_t* p__parent = 0, scdms_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~det_meta_t();

    private:
        bool f_readout_header;
        headers_t m_readout_header;

    public:
        headers_t readout_header();

    private:
        bool f_series_time_fraction;
        int32_t m_series_time_fraction;

    public:
        int32_t series_time_fraction();

    private:
        bool f_num_channels_to_follow;
        int32_t m_num_channels_to_follow;

    public:
        int32_t num_channels_to_follow();

    private:
        bool f_det_id;
        int32_t m_det_id;

    public:
        int32_t det_id();

    private:
        bool f_det_type;
        int32_t m_det_type;

    public:
        int32_t det_type();

    private:
        bool f_index;
        int32_t m_index;

    public:
        int32_t index();

    private:
        bool f_dcrc_header;
        headers_t m_dcrc_header;

    public:
        headers_t dcrc_header();

    private:
        bool f_channel_header;
        headers_t m_channel_header;

    public:
        headers_t channel_header();

    private:
        bool f_series_time;
        int32_t m_series_time;

    public:
        int32_t series_time();

    private:
        bool f_readout_status;
        int32_t m_readout_status;

    public:
        int32_t readout_status();

    private:
        uint32_t m_packed_1;
        uint8_t m_dcrc0_version;
        uint8_t m_dcrc0_serial_num;
        uint8_t m_dcrc1_version;
        uint8_t m_dcrc1_serial_num;
        uint32_t m_packed_2;
        uint32_t m_packed_3;
        uint32_t m_packed_4;
        scdms_t* m__root;
        scdms_t::detector_t* m__parent;

    public:
        uint32_t packed_1() const { return m_packed_1; }
        uint8_t dcrc0_version() const { return m_dcrc0_version; }
        uint8_t dcrc0_serial_num() const { return m_dcrc0_serial_num; }
        uint8_t dcrc1_version() const { return m_dcrc1_version; }
        uint8_t dcrc1_serial_num() const { return m_dcrc1_serial_num; }
        uint32_t packed_2() const { return m_packed_2; }
        uint32_t packed_3() const { return m_packed_3; }
        uint32_t packed_4() const { return m_packed_4; }
        scdms_t* _root() const { return m__root; }
        scdms_t::detector_t* _parent() const { return m__parent; }
        Det_metaBuilderType det_meta_builder;
    };

private:
    scdms_header_t* m_scdms_hdr;
    std::vector<v_two_trigger_t*>* m_n_triggers;
    trailer_t* m_scdms_footer;
    scdms_t* m__root;
    kaitai::kstruct* m__parent;

public:
    scdms_header_t* scdms_hdr() const { return m_scdms_hdr; }
    std::vector<v_two_trigger_t*>* n_triggers() const { return m_n_triggers; }
    trailer_t* scdms_footer() const { return m_scdms_footer; }
    scdms_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    ScdmsBuilderType scdms_builder;
};

#ifndef USE_SCDMS_
#define USE_SCDMS_

std::map<std::string, ScdmsBuilderType*> builder_map;
std::vector<std::string>* builder_keys;

ScdmsBuilderType* load(std::string file_path);

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

#endif // USE_SCDMS_


#endif  // SCDMS_H_
