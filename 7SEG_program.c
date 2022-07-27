#include "7SEG_interface.h"


static const u8 arr[] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};


void SevenSeg_voidInit(void)
{

	DIO_voidSetPinDirection(SEGMENT_PORT,A,OUTPUT,PUSH_PULL,PULL_UP);
	DIO_voidSetPinSpeed(SEGMENT_PORT,A,VERY_HIGH_SPEED);

	DIO_voidSetPinDirection(SEGMENT_PORT,B,OUTPUT,PUSH_PULL,PULL_UP);
	DIO_voidSetPinSpeed(SEGMENT_PORT,B,VERY_HIGH_SPEED);

	DIO_voidSetPinDirection(SEGMENT_PORT,C,OUTPUT,PUSH_PULL,PULL_UP);
	DIO_voidSetPinSpeed(SEGMENT_PORT,C,VERY_HIGH_SPEED);

	DIO_voidSetPinDirection(SEGMENT_PORT,D,OUTPUT,PUSH_PULL,PULL_UP);
	DIO_voidSetPinSpeed(SEGMENT_PORT,D,VERY_HIGH_SPEED);

	DIO_voidSetPinDirection(SEGMENT_PORT,E,OUTPUT,PUSH_PULL,PULL_UP);
	DIO_voidSetPinSpeed(SEGMENT_PORT,E,VERY_HIGH_SPEED);

	DIO_voidSetPinDirection(SEGMENT_PORT,F,OUTPUT,PUSH_PULL,PULL_UP);
	DIO_voidSetPinSpeed(SEGMENT_PORT,F,VERY_HIGH_SPEED);

	DIO_voidSetPinDirection(SEGMENT_PORT,G,OUTPUT,PUSH_PULL,PULL_UP);
	DIO_voidSetPinSpeed(SEGMENT_PORT,G,VERY_HIGH_SPEED);

}
void SevenSegMux_voidInit(void)
{
	DIO_voidSetPinDirection(SEGMENT_PORT,COM1,OUTPUT,PUSH_PULL,PULL_UP);
	DIO_voidSetPinSpeed(SEGMENT_PORT,COM1,VERY_HIGH_SPEED);

	DIO_voidSetPinDirection(SEGMENT_PORT,COM2,OUTPUT,PUSH_PULL,PULL_UP);
	DIO_voidSetPinSpeed(SEGMENT_PORT,COM2,VERY_HIGH_SPEED);

}


void SevenSeg_VoidDisplay(u8 num)
{
	switch(num)
	{
	case 0:
		DIO_voidSetPinValue(SEGMENT_PORT,A,((arr[0] >> 0)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,B,((arr[0] >> 1)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,C,((arr[0] >> 2)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,D,((arr[0] >> 3)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,E,((arr[0] >> 4)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,F,((arr[0] >> 5)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,G,((arr[0] >> 6)&1));
		break;
	case 1:
		DIO_voidSetPinValue(SEGMENT_PORT,A,((arr[1] >> 0)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,B,((arr[1] >> 1)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,C,((arr[1] >> 2)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,D,((arr[1] >> 3)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,E,((arr[1] >> 4)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,F,((arr[1] >> 5)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,G,((arr[1] >> 6)&1));
		break;
	case 2:
		DIO_voidSetPinValue(SEGMENT_PORT,A,((arr[2] >> 0)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,B,((arr[2] >> 1)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,C,((arr[2] >> 2)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,D,((arr[2] >> 3)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,E,((arr[2] >> 4)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,F,((arr[2] >> 5)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,G,((arr[2] >> 6)&1));
		break;
	case 3:
		DIO_voidSetPinValue(SEGMENT_PORT,A,((arr[3] >> 0)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,B,((arr[3] >> 1)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,C,((arr[3] >> 2)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,D,((arr[3] >> 3)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,E,((arr[3] >> 4)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,F,((arr[3] >> 5)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,G,((arr[3] >> 6)&1));
		break;
	case 4:
		DIO_voidSetPinValue(SEGMENT_PORT,A,((arr[4] >> 0)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,B,((arr[4] >> 1)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,C,((arr[4] >> 2)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,D,((arr[4] >> 3)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,E,((arr[4] >> 4)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,F,((arr[4] >> 5)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,G,((arr[4] >> 6)&1));
		break;
	case 5:
		DIO_voidSetPinValue(SEGMENT_PORT,A,((arr[5] >> 0)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,B,((arr[5] >> 1)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,C,((arr[5] >> 2)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,D,((arr[5] >> 3)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,E,((arr[5] >> 4)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,F,((arr[5] >> 5)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,G,((arr[5] >> 6)&1));
		break;
	case 6:
		DIO_voidSetPinValue(SEGMENT_PORT,A,((arr[6] >> 0)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,B,((arr[6] >> 1)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,C,((arr[6] >> 2)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,D,((arr[6] >> 3)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,E,((arr[6] >> 4)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,F,((arr[6] >> 5)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,G,((arr[6] >> 6)&1));
		break;
	case 7:
		DIO_voidSetPinValue(SEGMENT_PORT,A,((arr[7] >> 0)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,B,((arr[7] >> 1)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,C,((arr[7] >> 2)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,D,((arr[7] >> 3)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,E,((arr[7] >> 4)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,F,((arr[7] >> 5)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,G,((arr[7] >> 6)&1));
		break;
	case 8:
		DIO_voidSetPinValue(SEGMENT_PORT,A,((arr[8] >> 0)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,B,((arr[8] >> 1)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,C,((arr[8] >> 2)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,D,((arr[8] >> 3)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,E,((arr[8] >> 4)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,F,((arr[8] >> 5)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,G,((arr[8] >> 6)&1));
		break;
	case 9:
		DIO_voidSetPinValue(SEGMENT_PORT,A,((arr[9] >> 0)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,B,((arr[9] >> 1)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,C,((arr[9] >> 2)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,D,((arr[9] >> 3)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,E,((arr[9] >> 4)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,F,((arr[9] >> 5)&1));
		DIO_voidSetPinValue(SEGMENT_PORT,G,((arr[9] >> 6)&1));
		break;
	}
	return;

}

void SevenSeg_VoidDisplayMux(u8 n)
{
	u8 x = n % 10;
	u8 y = n / 10;
	DIO_voidSetPinValue(SEGMENT_PORT,COM2,GPIO_U8_HIGH);
	DIO_voidSetPinValue(SEGMENT_PORT,COM1,GPIO_U8_LOW);
    for(u32 i =0; i < 300; i++)
    {
    	SevenSeg_VoidDisplay(x);
    }


	DIO_voidSetPinValue(SEGMENT_PORT,COM2,GPIO_U8_LOW);
	//SevenSeg_VoidDisplay(y);
	DIO_voidSetPinValue(SEGMENT_PORT,COM1,GPIO_U8_HIGH);
	for(u32 i =0; i < 300; i++)
	    {
	    	SevenSeg_VoidDisplay(y);
	    }
	//SevenSeg_VoidDisplay(y);

}
