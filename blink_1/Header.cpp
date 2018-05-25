#include "Header.h"

// body of all functions

void LogMessage(const char* message) {
	std::cout << message << std::endl;
}

GPIOClass::GPIOClass() {
	m_pinNo = 0;
	time = 0;
	LogMessage("an object is created");
}

GPIOClass::~GPIOClass(){
	LogMessage("an object is destroyed");
}

int GPIOClass::setupWPi() {
	if (wiringPiSetupSys() < 0) {
		LogMessage("The Setup failed!");
		return 1;
	}
	else
		LogMessage("The wiringPi setup is successful!");
		return 0;
}


void GPIOClass::setpinMode(int pinNo) {
	pinMode(pinNo, OUTPUT);
}

//void toggle(int pinNo, int time) {
//	digitalWrite(pinNo, HIGH);
//	delay(time);
//	digitalWrite(pinNo, LOW);
//	delay(time);
//}

static int pin_state = 0;

void GPIOClass::toggle(int pinNo, int time) {
	m_pinNo = pinNo;
	pin_state = digitalRead(pinNo);
	(pin_state == 0 ? digitalWrite(pinNo, HIGH) : digitalWrite(pinNo, LOW));
	delay(time);
}

