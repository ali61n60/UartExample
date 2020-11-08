#include <stdint.h>
#include <main.h>

class Led
{
	GPIO_TypeDef *MyPort = GPIOC;
	uint16_t myPin = GPIO_PIN_13;
	
	void TurnOnLed();  
	void TurnOffLed();
	void ToggleLed();
	
	
public:
	void BlinkPollingMode(uint32_t delay);
};