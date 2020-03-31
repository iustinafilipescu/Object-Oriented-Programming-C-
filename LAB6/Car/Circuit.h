#pragma once
#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include "Weather.h"
#include "Car.h"
#include"Dacia.h"
#include"Ford.h"
#include"Mercedes.h"
#include"Toyota.h"
#include"Mazda.h"




class Circuit
{

	Car** masina=new Car*[5]; 
	Weather vreme;
	int length;
	int index = 0, indexpoz=0,k=0, time[5], minute[5], notfinis[5] = { 0,0,0,0,0 }, x=0;
public:
	 void SetLength(int x);
	void SetWeather(Weather p);
	 void AddCar(Car* x );
	void Race();
	void ShowFinalRanks(); 
	void ShowWhoDidNotFinis();
};

