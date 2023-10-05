
# Name: Ahmed Abdul Monem Ahmed Radwan
### Assignment:
1- You are required to build a software that display a decimal counter value on a seven
segment display.<br />
- The expected output is as follow:<br />
o GPIO.c file that include the implementation of the GPIO driver functions.<br />
o GPIO.h file that include the declaration of the GPIO driver functions.<br />
o Main.c file that use the GPIO functions to display a counter value on a seven segment
display.<br />

- The following requirements shall be followed during implementation.<br />
o GPIO driver shall provide a function called GPIO_ConfigPin.<br />
▪ The function shall take the following arguments, port name, pin number, pin
mode and default state.<br />
▪ The function shall initialize the GPIO registers as per the values passed through
the arguments.<br />
▪ The function shall not have a return.<br />
o GPIO driver shall provide a function called GPIO_WritePin.<br />
▪ The function shall have the following arguments, port name, pin number and
data to be written (0 or 1).<br />
▪ The function shall check the initialized configuration of the requested pin
argument. If it didn’t match the write request needs, it shall return NOK and
didn’t perform the action.<br />
▪ If the pin initialization matches the needs of the write request, it shall return OK
and perform the requested actions.<br />
Add a GPIO_ReadPin function to the GPIO driver.<br />

## Assignment GIF:
![OpenBoard Cast](https://user-images.githubusercontent.com/70094970/233787563-9fcc02d3-118e-412c-a079-1d1546eee291.gif)








