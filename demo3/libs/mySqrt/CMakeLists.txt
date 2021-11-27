cmake_minimum_required(VERSION 3.10)
file( GLOB header_list include/*.h )
file( GLOB source_list src/*.cpp )
# project(MySqrt)
add_library(MySqrt SHARED  src/MySqrt.cpp)

target_include_directories(MySqrt PUBLIC ${PROJECT_SOURCE_DIR}/libs)
target_compile_definitions(MySqrt PRIVATE DLL_EXPORT)
# set_target_properties(MySqrt PROPERTIES 
#     CMAKE_LIBRARY_OUTPUT_DIRECTORY 
# )

message("mySqrt cmake_source_dir ${CMAKE_SOURCE_DIR}")
message("mySqrt cmake_cur_src_dir ${CMAKE_CURRENT_SOURCE_DIR}")
message("mySqrt project_src_dir ${PROJECT_SOURCE_DIR}")
message("mySqrt project_bin_dir ${PROJECT_BINARY_DIR}")


# message("head:${header_list}")
# message("head:${source_list}")
