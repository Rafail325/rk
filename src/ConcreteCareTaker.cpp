#include "ConcreteCareTaker.h"
#include <IMemento.h>

ConcreteCareTaker::ConcreteCareTaker(IOrignator *orignator) : m_orignator(orignator) {}

void ConcreteCareTaker::save()
{
    m_history.push_back(m_orignator->createMemento());
}

void ConcreteCareTaker::undo()
{
    if (!m_history.empty()) {
        IMemento *last = m_history.back();
        m_orignator->setMemento(*last);
        delete last;
        m_history.pop_back();
    }
}
