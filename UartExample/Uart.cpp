#include <main.h>
#include <usart.h>
#include "Uart.h"

void Uart::UartRxCompleteInterrup(UART_HandleTypeDef *huart1)
{	
	uartBuffer[0]++;
	HAL_UART_Transmit_IT(huart1, this->uartBuffer, sizeof(this->uartBuffer));	
	this->EnableUsartRxInterrupt();
}


void Uart::EnableUsartRxInterrupt()
{	
	HAL_UART_Receive_IT(&huart1 , this->uartBuffer, sizeof(this->uartBuffer));
}



void Uart::UsartPollingModeExample()
{	
	HAL_UART_Receive(&huart1, uartBuffer, sizeof(uartBuffer), HAL_MAX_DELAY);
	uartBuffer[0];
	HAL_UART_Transmit(&huart1, uartBuffer, sizeof(uartBuffer), HAL_MAX_DELAY);	
}

