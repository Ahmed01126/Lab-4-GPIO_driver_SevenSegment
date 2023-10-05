#include "GPIO_Private.h"
#include "GPIO.h"
void GPIO_ConfigPin(uint32 portName, uint32 pinNumber, uint32 pinMode, uint32 defaultState){
    switch (portName)
    {
    case GPIOA:
        GPIOA_MODER &= ~(0x3 << (pinNumber * 2));
        GPIOA_MODER |= (pinMode << (pinNumber * 2));

        GPIOA_OTYPER &= ~(0x1 << pinNumber);
        GPIOA_OTYPER |= (defaultState << pinNumber);
        break;
    case GPIOB:
        GPIOB_MODER &= ~(0x3 << (pinNumber * 2));
        GPIOB_MODER |= (pinMode << (pinNumber * 2));

        GPIOB_OTYPER &= ~(0x1 << pinNumber);
        GPIOB_OTYPER |= (defaultState << pinNumber);
        break;
    case GPIOC:
        GPIOC_MODER &= ~(0x3 << (pinNumber * 2));
        GPIOC_MODER |= (pinMode << (pinNumber * 2));

        GPIOC_OTYPER &= ~(0x1 << pinNumber);
        GPIOC_OTYPER |= (defaultState << pinNumber);
        break;
    case GPIOD:
        GPIOD_MODER &= ~(0x3 << (pinNumber * 2));
        GPIOD_MODER |= (pinMode << (pinNumber * 2));

        GPIOD_OTYPER &= ~(0x1 << pinNumber);
        GPIOD_OTYPER |= (defaultState << pinNumber);
        break;
    
    }   
}
uint8 GPIO_WritePin(uint32 portName, uint32 pinNumber, uint32 data){

    switch (portName)
    {
        if (GPIOD_MODER & (0x3 << (pinNumber * 2)) >> (pinNumber * 2) == 0x01)
        {
            GPIOA_ODR &= ~(1 << pinNumber);
            GPIOA_ODR |= (data << pinNumber);
            return OK;
        }
        else
        {
            return NOK;
        }
        break;
    case GPIOB:

        if (GPIOD_MODER & (0x3 << (pinNumber * 2)) >> (pinNumber * 2) == 0x01)
        {
            GPIOB_ODR &= ~(1 << pinNumber);
            GPIOB_ODR |= (data << pinNumber);
            return OK;
        }
        else
        {
            return NOK;
        }
        break;
    case GPIOC:
        if (GPIOD_MODER & (0x3 << (pinNumber * 2)) >> (pinNumber * 2) == 0x01)
        {
            GPIOC_ODR &= ~(1 << pinNumber);
            GPIOC_ODR |= (data << pinNumber);
            return OK;
        }
        else
        {
            return NOK;
        }
        break;
    case GPIOD:
        if (GPIOD_MODER & (0x3 << (pinNumber * 2)) >> (pinNumber * 2) == 0x01)
        {
            GPIOD_ODR &= ~(1 << pinNumber);
            GPIOD_ODR |= (data << pinNumber);
            return OK;
        }
        else
        {
            return NOK;
        }
        break;
    default:
        break;
    }
}
