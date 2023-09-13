#include <fstream>
#include <iostream>
#include <src-pixie4e/pixie4e.h>

int main() {
  std::cout << "BEGINS" << std::endl;

  std::ifstream infile("data/pixie4e.raw", std::ifstream::binary);

  kaitai::kstream ks(&infile);

  pixie4e_t points = pixie4e_t(&ks);

  std::cout << "ENDS" << std::endl;
}
