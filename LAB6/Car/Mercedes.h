#pragma once
#include "Car.h"
class Mercedes:public Car
{
	int fuel_capacity=80, fuel_consumption=20, rain=80, sun=160, snow=60;
	const char* name = "Mercedes";
	int getfcapacity();
	int getfconsumption();
	int getRain();
	int getSun();
	int getSnow();
	const char* getname();
};

