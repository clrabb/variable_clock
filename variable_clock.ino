

#include "variable_clock.h"
#include "consts.h"



variable_clock* v_clock = NULL;
void setup() 
{
    pinMode( CLOCK_OUT_PIN, OUTPUT );
    pinMode( STEP_PIN,  INPUT  );
    v_clock = new variable_clock();
}

void on_step_button_click()
{
    v_clock->pulse();
}

void on_mode_button_click()
{
    
}

void loop() 
{
    v_clock->tick();
}
