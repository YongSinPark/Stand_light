#ifndef VIEW_H
#define VIEW_H

#include <string>
#include "Led.h"

enum {LIGHT_OFF, LIGHT_ON};

class View
{
private:
    int light_state;
    Led* light; 

public:
    View(Led *led);
    virtual ~View();
    void Update_state(std::string str_state);
    void Light_view();
    void Light_off();
    void Light_on();
};

#endif