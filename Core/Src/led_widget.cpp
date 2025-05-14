#include "led_widget.h"
#include "app_api.h"
#include "cmsis_os.h"

void statusTaskHandler(void)
{
    LedWidget statusLed;

    for(;;)
    {
        statusLed.test(LedState::On);
        osDelay(100);
        statusLed.test(LedState::Off);
        osDelay(900);        
    }
}

void LedWidget::test(LedState state)
{
    setLed(state);
}

void LedWidget::setLed(LedState state)
{
    HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, static_cast<GPIO_PinState>(state));
}
