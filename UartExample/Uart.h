#include <stdint.h>
#include <main.h>

class Uart
{	
	uint8_t uartBuffer[1];
	
	
public:
	void UsartPollingModeExample();
	void EnableUsartRxInterrupt();
	void UartRxCompleteInterrup(UART_HandleTypeDef *huart1);
};