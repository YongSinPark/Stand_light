#ifndef __LISTENER_H__
#define __LISTENER_H__

#include "Button.h"
#include "Controller.h"

class Listener
{
private: //has하고 있는 인스턴스 호출
    Button* power_button;
    Controller* controller;

public:
    Listener(Button* button, Controller* control);
    ~Listener();
    void Chech_event();
};

#endif /*__LISTENER_H__*/