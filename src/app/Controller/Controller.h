#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "View.h"
#include <string>

enum {BTN_RESET, BTN_FIRST, BTN_SECOND, BTN_THIRD, BTN_FOURTH, BTN_FIVTH};
class Controller
{
private:
    int light_state;
    View* view;

public:
    Controller(View *viewer);
    virtual ~Controller();
    void Update_event(int num);
};

#endif