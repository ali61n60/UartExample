#include <stdint.h>
#include <main.h>

class Uart
{
	bool InterruptReadCalled = 0;  
	uint8_t uartBuffer[1];
	
public:
	void UsartPollingModeExample();
	void UsartInterruptModeExample();
	void UartRecievedData(UART_HandleTypeDef *huart1);
};