#include "variable_clock.h"
#include "consts.h"
#include <Arduino.h>

void 
variable_clock::tick()
{
    if ( this->is_pulse_high() && ( millis() - this->pulse_start_mills() >= PULSE_LEN_MS ) )
    {
        digitalWrite( CLOCK_OUT_PIN, LOW );
        this->is_pulse_high( false );
    }
}
