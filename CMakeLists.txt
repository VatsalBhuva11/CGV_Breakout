cmake_minimum_required(VERSION 2.6)

# Set main project name
project(dtiBreakout)

# Find OpenGL
find_package(OpenGL REQUIRED)

# Set compiler flags
set(CMAKE_CXX_FLAGS "-g -Wall")

# Include directories
include_directories(${OPENGL_INCLUDE_DIR})

# Add all source files to the configuration
file(GLOB dtiBreakout_SRC
    "*.h"
    "*.cpp"
)

# Create an executable
add_executable(dtiBreakout ${dtiBreakout_SRC})

# Link OpenGL, GLU, and GLUT libraries manually
target_link_libraries(dtiBreakout ${OPENGL_LIBRARIES} GL GLU glut)
