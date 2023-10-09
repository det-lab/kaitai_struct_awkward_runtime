// ./kaitai-struct-compiler -t cpp_stl --outdir src-animal schemas/animal.ksy
// g++ -DKS_STR_ENCODING_NONE -Ikaitai_struct_cpp_stl_runtime -I. kaitai_struct_cpp_stl_runtime/kaitai/kaitaistream.cpp src-animal/animal.cpp test-animal.cpp -o test-animal

#include <fstream>
#include <iostream>
#include <src-animal/animal.h>

int main() {
  std::cout << "BEGIN" << std::endl;

  std::ifstream infile("data/animal.raw", std::ifstream::binary);

  kaitai::kstream ks(&infile);

  animal_t zoo = animal_t(&ks);

  // std::vector<animal_t::animal_entry_t*> *animal_vec = zoo.entry();

  // for (int i = 0;  i < animal_vec->size();  i++) {
  //   animal_t::animal_entry_t *testAnimal = animal_vec->at(i);

  //   std::cout << "Species: " << testAnimal->species() << std::endl;
  //   std::cout << "Age: " << static_cast<int>(testAnimal->age()) << std::endl;
  //   std::cout << "Weight: " << testAnimal->weight() << std::endl;
  // }

  std::cout << "END" << std::endl;
}
