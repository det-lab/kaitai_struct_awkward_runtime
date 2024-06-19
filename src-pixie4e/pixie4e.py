# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

import kaitaistruct
from kaitaistruct import KaitaiStruct, KaitaiStream, BytesIO


if getattr(kaitaistruct, 'API_VERSION', (0, 9)) < (0, 9):
    raise Exception("Incompatible Kaitai Struct Python API: 0.9 or later is required, but you have %s" % (kaitaistruct.__version__))

class Pixie4e(KaitaiStruct):
    def __init__(self, _io, _parent=None, _root=None):
        self._io = _io
        self._parent = _parent
        self._root = _root if _root else self
        self._read()

    def _read(self):
        self.file_header = Pixie4e.Pixie4eHeader(self._io, self, self._root)
        self._raw_events = self._io.read_bytes((self._io.size() - 128))
        _io__raw_events = KaitaiStream(BytesIO(self._raw_events))
        self.events = Pixie4e.Event(_io__raw_events, self, self._root)
        self.file_footer = Pixie4e.PixieEor(self._io, self, self._root)

    class Event(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self._read()

        def _read(self):
            self.elements = []
            i = 0
            while not self._io.is_eof():
                self.elements.append(Pixie4e.Element(self._io, self, self._root))
                i += 1



    class Element(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self._read()

        def _read(self):
            self.header = Pixie4e.ChannelHeader(self._io, self, self._root)
            self.data = []
            for i in range((self.header.num_trace_blks * self._root.file_header.blk_size)):
                self.data.append(self._io.read_u2le())



    class PixieEor(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self._read()

        def _read(self):
            self.evt_pattern = self._io.read_u2le()
            self.evt_info = self._io.read_u2le()
            self.num_trace_blks = self._io.read_u2le()
            self.num_trace_blks_prev = self._io.read_u2le()
            self.reserved = self._io.read_u2le()


    class Pixie4eHeader(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self._read()

        def _read(self):
            self.blk_size = self._io.read_u2le()
            self.mod_num = self._io.read_u2le()
            self.run_format = self._io.read_u2le()
            self.chan_head_len = self._io.read_u2le()
            self.coinc_pat = self._io.read_u2le()
            self.coinc_win = self._io.read_u2le()
            self.max_comb_event_len = self._io.read_u2le()
            self.board_version = self._io.read_u2le()
            self.event_length_0 = self._io.read_u2le()
            self.event_length_1 = self._io.read_u2le()
            self.event_length_2 = self._io.read_u2le()
            self.event_length_3 = self._io.read_u2le()
            self.serial_number = self._io.read_u2le()
            self.reserved = self._io.read_u2le()


    class ChannelHeader(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self._read()

        def _read(self):
            self.evt_pattern = self._io.read_u2le()
            self.evt_info = self._io.read_u2le()
            self.num_trace_blks = self._io.read_u2le()
            self.num_trace_blks_prev = self._io.read_u2le()
            self.trig_time_lo = self._io.read_u2le()
            self.trig_time_mi = self._io.read_u2le()
            self.trig_time_hi = self._io.read_u2le()
            self.trig_time_x = self._io.read_u2le()
            self.energy = self._io.read_u2le()
            self.chan_no = self._io.read_u2le()
            self.user_psa_value = self._io.read_u2le()
            self.xia_psa_value = self._io.read_u2le()
            self.extended_psa_values = []
            for i in range(4):
                self.extended_psa_values.append(self._io.read_u2le())

            self.reserved = []
            for i in range(16):
                self.reserved.append(self._io.read_u2le())


        @property
        def timestamp_full(self):
            if hasattr(self, '_m_timestamp_full'):
                return self._m_timestamp_full

            self._m_timestamp_full = ((self.trig_time_lo + (self.trig_time_mi << 16)) + (self.trig_time_hi << 32))
            return getattr(self, '_m_timestamp_full', None)



