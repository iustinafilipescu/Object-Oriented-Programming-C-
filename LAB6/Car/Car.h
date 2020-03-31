#pragma once
class Car
{
public:
	virtual int getfcapacity() = 0;
	virtual int getfconsumption() = 0;
	virtual int getRain() = 0;
	virtual int getSun() = 0;
	virtual int getSnow() = 0;
	virtual const char* getname() = 0;

	
	
};