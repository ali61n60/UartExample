#include <stdint.h>
#include <main.h>

class Uart
{
	bool InterruptReadCalled = 0;  
	uint8_t uartBuffer[1];
	void UsartPollingModeExample();
	void UsartInterruptModeExample();
public:
	void UartRecievedData(UART_HandleTypeDef *huart1);
};