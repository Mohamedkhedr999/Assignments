
#ifndef       SEG_INTERFACE_H_
#define       SEG_INTERFACE_H_

#include"GPIO_interface.h"



#define   SEGMENT_PORT     PORTB
#define    A               PIN5
#define    B               PIN6
#define    C               PIN7
#define    D               PIN8
#define    E               PIN9
#define    F               PIN10
#define    G               PIN12
#define    COM1            PIN13
#define    COM2            PIN14


void SevenSeg_voidInit(void);
void SevenSegMux_voidInit(void);

void SevenSeg_VoidDisplay(u8 num);
void SevenSeg_VoidDisplayMux(u8 n);






#endif



