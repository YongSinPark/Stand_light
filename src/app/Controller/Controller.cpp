#include "Controller.h"

Controller::Controller(View *viewer)
{
    view = viewer;
    light_state = LIGHT_OFF;
}

Controller::~Controller()
{

}

void Controller::Update_event(int cnt)
{
    switch (cnt)
    {
    case BTN_RESET:
        light_state = LIGHT_1;
        view->Update_state("State_led1_on");
        break;
    case BTN_FIRST:
        light_state = LIGHT_2;
        view->Update_state("State_led2_on");
        break;
    case BTN_SECOND:
        light_state = LIGHT_3;
        view->Update_state("State_led3_on");
        break;
    case BTN_THIRD:
        light_state = LIGHT_4;
        view->Update_state("State_led4_on");
        break;
    case BTN_FOURTH:
        light_state = LIGHT_5;
        view->Update_state("State_led5_on");
        break;
    case BTN_FIVTH:
        light_state = LIGHT_OFF;
        view->Update_state("State_off");
        break;
    }
}