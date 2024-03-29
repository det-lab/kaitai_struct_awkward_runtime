// Select the test case by choosing the header and the test file
#include "animal.h"
#define TESTFILE "../example_data/data/animal.raw"

int main()
{
    std::string file_path = TESTFILE;
    void * builder = load(file_path);
    std::cout << "Execution completed" << std::endl;

    return 0;
}