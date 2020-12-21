#include "stm32f4xx.h"                  // Device header
#include "gpio.h"

int main()
{

	
	//GPIO set value
	GPIOD->BSRR |= 0x000001000;
	
	while(1)
	{
		
	}
}
