cmake_minimum_required(VERSION 3.15)
project(opengl_setup)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-g -Wall")

# Find OPENGL
find_package(openGL)
if (OPENGL_FOUND)
    message(STATUS " OpenGL found!")
endif(OPENGL_FOUND)

# Find GLUT
set(PROJECT_DIR C:\\Users\\A02290691\\CLionProjects\\opengl_setup\\)

message(STATUS "PROJECT DIR " ${PROJECT_DIR})
message(STATUS "OPENGL INCLUDE DIR " ${OPENGL_INCLUDE_DIR})

find_package(GLUT)

if (NOT GLUT_FOUND)
    message(ERROR " Glut not found!")
endif(NOT GLUT_FOUND)

add_executable(opengl_setup
        main.cpp)

target_link_libraries(opengl_setup
        openGL
        GLUT
        )