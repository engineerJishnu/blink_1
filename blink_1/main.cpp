// LED Pin - wiringPi pin 1 is BCM_GPIO 18.
#include "Header.h"

int main(void)
{
	const int LED = 18;
	log("Press ENTER to start the program...");
	std::cin.get();
	log("Wiring Pi using C++ programming language.");

	GPIOClass object1;

	object1.setup();
	object1.setPinMode(LED, dir_out);


	while (true)
	{
		object1.toggle(LED, 50);
	}
	
	return 0;
}