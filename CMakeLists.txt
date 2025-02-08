cmake_minimum_required(VERSION 3.0)  # cmake -G "MinGW Makefiles" ..
project(GTESTWIN)

# 头文件目录
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/src/calculate/include")
# 源文件目录
AUX_SOURCE_DIRECTORY("${CMAKE_CURRENT_SOURCE_DIR}/src/calculate" DIR_SRCS)

# 生成可执行文件
add_executable(calculate ./src/calculate/main.c ${DIR_SRCS})
