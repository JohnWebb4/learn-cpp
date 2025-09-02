#include <iostream>
#include "LearnCppConfig.h"

long cppStandard()
{
  return __cplusplus;
}

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    // report version
    std::cout << argv[0] << " Version " << LearnCpp_VERSION_MAJOR << "."
              << LearnCpp_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    std::cout << "C++ Version" << cppStandard() << std::endl;

    return 0;
  }
}
