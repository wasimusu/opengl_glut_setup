cmake_minimum_required(VERSION 3.15)
project(opengl_setup)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-g -Wall")

# Find OPENGL
find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS})
if (OPENGL_FOUND)
    message(STATUS " OpenGL found! OPENGL INCLUDE DIR: " ${OPENGL_INCLUDE_DIRS})
endif(OPENGL_FOUND)

# Find GLUT
set(PROJECT_DIR C:\\Users\\A02290691\\CLionProjects\\opengl_setup\\)
find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIRS} )
if (GLUT_FOUND)
    message(STATUS " Glut found! GLUT INCLUDE DIR: " ${GLUT_INCLUDE_DIR})
endif(GLUT_FOUND)

# Find GLEW
find_package(GLEW REQUIRED)
if (GLEW_FOUND)
    include_directories(${GLEW_INCLUDE_DIRS})
endif()

# Find GLM
include_directories(C:\\Users\\A02290691\\CLionProjects\\opengl_setup\\glm\\)

add_executable(opengl_setup
        main.cpp)

target_link_libraries(opengl_setup
        ${OPENGL_LIBRARIES}
        ${GLUT_LIBRARY}
        GLEW::GLEW
        )