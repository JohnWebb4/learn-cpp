#include <iostream>

#include "learn_cpp_config.h"

namespace learncpp
{
    namespace learn1_6
    {
        long cppStandard()
        {
            return __cplusplus;
        }

        int print_cpp_version(const char * executable)
        {
            int a { 1 };

            // report version
            std::cout << executable << " Version " << LearnCpp_VERSION_MAJOR << "."
                      << LearnCpp_VERSION_MINOR << std::endl;
            std::cout << "Usage: " << executable << " number" << std::endl;
            std::cout << "C++ Version" << cppStandard() << std::endl;
            std::cout << "A is " << a << std::endl;

            return 0;
        }
    }
}