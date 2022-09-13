#include "View.h"
#include <wiringPi.h>

View::View(Led *led)
{
    light = led;
    light_state = LIGHT_OFF;
}

View::~View()
{

}
void View::Update_state(std::string str_state)
{
    switch (light_state)
    {
    case LIGHT_OFF:
        if(str_state == "State_on") light_state = LIGHT_ON;
        break;
    
    case LIGHT_ON:
        if(str_state == "State_off") light_state = LIGHT_OFF;
        break;
    }
}

void View::Light_view()
{
    switch (light_state)
    {
    case LIGHT_OFF:
        Light_off();
        break;
    
    case LIGHT_ON:
        Light_on();
        break;
    }
}

void View::Light_on()
{
    static unsigned int prev_time = 0;
    if(millis() -prev_time < 300) return;
    prev_time=millis(); //1ms 간격으로 지속 증가, wiringPi.h 필요
    light->Toggle();
}

void View::Light_off()
{
    light->Off();
}