add_subdirectory(CopyCtor)

add_executable(Trick
    Main.cpp
)

target_include_directories(Trick
    PUBLIC
        ${CMAKE_CURRENT_DIR}
    INTERFACE
        ${CMAKE_CURRENT_DIR}/CopyCtor/CopyCtor.hpp
)

target_link_libraries(Trick
    PRIVATE
        PROJECT_COPYCTOR
)