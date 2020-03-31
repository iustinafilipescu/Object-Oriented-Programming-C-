#pragma once
#include "Car.h"
class Dacia:public Car
{

	int fuel_capacity=20, fuel_consumption=15, rain=35, sun=70, snow=25;
	const char* name = "DACIA";
	int getfcapacity();
	int getfconsumption();
	int getRain();
	int getSun();
	int getSnow();
	const char* getname();

	
};

