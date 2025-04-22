#include "stm32f4xx.h"
#include <stdio.h>


void USART2_Init(void);
int USART2_write(int ch);
int USART2_read(void);
int fgetc(FILE *f);
int fputc(int c, FILE *f);