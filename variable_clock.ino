static unsigned short CLOCK_OUT     = 3;
static unsigned short STEP_PIN      = 4;
static unsigned short PULSE_LEN_MS  = 50;



void setup() 
{
    pinMode( CLOCK_OUT, OUTPUT );
    pinMode( STEP_PIN,  INPUT  );

}

void on_button_click()
{
    pulse();
}

unsigned long pulse_start = 0;
bool is_clock_high = false;
void pulse()
{

    
    unsigned long current_mills = millis();
    if ( current_mills - pulse_start >= PULSE_LEN_MS )
    {
        pulse_start = millis();
        digitalWrite( CLOCK_OUT, LOW );
    }
}

void loop() 
{
    
}
