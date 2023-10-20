import ctypes
import numpy as np
import awkward as ak

class Reader:
    def __init__(self, library_path):
        self.library_path = library_path
        self.lib = ctypes.CDLL(library_path)

    def load(self, file_path: str):
        class Result(ctypes.Structure):
            _fields_ = [
                ("builder", ctypes.c_void_p),
                ("error_message", ctypes.c_char_p),
            ]

        fill = self.lib.fill
        fill.argtypes = [ctypes.c_char_p]
        fill.restypes = Result

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
        copy_into.argtypes = [ctypes.c_char_p, ctypes.c_void_p, ctypes.c_void_p, ctypes.c_int64]

        deallocate = self.lib.deallocate
        deallocate.argtypes = [ctypes.c_void_p]

        dump = self.lib.dump
        dump.argtypes = [ctypes.c_void_p, ctypes.c_int64]

        result = fill(file_path.encode('utf-8'))

        builder_form = form(result).decode("utf-8")
        builder_length = length(result)
        num_buffers = num_buffers(result)
        containers = {}

        try:
            for i in range(num_buffers):
                name = buffer_name(result, i)
                print(name)
                size = buffer_size(result, i)
                containers[name.decode('utf-8')] = np.empty(size, dtype=np.uint8)
                pointer, read_only_flag = containers[name.decode('utf-8')].__array_interface__['data']
                # dump(containers[name].ctypes.data_as(ctypes.POINTER(ctypes.c_void_p)), size)
                copy_into(ctypes.c_char_p(name), result, pointer, i)
                print(name)
            print(containers)

        finally:
            deallocate(result)
    
        return ak.from_buffers(builder_form, builder_length, containers)

fake = Reader("./libfake.so")
array =  fake.load("data/fake.raw")

print(array)