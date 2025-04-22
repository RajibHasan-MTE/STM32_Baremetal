/***********************************************************************************************
  _____                    _   _____   ____       _    _               _____              _   _
 |  __ \      /\          | | |_   _| |  _ \     | |  | |     /\      / ____|     /\     | \ | |
 | |__) |    /  \         | |   | |   | |_) |    | |__| |    /  \    | (___      /  \    |  \| |
 |  _  /    / /\ \    _   | |   | |   |  _ <     |  __  |   / /\ \    \___ \    / /\ \   | . ` |
 | | \ \   / ____ \  | |__| |  _| |_  | |_) |    | |  | |  / ____ \   ____) |  / ____ \  | |\  |
 |_|  \_\ /_/    \_\  \____/  |_____| |____/     |_|  |_| /_/    \_\ |_____/  /_/    \_\ |_| \_|
 Studying at Robotics and Mechatronics engineering at World University of Bangladesh
 
***********************************************************************************************/

#include "ST32F4_DELAY.h"




void SysTickDelayMs(int n){
	/*Reload with number of clocks per millisecond*/
	SysTick->LOAD = 16000;
	
	/*Clear current value register*/
	SysTick->VAL = 0;
	
	/*Enable Systick*/
	SysTick->CTRL = 0x5;
	
	for(int i=0; i<n; i++){
		/*Wait until the COUNT flag is set*/
		while((SysTick->CTRL & 0x10000) == 0);
	}
	SysTick->CTRL = 0;
}

void delay(uint32_t ms){
    volatile uint32_t i, j;
    for (i = 0; i < ms; i++)
        for (j = 0; j < 2000; j++); // Adjust as needed
}