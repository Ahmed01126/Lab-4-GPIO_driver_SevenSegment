#include "Utils.h"
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

void GPIO_ConfigPin(uint32 portName, uint32 pinNumber, uint32 pinMode, uint32 defaultState);
uint8 GPIO_WritePin(uint32 portName, uint32 pinNumber, uint32 data);
