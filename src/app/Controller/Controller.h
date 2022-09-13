#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Led.h"
#include <string>


enum {LIGHT_OFF, LIGHT_ON};

class Controller
{
private:
    int light_state;
    Led* light;

public:
    Controller(Led *led);
    virtual ~Controller();
    void Update_event(std::string str_btn);
};

#endif