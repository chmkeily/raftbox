cmake_minimum_required(VERSION 2.6)
project(RaftNodeSvr CXX)

# 当前工程头文件搜索目录
include_directories(core)
include_directories(framework)
include_directories(proto)

# 源文件搜索
aux_source_directory("core" SourceFiles)
aux_source_directory("framework" SourceFiles)
aux_source_directory("proto" SourceFiles)

# 链接选项
SET(COMMON_CPP_FLAGS "--std=c++11 -g -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -D_DEBUG_ -D__STDC_FORMAT_MACROS")

#生成可执行文件
add_executable(RaftNodeSvr ${SourceFiles})
target_link_libraries(RaftNodeSvr "-lprotobuf")
set_target_properties(RaftNodeSvr PROPERTIES COMPILE_FLAGS "${COMMON_CPP_FLAGS}")



