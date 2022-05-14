#include <cmath>
#include <iostream>
#include <string>

// Header reads CMakeLists version and passes to main through the ggenerated header file
#include "cicdCppConfig.h"

int main(int argc, char* argv[])
{
    // Report version
    std::cout << argv[0] << " Version " << cicdCpp_VERSION_MAJOR << "."
              << cicdCpp_VERSION_MINOR << std::endl;
    
    // If no numeric arguments are given, print usage information and exit with error code 1
    if (argc < 2) {
      std::cout << "Usage: " << argv[0] << " number" << std::endl;
      return 1;
    }
  
    // convert input to double
    const double inputValue = std::stod(argv[1]);
  
    // calculate square root
    const double outputValue = sqrt(inputValue);
    std::cout << "The square root of " << inputValue << " is " << outputValue
              << std::endl;
    return 0;
}