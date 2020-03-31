#include<stdio.h>
#include "NumberList.h"


int main()
{
	NumberList d;
	d.Init();
	d.Add(10);
	d.Add(1);
	d.Add(13);
	d.Add(11);
	d.Add(4);
	d.Add(65);
	d.Add(98);
	d.Add(32);
	d.Add(9);
	d.Add(15);
	d.Add(30);
	d.Sort();

	d.Print();

	return 0;
}