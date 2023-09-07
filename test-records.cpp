#include <fstream>
#include <iostream>
#include <src-records/records.h>

int main() {
  std::cout << "BEGINS" << std::endl;

  std::ifstream infile("data/records.raw", std::ifstream::binary);

  kaitai::kstream ks(&infile);

  records_t points = records_t(&ks);

  std::cout << "ENDS" << std::endl;
}
