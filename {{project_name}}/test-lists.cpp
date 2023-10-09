#include <fstream>
#include <iostream>
#include <src-lists/lists.h>

int main() {
  std::cout << "BEGINS" << std::endl;

  std::ifstream infile("data/lists.raw", std::ifstream::binary);

  kaitai::kstream ks(&infile);

  lists_t sample = lists_t(&ks);

  std::cout << "ENDS" << std::endl;
}
