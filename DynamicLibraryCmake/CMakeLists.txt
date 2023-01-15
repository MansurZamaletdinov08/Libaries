cmake_minimum_required(VERSION 3.10)

project(DynamicLibraryCmake)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON) 
add_library(LibraryDinamic SHARED Leaver.cpp Leaver.h)
add_executable(DemoLybrary main.cpp)

target_link_libraries(DemoLybrary LibraryDinamic)