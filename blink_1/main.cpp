#include "Header.h"

// LED Pin - wiringPi pin 1 is BCM_GPIO 18.


int main(void)
{
	const int LED = 18;

	LogMessage("Press ENTER key to start the program...");
	std::cin.get();

	std::cout << "Raspberry Pi BCM_GPIO " << LED << " - blink program using wiringPi with C++" << std::endl;

	GPIOClass object1;

	object1.setupWPi();
	object1.setpinMode(LED);

	while (true)
	{
		object1.toggle(LED, 50);
	}
	return 0;
}