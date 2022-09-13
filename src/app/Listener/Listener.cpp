#include "Listener.h"

Listener::Listener(Button* button, Controller* control)
{
    power_button = button;
    controller = control;
}

Listener::~Listener() {};

void Listener::Chech_event()
{
    if(power_button->getState() == RELEASE_ACTIVE) 
    {
        controller->Update_event("power_button");
    }
}