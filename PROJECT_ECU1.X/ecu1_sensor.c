
#include "ecu1_sensor.h"
#include "adc.h"
#include "can.h"
#include "msg_id.h"
#include "uart.h"

uint16_t get_speed()
{
    uint16_t speed = read_adc(CHANNEL4);
    speed = speed / 10.26;
    return speed;
}

unsigned char get_gear_pos()
{
    static char gear = 0;
    
    unsigned char key = read_digital_keypad(STATE_CHANGE);
    
    if(key == SWITCH1)
    {
        if(gear == 7)
        {
            gear = 0;
        }
        else if(gear < 6)
        gear++;
    }
    else if(key == SWITCH2)
    {
        if(gear == 7)
        {
            gear = 0;
        }
        else if(gear > 0)
        gear--;
    }
    else if(key == SWITCH3)
    {
        gear = 7;
    }

    return gear;
}