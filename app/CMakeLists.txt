add_executable(memento_app main.cpp)
target_link_libraries(memento_app PRIVATE memento_pattern)
target_include_directories(memento_app PRIVATE ${CMAKE_SOURCE_DIR}/src)