#ifndef VARIABLE_CLOCK_H
#define VARIABLE_CLOCK_H

#include "abc_clock.h"

class variable_clock : public abc_clock
{
public:
    variable_clock()
        : abc_clock()
        {
            
        }

    virtual void tick();

private:
    variable_clock( const variable_clock& );
    variable_clock& operator=( const variable_clock );
};

#endif // VARIABLE_CLOCK_H
