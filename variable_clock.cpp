#include "variable_clock.h"
#include "consts.h"
#include <Arduino.h>

void 
variable_clock::pulse()
{
    if( this->is_pulse_low() )
    {
        digitalWrite( this->clock_pin(), HIGH );
        this->pulse_start_mills( millis() );
        this->is_pulse_high( true );
    }
}

void 
variable_clock::tick()
{
    if ( this->is_pulse_high() && ( millis() - this->pulse_start_mills() >= PULSE_LEN_MS ) )
    {
        digitalWrite( this->clock_pin(), LOW );
        this->is_pulse_high( false );
    }
}
