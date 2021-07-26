#ifndef VARIABLE_CLOCK_H
#define VARIABLE_CLOCK_H

#include "abc_clock.h"

class variable_clock : public abc_clock
{
private:
    unsigned short m_pulse_delay_ms = 0;
    
public:
    variable_clock()
        : abc_clock()
        {
            
        }

    virtual void tick();
    virtual unsigned short pulse_delay_ms() { return this->m_pulse_delay_ms; }

protected:
    void pulse_off_if_time();
    void pulse_on_if_time();

private:
    void pulse_delay_ms( unsigned short pulse_delay ) { this->m_pulse_delay_ms = pulse_delay; }
    

private:
    variable_clock( const variable_clock& );
    variable_clock& operator=( const variable_clock );
};

#endif // VARIABLE_CLOCK_H
