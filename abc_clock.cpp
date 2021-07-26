#include "abc_clock.h"
#include "consts.h"
#include <Arduino.h>

void
abc_clock::turn_pulse_on()
{
    digitalWrite( CLOCK_OUT_PIN, HIGH );
    this->mark_pulse_start_time();
    this->is_pulse_high( true );
}

void 
abc_clock::turn_pulse_off()
{
    digitalWrite( CLOCK_OUT_PIN, LOW );
    this->mark_state_change_millis();
}


void
abc_clock::mark_state_change_millis()
{
    this->m_state_change_millis( millis() );
}
