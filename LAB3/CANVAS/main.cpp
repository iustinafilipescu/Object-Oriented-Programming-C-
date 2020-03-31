#include<iostream>
#include "Canvas.h"
using namespace std;
int main()
{
	Canvas d(50,50);
	d.DrawRect(10,15,30,35,'a');
	//d.FillRect(10, 15, 30, 35, 'a');
	//d.DrawCircle(10, 20, 5, 'a');
	d.SetPoint(5, 5, 'a');
	//d.Clear();
	d.FillCircle(5, 15, 5, 'a');
	d.DrawLine(30, 35, 40, 45, 'a');
	d.Print();
}