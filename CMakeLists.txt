cmake_minimum_required(VERSION 3.10)
project(MementoPattern)

add_library(memento_pattern STATIC
    src/ConcreteCareTaker.cpp
    src/ConcreteMemento.cpp
    src/ConcreteOrignator.cpp
)

target_include_directories(memento_pattern PUBLIC include)

add_subdirectory(app)

enable_testing()
add_subdirectory(tests)