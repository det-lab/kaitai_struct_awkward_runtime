# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

import kaitaistruct
from kaitaistruct import KaitaiStruct, KaitaiStream, BytesIO


if getattr(kaitaistruct, 'API_VERSION', (0, 9)) < (0, 9):
    raise Exception("Incompatible Kaitai Struct Python API: 0.9 or later is required, but you have %s" % (kaitaistruct.__version__))

class Test(KaitaiStruct):
    def __init__(self, _io, _parent=None, _root=None):
        self._io = _io
        self._parent = _parent
        self._root = _root if _root else self
        self._read()

    def _read(self):
        self.lengths = Test.FullMidPeakLens(self._io, self, self._root)
        self.f_data = Test.FullData(self._io, self, self._root)
        self.m_data = Test.MidData(self._io, self, self._root)
        self.p_data = Test.PeakData(self._io, self, self._root)

    class FullMidPeakLens(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self._read()

        def _read(self):
            self.full_len = self._io.read_u4le()
            self.mid_len = self._io.read_u4le()
            self.peak_len = self._io.read_u4le()


    class FullData(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self._read()

        def _read(self):
            self.x_data = []
            for i in range(self._root.lengths.full_len):
                self.x_data.append(self._io.read_f4le())

            self.y_data = []
            for i in range(self._root.lengths.full_len):
                self.y_data.append(self._io.read_f4le())



    class MidData(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self._read()

        def _read(self):
            self.x_data = []
            for i in range(self._root.lengths.mid_len):
                self.x_data.append(self._io.read_f4le())

            self.y_data = []
            for i in range(self._root.lengths.mid_len):
                self.y_data.append(self._io.read_f4le())



    class PeakData(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self._read()

        def _read(self):
            self.x_data = []
            for i in range(self._root.lengths.peak_len):
                self.x_data.append(self._io.read_f4le())

            self.y_data = []
            for i in range(self._root.lengths.peak_len):
                self.y_data.append(self._io.read_f4le())




