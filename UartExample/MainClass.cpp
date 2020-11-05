#include "MainClass.h"
#include <main.h>
#include <usart.h>

//This function is being called repeatedly in a loop from main 
void MainClass::DoTheJob()
{
	if (!this->InterruptReadCalled) 
	{
		this ->UsartInterruptModeExample();
	}
	this->LedExample();
	
  
}

void MainClass::UartRecievedData(UART_HandleTypeDef *huart1)
{
	this->InterruptReadCalled = 0;
	this->uartBuffer[0];
	HAL_UART_Transmit(huart1, this->uartBuffer, sizeof(this->uartBuffer), HAL_MAX_DELAY);
}


void MainClass::UsartInterruptModeExample()
{
	this->InterruptReadCalled = 1;	
	HAL_UART_Receive_IT(&huart1, this->uartBuffer, sizeof(this ->uartBuffer));
}



void MainClass::UsartPollingModeExample()
{
	uint8_t buffer[1];
	HAL_UART_Receive(&huart1, buffer, sizeof(buffer), HAL_MAX_DELAY);
	buffer[0]++;
	HAL_UART_Transmit(&huart1, buffer, sizeof(buffer), HAL_MAX_DELAY);
	this->ToggleLed();
}

void MainClass::LedExample()
{
		this->TurnOnLed();
		HAL_Delay(this->GetTime());
		this->TurnOffLed();
		HAL_Delay(this->GetTime());	
}

uint32_t MainClass::GetTime()
{
	return 100;
}

void MainClass::TurnOnLed()
{
	HAL_GPIO_WritePin(MyPort, myPin, GPIO_PIN_RESET);
}

void MainClass::TurnOffLed()
{
	HAL_GPIO_WritePin(MyPort, myPin, GPIO_PIN_SET);  
}

void MainClass::ToggleLed()
{
	HAL_GPIO_TogglePin(MyPort, myPin);
}