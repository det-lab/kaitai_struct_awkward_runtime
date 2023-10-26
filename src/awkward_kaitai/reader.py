from __future__ import annotations

__all__ = ("Reader",)

import ctypes
import os
import pathlib
import numpy as np
import awkward as ak
from typing import AnyStr


class Reader:
    def __init__(self, library_path: os.PathLike | AnyStr):
        self.library_path = pathlib.Path(library_path)
        self.lib = ctypes.CDLL(library_path)

    def load(self, file_path: str):
        class Result(ctypes.Structure):
            _fields_ = [
                ("builder", ctypes.c_void_p),
                ("error_message", ctypes.c_char_p),
            ]

        fill = self.lib.fill
        fill.argtypes = [ctypes.c_char_p]
        fill.restype = Result

        form = self.lib.form
        form.argtypes = [ctypes.c_void_p]
        form.restype = ctypes.c_char_p

        length = self.lib.length
        length.argtypes = [ctypes.c_void_p]
        length.restype = ctypes.c_int64

        num_buffers = self.lib.num_buffers
        num_buffers.argtypes = [ctypes.c_void_p]
        num_buffers.restype = ctypes.c_int64

        buffer_name = self.lib.buffer_name
        buffer_name.argtypes = [ctypes.c_void_p, ctypes.c_int64]
        buffer_name.restype = ctypes.c_char_p

        buffer_size = self.lib.buffer_size
        buffer_size.argtypes = [ctypes.c_void_p, ctypes.c_int64]
        buffer_size.restype = ctypes.c_int64

        copy_into = self.lib.copy_into
        copy_into.argtypes = [
            ctypes.c_char_p,
            ctypes.c_void_p,
            ctypes.c_void_p,
            ctypes.c_int64,
        ]

        deallocate = self.lib.deallocate
        deallocate.argtypes = [ctypes.c_void_p]

        result = fill(file_path.encode("utf-8"))
        if result.error_message is not None:
            raise RuntimeError(result.error_message.decode("utf-8"))
        builder = result.builder

        builder_form = form(builder).decode("utf-8")
        builder_length = length(builder)
        num_buffers = num_buffers(builder)
        containers = {}

        try:
            for i in range(num_buffers):
                name = buffer_name(builder, i)
                size = buffer_size(builder, i)
                containers[name.decode("utf-8")] = np.empty(size, dtype=np.uint8)
                pointer = containers[name.decode("utf-8")].__array_interface__["data"][
                    0
                ]
                copy_into(ctypes.c_char_p(name), builder, pointer, i)
        finally:
            deallocate(builder)

        return ak.from_buffers(builder_form, builder_length, containers)
