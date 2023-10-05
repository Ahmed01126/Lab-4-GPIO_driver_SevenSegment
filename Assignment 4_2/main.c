#include "Rcc.h"
#include "Utils.h"
#include "GPIO.h"

int main()
{
	Rcc_Init();
	Rcc_Enable(RCC_GPIOB);
	GPIO_ConfigPin(GPIOB, PIN3, INPUT, PULL_UP);
	uint8 i;
	for (i = 5; i < 8; i++)
	{
		GPIO_ConfigPin(GPIOB, i, OUTPUT, PULL_UP);
	}
	RED_OFF; GREEN_OFF; BLUE_OFF;
	int button_state = 0,prev_button_state = 1,color = 0;
	while (1)
	{
		button_state = GPIO_ReadPin(GPIOB, PIN3);
        // Check for falling edge on button
        if(button_state == 0 && prev_button_state == 1){
            for(int i = 0; i < 1000000; i++); // Delay
            // Change LED color
            color = (color + 1) % 8;
            switch(color)
            {
                case 0:
                    RED_OFF; GREEN_OFF; BLUE_OFF;
                    break;
                case 1:
                    RED_ON; GREEN_OFF; BLUE_OFF;
                    break;
                case 2:
                    RED_OFF; GREEN_ON; BLUE_OFF;
                    break;
                case 3:
                    RED_ON; GREEN_ON; BLUE_OFF;
                    break;
                case 4:
                    RED_OFF; GREEN_OFF; BLUE_ON;
                    break;
                case 5:
                    RED_ON; GREEN_OFF; BLUE_ON;
                    break;
                case 6:
                    RED_OFF; GREEN_ON; BLUE_ON;
                    break;
                case 7:
                    RED_ON; GREEN_ON; BLUE_ON;
                    break;
            }
        }
        prev_button_state = button_state;
	}
	return 0;
}
