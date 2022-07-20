#include	"StdTypes.h"
#include	"Utils.h"

#include	"RCC_interface.h"
#include	"RCC_private.h"


void	RCC_voidSysClkInit(RCC_SysClk_t Clk)
{
	if(Clk == HSE_CLK)
	{
		SET_BIT(RCC_CR,HSEON);
		while(!(READ_BIT(RCC_CR,HSERDY)));
	}
	else if(Clk == HSI_CLK)
	{
		SET_BIT(RCC_CR,HSION);
		while(!(READ_BIT(RCC_CR,HSIRDY)));
	}
	else if(Clk == PLL_CLK)
	{
		SET_BIT(RCC_CR,PLLON);
		while(!(READ_BIT(RCC_CR,PLLRDY)));
	}
	

}

/*		RCC_voidEnablePerClk(RCC_APB1,5);	*/
void	RCC_voidEnablePerClk(u8 Bus,u8 Per)
{
	/*		Range Check			*/
	if(Per < 32)
	{
		switch(Bus)
		{
			case	RCC_AHB1 : SET_BIT(RCC_AHB1ENR,Per);
			case	RCC_AHB2 : SET_BIT(RCC_AHB2ENR,Per);
			case	RCC_APB1 : SET_BIT(RCC_APB1ENR,Per);
			case	RCC_APB2 : SET_BIT(RCC_APB2ENR,Per);
		}
	}
	else
	{			/*		OUT OF RANGE		*/		}
}
void	RCC_voidDisablePerClk(u8 Bus,u8 Per)
{
	/*		Range Check			*/
	if(Per < 32)
	{
		switch(Bus)
		{
			case	RCC_AHB1 : CLR_BIT(RCC_AHB1ENR,Per);
			case	RCC_AHB2 : CLR_BIT(RCC_AHB2ENR,Per);
			case	RCC_APB1 : CLR_BIT(RCC_APB1ENR,Per);
			case	RCC_APB2 : CLR_BIT(RCC_APB2ENR,Per);
		}
	}
	else
	{			/*		OUT OF RANGE		*/		}	
}



