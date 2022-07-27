#ifndef    KEYPAD_INTERFACE_H_
#define    KEYPAD_INTERFACE_H_


#include "GPIO_interface.h"



#define keypad_PORT PORTA


#define Row1 PIN0
#define Row2 PIN1
#define Row3 PIN2
#define Row4 PIN3
#define Col1 PIN4
#define Col2 PIN5
#define Col3 PIN6
#define Col4 PIN7


void KeyPad_Init(void);
u8 Keypad_GetKey(void);

#define NO_KEY    'N'






#endif
