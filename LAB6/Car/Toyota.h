#pragma once
#include "Car.h"
class Toyota: public Car
{
	int fuel_capacity=50, fuel_consumption=5, rain=55, sun=100, snow=40;
	const char* name = "Toyota";

	int getfcapacity();
	int getfconsumption();
	int getRain();
	int getSun();
	int getSnow();
	const char* getname();
};

