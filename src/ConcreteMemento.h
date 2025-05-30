#include "ConcreteOrignator.h"

class ConcreteMemento : public IMemento
{
public:
    ConcreteMemento(const int &state);

    virtual int getState() const override;
    virtual void setState(const int &state) override;

private:
    friend class ConcreteOrignator;

    int m_state;
};
