# Minimum version of CMake required
cmake_minimum_required(VERSION 3.28.2)

# Project name and version
project(Janus VERSION 1.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directory to search for header files
include_directories(include)

# Add the library target (source files)
add_library(janus_lib src/janus.cpp)

# Add the executable for the test program
add_executable(janus_tests tests/janus_tests.cpp)

# Link the janus library to the test executable
target_link_libraries(janus_tests janus_lib)

# Optional: Add flags for extra warnings during compilation
target_compile_options(janus_lib PRIVATE -Wall -Wextra)
