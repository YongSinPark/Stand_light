#include "Listener.h"
#include <iostream>

Listener::Listener(Button* button, Controller* control)
{
    power_button = button;
    controller = control;
}

Listener::~Listener() {};

void Listener::Chech_event()
{
    static int cnt = 0;
    if(power_button->getState() == RELEASE_ACTIVE) 
    {
        if(cnt > 5) cnt = 0;
        if(cnt <= 5)
        {
            std::cout << cnt << std::endl;
            controller->Update_event(cnt);
            cnt++;
        }
    }
}