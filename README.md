# STM32_Baremetal
Bare-metal firmware for STM32F401CCUx – Direct register-level embedded C programming without HAL abstraction layers.


# STM32F401CCUx Bare-Metal Firmware 🔧

Welcome to my open-source **STM32F401CCUx Bare-Metal Programming** repository.  
This project features direct register-level firmware development using **Embedded C**, without relying on STM32 HAL or CMSIS libraries.

## 🔍 About the Microcontroller
- **STM32F401CCUx**
- ARM Cortex-M4 @ 84 MHz
- 256 KB Flash, 64 KB SRAM
- 10 ADC channels, USARTs, Timers, I2C, SPI, PWM, etc.

## 🎯 Key Features Implemented
- GPIO configuration & control (LEDs, buttons)
- Timer initialization and PWM generation
- USART (UART) communication
- ADC reading and processing
- SysTick-based delay functions
- Interrupt configuration (EXTI/NVIC)
- RCC (clock control) and peripheral enable
- Startup code, vector table, and linker script

## 📦 Project Structure
