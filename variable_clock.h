#ifndef VARIABLE_CLOCK_H
#define VARIABLE_CLOCK_H

class variable_clock
{
private:
    unsigned long  m_pulse_start_mills;
    bool           m_is_pulse_high;
    unsigned short m_clock_pin;

public:
    variable_clock( short clock_pin )
       : m_clock_pin( clock_pin )
    {
        m_is_pulse_high      = false;
        m_pulse_start_mills  = 0;
    }

public:
    void pulse();
    bool is_pulse_high() { return this->m_is_pulse_high; }
    void is_pulse_high( bool is_high ) { this->m_is_pulse_high = is_high; }
    bool is_pulse_low() { return !( this->is_pulse_high() ); }

    unsigned long pulse_start_mills() { return this->m_pulse_start_mills; }
    void pulse_start_mills( unsigned long pulse_mills ) { this->m_pulse_start_mills = pulse_mills; }

    unsigned short clock_pin() { return this->m_clock_pin; }
    void tick();

private:
    variable_clock& operator=( const variable_clock& );
    variable_clock( const variable_clock& ); 
};

#endif // VARIABLE_CLOCK_H
