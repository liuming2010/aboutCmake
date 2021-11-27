cmake_minimum_required(VERSION 3.10) 

# 设定工程名和版本号 
project(Tutorial  VERSION 2.2)
# configure_file的作用将一份文件拷贝到另一个位置并修改它的内容，使得在代码中使用CMake中定义的变量 
# configure_file官方文档：https://cmake.org/cmake/help/latest/command/configure_file.html 
configure_file(TutorialConfig.h.in TutorialConfig.h)

# specify the C++ standard 
set(CMAKE_CXX_STANDARD 11) 
set(CMAKE_CXX_STANDARD_REQUIRED True) 

# add the executable 
add_executable(Tutorial  main.cpp) 

# 指定项目编译的时候需要include的文件路径，PROJECT_BINARY_DIR变量为编译发生的目录 
# target_include_directories官方文档：https://cmake.org/cmake/help/v3.3/command/target_include_directories.html 
# PRIVATE：仅作为本目标的包含目录；
# INTERFACE：其他目标链接到本目标时作为其他目标的包含目录；
# PUBLIC：既作为本目标的包含目录，又作为连接到本目标的其他目标的包含目录。
# 对于PUBLIC标头来说，最好令其拥有命名空间以避免命名冲突
target_include_directories(Tutorial  PUBLIC 
                           "${PROJECT_BINARY_DIR}" 
                           )
~~~