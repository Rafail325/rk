add_executable(test_memento TestMemento.cpp)
target_link_libraries(test_memento PRIVATE memento_pattern Catch2)

add_executable(test_caretaker TestCareTaker.cpp)
target_link_libraries(test_caretaker PRIVATE memento_pattern Catch2)

add_executable(test_originator TestOrignator.cpp)
target_link_libraries(test_originator PRIVATE memento_pattern Catch2)

include(CTest)
include(Catch)
catch_discover_tests(test_memento)
catch_discover_tests(test_caretaker)
catch_discover_tests(test_originator)