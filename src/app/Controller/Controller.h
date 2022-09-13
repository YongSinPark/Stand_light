#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "View.h"
#include <string>




class Controller
{
private:
    int light_state;
    View* view;

public:
    Controller(View *viewer);
    virtual ~Controller();
    void Update_event(std::string str_btn);
};

#endif