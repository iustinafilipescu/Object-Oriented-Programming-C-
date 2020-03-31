#include "Ford.h"

int Ford::getfcapacity()
{
	return fuel_capacity;
}
int Ford::getfconsumption()
{
	return fuel_consumption;
}
int Ford::getRain()
{
	return rain;
}
int Ford::getSun()
{
	return sun;
}
int Ford::getSnow()
{
	return snow;
}
const char* Ford::getname()
{
	return name;
}