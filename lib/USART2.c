#include "USART2.h"






void USART2_Init(void){
	RCC->AHB1ENR	|= 1;
	RCC->APB1ENR	|= 0x20000;
	
	GPIOA->AFR[0]	|= 0x07700;
	GPIOA->MODER	|= 0x000A0;	//ENABLE Tx and Rx
	
	USART2->BRR	= 0x008B; //115200 baud @16MHz
	USART2->CR1	= 0x0000C; //ENABLE Tx and Rx
	USART2->CR1 |= 0x2000;
	
}

int USART2_write(int ch){
	//wait for Tx buffer empty
	while(!(USART2->SR & 0x0080));
	USART2->DR = (ch& 0xFF);
	return ch;
}

int USART2_read(void){
	//wait for tx buffer empty
	while(!(USART2->SR & 0x0020));
	return USART2->DR;
	
}

 //struct __FILE{int handle;};
 FILE __stdin  = {0};
 FILE __stdout = {1};
 FILE __stderr = {2};


int fgetc(FILE *f){
	int c;
	c = USART2_read();
	if(c == '\r'){
		USART2_write(c);
		c = '\n';
	}
	USART2_write(c);
	return c;
}

int fputc(int c, FILE *f){
	return USART2_write(c);
	
} 


