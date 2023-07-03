cmake_minimum_required(VERSION 3.5)

project(Szymon_Wisniewski LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Szymon_Wisniewski main.cpp)

install(TARGETS Szymon_Wisniewski
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
