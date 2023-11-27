import awkward_kaitai

def test_animal():
    animal = awkward_kaitai.Reader("src-animal/libanimal.so") # pass the path of the shared file
    awkward_array = animal.load("example_data/data/animal.raw")

    assert str(awkward_array.to_list()) == """[{'animalA__Zentry': [{'animalA__ZentryA__Zstr_len': 3, 'animalA__ZentryA__Zspecies': 'cat', 'animalA__ZentryA__Zage': 5, 'animalA__ZentryA__Zweight': 12}, {'animalA__ZentryA__Zstr_len': 3, 'animalA__ZentryA__Zspecies': 'dog', 'animalA__ZentryA__Zage': 3, 'animalA__ZentryA__Zweight': 43}, {'animalA__ZentryA__Zstr_len': 6, 'animalA__ZentryA__Zspecies': 'turtle', 'animalA__ZentryA__Zage': 10, 'animalA__ZentryA__Zweight': 5}]}]"""
