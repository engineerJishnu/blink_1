#pragma once

#include <iostream>
#include <wiringPi.h>
#include <string>

//int setupWPi();
//
//void setpinMode(int pinNo);

void LogMessage(const char* message);

//void toggle(int pinNo, int time);

class GPIOClass {
private:
	int m_pinNo;

public:
	int time;

	GPIOClass();
	~GPIOClass();
	int setupWPi();
	void setpinMode(int pinNo);
	void toggle(int pinNo, int time);
};