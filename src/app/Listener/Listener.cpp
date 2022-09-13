#include "Listener.h"

Listener::Listener(Button* button, Led* led)
{
    power_button = button;
    light = led;
}

Listener::~Listener() {};

void Listener::Chech_event()
{
    if(power_button->getState() == RELEASE_ACTIVE) 
    {
        light->Toggle();
    }
}