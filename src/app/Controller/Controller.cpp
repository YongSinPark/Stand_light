#include "Controller.h"

Controller::Controller(Led *led)
{
    light = led;
    light_state = LIGHT_OFF;
}

Controller::~Controller()
{

}

void Controller::Update_event(std::string str_btn)
{
    switch (light_state)
    {
    case LIGHT_OFF:
        if(str_btn == "power_button")
        {
            light_state = LIGHT_ON;
            light->On();
        }
        break;

    case LIGHT_ON:
        if(str_btn == "power_button")
        {
            light_state = LIGHT_OFF;
            light->Off();
        }
        break;
    }    
}