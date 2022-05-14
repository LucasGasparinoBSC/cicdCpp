cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(cicdCpp VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file(cicdCppConfig.h.in cicdCppConfig.h)

# add the executable
add_executable(cicdCpp cicdCpp.cxx)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(cicdCpp PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )
