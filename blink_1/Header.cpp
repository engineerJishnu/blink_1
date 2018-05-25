#include "Header.h"


//body of functions

void log(const char* message) {
	std::cout << message << std::endl;
}

//int setup() {
//	if (wiringPiSetupSys() < 0) {
//		std::cout << "The wiringPi set up has failed!" << std::endl;
//		return 1;
//	}
//	else
//	{
//		std::cout << "The wiringPi setup successful." << std::endl;
//		return 0;
//	}
//}
//
//void setPinMode(const int pinNo, int MODE) {
//	pinMode(pinNo, MODE);
//}
//
//void toggle(const int pinNo, int pause) {
//	digitalWrite(pinNo, HIGH);
//	delay(pause);
//	digitalWrite(pinNo, LOW);
//	delay(pause);
//}

int GPIOClass::setup() {
	if (wiringPiSetupSys() < 0) {
		std::cout << "The wiringPi set up has failed!" << std::endl;
		return 1;
	}
	else
	{
		std::cout << "The wiringPi setup successful." << std::endl;
		return 0;
	}
}

void GPIOClass::setPinMode(int pinNo, int MODE) {
	m_pinNo = pinNo;
	pinMode(pinNo, MODE);
}

void GPIOClass::toggle(int pinNo, int pause) {
	m_pinNo = pinNo;
	digitalWrite(pinNo, HIGH);
	delay(pause);
	digitalWrite(pinNo, LOW);
	delay(pause);
}

GPIOClass::GPIOClass() {
	log("An object is created and initializing...");
	m_pinNo = 0;
	pause = 0;
}

GPIOClass::~GPIOClass() {
	log("I am Shiva, the Lord of Death");
	}