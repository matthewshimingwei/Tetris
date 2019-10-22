cmake_minimum_required(VERSION 3.14)
project(_Tetris_)

set(CMAKE_CXX_STANDARD 14)

add_executable(_Tetris_ main.cpp type_def.h data_type.cpp data_type.h evaluate.cpp evaluate.h test_evaluate.cpp test_evaluate.h)