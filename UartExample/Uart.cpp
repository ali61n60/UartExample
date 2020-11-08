#include <main.h>
#include <usart.h>
#include "Uart.h"

void Uart::UartRecievedData(UART_HandleTypeDef *huart1)
{
	this->InterruptReadCalled = 0;
	this->uartBuffer[0];
	HAL_UART_Transmit(huart1, this->uartBuffer, sizeof(this->uartBuffer), HAL_MAX_DELAY);
}


void Uart::UsartInterruptModeExample()
{	
	HAL_UART_Receive_IT(&huart1, this->uartBuffer, sizeof(this->uartBuffer));
}



void Uart::UsartPollingModeExample()
{	
	HAL_UART_Receive(&huart1, uartBuffer, sizeof(uartBuffer), HAL_MAX_DELAY);
	uartBuffer[0];
	HAL_UART_Transmit(&huart1, uartBuffer, sizeof(uartBuffer), HAL_MAX_DELAY);	
}

