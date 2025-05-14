#include "led_widget.h"
#include "app_api.h"
#include "main.h"
#include "cmsis_os.h"

void statusTaskHandler(void)
{
    LedWidget statusLed;

    for(;;)
    {
        statusLed.test();
        osDelay(500);
    }
}

void LedWidget::test(void)
{
    HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
}