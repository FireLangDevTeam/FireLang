cmake_minimum_required(VERSION 3.20)
project(FireLang)

set(CMAKE_CXX_STANDARD 14)

add_executable(FireLang main.cpp ZeroLight/fLexer.cc)
