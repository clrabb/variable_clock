#ifndef CLOCK_STATE_HIGH_H
#define CLOCK_STATE_HIGH_H

#include "abc_clock_state.h"

class clock_state_high : public abc_clock_state
{
public:
    clock_state_high();
    virtual ~clock_state_high(){}

public:
    virtual bool is_high() { return true;  }
    virtual bool is_low()  { return false; }
    virtual void tick();
    
};

#endif // CLOCK_STATE_HIGH_H
