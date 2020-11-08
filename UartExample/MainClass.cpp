#include "MainClass.h"
//This function is being called repeatedly in a loop from main 
void MainClass::Init()
{
	//	if (!this->InterruptReadCalled) 
	//	{
	//		this ->UsartInterruptModeExample();
	//	}
	
		this->uart.UsartInterruptModeExample();
}

void MainClass::RepeatingLoop()
{	
	this->led.BlinkPollingMode(100);
}

