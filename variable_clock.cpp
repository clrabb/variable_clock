#include "variable_clock.h"
#include "consts.h"
#include <Arduino.h>



void
variable_clock::pulse_off_if_time()
{
    if ( this->is_pulse_high() && ( millis() - this->pulse_start_mills() >= PULSE_LEN_MS ) )
    {
        this->turn_pulse_off();
    }
}

void
variable_clock::pulse_on_if_time()
{
    if ( this->is_pulse_low() && ( millis() >= this->pulse_delay_ms() ) )
    {
        this->turn_pulse_on();
    }
}

void 
variable_clock::tick()
{
    this->pulse_off_if_time();
    this->pulse_on_if_time(); 
}
