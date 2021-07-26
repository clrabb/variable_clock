#ifndef ABC_CLOCK_H
#define ABC_CLOCK_H

#include <Arduino.h>
#include "clock_state_high.h"

class abc_clock
{
private:
    abc_clock_state* m_clock_state;
    bool             m_is_pulse_high;

public:
    abc_clock() 
        : m_clock_state( new clock_state_high() )
    {
    }

    virtual ~abc_clock() {}

public:    
    // Behavior
    //
    void pulse();

    // Testing
    //
    bool is_pulse_high() { return this->m_is_pulse_high; }
    void is_pulse_high( bool is_high ) { this->m_is_pulse_high = is_high; }
    bool is_pulse_low() { return !( this->is_pulse_high() ); }

    // Accessors
    //
    unsigned long pulse_start_mills() { return this->m_pulse_start_mills; }
    void turn_pulse_on();
    void turn_pulse_off();
    
   

    // Override this
    //
    virtual void tick() = 0;

private:
    void pulse_start_mills( unsigned long pulse_mills ) { this->m_pulse_start_mills = pulse_mills; }
    void mark_pulse_start_time(){ this->pulse_start_mills( millis() ); }

private:
    abc_clock& operator=( const abc_clock& );
    abc_clock( const abc_clock& ); 
};
#endif // ABC_CLOCK_H
