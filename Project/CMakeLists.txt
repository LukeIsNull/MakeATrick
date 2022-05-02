add_subdirectory(CopyCtor)
add_subdirectory(DesignStyle)

add_executable(Trick
    Main.cpp
)

target_include_directories(Trick
    PUBLIC
        ${CMAKE_CURRENT_DIR}
)

target_link_libraries(Trick
    PRIVATE
        PROJECT_COPYCTOR
        PROJECT_DESIGNSTYLE
)