#include "catch2/catch_test_macros.hpp"
#include "../src/ConcreteOrignator.h"
#include "../src/ConcreteMemento.h"

TEST_CASE("ConcreteOrignator functionality", "[originator]") {
    ConcreteOrignator originator;
    
    SECTION("State management") {
        originator.setState(10);
        REQUIRE(originator.getState() == 10);
        
        originator.setState(20);
        REQUIRE(originator.getState() == 20);
    }
    
    SECTION("Memento creation") {
        originator.setState(30);
        IMemento* memento = originator.createMemento();
        REQUIRE(memento->getState() == 30);
        
        ConcreteMemento* concrete = dynamic_cast<ConcreteMemento*>(memento);
        REQUIRE(concrete != nullptr);
        
        delete memento;
    }
    
    SECTION("Memento restoration") {
        originator.setState(40);
        ConcreteMemento memento(50);
        originator.setMemento(memento);
        REQUIRE(originator.getState() == 50);
    }
}