#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "Student.h"

void  Student::SetNume(const char* n)
{
	strcpy(nume, n);
}

char* Student::GetNume()
{
	return  nume;
}


void Student::SetMate(float n)
{
	if (n >= 1 && n <= 10)
		mate = n;
}

float Student::GetMate()
{
	return mate;
}

void Student::SetIstorie(float n)
{
	if (n >= 1 && n <= 10)
		istorie = n;
}

float Student::GetIstorie()
{
	return istorie;
}

void Student::SetEngleza(float n)
{
	if (n >= 1 && n <= 10)
		engleza = n;
}

float Student::GetEngleza()
{
	return engleza;
}

float Student::Medie()
{
	return (mate + engleza + istorie) / 3;
}
