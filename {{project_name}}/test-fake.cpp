#include <fstream>
#include <iostream>
#include <src-fake/fake.h>

int main() {
  std::cout << "BEGINS" << std::endl;

  std::ifstream infile("data/fake.raw", std::ifstream::binary);

  kaitai::kstream ks(&infile);

  fake_t points = fake_t(&ks);

  std::cout << "ENDS" << std::endl;
}
