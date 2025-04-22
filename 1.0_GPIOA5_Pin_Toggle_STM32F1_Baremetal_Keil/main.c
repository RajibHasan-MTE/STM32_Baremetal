#include "stm32f4xx.h"


#define GPIOAEN							(1U<<0)
#define LED_PIN							5

int main(void){
	
		/*Enable clock access GPIOA*/
		RCC->AHB1ENR |= GPIOAEN;
		
		/*Set LED_PIN as an OUTPUT pin*/
		GPIOA->MODER |= (1U<<10);
		GPIOA->MODER &= ~(1U<<11);
	
		while(1){
			GPIOA->ODR ^= (1U<<LED_PIN);
			systicDelayMs(5000);
		}
	
}
