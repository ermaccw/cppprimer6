#最低版本号
cmake_minimum_required(VERSION 3.16.2)

#项目名称
project(cp11-7)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a -g -Wall -Wunused-function -pthread -fexec-charset=GBK")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99 -g -pthread -fexec-charset=GBK")
    message("MINGW - Debug mode")
elseif(CMAKE_BUILD_TYPE STREQUAL "Release") # debug
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a -O2 -pthread -Wunused-function -fexec-charset=GBK")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99 -O2 -pthread -fexec-charset=GBK")
    message("MINGW - Release mode")
endif() # Debug
#
if(PROJECT_ARCHITECTURE STREQUAL "x64") # x64
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m64")
elseif(PROJECT_ARCHITECTURE STREQUAL "x86") # x86
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m32")
endif() # x64

#代码根目录
aux_source_directory(. SOURCE_DIR)

#输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})

#生成可执行文件
add_executable(${PROJECT_NAME} ${SOURCE_DIR})