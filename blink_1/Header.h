#pragma once

#ifndef HEADER_H_     // equivalently, #if !defined HEADER_H_  
#define HEADER_H_ 

//all header files
#include <iostream>
#include <wiringPi.h>

//all definitions
#define dir_out OUTPUT
#define dir_in INPUT


// functions or methods
void log(const char* message);

//int setup();
//
//void setPinMode(const int pinNo, int MODE);
//
//void toggle(const int pinNo, int pause);

class GPIOClass {
private:
	int m_pinNo;
public:
	int MODE;
	int pause;

	GPIOClass();
	~GPIOClass();

	// methods
	int setup();

	void setPinMode(int pinNo, int MODE);

	void toggle(int pinNo, int pause);
};

#endif // HEADER_H_ 