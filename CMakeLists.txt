cmake_minimum_required(VERSION 3.15)
project(opengl_setup)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-lpthread")

# Simple thread test file. Threads are required to run OpenCV.
add_executable(thread_test thread_test.cpp)

## Project with OpenCV
#SET("OpenCV_DIR" "C:/opencv/build/x64/vc14/lib")
#find_package(OpenCV REQUIRED)
#include_directories(${OpenCV_INCLUDE_DIRS} )
#
#MESSAGE(STATUS "OpenCV Include dirs ${OpenCV_INCLUDE_DIRS}")
#MESSAGE(STATUS "OpenCV LINK LIBRARIES ${OpenCV_LIBS}")
#
#add_executable(opencv_setup opencv_setup.cpp)
#target_link_libraries(opencv_setup
#        ${OpenCV_LIBS}
#        )

# Find OPENGL
find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS})
MESSAGE(STATUS "OpenGL LINK LIBRARIES ${OPENGL_LIBS}")
MESSAGE(STATUS "OpenGL Include dirs ${OPENGL_INCLUDE_DIRS}")

# Find GLUT
set(PROJECT_DIR C:\\Users\\A02290691\\CLionProjects\\opengl_setup\\)
find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIRS} )
MESSAGE(STATUS "Glut LINK LIBRARIES ${GLUT_LIBS}")
MESSAGE(STATUS "Glut Include dirs ${GLUT_INCLUDE_DIR}")

# Find GLEW
find_package(GLEW REQUIRED)
MESSAGE(STATUS "GLEW Include dirs ${GLEW_INCLUDE_DIR}")

# Find GLM
include_directories(C:\\Users\\A02290691\\CLionProjects\\opengl_setup\\glm\\)
add_executable(glm_setup glm_setup.cpp)

# Project with OpenGL, Glut, GLM, GLEW
add_executable(opengl_setup opengl_setup.cpp)
target_link_libraries(opengl_setup
        ${OPENGL_LIBRARIES}
        ${GLUT_LIBRARY}
        GLEW::GLEW
        )