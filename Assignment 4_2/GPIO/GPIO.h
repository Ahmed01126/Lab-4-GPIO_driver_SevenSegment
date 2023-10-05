#include "Utils.h"
#include "GPIO_Private.h"

/*PORT_NAMES*/
#define GPIOA 'A'
#define GPIOB 'B'
#define GPIOC 'C'
#define GPIOD 'D'

/*PIN_MODE*/
#define INPUT 0
#define OUTPUT 1

/*DATA*/
#define LOW 0
#define HIGH 1

/*PIN_NUMBER*/
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6

/*DAFAULT_STATE*/
#define PULL_UP 0
#define PULL_DOWN 1

/*RETURN_STATUS*/
#define OK 0x01
#define NOK 0x00

/*COLORS_LED*/
#define RED_PIN 5
#define GREEN_PIN 6
#define BLUE_PIN 7

/*LED_ON_OFF*/
#define RED_ON (GPIOB_BSRR = (1 << RED_PIN))
#define RED_OFF (GPIOB_BSRR = (1 << (RED_PIN + 16)))
#define GREEN_ON (GPIOB_BSRR = (1 << GREEN_PIN))
#define GREEN_OFF (GPIOB_BSRR= (1 << (GREEN_PIN + 16)))
#define BLUE_ON (GPIOB_BSRR = (1 << BLUE_PIN))
#define BLUE_OFF (GPIOB_BSRR = (1 << (BLUE_PIN + 16)))

void GPIO_ConfigPin(uint32 portName, uint32 pinNumber, uint32 pinMode, uint32 defaultState);
uint8 GPIO_WritePin(uint32 portName, uint32 pinNumber, uint32 data);
uint8 GPIO_ReadPin(uint32 portName, uint32 pinNumber);