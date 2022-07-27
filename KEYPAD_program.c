
#include "KEYPAD_interface.h"

void KeyPad_Init(void)
{
	/*Cols are outputs*/
	DIO_voidSetPinDirection(keypad_PORT,Col1,OUTPUT,PUSH_PULL,PULL_UP);
	DIO_voidSetPinDirection(keypad_PORT,Col2,OUTPUT,PUSH_PULL,PULL_UP);
	DIO_voidSetPinDirection(keypad_PORT,Col3,OUTPUT,PUSH_PULL,PULL_UP);
	DIO_voidSetPinDirection(keypad_PORT,Col4,OUTPUT,PUSH_PULL,PULL_UP);
	/*Rows are inputs*/
	DIO_voidSetPinDirection(keypad_PORT,Row1,INPUT,PUSH_PULL,PULL_UP);
	DIO_voidSetPinDirection(keypad_PORT,Row2,INPUT,PUSH_PULL,PULL_UP);
	DIO_voidSetPinDirection(keypad_PORT,Row3,INPUT,PUSH_PULL,PULL_UP);
	DIO_voidSetPinDirection(keypad_PORT,Row4,INPUT,PUSH_PULL,PULL_UP);


}
u8 keypad_values[4][4] = {{'=','+','-','*'},{'#','9','6','3'},{'0','8','5','2'},{'c','7','4','1'}};
u8 Keypad_GetKey(void)
{
	u8 row_reading = 0 ;
	u8 result = NO_KEY;
	/*i is col counter and j is row counter*/
	for(u8 i = Col1 ;i <= Col4 ; i++)
	{
		DIO_voidSetPinValue(keypad_PORT,Col1,GPIO_U8_HIGH);
		DIO_voidSetPinValue(keypad_PORT,Col2,GPIO_U8_HIGH);
		DIO_voidSetPinValue(keypad_PORT,Col3,GPIO_U8_HIGH);
		DIO_voidSetPinValue(keypad_PORT,Col4,GPIO_U8_HIGH);
		DIO_voidSetPinValue(keypad_PORT,i,GPIO_U8_LOW);
		for(u8 j = Row1 ; j <= Row4 ; j++)
		{
			row_reading = DIO_u8GetPinDirection(keypad_PORT,j);
			if(row_reading==0)
			{
				result = keypad_values[j][i-Col1];
			}
		}

	}
	return result;
}

