#ifndef PIXIE4E_H_
#define PIXIE4E_H_

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

enum Field_pixie4e : std::size_t {pixie4eA__Zfile_header, pixie4eA__Zevents, pixie4eA__Zfile_footer};
enum Field_pixie4e_header : std::size_t {pixie4e_headerA__Zblk_size, pixie4e_headerA__Zmod_num, pixie4e_headerA__Zrun_format, pixie4e_headerA__Zchan_head_len, pixie4e_headerA__Zcoinc_pat, pixie4e_headerA__Zcoinc_win, pixie4e_headerA__Zmax_comb_event_len, pixie4e_headerA__Zboard_version, pixie4e_headerA__Zevent_length_0, pixie4e_headerA__Zevent_length_1, pixie4e_headerA__Zevent_length_2, pixie4e_headerA__Zevent_length_3, pixie4e_headerA__Zserial_number, pixie4e_headerA__Zreserved};
enum Field_event : std::size_t {eventA__Zelements};
enum Field_element : std::size_t {elementA__Zheader, elementA__Zdata};
enum Field_channel_header : std::size_t {channel_headerA__Zevt_pattern, channel_headerA__Zevt_info, channel_headerA__Znum_trace_blks, channel_headerA__Znum_trace_blks_prev, channel_headerA__Ztrig_time_lo, channel_headerA__Ztrig_time_mi, channel_headerA__Ztrig_time_hi, channel_headerA__Ztrig_time_x, channel_headerA__Zenergy, channel_headerA__Zchan_no, channel_headerA__Zuser_psa_value, channel_headerA__Zxia_psa_value, channel_headerA__Zextended_psa_values, channel_headerA__Zreserved, channel_headerA__Ztimestamp_full};
enum Field_pixie_eor : std::size_t {pixie_eorA__Zevt_pattern, pixie_eorA__Zevt_info, pixie_eorA__Znum_trace_blks, pixie_eorA__Znum_trace_blks_prev, pixie_eorA__Zreserved};

using Pixie4eBuilderType =
	RecordBuilder<
		RecordField<Field_pixie4e::pixie4eA__Zfile_header, RecordBuilder<
			RecordField<Field_pixie4e_header::pixie4e_headerA__Zblk_size, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie4e_header::pixie4e_headerA__Zmod_num, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie4e_header::pixie4e_headerA__Zrun_format, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie4e_header::pixie4e_headerA__Zchan_head_len, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie4e_header::pixie4e_headerA__Zcoinc_pat, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie4e_header::pixie4e_headerA__Zcoinc_win, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie4e_header::pixie4e_headerA__Zmax_comb_event_len, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie4e_header::pixie4e_headerA__Zboard_version, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie4e_header::pixie4e_headerA__Zevent_length_0, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie4e_header::pixie4e_headerA__Zevent_length_1, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie4e_header::pixie4e_headerA__Zevent_length_2, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie4e_header::pixie4e_headerA__Zevent_length_3, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie4e_header::pixie4e_headerA__Zserial_number, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie4e_header::pixie4e_headerA__Zreserved, NumpyBuilder<uint16_t>>
		>>,
		RecordField<Field_pixie4e::pixie4eA__Zevents, RecordBuilder<
			RecordField<Field_event::eventA__Zelements, ListOffsetBuilder<int64_t, RecordBuilder<
				RecordField<Field_element::elementA__Zheader, RecordBuilder<
					RecordField<Field_channel_header::channel_headerA__Zevt_pattern, NumpyBuilder<uint16_t>>,
					RecordField<Field_channel_header::channel_headerA__Zevt_info, NumpyBuilder<uint16_t>>,
					RecordField<Field_channel_header::channel_headerA__Znum_trace_blks, NumpyBuilder<uint16_t>>,
					RecordField<Field_channel_header::channel_headerA__Znum_trace_blks_prev, NumpyBuilder<uint16_t>>,
					RecordField<Field_channel_header::channel_headerA__Ztrig_time_lo, NumpyBuilder<uint16_t>>,
					RecordField<Field_channel_header::channel_headerA__Ztrig_time_mi, NumpyBuilder<uint16_t>>,
					RecordField<Field_channel_header::channel_headerA__Ztrig_time_hi, NumpyBuilder<uint16_t>>,
					RecordField<Field_channel_header::channel_headerA__Ztrig_time_x, NumpyBuilder<uint16_t>>,
					RecordField<Field_channel_header::channel_headerA__Zenergy, NumpyBuilder<uint16_t>>,
					RecordField<Field_channel_header::channel_headerA__Zchan_no, NumpyBuilder<uint16_t>>,
					RecordField<Field_channel_header::channel_headerA__Zuser_psa_value, NumpyBuilder<uint16_t>>,
					RecordField<Field_channel_header::channel_headerA__Zxia_psa_value, NumpyBuilder<uint16_t>>,
					RecordField<Field_channel_header::channel_headerA__Zextended_psa_values, ListOffsetBuilder<int64_t, NumpyBuilder<uint16_t>>>,
					RecordField<Field_channel_header::channel_headerA__Zreserved, ListOffsetBuilder<int64_t, NumpyBuilder<uint16_t>>>,
					RecordField<Field_channel_header::channel_headerA__Ztimestamp_full, NumpyBuilder<int32_t>>
				>>,
				RecordField<Field_element::elementA__Zdata, ListOffsetBuilder<int64_t, NumpyBuilder<uint16_t>>>
			>>>
		>>,
		RecordField<Field_pixie4e::pixie4eA__Zfile_footer, RecordBuilder<
			RecordField<Field_pixie_eor::pixie_eorA__Zevt_pattern, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie_eor::pixie_eorA__Zevt_info, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie_eor::pixie_eorA__Znum_trace_blks, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie_eor::pixie_eorA__Znum_trace_blks_prev, NumpyBuilder<uint16_t>>,
			RecordField<Field_pixie_eor::pixie_eorA__Zreserved, NumpyBuilder<uint16_t>>
		>>
	>;


using EventBuilderType = decltype(std::declval<Pixie4eBuilderType>().content<Field_pixie4e::pixie4eA__Zevents>());
using ElementBuilderType = decltype(std::declval<EventBuilderType>().content<Field_event::eventA__Zelements>().content());
using Channel_headerBuilderType = decltype(std::declval<ElementBuilderType>().content<Field_element::elementA__Zheader>());
using Pixie_eorBuilderType = decltype(std::declval<Pixie4eBuilderType>().content<Field_pixie4e::pixie4eA__Zfile_footer>());
using Pixie4e_headerBuilderType = decltype(std::declval<Pixie4eBuilderType>().content<Field_pixie4e::pixie4eA__Zfile_header>());

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct Awkward API: version 0.9 or later is required"
#endif

class pixie4e_t : public kaitai::kstruct {

public:
    class event_t;
    class element_t;
    class pixie_eor_t;
    class pixie4e_header_t;
    class channel_header_t;

    pixie4e_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, pixie4e_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~pixie4e_t();

    class event_t : public kaitai::kstruct {

    public:

        event_t(EventBuilderType builder, kaitai::kstream* p__io, pixie4e_t* p__parent = 0, pixie4e_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~event_t();

    private:
        std::vector<element_t*>* m_elements;
        pixie4e_t* m__root;
        pixie4e_t* m__parent;

    public:
        std::vector<element_t*>* elements() const { return m_elements; }
        pixie4e_t* _root() const { return m__root; }
        pixie4e_t* _parent() const { return m__parent; }
        EventBuilderType event_builder;
    };

    class element_t : public kaitai::kstruct {

    public:

        element_t(ElementBuilderType builder, kaitai::kstream* p__io, pixie4e_t::event_t* p__parent = 0, pixie4e_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~element_t();

    private:
        channel_header_t* m_header;
        std::vector<uint16_t>* m_data;
        pixie4e_t* m__root;
        pixie4e_t::event_t* m__parent;

    public:
        channel_header_t* header() const { return m_header; }
        std::vector<uint16_t>* data() const { return m_data; }
        pixie4e_t* _root() const { return m__root; }
        pixie4e_t::event_t* _parent() const { return m__parent; }
        ElementBuilderType element_builder;
    };

    class pixie_eor_t : public kaitai::kstruct {

    public:

        pixie_eor_t(Pixie_eorBuilderType builder, kaitai::kstream* p__io, pixie4e_t* p__parent = 0, pixie4e_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~pixie_eor_t();

    private:
        uint16_t m_evt_pattern;
        uint16_t m_evt_info;
        uint16_t m_num_trace_blks;
        uint16_t m_num_trace_blks_prev;
        uint16_t m_reserved;
        pixie4e_t* m__root;
        pixie4e_t* m__parent;

    public:
        uint16_t evt_pattern() const { return m_evt_pattern; }
        uint16_t evt_info() const { return m_evt_info; }
        uint16_t num_trace_blks() const { return m_num_trace_blks; }
        uint16_t num_trace_blks_prev() const { return m_num_trace_blks_prev; }
        uint16_t reserved() const { return m_reserved; }
        pixie4e_t* _root() const { return m__root; }
        pixie4e_t* _parent() const { return m__parent; }
        Pixie_eorBuilderType pixie_eor_builder;
    };

    class pixie4e_header_t : public kaitai::kstruct {

    public:

        pixie4e_header_t(Pixie4e_headerBuilderType builder, kaitai::kstream* p__io, pixie4e_t* p__parent = 0, pixie4e_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~pixie4e_header_t();

    private:
        uint16_t m_blk_size;
        uint16_t m_mod_num;
        uint16_t m_run_format;
        uint16_t m_chan_head_len;
        uint16_t m_coinc_pat;
        uint16_t m_coinc_win;
        uint16_t m_max_comb_event_len;
        uint16_t m_board_version;
        uint16_t m_event_length_0;
        uint16_t m_event_length_1;
        uint16_t m_event_length_2;
        uint16_t m_event_length_3;
        uint16_t m_serial_number;
        uint16_t m_reserved;
        pixie4e_t* m__root;
        pixie4e_t* m__parent;

    public:
        uint16_t blk_size() const { return m_blk_size; }
        uint16_t mod_num() const { return m_mod_num; }
        uint16_t run_format() const { return m_run_format; }
        uint16_t chan_head_len() const { return m_chan_head_len; }
        uint16_t coinc_pat() const { return m_coinc_pat; }
        uint16_t coinc_win() const { return m_coinc_win; }
        uint16_t max_comb_event_len() const { return m_max_comb_event_len; }
        uint16_t board_version() const { return m_board_version; }
        uint16_t event_length_0() const { return m_event_length_0; }
        uint16_t event_length_1() const { return m_event_length_1; }
        uint16_t event_length_2() const { return m_event_length_2; }
        uint16_t event_length_3() const { return m_event_length_3; }
        uint16_t serial_number() const { return m_serial_number; }
        uint16_t reserved() const { return m_reserved; }
        pixie4e_t* _root() const { return m__root; }
        pixie4e_t* _parent() const { return m__parent; }
        Pixie4e_headerBuilderType pixie4e_header_builder;
    };

    class channel_header_t : public kaitai::kstruct {

    public:

        channel_header_t(Channel_headerBuilderType builder, kaitai::kstream* p__io, pixie4e_t::element_t* p__parent = 0, pixie4e_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~channel_header_t();

    private:
        bool f_timestamp_full;
        int32_t m_timestamp_full;

    public:
        int32_t timestamp_full();

    private:
        uint16_t m_evt_pattern;
        uint16_t m_evt_info;
        uint16_t m_num_trace_blks;
        uint16_t m_num_trace_blks_prev;
        uint16_t m_trig_time_lo;
        uint16_t m_trig_time_mi;
        uint16_t m_trig_time_hi;
        uint16_t m_trig_time_x;
        uint16_t m_energy;
        uint16_t m_chan_no;
        uint16_t m_user_psa_value;
        uint16_t m_xia_psa_value;
        std::vector<uint16_t>* m_extended_psa_values;
        std::vector<uint16_t>* m_reserved;
        pixie4e_t* m__root;
        pixie4e_t::element_t* m__parent;

    public:
        uint16_t evt_pattern() const { return m_evt_pattern; }
        uint16_t evt_info() const { return m_evt_info; }
        uint16_t num_trace_blks() const { return m_num_trace_blks; }
        uint16_t num_trace_blks_prev() const { return m_num_trace_blks_prev; }
        uint16_t trig_time_lo() const { return m_trig_time_lo; }
        uint16_t trig_time_mi() const { return m_trig_time_mi; }
        uint16_t trig_time_hi() const { return m_trig_time_hi; }
        uint16_t trig_time_x() const { return m_trig_time_x; }
        uint16_t energy() const { return m_energy; }
        uint16_t chan_no() const { return m_chan_no; }
        uint16_t user_psa_value() const { return m_user_psa_value; }
        uint16_t xia_psa_value() const { return m_xia_psa_value; }
        std::vector<uint16_t>* extended_psa_values() const { return m_extended_psa_values; }
        std::vector<uint16_t>* reserved() const { return m_reserved; }
        pixie4e_t* _root() const { return m__root; }
        pixie4e_t::element_t* _parent() const { return m__parent; }
        Channel_headerBuilderType channel_header_builder;
    };

private:
    pixie4e_header_t* m_file_header;
    event_t* m_events;
    pixie_eor_t* m_file_footer;
    pixie4e_t* m__root;
    kaitai::kstruct* m__parent;
    std::string m__raw_file_header;
    kaitai::kstream* m__io__raw_file_header;
    std::string m__raw_events;
    kaitai::kstream* m__io__raw_events;
    std::string m__raw_file_footer;
    kaitai::kstream* m__io__raw_file_footer;

public:
    pixie4e_header_t* file_header() const { return m_file_header; }
    event_t* events() const { return m_events; }
    pixie_eor_t* file_footer() const { return m_file_footer; }
    pixie4e_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    std::string _raw_file_header() const { return m__raw_file_header; }
    kaitai::kstream* _io__raw_file_header() const { return m__io__raw_file_header; }
    std::string _raw_events() const { return m__raw_events; }
    kaitai::kstream* _io__raw_events() const { return m__io__raw_events; }
    std::string _raw_file_footer() const { return m__raw_file_footer; }
    kaitai::kstream* _io__raw_file_footer() const { return m__io__raw_file_footer; }
    Pixie4eBuilderType pixie4e_builder;
};

#ifndef USE_PIXIE4E_
#define USE_PIXIE4E_

std::map<std::string, Pixie4eBuilderType*> builder_map;
std::vector<std::string>* builder_keys;

Pixie4eBuilderType* load(std::string file_path);

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

#endif // USE_PIXIE4E_


#endif  // PIXIE4E_H_
