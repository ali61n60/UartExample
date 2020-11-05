#include <stdint.h>
#include <main.h>


class MainClass
{
	GPIO_TypeDef *MyPort = GPIOC;
	uint16_t myPin = GPIO_PIN_13;
	bool InterruptReadCalled = 0;  
	uint8_t uartBuffer[1];
	
	uint32_t GetTime();
	void TurnOnLed();  
	void TurnOffLed();
	void ToggleLed();
	
	void LedExample();
	void UsartPollingModeExample();
	void UsartInterruptModeExample();
  
public:
	void DoTheJob();
	void UartRecievedData(UART_HandleTypeDef *huart1);
	
};