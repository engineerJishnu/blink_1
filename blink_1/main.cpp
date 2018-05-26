#include "Header.h"

// LED Pin - wiringPi pin 1 is BCM_GPIO 18.


int main(void)
{
	static int gpioPinNo = 18;

	LogMessage("Press ENTER key to start the program...");
	std::cin.get();

	std::cout << "Raspberry Pi BCM_GPIO " << gpioPinNo << " - blink program using wiringPi with C++" << std::endl;

	GPIOClass gpioObject1;

	gpioObject1.setupWPi();
	gpioObject1.setpinMode(gpioPinNo);

	while (true)
	{
		gpioObject1.toggle(gpioPinNo, 50);
	}
	return 0;
}