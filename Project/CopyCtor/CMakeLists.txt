
add_library(PROJECT_COPYCTOR
    CopyCtor.cpp
)

target_include_directories(PROJECT_COPYCTOR
    PUBLIC
        ${CMAKE_CURRENT_DIR}
)