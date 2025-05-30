#include "Catch2/catch_test_macros.hpp"
#include "../src/ConcreteCareTaker.h"
#include "../src/ConcreteOrignator.h"
 
TEST_CASE("ConcreteCareTaker functionality", "[caretaker]") {
    ConcreteOrignator originator;
    ConcreteCareTaker caretaker(&originator);
    
    SECTION("Save and undo") {
        originator.setState(1);
        caretaker.save();
        
        originator.setState(2);
        caretaker.save();
        
        originator.setState(3);
        REQUIRE(originator.getState() == 3);
        
        caretaker.undo();
        REQUIRE(originator.getState() == 2);
        
        caretaker.undo();
        REQUIRE(originator.getState() == 1);
    }
    
    SECTION("Empty undo") {
        REQUIRE_NOTHROW(caretaker.undo());
    }
}