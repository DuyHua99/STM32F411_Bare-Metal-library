#include "gpio.h"
#include "stm32f4xx.h"                  // Device header
#include "stdint.h"


/**
  * @brief  Initializes the GPIOx peripheral according to the specified parameters in the GPIO_Init.
  * @param  GPIOx where x can be (A..K) to select the GPIO peripheral for STM32F429X device or
  *                      x can be (A..I) to select the GPIO peripheral for STM32F40XX and STM32F427X devices.
  * @param  GPIO_Init pointer to a GPIO_InitTypeDef structure that contains
  *         the configuration information for the specified GPIO peripheral.
  * @retval None
  */
void  HAL_GPIO_Init(GPIO_TypeDef  *GPIOx, GPIO_InitTypeDef * GPIO_Init)
{
	
	if(GPIOx == GPIOA)
	{
		RCC->AHB1ENR |= 0x00000001;
		
	}
	else if(GPIOx == GPIOB)
	{
		RCC->AHB1ENR |= 0x00000002;
	}
	else if(GPIOx == GPIOC)
	{
		RCC->AHB1ENR |= 0x00000004;
	}
	else
	{
		RCC->AHB1ENR |= 0x00000008;
	}
	//GPIOD->MODER|= 0x01000000;
	
}

 