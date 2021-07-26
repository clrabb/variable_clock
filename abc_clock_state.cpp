#include "abc_clock_state.h"

#include <Arduino.h>

abc_clock_state::abc_clock_state()
{
    this->mark_changed_millis();
}

void
abc_clock_state::mark_changed_millis()
{
    this->m_last_state_change_millis = millis();
}
