cmake_minimum_required(VERSION 3.9.0)
project(boost)
include_directories(/usr/local/include/)
include_directories(/usr/local/include/sevenXnetworks/boost)
link_directories(/usr/lib/lib)
set(CMAKE_CXX_STANDARD 14)
aux_source_directory(src DIR_SRCS)
set(SOURCES ${DIR_SRCS})
add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} -Wall -lpthread -lboost_thread)