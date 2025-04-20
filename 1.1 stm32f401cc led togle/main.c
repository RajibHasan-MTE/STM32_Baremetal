#include "stm32f4xx.h"                  // Device header



void delayMs(int d);
int main(void){
	RCC->AHB1ENR |= (1<<0);
	GPIOA->MODER |= (1<<10) &~(1<<11);
	//GPIOA->MODER &= ~(1<<11);
	
	while(1){
		int delay = 500;
		for(int delay; delay>=100; delay-=100){
			GPIOA->ODR ^= (1<<5);
			delayMs(delay);
		}

	}
}

void delayMs(int d){
	for(; d>0; d--){
		for(int i=0; i<=1000; i++);
	}
}


