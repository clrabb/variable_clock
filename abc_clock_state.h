#ifndef ABC_CLOCK_STATE_H
#define ABC_CLOCK_STATE_H

class abc_clock_state
{
private:
    unsigned long m_last_state_change_millis;  

public:
    abc_clock_state();
    virtual bool is_high() = 0;
    virtual bool is_low() = 0;
    virtual bool should_change_state();
    unsigned long mills_since_state_change();
    virtual void tick() = 0;
    
protected:
    void mark_changed_millis();
};


#endif // ABC_CLOCK_STATE_H
