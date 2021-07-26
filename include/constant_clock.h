#ifndef CONSTANT_CLOCK_H
#define CONSTANT_CLOCK_H

#include "abc_clock.h"

class constant_clock : public abc_clock
{
public:
    constant_clock() {}

    virtual void tick();

private:
    constant_clock( const constant_clock& );
    constant_clock& operator=( const constant_clock& );
};


#endif // CONTANT_CLOCK_H
