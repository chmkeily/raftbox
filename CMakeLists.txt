cmake_minimum_required(VERSION 2.6)
project(RaftNodeSvr CXX)

# 当前工程头文件搜索目录
INCLUDE_DIRECTORIES(framework)
INCLUDE_DIRECTORIES(lib)

# 链接选项
SET(COMMON_CPP_FLAGS "-g -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -D_DEBUG_ -D__STDC_FORMAT_MACROS")

# 源文件搜索
aux_source_directory("framework" SourceFiles)
aux_source_directory("lib" SourceFiles)

#生成可执行文件
ADD_EXECUTABLE(RaftNodeSvr ${SourceFiles})
set_target_properties(RaftNodeSvr PROPERTIES COMPILE_FLAGS "${COMMON_CPP_FLAGS}")



