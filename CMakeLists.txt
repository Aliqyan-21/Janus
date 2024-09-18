cmake_minimum_required(VERSION 3.28.2)

project(Janus VERSION 1.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(janus_lib src/janus.cpp)

target_include_directories(janus_lib
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

add_executable(janus_tests tests/janus_tests.cpp)

target_link_libraries(janus_tests PRIVATE janus_lib)

target_compile_options(janus_lib PRIVATE -Wall -Wextra)

install(TARGETS janus_lib
    EXPORT janus_libTargets
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)

install(DIRECTORY include/ DESTINATION include)

install(EXPORT janus_libTargets
    FILE janus_libTargets.cmake
    DESTINATION lib/cmake/janus
)

include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/janus_libConfigVersion.cmake"
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY AnyNewerVersion
)

install(FILES
    "${CMAKE_CURRENT_BINARY_DIR}/janus_libConfig.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/janus_libConfigVersion.cmake"
    DESTINATION lib/cmake/janus
)

configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake/janus_libConfig.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/janus_libConfig.cmake"
    @ONLY
)
