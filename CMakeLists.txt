cmake_minimum_required(VERSION 3.20)

project(
    CosmosEngine
    VERSION 0.0.1
    DESCRIPTION "Next Generation Space Simulation Engine"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(engine)

file(GLOB_RECURSE ENGINE_SOURCES
    engine/*.cpp
)

add_executable(CosmosEngine

    src/main.cpp

    ${ENGINE_SOURCES}

)