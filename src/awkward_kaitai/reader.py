from __future__ import annotations

__all__ = ("Reader",)

import ctypes
import os
import pathlib
from typing import TYPE_CHECKING, Any, AnyStr, Final

import awkward as ak
import numpy as np

if TYPE_CHECKING:
    from numpy.typing import NDArray


class Reader:
    """Interface between Awkward Katai shared-objects and Awkward Array"""

    def __init__(self, library_path: os.PathLike[Any] | AnyStr):
        """Initialise a reader for Katai Struct data using a given shared library"""
        self.library_path = pathlib.Path(os.fsdecode(library_path))
        self.lib = ctypes.CDLL(os.fsdecode(library_path))

    def load(self, file_path: str) -> ak.Array:
        """Load suitable data for the current shared library, and return it
        as an Awkward Array
        """

        class Result(ctypes.Structure):  # pylint: disable=missing-class-docstring
            _fields_: Final = [  # pylint: disable=invalid-name
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
        containers: dict[str, NDArray[np.uint8]] = {}

        try:
            for i in range(num_buffers):  #  type: ignore[call-overload]
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
