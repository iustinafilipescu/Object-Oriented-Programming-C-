#pragma once
#include "Car.h"
class Ford: public Car
{
	int fuel_capacity=55, fuel_consumption=9, rain=60, sun=110, snow=90;
	const char* name = "Ford";
	int getfcapacity();
	int getfconsumption();
	int getRain();
	int getSun();
	int getSnow();
	const char* getname();


};