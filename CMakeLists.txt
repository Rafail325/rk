cmake_minimum_required(VERSION 3.14)
project(MementoPattern VERSION 1.0)

add_subdirectory(extern/Catch2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(memento_pattern STATIC
    src/ConcreteCareTaker.cpp
    src/ConcreteMemento.cpp
    src/ConcreteOrignator.cpp
)

target_include_directories(memento_pattern
    PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

add_subdirectory(app)

enable_testing()
add_subdirectory(tests)