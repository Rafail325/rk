#include <cassert>
#include <iostream>
#include "../src/ConcreteCareTaker.h"
#include "../src/ConcreteOrignator.h"

int main() {
    // Test creating and managing mementos
    ConcreteOrignator originator;
    ConcreteCareTaker caretaker(&originator);
    
    // Save initial state
    originator.setState(42);
    caretaker.save();
    assert(originator.getState() == 42);
    
    // Change state and save
    originator.setState(100);
    caretaker.save();
    assert(originator.getState() == 100);
    
    // Restore previous state 
    caretaker.undo();
    assert(originator.getState() == 100);
    
    // Try to undo again (should not crash)
    caretaker.undo();

    return 0;
}