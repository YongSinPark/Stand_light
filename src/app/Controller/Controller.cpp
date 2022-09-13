#include "Controller.h"

Controller::Controller(View *viewer)
{
    view = viewer;
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
            view->Update_state("State_on");
        }
        break;

    case LIGHT_ON:
        if(str_btn == "power_button")
        {
            light_state = LIGHT_OFF;
            view->Update_state("State_off");
        }
        break;
    }    
}