
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
	this->InterruptReadCalled = 1;	
	HAL_UART_Receive_IT(&huart1, this->uartBuffer, sizeof(this->uartBuffer));
}



void Uart::UsartPollingModeExample()
{
	uint8_t buffer[1];
	HAL_UART_Receive(&huart1, buffer, sizeof(buffer), HAL_MAX_DELAY);
	buffer[0]++;
	HAL_UART_Transmit(&huart1, buffer, sizeof(buffer), HAL_MAX_DELAY);
	//this->ToggleLed();
}

