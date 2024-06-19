#ifndef TEST_H_
#define TEST_H_

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

enum Field_test : std::size_t {testA__Zodb_hdr, testA__Zunknown, testA__Zodb_size, testA__Zodb, testA__Zentry};
enum Field_entry_block : std::size_t {entry_blockA__Zmidas_hdr, entry_blockA__Zscdms_data, entry_blockA__Zdmc_data, entry_blockA__Zdata};
enum Field_midas_header : std::size_t {midas_headerA__Zevt_id, midas_headerA__Ztrigger_mask, midas_headerA__Zserial_number, midas_headerA__Ztime_stamp, midas_headerA__Zevt_data_size, midas_headerA__Zall_banks_size, midas_headerA__Zflags, midas_headerA__Zbank_name, midas_headerA__Ztype, midas_headerA__Zbank_size};
enum Field_scdms_data_block : std::size_t {scdms_data_blockA__Zscdms_hdr, scdms_data_blockA__Ztrigger_blk, scdms_data_blockA__Zscdms_ftr};
enum Field_scdms_header : std::size_t {scdms_headerA__Zpacked, scdms_headerA__Zoverall_header, scdms_headerA__Ztotal_triggers, scdms_headerA__Zformat_version};
enum Field_trigger_block : std::size_t {trigger_blockA__Zevent_hdr, trigger_blockA__Znum_primitive_hdr, trigger_blockA__Zprimitive_blk, trigger_blockA__Zn_detectors, trigger_blockA__Zdetector_blk, trigger_blockA__Zsdu_primitive_hdr, trigger_blockA__Zsdu_primitive_blk, trigger_blockA__Znum_sdu_hdr, trigger_blockA__Zsdu_blk};
enum Field_event_header : std::size_t {event_headerA__Zpacked_event_size, event_headerA__Ztrigger_id, event_headerA__Zevent_number, event_headerA__Zpacked_type, event_headerA__Zglobal_timestamp_low, event_headerA__Zglobal_timestamp_high, event_headerA__Zpacked_poll_end, event_headerA__Zpoll_time_fraction, event_headerA__Zpoll_cycle_end_time, event_headerA__Ztrigger_type, event_headerA__Zreadout_bitmask, event_headerA__Zevent_size, event_headerA__Ztrig_header};
enum Field_num_primitive_header : std::size_t {num_primitive_headerA__Zpacked_primitive_num, num_primitive_headerA__Zentry_length, num_primitive_headerA__Znum_primitives, num_primitive_headerA__Zprim_header};
enum Field_primitive_block : std::size_t {primitive_blockA__Zpacked_primitive, primitive_blockA__Zrt_issue_time, primitive_blockA__Zrt_run_time_fraction_packed, primitive_blockA__Zprim_trig_time, primitive_blockA__Zrt_run_time, primitive_blockA__Ztrigger_mask_packed, primitive_blockA__Ztrig_word, primitive_blockA__Zprim_blank, primitive_blockA__Zpeak_amplitude, primitive_blockA__Zpileup, primitive_blockA__Ztrig_time_frac, primitive_blockA__Zdet_id, primitive_blockA__Ztrig_mask, primitive_blockA__Zindex, primitive_blockA__Ztrig_status, primitive_blockA__Zprim_dcrc_header, primitive_blockA__Zrt_run_time_fraction};
enum Field_detectors : std::size_t {detectorsA__Zn_detectors_packed, detectorsA__Zdetectors_in_event, detectorsA__Znum_det_header};
enum Field_detector_block : std::size_t {detector_blockA__Zdetector_hdr, detector_blockA__Zreadout_hdr, detector_blockA__Znum_channels_hdr, detector_blockA__Zchannel_blk};
enum Field_detector_header : std::size_t {detector_headerA__Zdetector_hdr_packed, detector_headerA__Zdcrc1_serial_nbr, detector_headerA__Zdcrc1_version, detector_headerA__Zdcrc2_serial_nbr, detector_headerA__Zdcrc2_version, detector_headerA__Zdetector_type, detector_headerA__Zindex, detector_headerA__Zdet_id, detector_headerA__Zdetector_header};
enum Field_readout_header : std::size_t {readout_headerA__Zreadout_hdr_packed_1, readout_headerA__Zreadout_hdr_packed_2, readout_headerA__Zwaveform_read_start_time, readout_headerA__Zwaveform_read_end_time, readout_headerA__Zwaveform_read_start_time_fraction, readout_headerA__Zwaveform_read_end_time_fraction, readout_headerA__Zreadout_header, readout_headerA__Zseries_time_fraction, readout_headerA__Zseries_time, readout_headerA__Zhas_thermometry_readout, readout_headerA__Zreadout_status};
enum Field_num_channels_header : std::size_t {num_channels_headerA__Znum_channels_packed, num_channels_headerA__Zchannels_header, num_channels_headerA__Znum_channels};
enum Field_channel_block : std::size_t {channel_blockA__Zchannel_packed, channel_blockA__Znum_pre_pulse_samples, channel_blockA__Znum_on_pulse_samples, channel_blockA__Znum_post_pulse_samples, channel_blockA__Zsample_rate, channel_blockA__Zdownsample_factor, channel_blockA__Zsample, channel_blockA__Zpre_trigger_offset, channel_blockA__Zchannel_type, channel_blockA__Zhas_baseline_control, channel_blockA__Zchannel_num, channel_blockA__Zchannel_flag};
enum Field_sdu_primitive_header : std::size_t {sdu_primitive_headerA__Zsdu_num_primitive_packed, sdu_primitive_headerA__Zsdu_entry_length, sdu_primitive_headerA__Zsdu_header, sdu_primitive_headerA__Znum_sdu_primitives, sdu_primitive_headerA__Zhas_sdu_data};
enum Field_sdu_primitive_block : std::size_t {sdu_primitive_blockA__Zsdu_block_header, sdu_primitive_blockA__Zrt_issue_ut, sdu_primitive_blockA__Zrt_run_time_fraction_packed, sdu_primitive_blockA__Ztrigger_time, sdu_primitive_blockA__Zrt_run_time, sdu_primitive_blockA__Ztrigger_time_fraction_packed, sdu_primitive_blockA__Ztrigger_word, sdu_primitive_blockA__Zblank, sdu_primitive_blockA__Zpeak_amplitude, sdu_primitive_blockA__Zrt_run_time_fraction, sdu_primitive_blockA__Ztrigger_time_fraction};
enum Field_num_sdu_header : std::size_t {num_sdu_headerA__Znum_sdu_packed, num_sdu_headerA__Znum_sdu, num_sdu_headerA__Znum_sdu_flag};
enum Field_sdu_block : std::size_t {sdu_blockA__Zsdu_readout_header_packed, sdu_blockA__Zsdu_series_time_fraction_packed, sdu_blockA__Zsdu_read_start_time, sdu_blockA__Zsdu_read_end_time, sdu_blockA__Zsdu_read_start_time_fraction, sdu_blockA__Zsdu_read_end_time_fraction, sdu_blockA__Zsdu_num_channels_header_packed, sdu_blockA__Zsdu_channel_blk, sdu_blockA__Zsdu_series_time_fraction, sdu_blockA__Zsdu_readout_status, sdu_blockA__Zsdu_readout_flag, sdu_blockA__Znum_sdu_channels, sdu_blockA__Znum_sdu_channels_flag, sdu_blockA__Zsdu_series_time};
enum Field_sdu_channel_block : std::size_t {sdu_channel_blockA__Zsdu_channel_header_packed, sdu_channel_blockA__Zsdu_num_samples, sdu_channel_blockA__Zblank, sdu_channel_blockA__Zsample_rate, sdu_channel_blockA__Zsdu_channel_sample, sdu_channel_blockA__Zsdu_channel_flag, sdu_channel_blockA__Zsdu_pre_trigger_offset, sdu_channel_blockA__Zsdu_channel_type, sdu_channel_blockA__Zsdu_channel_num};
enum Field_scdms_footer : std::size_t {scdms_footerA__Zpreceeding_triggers_packed, scdms_footerA__Zpreceeding_triggers_flag, scdms_footerA__Zpreceeding_triggers_num};

using TestBuilderType =
	RecordBuilder<
		RecordField<Field_test::testA__Zodb_hdr, NumpyBuilder<uint16_t>>,
		RecordField<Field_test::testA__Zunknown, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
		RecordField<Field_test::testA__Zodb_size, NumpyBuilder<uint32_t>>,
		RecordField<Field_test::testA__Zodb, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
		RecordField<Field_test::testA__Zentry, ListOffsetBuilder<int64_t, RecordBuilder<
			RecordField<Field_entry_block::entry_blockA__Zmidas_hdr, RecordBuilder<
				RecordField<Field_midas_header::midas_headerA__Zevt_id, NumpyBuilder<uint16_t>>,
				RecordField<Field_midas_header::midas_headerA__Ztrigger_mask, NumpyBuilder<uint16_t>>,
				RecordField<Field_midas_header::midas_headerA__Zserial_number, NumpyBuilder<uint32_t>>,
				RecordField<Field_midas_header::midas_headerA__Ztime_stamp, NumpyBuilder<uint32_t>>,
				RecordField<Field_midas_header::midas_headerA__Zevt_data_size, NumpyBuilder<uint32_t>>,
				RecordField<Field_midas_header::midas_headerA__Zall_banks_size, NumpyBuilder<uint32_t>>,
				RecordField<Field_midas_header::midas_headerA__Zflags, NumpyBuilder<uint32_t>>,
				RecordField<Field_midas_header::midas_headerA__Zbank_name, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>,
				RecordField<Field_midas_header::midas_headerA__Ztype, NumpyBuilder<uint32_t>>,
				RecordField<Field_midas_header::midas_headerA__Zbank_size, NumpyBuilder<uint32_t>>
			>>,
			RecordField<Field_entry_block::entry_blockA__Zscdms_data, IndexedOptionBuilder<int64_t, RecordBuilder<
				RecordField<Field_scdms_data_block::scdms_data_blockA__Zscdms_hdr, RecordBuilder<
					RecordField<Field_scdms_header::scdms_headerA__Zpacked, NumpyBuilder<uint32_t>>,
					RecordField<Field_scdms_header::scdms_headerA__Zoverall_header, NumpyBuilder<int32_t>>,
					RecordField<Field_scdms_header::scdms_headerA__Ztotal_triggers, NumpyBuilder<int32_t>>,
					RecordField<Field_scdms_header::scdms_headerA__Zformat_version, NumpyBuilder<int32_t>>
				>>,
				RecordField<Field_scdms_data_block::scdms_data_blockA__Ztrigger_blk, ListOffsetBuilder<int64_t, RecordBuilder<
					RecordField<Field_trigger_block::trigger_blockA__Zevent_hdr, RecordBuilder<
						RecordField<Field_event_header::event_headerA__Zpacked_event_size, NumpyBuilder<uint32_t>>,
						RecordField<Field_event_header::event_headerA__Ztrigger_id, NumpyBuilder<uint32_t>>,
						RecordField<Field_event_header::event_headerA__Zevent_number, NumpyBuilder<uint32_t>>,
						RecordField<Field_event_header::event_headerA__Zpacked_type, NumpyBuilder<uint32_t>>,
						RecordField<Field_event_header::event_headerA__Zglobal_timestamp_low, NumpyBuilder<uint32_t>>,
						RecordField<Field_event_header::event_headerA__Zglobal_timestamp_high, NumpyBuilder<uint32_t>>,
						RecordField<Field_event_header::event_headerA__Zpacked_poll_end, NumpyBuilder<uint32_t>>,
						RecordField<Field_event_header::event_headerA__Zpoll_time_fraction, NumpyBuilder<uint32_t>>,
						RecordField<Field_event_header::event_headerA__Zpoll_cycle_end_time, NumpyBuilder<int32_t>>,
						RecordField<Field_event_header::event_headerA__Ztrigger_type, NumpyBuilder<int32_t>>,
						RecordField<Field_event_header::event_headerA__Zreadout_bitmask, NumpyBuilder<int32_t>>,
						RecordField<Field_event_header::event_headerA__Zevent_size, NumpyBuilder<int32_t>>,
						RecordField<Field_event_header::event_headerA__Ztrig_header, NumpyBuilder<int32_t>>
					>>,
					RecordField<Field_trigger_block::trigger_blockA__Znum_primitive_hdr, RecordBuilder<
						RecordField<Field_num_primitive_header::num_primitive_headerA__Zpacked_primitive_num, NumpyBuilder<uint32_t>>,
						RecordField<Field_num_primitive_header::num_primitive_headerA__Zentry_length, NumpyBuilder<uint32_t>>,
						RecordField<Field_num_primitive_header::num_primitive_headerA__Znum_primitives, NumpyBuilder<int32_t>>,
						RecordField<Field_num_primitive_header::num_primitive_headerA__Zprim_header, NumpyBuilder<int32_t>>
					>>,
					RecordField<Field_trigger_block::trigger_blockA__Zprimitive_blk, ListOffsetBuilder<int64_t, RecordBuilder<
						RecordField<Field_primitive_block::primitive_blockA__Zpacked_primitive, NumpyBuilder<uint32_t>>,
						RecordField<Field_primitive_block::primitive_blockA__Zrt_issue_time, NumpyBuilder<uint32_t>>,
						RecordField<Field_primitive_block::primitive_blockA__Zrt_run_time_fraction_packed, NumpyBuilder<uint32_t>>,
						RecordField<Field_primitive_block::primitive_blockA__Zprim_trig_time, NumpyBuilder<uint16_t>>,
						RecordField<Field_primitive_block::primitive_blockA__Zrt_run_time, NumpyBuilder<uint16_t>>,
						RecordField<Field_primitive_block::primitive_blockA__Ztrigger_mask_packed, NumpyBuilder<uint32_t>>,
						RecordField<Field_primitive_block::primitive_blockA__Ztrig_word, NumpyBuilder<uint16_t>>,
						RecordField<Field_primitive_block::primitive_blockA__Zprim_blank, NumpyBuilder<uint16_t>>,
						RecordField<Field_primitive_block::primitive_blockA__Zpeak_amplitude, NumpyBuilder<uint32_t>>,
						RecordField<Field_primitive_block::primitive_blockA__Zpileup, NumpyBuilder<int32_t>>,
						RecordField<Field_primitive_block::primitive_blockA__Ztrig_time_frac, NumpyBuilder<int32_t>>,
						RecordField<Field_primitive_block::primitive_blockA__Zdet_id, NumpyBuilder<int32_t>>,
						RecordField<Field_primitive_block::primitive_blockA__Ztrig_mask, NumpyBuilder<int32_t>>,
						RecordField<Field_primitive_block::primitive_blockA__Zindex, NumpyBuilder<int32_t>>,
						RecordField<Field_primitive_block::primitive_blockA__Ztrig_status, NumpyBuilder<int32_t>>,
						RecordField<Field_primitive_block::primitive_blockA__Zprim_dcrc_header, NumpyBuilder<int32_t>>,
						RecordField<Field_primitive_block::primitive_blockA__Zrt_run_time_fraction, NumpyBuilder<int32_t>>
					>>>,
					RecordField<Field_trigger_block::trigger_blockA__Zn_detectors, RecordBuilder<
						RecordField<Field_detectors::detectorsA__Zn_detectors_packed, NumpyBuilder<uint32_t>>,
						RecordField<Field_detectors::detectorsA__Zdetectors_in_event, NumpyBuilder<int32_t>>,
						RecordField<Field_detectors::detectorsA__Znum_det_header, NumpyBuilder<int32_t>>
					>>,
					RecordField<Field_trigger_block::trigger_blockA__Zdetector_blk, ListOffsetBuilder<int64_t, RecordBuilder<
						RecordField<Field_detector_block::detector_blockA__Zdetector_hdr, RecordBuilder<
							RecordField<Field_detector_header::detector_headerA__Zdetector_hdr_packed, NumpyBuilder<uint32_t>>,
							RecordField<Field_detector_header::detector_headerA__Zdcrc1_serial_nbr, NumpyBuilder<uint8_t>>,
							RecordField<Field_detector_header::detector_headerA__Zdcrc1_version, NumpyBuilder<uint8_t>>,
							RecordField<Field_detector_header::detector_headerA__Zdcrc2_serial_nbr, NumpyBuilder<uint8_t>>,
							RecordField<Field_detector_header::detector_headerA__Zdcrc2_version, NumpyBuilder<uint8_t>>,
							RecordField<Field_detector_header::detector_headerA__Zdetector_type, NumpyBuilder<int32_t>>,
							RecordField<Field_detector_header::detector_headerA__Zindex, NumpyBuilder<int32_t>>,
							RecordField<Field_detector_header::detector_headerA__Zdet_id, NumpyBuilder<int32_t>>,
							RecordField<Field_detector_header::detector_headerA__Zdetector_header, NumpyBuilder<int32_t>>
						>>,
						RecordField<Field_detector_block::detector_blockA__Zreadout_hdr, RecordBuilder<
							RecordField<Field_readout_header::readout_headerA__Zreadout_hdr_packed_1, NumpyBuilder<uint32_t>>,
							RecordField<Field_readout_header::readout_headerA__Zreadout_hdr_packed_2, NumpyBuilder<uint32_t>>,
							RecordField<Field_readout_header::readout_headerA__Zwaveform_read_start_time, NumpyBuilder<uint16_t>>,
							RecordField<Field_readout_header::readout_headerA__Zwaveform_read_end_time, NumpyBuilder<uint16_t>>,
							RecordField<Field_readout_header::readout_headerA__Zwaveform_read_start_time_fraction, NumpyBuilder<uint32_t>>,
							RecordField<Field_readout_header::readout_headerA__Zwaveform_read_end_time_fraction, NumpyBuilder<uint32_t>>,
							RecordField<Field_readout_header::readout_headerA__Zreadout_header, NumpyBuilder<int32_t>>,
							RecordField<Field_readout_header::readout_headerA__Zseries_time_fraction, NumpyBuilder<int32_t>>,
							RecordField<Field_readout_header::readout_headerA__Zseries_time, NumpyBuilder<int32_t>>,
							RecordField<Field_readout_header::readout_headerA__Zhas_thermometry_readout, NumpyBuilder<int32_t>>,
							RecordField<Field_readout_header::readout_headerA__Zreadout_status, NumpyBuilder<int32_t>>
						>>,
						RecordField<Field_detector_block::detector_blockA__Znum_channels_hdr, RecordBuilder<
							RecordField<Field_num_channels_header::num_channels_headerA__Znum_channels_packed, NumpyBuilder<uint32_t>>,
							RecordField<Field_num_channels_header::num_channels_headerA__Zchannels_header, NumpyBuilder<int32_t>>,
							RecordField<Field_num_channels_header::num_channels_headerA__Znum_channels, NumpyBuilder<int32_t>>
						>>,
						RecordField<Field_detector_block::detector_blockA__Zchannel_blk, ListOffsetBuilder<int64_t, RecordBuilder<
							RecordField<Field_channel_block::channel_blockA__Zchannel_packed, NumpyBuilder<uint32_t>>,
							RecordField<Field_channel_block::channel_blockA__Znum_pre_pulse_samples, NumpyBuilder<uint32_t>>,
							RecordField<Field_channel_block::channel_blockA__Znum_on_pulse_samples, NumpyBuilder<uint32_t>>,
							RecordField<Field_channel_block::channel_blockA__Znum_post_pulse_samples, NumpyBuilder<uint32_t>>,
							RecordField<Field_channel_block::channel_blockA__Zsample_rate, NumpyBuilder<uint16_t>>,
							RecordField<Field_channel_block::channel_blockA__Zdownsample_factor, NumpyBuilder<uint16_t>>,
							RecordField<Field_channel_block::channel_blockA__Zsample, ListOffsetBuilder<int64_t, NumpyBuilder<uint16_t>>>,
							RecordField<Field_channel_block::channel_blockA__Zpre_trigger_offset, NumpyBuilder<int32_t>>,
							RecordField<Field_channel_block::channel_blockA__Zchannel_type, NumpyBuilder<int32_t>>,
							RecordField<Field_channel_block::channel_blockA__Zhas_baseline_control, NumpyBuilder<int32_t>>,
							RecordField<Field_channel_block::channel_blockA__Zchannel_num, NumpyBuilder<int32_t>>,
							RecordField<Field_channel_block::channel_blockA__Zchannel_flag, NumpyBuilder<int32_t>>
						>>>
					>>>,
					RecordField<Field_trigger_block::trigger_blockA__Zsdu_primitive_hdr, RecordBuilder<
						RecordField<Field_sdu_primitive_header::sdu_primitive_headerA__Zsdu_num_primitive_packed, NumpyBuilder<uint32_t>>,
						RecordField<Field_sdu_primitive_header::sdu_primitive_headerA__Zsdu_entry_length, NumpyBuilder<uint32_t>>,
						RecordField<Field_sdu_primitive_header::sdu_primitive_headerA__Zsdu_header, NumpyBuilder<int32_t>>,
						RecordField<Field_sdu_primitive_header::sdu_primitive_headerA__Znum_sdu_primitives, NumpyBuilder<int32_t>>,
						RecordField<Field_sdu_primitive_header::sdu_primitive_headerA__Zhas_sdu_data, NumpyBuilder<int32_t>>
					>>,
					RecordField<Field_trigger_block::trigger_blockA__Zsdu_primitive_blk, ListOffsetBuilder<int64_t, RecordBuilder<
						RecordField<Field_sdu_primitive_block::sdu_primitive_blockA__Zsdu_block_header, NumpyBuilder<uint32_t>>,
						RecordField<Field_sdu_primitive_block::sdu_primitive_blockA__Zrt_issue_ut, NumpyBuilder<uint32_t>>,
						RecordField<Field_sdu_primitive_block::sdu_primitive_blockA__Zrt_run_time_fraction_packed, NumpyBuilder<uint32_t>>,
						RecordField<Field_sdu_primitive_block::sdu_primitive_blockA__Ztrigger_time, NumpyBuilder<uint16_t>>,
						RecordField<Field_sdu_primitive_block::sdu_primitive_blockA__Zrt_run_time, NumpyBuilder<uint16_t>>,
						RecordField<Field_sdu_primitive_block::sdu_primitive_blockA__Ztrigger_time_fraction_packed, NumpyBuilder<uint32_t>>,
						RecordField<Field_sdu_primitive_block::sdu_primitive_blockA__Ztrigger_word, NumpyBuilder<uint16_t>>,
						RecordField<Field_sdu_primitive_block::sdu_primitive_blockA__Zblank, NumpyBuilder<uint32_t>>,
						RecordField<Field_sdu_primitive_block::sdu_primitive_blockA__Zpeak_amplitude, NumpyBuilder<uint16_t>>,
						RecordField<Field_sdu_primitive_block::sdu_primitive_blockA__Zrt_run_time_fraction, NumpyBuilder<int32_t>>,
						RecordField<Field_sdu_primitive_block::sdu_primitive_blockA__Ztrigger_time_fraction, NumpyBuilder<int32_t>>
					>>>,
					RecordField<Field_trigger_block::trigger_blockA__Znum_sdu_hdr, RecordBuilder<
						RecordField<Field_num_sdu_header::num_sdu_headerA__Znum_sdu_packed, NumpyBuilder<uint32_t>>,
						RecordField<Field_num_sdu_header::num_sdu_headerA__Znum_sdu, NumpyBuilder<int32_t>>,
						RecordField<Field_num_sdu_header::num_sdu_headerA__Znum_sdu_flag, NumpyBuilder<int32_t>>
					>>,
					RecordField<Field_trigger_block::trigger_blockA__Zsdu_blk, ListOffsetBuilder<int64_t, RecordBuilder<
						RecordField<Field_sdu_block::sdu_blockA__Zsdu_readout_header_packed, NumpyBuilder<uint32_t>>,
						RecordField<Field_sdu_block::sdu_blockA__Zsdu_series_time_fraction_packed, NumpyBuilder<uint32_t>>,
						RecordField<Field_sdu_block::sdu_blockA__Zsdu_read_start_time, NumpyBuilder<uint16_t>>,
						RecordField<Field_sdu_block::sdu_blockA__Zsdu_read_end_time, NumpyBuilder<uint16_t>>,
						RecordField<Field_sdu_block::sdu_blockA__Zsdu_read_start_time_fraction, NumpyBuilder<uint32_t>>,
						RecordField<Field_sdu_block::sdu_blockA__Zsdu_read_end_time_fraction, NumpyBuilder<uint32_t>>,
						RecordField<Field_sdu_block::sdu_blockA__Zsdu_num_channels_header_packed, NumpyBuilder<uint32_t>>,
						RecordField<Field_sdu_block::sdu_blockA__Zsdu_channel_blk, ListOffsetBuilder<int64_t, RecordBuilder<
							RecordField<Field_sdu_channel_block::sdu_channel_blockA__Zsdu_channel_header_packed, NumpyBuilder<uint32_t>>,
							RecordField<Field_sdu_channel_block::sdu_channel_blockA__Zsdu_num_samples, NumpyBuilder<uint32_t>>,
							RecordField<Field_sdu_channel_block::sdu_channel_blockA__Zblank, NumpyBuilder<uint16_t>>,
							RecordField<Field_sdu_channel_block::sdu_channel_blockA__Zsample_rate, NumpyBuilder<uint16_t>>,
							RecordField<Field_sdu_channel_block::sdu_channel_blockA__Zsdu_channel_sample, ListOffsetBuilder<int64_t, NumpyBuilder<uint16_t>>>,
							RecordField<Field_sdu_channel_block::sdu_channel_blockA__Zsdu_channel_flag, NumpyBuilder<int32_t>>,
							RecordField<Field_sdu_channel_block::sdu_channel_blockA__Zsdu_pre_trigger_offset, NumpyBuilder<int32_t>>,
							RecordField<Field_sdu_channel_block::sdu_channel_blockA__Zsdu_channel_type, NumpyBuilder<int32_t>>,
							RecordField<Field_sdu_channel_block::sdu_channel_blockA__Zsdu_channel_num, NumpyBuilder<int32_t>>
						>>>,
						RecordField<Field_sdu_block::sdu_blockA__Zsdu_series_time_fraction, NumpyBuilder<int32_t>>,
						RecordField<Field_sdu_block::sdu_blockA__Zsdu_readout_status, NumpyBuilder<int32_t>>,
						RecordField<Field_sdu_block::sdu_blockA__Zsdu_readout_flag, NumpyBuilder<int32_t>>,
						RecordField<Field_sdu_block::sdu_blockA__Znum_sdu_channels, NumpyBuilder<int32_t>>,
						RecordField<Field_sdu_block::sdu_blockA__Znum_sdu_channels_flag, NumpyBuilder<int32_t>>,
						RecordField<Field_sdu_block::sdu_blockA__Zsdu_series_time, NumpyBuilder<int32_t>>
					>>>
				>>>,
				RecordField<Field_scdms_data_block::scdms_data_blockA__Zscdms_ftr, RecordBuilder<
					RecordField<Field_scdms_footer::scdms_footerA__Zpreceeding_triggers_packed, NumpyBuilder<uint32_t>>,
					RecordField<Field_scdms_footer::scdms_footerA__Zpreceeding_triggers_flag, NumpyBuilder<int32_t>>,
					RecordField<Field_scdms_footer::scdms_footerA__Zpreceeding_triggers_num, NumpyBuilder<int32_t>>
				>>
			>>>,
			RecordField<Field_entry_block::entry_blockA__Zdmc_data, IndexedOptionBuilder<int64_t, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>>,
			RecordField<Field_entry_block::entry_blockA__Zdata, IndexedOptionBuilder<int64_t, ListOffsetBuilder<int64_t, NumpyBuilder<uint8_t>>>>
		>>>
	>;


using Entry_blockBuilderType = decltype(std::declval<TestBuilderType>().content<Field_test::testA__Zentry>().content());
using Midas_headerBuilderType = decltype(std::declval<Entry_blockBuilderType>().content<Field_entry_block::entry_blockA__Zmidas_hdr>());
using Scdms_data_blockBuilderType = decltype(std::declval<Entry_blockBuilderType>().content<Field_entry_block::entry_blockA__Zscdms_data>().content());
using Scdms_footerBuilderType = decltype(std::declval<Scdms_data_blockBuilderType>().content<Field_scdms_data_block::scdms_data_blockA__Zscdms_ftr>());
using Scdms_headerBuilderType = decltype(std::declval<Scdms_data_blockBuilderType>().content<Field_scdms_data_block::scdms_data_blockA__Zscdms_hdr>());
using Trigger_blockBuilderType = decltype(std::declval<Scdms_data_blockBuilderType>().content<Field_scdms_data_block::scdms_data_blockA__Ztrigger_blk>().content());
using Num_primitive_headerBuilderType = decltype(std::declval<Trigger_blockBuilderType>().content<Field_trigger_block::trigger_blockA__Znum_primitive_hdr>());
using Event_headerBuilderType = decltype(std::declval<Trigger_blockBuilderType>().content<Field_trigger_block::trigger_blockA__Zevent_hdr>());
using Primitive_blockBuilderType = decltype(std::declval<Trigger_blockBuilderType>().content<Field_trigger_block::trigger_blockA__Zprimitive_blk>().content());
using DetectorsBuilderType = decltype(std::declval<Trigger_blockBuilderType>().content<Field_trigger_block::trigger_blockA__Zn_detectors>());
using Num_sdu_headerBuilderType = decltype(std::declval<Trigger_blockBuilderType>().content<Field_trigger_block::trigger_blockA__Znum_sdu_hdr>());
using Sdu_primitive_blockBuilderType = decltype(std::declval<Trigger_blockBuilderType>().content<Field_trigger_block::trigger_blockA__Zsdu_primitive_blk>().content());
using Sdu_blockBuilderType = decltype(std::declval<Trigger_blockBuilderType>().content<Field_trigger_block::trigger_blockA__Zsdu_blk>().content());
using Sdu_channel_blockBuilderType = decltype(std::declval<Sdu_blockBuilderType>().content<Field_sdu_block::sdu_blockA__Zsdu_channel_blk>().content());
using Sdu_primitive_headerBuilderType = decltype(std::declval<Trigger_blockBuilderType>().content<Field_trigger_block::trigger_blockA__Zsdu_primitive_hdr>());
using Detector_blockBuilderType = decltype(std::declval<Trigger_blockBuilderType>().content<Field_trigger_block::trigger_blockA__Zdetector_blk>().content());
using Num_channels_headerBuilderType = decltype(std::declval<Detector_blockBuilderType>().content<Field_detector_block::detector_blockA__Znum_channels_hdr>());
using Channel_blockBuilderType = decltype(std::declval<Detector_blockBuilderType>().content<Field_detector_block::detector_blockA__Zchannel_blk>().content());
using Detector_headerBuilderType = decltype(std::declval<Detector_blockBuilderType>().content<Field_detector_block::detector_blockA__Zdetector_hdr>());
using Readout_headerBuilderType = decltype(std::declval<Detector_blockBuilderType>().content<Field_detector_block::detector_blockA__Zreadout_hdr>());

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct Awkward API: version 0.9 or later is required"
#endif

class test_t : public kaitai::kstruct {

public:
    class trigger_block_t;
    class primitive_block_t;
    class channel_block_t;
    class num_channels_header_t;
    class event_header_t;
    class sdu_primitive_header_t;
    class detector_header_t;
    class detectors_t;
    class num_sdu_header_t;
    class detector_block_t;
    class scdms_header_t;
    class sdu_primitive_block_t;
    class scdms_footer_t;
    class num_primitive_header_t;
    class readout_header_t;
    class entry_block_t;
    class sdu_channel_block_t;
    class scdms_data_block_t;
    class midas_header_t;
    class sdu_block_t;

    test_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, test_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~test_t();

    class trigger_block_t : public kaitai::kstruct {

    public:

        trigger_block_t(Trigger_blockBuilderType builder, kaitai::kstream* p__io, test_t::scdms_data_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~trigger_block_t();

    private:
        event_header_t* m_event_hdr;
        num_primitive_header_t* m_num_primitive_hdr;
        std::vector<primitive_block_t*>* m_primitive_blk;
        detectors_t* m_n_detectors;
        std::vector<detector_block_t*>* m_detector_blk;
        sdu_primitive_header_t* m_sdu_primitive_hdr;
        std::vector<sdu_primitive_block_t*>* m_sdu_primitive_blk;
        num_sdu_header_t* m_num_sdu_hdr;
        std::vector<sdu_block_t*>* m_sdu_blk;
        test_t* m__root;
        test_t::scdms_data_block_t* m__parent;

    public:
        event_header_t* event_hdr() const { return m_event_hdr; }
        num_primitive_header_t* num_primitive_hdr() const { return m_num_primitive_hdr; }
        std::vector<primitive_block_t*>* primitive_blk() const { return m_primitive_blk; }
        detectors_t* n_detectors() const { return m_n_detectors; }
        std::vector<detector_block_t*>* detector_blk() const { return m_detector_blk; }
        sdu_primitive_header_t* sdu_primitive_hdr() const { return m_sdu_primitive_hdr; }
        std::vector<sdu_primitive_block_t*>* sdu_primitive_blk() const { return m_sdu_primitive_blk; }
        num_sdu_header_t* num_sdu_hdr() const { return m_num_sdu_hdr; }
        std::vector<sdu_block_t*>* sdu_blk() const { return m_sdu_blk; }
        test_t* _root() const { return m__root; }
        test_t::scdms_data_block_t* _parent() const { return m__parent; }
        Trigger_blockBuilderType trigger_block_builder;
    };

    class primitive_block_t : public kaitai::kstruct {

    public:

        primitive_block_t(Primitive_blockBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~primitive_block_t();

    private:
        bool f_pileup;
        int32_t m_pileup;

    public:
        int32_t pileup();

    private:
        bool f_trig_time_frac;
        int32_t m_trig_time_frac;

    public:
        int32_t trig_time_frac();

    private:
        bool f_det_id;
        int32_t m_det_id;

    public:
        int32_t det_id();

    private:
        bool f_trig_mask;
        int32_t m_trig_mask;

    public:
        int32_t trig_mask();

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
        int32_t m_prim_dcrc_header;

    public:
        int32_t prim_dcrc_header();

    private:
        bool f_rt_run_time_fraction;
        int32_t m_rt_run_time_fraction;

    public:
        int32_t rt_run_time_fraction();

    private:
        uint32_t m_packed_primitive;
        uint32_t m_rt_issue_time;
        uint32_t m_rt_run_time_fraction_packed;
        uint16_t m_prim_trig_time;
        uint16_t m_rt_run_time;
        uint32_t m_trigger_mask_packed;
        uint16_t m_trig_word;
        uint16_t m_prim_blank;
        uint32_t m_peak_amplitude;
        test_t* m__root;
        test_t::trigger_block_t* m__parent;

    public:
        uint32_t packed_primitive() const { return m_packed_primitive; }
        uint32_t rt_issue_time() const { return m_rt_issue_time; }
        uint32_t rt_run_time_fraction_packed() const { return m_rt_run_time_fraction_packed; }
        uint16_t prim_trig_time() const { return m_prim_trig_time; }
        uint16_t rt_run_time() const { return m_rt_run_time; }
        uint32_t trigger_mask_packed() const { return m_trigger_mask_packed; }
        uint16_t trig_word() const { return m_trig_word; }
        uint16_t prim_blank() const { return m_prim_blank; }
        uint32_t peak_amplitude() const { return m_peak_amplitude; }
        test_t* _root() const { return m__root; }
        test_t::trigger_block_t* _parent() const { return m__parent; }
        Primitive_blockBuilderType primitive_block_builder;
    };

    class channel_block_t : public kaitai::kstruct {

    public:

        channel_block_t(Channel_blockBuilderType builder, kaitai::kstream* p__io, test_t::detector_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~channel_block_t();

    private:
        bool f_pre_trigger_offset;
        int32_t m_pre_trigger_offset;

    public:
        int32_t pre_trigger_offset();

    private:
        bool f_channel_type;
        int32_t m_channel_type;

    public:
        int32_t channel_type();

    private:
        bool f_has_baseline_control;
        int32_t m_has_baseline_control;

    public:
        int32_t has_baseline_control();

    private:
        bool f_channel_num;
        int32_t m_channel_num;

    public:
        int32_t channel_num();

    private:
        bool f_channel_flag;
        int32_t m_channel_flag;

    public:
        int32_t channel_flag();

    private:
        uint32_t m_channel_packed;
        uint32_t m_num_pre_pulse_samples;
        uint32_t m_num_on_pulse_samples;
        uint32_t m_num_post_pulse_samples;
        uint16_t m_sample_rate;
        uint16_t m_downsample_factor;
        std::vector<uint16_t>* m_sample;
        test_t* m__root;
        test_t::detector_block_t* m__parent;

    public:
        uint32_t channel_packed() const { return m_channel_packed; }
        uint32_t num_pre_pulse_samples() const { return m_num_pre_pulse_samples; }
        uint32_t num_on_pulse_samples() const { return m_num_on_pulse_samples; }
        uint32_t num_post_pulse_samples() const { return m_num_post_pulse_samples; }
        uint16_t sample_rate() const { return m_sample_rate; }
        uint16_t downsample_factor() const { return m_downsample_factor; }
        std::vector<uint16_t>* sample() const { return m_sample; }
        test_t* _root() const { return m__root; }
        test_t::detector_block_t* _parent() const { return m__parent; }
        Channel_blockBuilderType channel_block_builder;
    };

    class num_channels_header_t : public kaitai::kstruct {

    public:

        num_channels_header_t(Num_channels_headerBuilderType builder, kaitai::kstream* p__io, test_t::detector_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~num_channels_header_t();

    private:
        bool f_channels_header;
        int32_t m_channels_header;

    public:
        int32_t channels_header();

    private:
        bool f_num_channels;
        int32_t m_num_channels;

    public:
        int32_t num_channels();

    private:
        uint32_t m_num_channels_packed;
        test_t* m__root;
        test_t::detector_block_t* m__parent;

    public:
        uint32_t num_channels_packed() const { return m_num_channels_packed; }
        test_t* _root() const { return m__root; }
        test_t::detector_block_t* _parent() const { return m__parent; }
        Num_channels_headerBuilderType num_channels_header_builder;
    };

    class event_header_t : public kaitai::kstruct {

    public:

        event_header_t(Event_headerBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~event_header_t();

    private:
        bool f_poll_cycle_end_time;
        int32_t m_poll_cycle_end_time;

    public:
        int32_t poll_cycle_end_time();

    private:
        bool f_trigger_type;
        int32_t m_trigger_type;

    public:
        int32_t trigger_type();

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
        int32_t m_trig_header;

    public:
        int32_t trig_header();

    private:
        uint32_t m_packed_event_size;
        uint32_t m_trigger_id;
        uint32_t m_event_number;
        uint32_t m_packed_type;
        uint32_t m_global_timestamp_low;
        uint32_t m_global_timestamp_high;
        uint32_t m_packed_poll_end;
        uint32_t m_poll_time_fraction;
        test_t* m__root;
        test_t::trigger_block_t* m__parent;

    public:
        uint32_t packed_event_size() const { return m_packed_event_size; }
        uint32_t trigger_id() const { return m_trigger_id; }
        uint32_t event_number() const { return m_event_number; }
        uint32_t packed_type() const { return m_packed_type; }
        uint32_t global_timestamp_low() const { return m_global_timestamp_low; }
        uint32_t global_timestamp_high() const { return m_global_timestamp_high; }
        uint32_t packed_poll_end() const { return m_packed_poll_end; }
        uint32_t poll_time_fraction() const { return m_poll_time_fraction; }
        test_t* _root() const { return m__root; }
        test_t::trigger_block_t* _parent() const { return m__parent; }
        Event_headerBuilderType event_header_builder;
    };

    class sdu_primitive_header_t : public kaitai::kstruct {

    public:

        sdu_primitive_header_t(Sdu_primitive_headerBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~sdu_primitive_header_t();

    private:
        bool f_sdu_header;
        int32_t m_sdu_header;

    public:
        int32_t sdu_header();

    private:
        bool f_num_sdu_primitives;
        int32_t m_num_sdu_primitives;

    public:
        int32_t num_sdu_primitives();

    private:
        bool f_has_sdu_data;
        int32_t m_has_sdu_data;

    public:
        int32_t has_sdu_data();

    private:
        uint32_t m_sdu_num_primitive_packed;
        uint32_t m_sdu_entry_length;
        test_t* m__root;
        test_t::trigger_block_t* m__parent;

    public:
        uint32_t sdu_num_primitive_packed() const { return m_sdu_num_primitive_packed; }
        uint32_t sdu_entry_length() const { return m_sdu_entry_length; }
        test_t* _root() const { return m__root; }
        test_t::trigger_block_t* _parent() const { return m__parent; }
        Sdu_primitive_headerBuilderType sdu_primitive_header_builder;
    };

    class detector_header_t : public kaitai::kstruct {

    public:

        detector_header_t(Detector_headerBuilderType builder, kaitai::kstream* p__io, test_t::detector_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~detector_header_t();

    private:
        bool f_detector_type;
        int32_t m_detector_type;

    public:
        int32_t detector_type();

    private:
        bool f_index;
        int32_t m_index;

    public:
        int32_t index();

    private:
        bool f_det_id;
        int32_t m_det_id;

    public:
        int32_t det_id();

    private:
        bool f_detector_header;
        int32_t m_detector_header;

    public:
        int32_t detector_header();

    private:
        uint32_t m_detector_hdr_packed;
        uint8_t m_dcrc1_serial_nbr;
        uint8_t m_dcrc1_version;
        uint8_t m_dcrc2_serial_nbr;
        uint8_t m_dcrc2_version;
        test_t* m__root;
        test_t::detector_block_t* m__parent;

    public:
        uint32_t detector_hdr_packed() const { return m_detector_hdr_packed; }
        uint8_t dcrc1_serial_nbr() const { return m_dcrc1_serial_nbr; }
        uint8_t dcrc1_version() const { return m_dcrc1_version; }
        uint8_t dcrc2_serial_nbr() const { return m_dcrc2_serial_nbr; }
        uint8_t dcrc2_version() const { return m_dcrc2_version; }
        test_t* _root() const { return m__root; }
        test_t::detector_block_t* _parent() const { return m__parent; }
        Detector_headerBuilderType detector_header_builder;
    };

    class detectors_t : public kaitai::kstruct {

    public:

        detectors_t(DetectorsBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~detectors_t();

    private:
        bool f_detectors_in_event;
        int32_t m_detectors_in_event;

    public:
        int32_t detectors_in_event();

    private:
        bool f_num_det_header;
        int32_t m_num_det_header;

    public:
        int32_t num_det_header();

    private:
        uint32_t m_n_detectors_packed;
        test_t* m__root;
        test_t::trigger_block_t* m__parent;

    public:
        uint32_t n_detectors_packed() const { return m_n_detectors_packed; }
        test_t* _root() const { return m__root; }
        test_t::trigger_block_t* _parent() const { return m__parent; }
        DetectorsBuilderType detectors_builder;
    };

    class num_sdu_header_t : public kaitai::kstruct {

    public:

        num_sdu_header_t(Num_sdu_headerBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~num_sdu_header_t();

    private:
        bool f_num_sdu;
        int32_t m_num_sdu;

    public:
        int32_t num_sdu();

    private:
        bool f_num_sdu_flag;
        int32_t m_num_sdu_flag;

    public:
        int32_t num_sdu_flag();

    private:
        uint32_t m_num_sdu_packed;
        test_t* m__root;
        test_t::trigger_block_t* m__parent;

    public:
        uint32_t num_sdu_packed() const { return m_num_sdu_packed; }
        test_t* _root() const { return m__root; }
        test_t::trigger_block_t* _parent() const { return m__parent; }
        Num_sdu_headerBuilderType num_sdu_header_builder;
    };

    class detector_block_t : public kaitai::kstruct {

    public:

        detector_block_t(Detector_blockBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~detector_block_t();

    private:
        detector_header_t* m_detector_hdr;
        readout_header_t* m_readout_hdr;
        num_channels_header_t* m_num_channels_hdr;
        std::vector<channel_block_t*>* m_channel_blk;
        test_t* m__root;
        test_t::trigger_block_t* m__parent;

    public:
        detector_header_t* detector_hdr() const { return m_detector_hdr; }
        readout_header_t* readout_hdr() const { return m_readout_hdr; }
        num_channels_header_t* num_channels_hdr() const { return m_num_channels_hdr; }
        std::vector<channel_block_t*>* channel_blk() const { return m_channel_blk; }
        test_t* _root() const { return m__root; }
        test_t::trigger_block_t* _parent() const { return m__parent; }
        Detector_blockBuilderType detector_block_builder;
    };

    class scdms_header_t : public kaitai::kstruct {

    public:

        scdms_header_t(Scdms_headerBuilderType builder, kaitai::kstream* p__io, test_t::scdms_data_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~scdms_header_t();

    private:
        bool f_overall_header;
        int32_t m_overall_header;

    public:
        int32_t overall_header();

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
        test_t* m__root;
        test_t::scdms_data_block_t* m__parent;

    public:
        uint32_t packed() const { return m_packed; }
        test_t* _root() const { return m__root; }
        test_t::scdms_data_block_t* _parent() const { return m__parent; }
        Scdms_headerBuilderType scdms_header_builder;
    };

    class sdu_primitive_block_t : public kaitai::kstruct {

    public:

        sdu_primitive_block_t(Sdu_primitive_blockBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~sdu_primitive_block_t();

    private:
        bool f_rt_run_time_fraction;
        int32_t m_rt_run_time_fraction;

    public:
        int32_t rt_run_time_fraction();

    private:
        bool f_trigger_time_fraction;
        int32_t m_trigger_time_fraction;

    public:
        int32_t trigger_time_fraction();

    private:
        uint32_t m_sdu_block_header;
        uint32_t m_rt_issue_ut;
        uint32_t m_rt_run_time_fraction_packed;
        uint16_t m_trigger_time;
        uint16_t m_rt_run_time;
        uint32_t m_trigger_time_fraction_packed;
        uint16_t m_trigger_word;
        uint32_t m_blank;
        uint16_t m_peak_amplitude;
        test_t* m__root;
        test_t::trigger_block_t* m__parent;

    public:
        uint32_t sdu_block_header() const { return m_sdu_block_header; }
        uint32_t rt_issue_ut() const { return m_rt_issue_ut; }
        uint32_t rt_run_time_fraction_packed() const { return m_rt_run_time_fraction_packed; }
        uint16_t trigger_time() const { return m_trigger_time; }
        uint16_t rt_run_time() const { return m_rt_run_time; }
        uint32_t trigger_time_fraction_packed() const { return m_trigger_time_fraction_packed; }
        uint16_t trigger_word() const { return m_trigger_word; }
        uint32_t blank() const { return m_blank; }
        uint16_t peak_amplitude() const { return m_peak_amplitude; }
        test_t* _root() const { return m__root; }
        test_t::trigger_block_t* _parent() const { return m__parent; }
        Sdu_primitive_blockBuilderType sdu_primitive_block_builder;
    };

    class scdms_footer_t : public kaitai::kstruct {

    public:

        scdms_footer_t(Scdms_footerBuilderType builder, kaitai::kstream* p__io, test_t::scdms_data_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~scdms_footer_t();

    private:
        bool f_preceeding_triggers_flag;
        int32_t m_preceeding_triggers_flag;

    public:
        int32_t preceeding_triggers_flag();

    private:
        bool f_preceeding_triggers_num;
        int32_t m_preceeding_triggers_num;

    public:
        int32_t preceeding_triggers_num();

    private:
        uint32_t m_preceeding_triggers_packed;
        test_t* m__root;
        test_t::scdms_data_block_t* m__parent;

    public:
        uint32_t preceeding_triggers_packed() const { return m_preceeding_triggers_packed; }
        test_t* _root() const { return m__root; }
        test_t::scdms_data_block_t* _parent() const { return m__parent; }
        Scdms_footerBuilderType scdms_footer_builder;
    };

    class num_primitive_header_t : public kaitai::kstruct {

    public:

        num_primitive_header_t(Num_primitive_headerBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~num_primitive_header_t();

    private:
        bool f_num_primitives;
        int32_t m_num_primitives;

    public:
        int32_t num_primitives();

    private:
        bool f_prim_header;
        int32_t m_prim_header;

    public:
        int32_t prim_header();

    private:
        uint32_t m_packed_primitive_num;
        uint32_t m_entry_length;
        test_t* m__root;
        test_t::trigger_block_t* m__parent;

    public:
        uint32_t packed_primitive_num() const { return m_packed_primitive_num; }
        uint32_t entry_length() const { return m_entry_length; }
        test_t* _root() const { return m__root; }
        test_t::trigger_block_t* _parent() const { return m__parent; }
        Num_primitive_headerBuilderType num_primitive_header_builder;
    };

    class readout_header_t : public kaitai::kstruct {

    public:

        readout_header_t(Readout_headerBuilderType builder, kaitai::kstream* p__io, test_t::detector_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~readout_header_t();

    private:
        bool f_readout_header;
        int32_t m_readout_header;

    public:
        int32_t readout_header();

    private:
        bool f_series_time_fraction;
        int32_t m_series_time_fraction;

    public:
        int32_t series_time_fraction();

    private:
        bool f_series_time;
        int32_t m_series_time;

    public:
        int32_t series_time();

    private:
        bool f_has_thermometry_readout;
        int32_t m_has_thermometry_readout;

    public:
        int32_t has_thermometry_readout();

    private:
        bool f_readout_status;
        int32_t m_readout_status;

    public:
        int32_t readout_status();

    private:
        uint32_t m_readout_hdr_packed_1;
        uint32_t m_readout_hdr_packed_2;
        uint16_t m_waveform_read_start_time;
        uint16_t m_waveform_read_end_time;
        uint32_t m_waveform_read_start_time_fraction;
        uint32_t m_waveform_read_end_time_fraction;
        test_t* m__root;
        test_t::detector_block_t* m__parent;

    public:
        uint32_t readout_hdr_packed_1() const { return m_readout_hdr_packed_1; }
        uint32_t readout_hdr_packed_2() const { return m_readout_hdr_packed_2; }
        uint16_t waveform_read_start_time() const { return m_waveform_read_start_time; }
        uint16_t waveform_read_end_time() const { return m_waveform_read_end_time; }
        uint32_t waveform_read_start_time_fraction() const { return m_waveform_read_start_time_fraction; }
        uint32_t waveform_read_end_time_fraction() const { return m_waveform_read_end_time_fraction; }
        test_t* _root() const { return m__root; }
        test_t::detector_block_t* _parent() const { return m__parent; }
        Readout_headerBuilderType readout_header_builder;
    };

    class entry_block_t : public kaitai::kstruct {

    public:

        entry_block_t(Entry_blockBuilderType builder, kaitai::kstream* p__io, test_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~entry_block_t();

    private:
        midas_header_t* m_midas_hdr;
        scdms_data_block_t* m_scdms_data;
        bool n_scdms_data;

    public:
        bool _is_null_scdms_data() { scdms_data(); return n_scdms_data; };

    private:
        std::string m_dmc_data;
        bool n_dmc_data;

    public:
        bool _is_null_dmc_data() { dmc_data(); return n_dmc_data; };

    private:
        std::string m_data;
        bool n_data;

    public:
        bool _is_null_data() { data(); return n_data; };

    private:
        test_t* m__root;
        test_t* m__parent;

    public:
        midas_header_t* midas_hdr() const { return m_midas_hdr; }
        scdms_data_block_t* scdms_data() const { return m_scdms_data; }
        std::string dmc_data() const { return m_dmc_data; }
        std::string data() const { return m_data; }
        test_t* _root() const { return m__root; }
        test_t* _parent() const { return m__parent; }
        Entry_blockBuilderType entry_block_builder;
    };

    class sdu_channel_block_t : public kaitai::kstruct {

    public:

        sdu_channel_block_t(Sdu_channel_blockBuilderType builder, kaitai::kstream* p__io, test_t::sdu_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~sdu_channel_block_t();

    private:
        bool f_sdu_channel_flag;
        int32_t m_sdu_channel_flag;

    public:
        int32_t sdu_channel_flag();

    private:
        bool f_sdu_pre_trigger_offset;
        int32_t m_sdu_pre_trigger_offset;

    public:
        int32_t sdu_pre_trigger_offset();

    private:
        bool f_sdu_channel_type;
        int32_t m_sdu_channel_type;

    public:
        int32_t sdu_channel_type();

    private:
        bool f_sdu_channel_num;
        int32_t m_sdu_channel_num;

    public:
        int32_t sdu_channel_num();

    private:
        uint32_t m_sdu_channel_header_packed;
        uint32_t m_sdu_num_samples;
        uint16_t m_blank;
        uint16_t m_sample_rate;
        std::vector<uint16_t>* m_sdu_channel_sample;
        test_t* m__root;
        test_t::sdu_block_t* m__parent;

    public:
        uint32_t sdu_channel_header_packed() const { return m_sdu_channel_header_packed; }
        uint32_t sdu_num_samples() const { return m_sdu_num_samples; }
        uint16_t blank() const { return m_blank; }

        /**
         * kHz
         */
        uint16_t sample_rate() const { return m_sample_rate; }
        std::vector<uint16_t>* sdu_channel_sample() const { return m_sdu_channel_sample; }
        test_t* _root() const { return m__root; }
        test_t::sdu_block_t* _parent() const { return m__parent; }
        Sdu_channel_blockBuilderType sdu_channel_block_builder;
    };

    class scdms_data_block_t : public kaitai::kstruct {

    public:

        scdms_data_block_t(Scdms_data_blockBuilderType builder, kaitai::kstream* p__io, test_t::entry_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~scdms_data_block_t();

    private:
        scdms_header_t* m_scdms_hdr;
        std::vector<trigger_block_t*>* m_trigger_blk;
        scdms_footer_t* m_scdms_ftr;
        test_t* m__root;
        test_t::entry_block_t* m__parent;

    public:
        scdms_header_t* scdms_hdr() const { return m_scdms_hdr; }
        std::vector<trigger_block_t*>* trigger_blk() const { return m_trigger_blk; }
        scdms_footer_t* scdms_ftr() const { return m_scdms_ftr; }
        test_t* _root() const { return m__root; }
        test_t::entry_block_t* _parent() const { return m__parent; }
        Scdms_data_blockBuilderType scdms_data_block_builder;
    };

    class midas_header_t : public kaitai::kstruct {

    public:

        midas_header_t(Midas_headerBuilderType builder, kaitai::kstream* p__io, test_t::entry_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~midas_header_t();

    private:
        uint16_t m_evt_id;
        uint16_t m_trigger_mask;
        uint32_t m_serial_number;
        uint32_t m_time_stamp;
        uint32_t m_evt_data_size;
        uint32_t m_all_banks_size;
        uint32_t m_flags;
        std::string m_bank_name;
        uint32_t m_type;
        uint32_t m_bank_size;
        test_t* m__root;
        test_t::entry_block_t* m__parent;

    public:
        uint16_t evt_id() const { return m_evt_id; }
        uint16_t trigger_mask() const { return m_trigger_mask; }
        uint32_t serial_number() const { return m_serial_number; }
        uint32_t time_stamp() const { return m_time_stamp; }
        uint32_t evt_data_size() const { return m_evt_data_size; }
        uint32_t all_banks_size() const { return m_all_banks_size; }
        uint32_t flags() const { return m_flags; }
        std::string bank_name() const { return m_bank_name; }
        uint32_t type() const { return m_type; }
        uint32_t bank_size() const { return m_bank_size; }
        test_t* _root() const { return m__root; }
        test_t::entry_block_t* _parent() const { return m__parent; }
        Midas_headerBuilderType midas_header_builder;
    };

    class sdu_block_t : public kaitai::kstruct {

    public:

        sdu_block_t(Sdu_blockBuilderType builder, kaitai::kstream* p__io, test_t::trigger_block_t* p__parent = 0, test_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~sdu_block_t();

    private:
        bool f_sdu_series_time_fraction;
        int32_t m_sdu_series_time_fraction;

    public:
        int32_t sdu_series_time_fraction();

    private:
        bool f_sdu_readout_status;
        int32_t m_sdu_readout_status;

    public:
        int32_t sdu_readout_status();

    private:
        bool f_sdu_readout_flag;
        int32_t m_sdu_readout_flag;

    public:
        int32_t sdu_readout_flag();

    private:
        bool f_num_sdu_channels;
        int32_t m_num_sdu_channels;

    public:
        int32_t num_sdu_channels();

    private:
        bool f_num_sdu_channels_flag;
        int32_t m_num_sdu_channels_flag;

    public:
        int32_t num_sdu_channels_flag();

    private:
        bool f_sdu_series_time;
        int32_t m_sdu_series_time;

    public:
        int32_t sdu_series_time();

    private:
        uint32_t m_sdu_readout_header_packed;
        uint32_t m_sdu_series_time_fraction_packed;
        uint16_t m_sdu_read_start_time;
        uint16_t m_sdu_read_end_time;
        uint32_t m_sdu_read_start_time_fraction;
        uint32_t m_sdu_read_end_time_fraction;
        uint32_t m_sdu_num_channels_header_packed;
        std::vector<sdu_channel_block_t*>* m_sdu_channel_blk;
        test_t* m__root;
        test_t::trigger_block_t* m__parent;

    public:
        uint32_t sdu_readout_header_packed() const { return m_sdu_readout_header_packed; }
        uint32_t sdu_series_time_fraction_packed() const { return m_sdu_series_time_fraction_packed; }
        uint16_t sdu_read_start_time() const { return m_sdu_read_start_time; }
        uint16_t sdu_read_end_time() const { return m_sdu_read_end_time; }
        uint32_t sdu_read_start_time_fraction() const { return m_sdu_read_start_time_fraction; }
        uint32_t sdu_read_end_time_fraction() const { return m_sdu_read_end_time_fraction; }
        uint32_t sdu_num_channels_header_packed() const { return m_sdu_num_channels_header_packed; }
        std::vector<sdu_channel_block_t*>* sdu_channel_blk() const { return m_sdu_channel_blk; }
        test_t* _root() const { return m__root; }
        test_t::trigger_block_t* _parent() const { return m__parent; }
        Sdu_blockBuilderType sdu_block_builder;
    };

private:
    uint16_t m_odb_hdr;
    std::string m_unknown;
    uint32_t m_odb_size;
    std::string m_odb;
    std::vector<entry_block_t*>* m_entry;
    test_t* m__root;
    kaitai::kstruct* m__parent;

public:
    uint16_t odb_hdr() const { return m_odb_hdr; }
    std::string unknown() const { return m_unknown; }
    uint32_t odb_size() const { return m_odb_size; }
    std::string odb() const { return m_odb; }
    std::vector<entry_block_t*>* entry() const { return m_entry; }
    test_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    TestBuilderType test_builder;
};

#ifndef USE_TEST_
#define USE_TEST_

std::map<std::string, TestBuilderType*> builder_map;
std::vector<std::string>* builder_keys;

TestBuilderType* load(std::string file_path);

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

#endif // USE_TEST_


#endif  // TEST_H_
