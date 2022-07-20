#ifndef		RCC_INTERFACE_H
#define		RCC_INTERFACE_H

#define		RCC_AHB1		0
#define		RCC_AHB2		1
#define		RCC_APB1		2
#define		RCC_APB2		3

typedef enum{
	HSION      =   0,
	HSIRDY     =   1,
	HSITRIM_0  =   3,
	HSITRIM_1  =   4,
	HSITRIM_2  =   5,
	HSITRIM_3  =   6,
	HSITRIM_4  =   7,
	HSEON      =  16,
	HSERDY     =  17,
	HSEBYP     =  18,
	CSSON      =  19,
	PLLON      =  24,
	PLLRDY     =  25,
	PLLI2SON   =  26
}RCC_CR_Bits; 

typedef enum{
	HSE_CLK=0,
	HSI_CLK,
	PLL
}RCC_SysClk_t;










void	RCC_voidSysClkInit(RCC_SysClk_t Clk);

void	RCC_voidEnablePerClk(u8 Bus,u8 Per);
void	RCC_voidDisablePerClk(u8 Bus,u8 Per);

#endif