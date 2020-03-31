#pragma once
#include "Car.h"
class Mazda: public Car
{

	int fuel_capacity = 30, fuel_consumption = 9, rain = 60, sun = 110, snow = 90;
	const char* name = "Mazda";
	int getfcapacity();
	int getfconsumption();
	int getRain();
	int getSun();
	int getSnow();
	const char* getname();


};

