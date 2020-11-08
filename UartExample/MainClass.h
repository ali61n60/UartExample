#include "Led.h"
#include "Uart.h"

class MainClass
{
	Uart uart;
	Led led;
public:
	void Init();
	void RepeatingLoop();
	
};