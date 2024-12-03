from __future__ import annotations

import sys

sys.path.append("local")
import awkward_kaitai
import numpy as np

testcase = sys.argv[1]

reader = awkward_kaitai.Reader(f"test_artifacts/lib{testcase}.so")
if testcase == "scdms":
    testcase = "scdms_v_two_trigger"
from glob import glob
data_filenames = glob(f"example_data/data/{testcase}.*")
assert len(data_filenames) == 1
awkward_array = reader.load(data_filenames[0])
print(awkward_array.layout)
