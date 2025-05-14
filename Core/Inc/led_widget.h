#ifndef __LED_WIDGET_H
#define __LED_WIDGET_H

#include "main.h"

enum LedState : uint8_t
{
    Off = 0,
    On = 1
};
class LedWidget
{
    public:
    void test(LedState state);

    private:
    void setLed(LedState state);
};

#endif  //__LED_WIDGET_H