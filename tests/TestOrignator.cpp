#include <cassert>
#include "../src/ConcreteOrignator.h"
#include "../src/ConcreteMemento.h"

int main() {
    // Test creating originator
    ConcreteOrignator originator;
    assert(originator.getState() == 0); // default state
    
    // Test state modification
    originator.setState(42);
    assert(originator.getState() == 42);
    
    // Test creating memento
    auto memento = originator.createMemento();
    assert(memento != nullptr);
    assert(memento->getState() == 42);
    
    // Test state modification
    originator.setState(100);
    assert(originator.getState() == 100);
    
    // Test restoring from memento
    originator.setMemento(*memento);
    assert(originator.getState() == 42);
    
    delete memento;
    return 0;
}