cmake_minimum_required(VERSION 3.10)
add_executable(app main.cpp)
target_link_libraries(app PRIVATE MySqrt)

message("app cmake_source_dir ${CMAKE_SOURCE_DIR}")
message("app cmake_cur_src_dir ${CMAKE_CURRENT_SOURCE_DIR}")