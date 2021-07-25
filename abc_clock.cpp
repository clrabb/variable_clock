#include "abc_clock.h"
#include "consts.h"
#include <Arduino.h>

void 
abc_clock::pulse()
{
    if( this->is_pulse_low() )
    {
        digitalWrite( CLOCK_OUT_PIN, HIGH );
        this->pulse_start_mills( millis() );
        this->is_pulse_high( true );
    }
}
