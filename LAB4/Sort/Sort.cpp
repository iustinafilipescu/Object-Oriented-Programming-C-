#include "Sort.h"
#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string.h>
#include <time.h> 
#include<stdarg.h>
/*
Sort::Sort(int v[], int n)
{
	for (int i = 0; i < n; i++)
		TABLOU[i] = v[i];
	length = n;
}
Sort::Sort(int min, int max, int howMany)
{
	length = howMany;
	srand(time(NULL));
	for (int i = 0; i < howMany; i++)
		TABLOU[i] = rand() % (max - min) + min;
		
}
Sort::Sort(const char* s)
{
	length = 0;
	char sir[50];
	strcpy(sir, s);
	char* p;
	int x=0,i;
	p = strtok(sir, ",");
	while (p)
	{
		
		for ( i = 0; i < strlen(p); i++)
			x = x * 10 + (p[i] - '0');
		TABLOU[length] = x;
		x = 0;
		length++;
		p=strtok(NULL, ",");
	}
}

Sort::Sort(int count, ...)
{
	length = 0;
	va_list ap;
	va_start(ap, count);
	for (int i = 0; i < count; i++)
	{
		
		int a = va_arg(ap, int);
		TABLOU[i] = a;

		
	}
	va_end(ap);
	length = count;
}
*/
Sort::Sort(int* v, int l) : TABLOU(v), length(l) {};

/*
void Sort::InsertSort(bool reverse)
{
	if (reverse)
	{
		for (int i = 1; i < length; i++)
		{
			int j = i;
			int element = TABLOU[i];
			while (j > 0 && element > TABLOU[j - 1])
			{
				TABLOU[j] = TABLOU[j - 1];
				j--;
			}
			TABLOU[j] = element;
		}
	}
	else
	{
		for (int i = 1; i < length; i++)
		{
			int j = i;
			int element = TABLOU[i];
			while (j > 0 && element < TABLOU[j - 1])
			{
				TABLOU[j] = TABLOU[j - 1];
				j--;
			}
			TABLOU[j] = element;
		}
	}
}

int Sort::partition(int TABLOU[], int low, int high, bool reverse)
{
	int pivot = TABLOU[high]; // pivot  
	int i = (low - 1); // Index of smaller element  

	for (int j = low; j <= high - 1; j++)
	{
		if (reverse)
		{ 
			if (TABLOU[j] > pivot)
			{
				i++;
				int aux = TABLOU[i];
				TABLOU[i] = TABLOU[j];
				TABLOU[j] = aux;

			}
		}
			else
		{
				if (TABLOU[j] <= pivot)
			{
				i++;  
				int aux1 = TABLOU[i];
				TABLOU[i] = TABLOU[j];
				TABLOU[j] = aux1;
			}
		}

	}
	int aux = TABLOU[i+1];
	TABLOU[i+1] = TABLOU[high];
	TABLOU[high] = aux;	
	return (i + 1);
}

void Sort::QuickSort(bool reverse)
{
	INTERNquickSort(TABLOU, 0, length-1,reverse);
}

void Sort:: INTERNquickSort(int TABLOU[], int low, int high,bool reverse)
{
	if (low < high)
	{
		/* pi is partitioning index, TABLOU[p] is now
		at right place */
		//int pi = partition(TABLOU, low, high,reverse);

		// Separately sort elements before  
		// partition and after partition  
		//INTERNquickSort(TABLOU, low, pi - 1,reverse);
		//INTERNquickSort(TABLOU, pi + 1, high,reverse);
	//}
//}


void Sort::BubbleSort(bool reverse)
{
	if (reverse)
	{
		for (int i = 0; i < length; i++)
			for (int j = 0; j < length - i - 1; j++)
				if (*(TABLOU+j) < *(TABLOU+j+1))
				{
					int aux = *(TABLOU+j);
					*(TABLOU+j) = *(TABLOU+j+1);
					*(TABLOU+j+1) = aux;
				}
	}
	else
	{
		for (int i = 0; i < length; i++)
			for (int j = 0; j < length - i - 1; j++)
				if (*(TABLOU+j) > *(TABLOU+j+1))
				{
					int aux = *(TABLOU+j);
					*(TABLOU+j) = *(TABLOU+j + 1);
					*(TABLOU+j + 1 ) = aux;
				}
	}
}

void Sort::Print()
{
	for (int i = 0; i < length; i++)
		cout << TABLOU[i] << " ";
}
/*
int Sort::GetElementCount()
{
	return length;
}
int Sort::GetElementFromIndex(int index)
{
	return TABLOU[index];
}
*/
