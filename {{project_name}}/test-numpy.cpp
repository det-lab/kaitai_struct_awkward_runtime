#include <fstream>
#include <iostream>
#include <src-numpy/numpy.h>

int main() {
  std::cout << "BEGINS" << std::endl;

  std::ifstream infile("data/numpy.raw", std::ifstream::binary);

  kaitai::kstream ks(&infile);

  numpy_t points = numpy_t(&ks);

  std::cout << "ENDS" << std::endl;
}
