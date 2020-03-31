#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string.h>   
#include <time.h> 
using namespace std;
class Sort
{
	int* TABLOU=nullptr;
	//int partition(int a[],int low, int high,bool reverse);
	int length=0;
	//void INTERNquickSort(int a[], int low, int high, bool reverse=false);
public:
	//Sort(int v[], int n);
	//Sort(const char *s);
	//Sort(int min, int max, int howMany);
	Sort(int* v, int length);
	//Sort(int count, ...);
	//void InsertSort(bool reverse = false);
	//void QuickSort(bool reverse = false);
	void BubbleSort(bool reverse = false);
	void Print();
	//int GetElementCount();
	//int GetElementFromIndex(int index);
};

