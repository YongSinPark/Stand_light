#ifndef __LISTENER_H__
#define __LISTENER_H__

#include "Button.h"
#include "Led.h"

class Listener
{
private: //has하고 있는 인스턴스 호출
    Button* power_button;
    Led* light;
public:
    Listener(Button* button, Led* led);
    ~Listener();
    void Chech_event();
};

#endif /*__LISTENER_H__*/