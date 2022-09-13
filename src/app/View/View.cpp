#include "View.h"
#include <wiringPi.h>
#include <iostream>

View::View(Led *led1, Led *led2, Led *led3, Led *led4, Led *led5)
{
    light1 = led1;
    light2 = led2;
    light3 = led3;
    light4 = led4;
    light5 = led5;
    light_state = LIGHT_OFF;
}

View::~View()
{

}
void View::Update_state(std::string str_state)
{
    switch (light_state)
    {
    case LIGHT_OFF:
        if(str_state == "State_led1_on") 
        {
            std::cout << "1" << std::endl;
            light_state = LIGHT_1;
        }
        break;
    case LIGHT_1:
        if(str_state == "State_led2_on")
        {
            std::cout << "2" << std::endl;
            light_state = LIGHT_2;
        } 
        break;
    case LIGHT_2:
        if(str_state == "State_led3_on")  
        {
            std::cout << "3" << std::endl;
            light_state = LIGHT_3;
        } 
        break;
    case LIGHT_3:
        if(str_state == "State_led4_on")  
        {
            std::cout << "4" << std::endl;
            light_state = LIGHT_4;
        } 
        break;
    case LIGHT_4:
        if(str_state == "State_led5_on")  
        {
            std::cout << "5" << std::endl;
            light_state = LIGHT_5;
        } 
        break;
    case LIGHT_5:
        if(str_state == "State_off")  
        {
            std::cout << "OFF" << std::endl;
            light_state = LIGHT_OFF;
        } 
        break;
    }
}

void View::Light_view()
{
    static int light_cnt = 0;
    if(light_cnt == 5) 
    {
        Light_off();
        light_cnt = 0;
    }
    if(light_cnt < 5) 
    {
        Light_on();
        light_cnt++;
    }
}

void View::Light_on()
{
    if(light_state == LIGHT_1) light1->On();
    if(light_state == LIGHT_2) light2->On();
    if(light_state == LIGHT_3) light3->On();
    if(light_state == LIGHT_4) light4->On();
    if(light_state == LIGHT_5) light5->On();
}

void View::Light_off()
{
    if(light_state == LIGHT_OFF)
    {
        light1->Off();
        light2->Off();
        light3->Off();
        light4->Off();
        light5->Off();
    }
}