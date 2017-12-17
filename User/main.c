#include "stm32f4xx.h"


int main(void)
{
	
	// Enable the GPIOD Clock
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);

	// GPIOD Configuration
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin                = GPIO_Pin_15;                  // Led 6 Blue selected
	GPIO_InitStruct.GPIO_Mode       = GPIO_Mode_OUT;                 // Mod out !
	GPIO_InitStruct.GPIO_Speed      = GPIO_Speed_50MHz;     // 50 MHZ clock frequency
	GPIO_InitStruct.GPIO_OType      = GPIO_OType_PP;                // Push pull mod
	GPIO_InitStruct.GPIO_PuPd       = GPIO_PuPd_UP;                 // Pull up

	GPIO_Init(GPIOD, &GPIO_InitStruct);
	GPIO_SetBits(GPIOD, GPIO_Pin_15);

}
