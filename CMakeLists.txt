cmake_minimum_required(VERSION 3.28)
project(Playground VERSION 1.0 LANGUAGES CXX)

# Use latest C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add source files
set(SOURCES
    src/main.cpp
    src/entity.h
    src/character.h
    external/glad/src/glad.c
)

add_executable(${PROJECT_NAME} ${SOURCES})

# Find OpenGL and glfw
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

# Include directories
target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${OPENGL_INCLUDE_DIR}
        ${CMAKE_SOURCE_DIR}/external/glad/include
)

# Link libraries
target_link_libraries(${PROJECT_NAME}
    PRIVATE
        OpenGL::GL
        glfw
)

# On Windows, link explicitly to opengl32
if (WIN32)
    target_link_libraries(${PROJECT_NAME} PRIVATE opengl32)
endif()
