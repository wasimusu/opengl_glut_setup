cmake_minimum_required(VERSION 3.15)
project(opengl_setup)

set(CMAKE_CXX_STANDARD 14)

# lpthread
# -fsanitize=address or
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-lpthread")

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

# Project with OpenGL, Glut, GLM, GLEW
add_executable(opengl_setup main.cpp)

target_link_libraries(opengl_setup
        ${OPENGL_LIBRARIES}
        ${GLUT_LIBRARY}
        GLEW::GLEW
        )

# Project with OpenCV
SET("OpenCV_DIR" "C:/opencv/build/x64/vc14/lib")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS} )

MESSAGE(STATUS "Include dirs ${OpenCV_INCLUDE_DIRS}")
MESSAGE(STATUS "LINK LIBRARIES ${OpenCV_LIBS}")

add_executable(opencv_setup_test opencv_setup_test.cpp)
target_link_libraries(opencv_setup_test
        ${OpenCV_LIBS})

# Simple thread test file
add_executable(thread_test thread_test.cpp)
