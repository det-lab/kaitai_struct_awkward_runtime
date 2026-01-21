// Select the test case by choosing the header and the test file
#include "scdms.h"
#define TESTFILE "../example_data/data/scdms_v_two_trigger.bin"

int main()
{
    std::string file_path = TESTFILE;
    ScdmsBuilderType* builder = load(file_path);
    std::cout << builder->form() << std::endl;
    std::cout << "Execution completed" << std::endl;
    std::size_t index = 0;
    std::cout << builder->fields().size() << " fields found" << std::endl;
    for (const auto& field : builder->fields()) {
        std::cout << "Field name: " << field << std::endl;
    }

    return 0;
}