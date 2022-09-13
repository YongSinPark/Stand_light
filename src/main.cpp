#include <iostream>
#include <wiringPi.h>
#include "Button.h"
#include "Led.h"
#include "Listener.h"
#include "Controller.h"

int main()
{
    std::cout << "Hello World!" << std::endl;
    
    Button button1(27);
    Led led1(25);
    
    Controller control(&led1);
    Listener listener(&button1, &control);

    while(1)
    {
        listener.Chech_event();
        delay(50);
    }

    return 0;
}