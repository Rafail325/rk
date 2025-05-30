#include <cassert>
#include "../src/ConcreteMemento.h"

int main() {
    // Test initial state
    ConcreteMemento memento(42);
    assert(memento.getState() == 42);
    
    // Test state modification
    memento.setState(100);
    assert(memento.getState() == 100);
    
    return 0;
}