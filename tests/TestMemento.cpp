#include "catch2/catch_test_macros.hpp"
#include "../src/ConcreteMemento.h" 

TEST_CASE("ConcreteMemento functionality", "[memento]") {
    ConcreteMemento memento(42);
    
    SECTION("Initial state") {
        REQUIRE(memento.getState() == 42);
    }
    
    SECTION("State modification") {
        memento.setState(100);
        REQUIRE(memento.getState() == 100);
    }
}