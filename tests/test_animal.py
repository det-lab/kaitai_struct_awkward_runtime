from __future__ import annotations

import sys

sys.path.append("local")
import awkward_kaitai


def test_animal():
    animal = awkward_kaitai.Reader(
        "src-animal/libanimal.so"
    )  # pass the path of the shared file
    awkward_array = animal.load("example_data/data/animal.raw")

    assert (
        str(awkward_array.to_list())
        == """[{'animalA__Zentry': [{'animal_entryA__Zstr_len': 3, 'animal_entryA__Zspecies': 'cat', 'animal_entryA__Zage': 5, 'animal_entryA__Zweight': 12}, {'animal_entryA__Zstr_len': 3, 'animal_entryA__Zspecies': 'dog', 'animal_entryA__Zage': 3, 'animal_entryA__Zweight': 43}, {'animal_entryA__Zstr_len': 6, 'animal_entryA__Zspecies': 'turtle', 'animal_entryA__Zage': 10, 'animal_entryA__Zweight': 5}]}]"""
    )
