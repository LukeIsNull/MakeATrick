cmake_minimum_required(VERSION 2.8.0)

set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

add_subdirectory(Demo1)

add_executable(LearningDemo)

target_include_directories(LearningDemo
    PRIVATE
        ${CMAKE_CURRENT_DIRECTORY}
)