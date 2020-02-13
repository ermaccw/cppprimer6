#最低版本号
cmake_minimum_required(VERSION 3.10.0)

#项目名称
project(Main)

#设置C/C++标准
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_COMPILE_FEATURES "gcc")
set(CMAKE_CXX_COMPILE_FEATURES "g++")

#建立变量SRC_FILE为目录下.cpp文件列表
#file(GLOB SRC_FILE *.cpp)

#代码路径
aux_source_directory(. DIR_SRCS)

#dubug 模式
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

#输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

#生成可执行文件
add_executable(main ${DIR_SRCS})