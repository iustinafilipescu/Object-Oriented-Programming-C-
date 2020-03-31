#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "Student.h"
#include "fglobale.h"

int CMate(Student a, Student b)
{
	float unu = a.GetMate();
	float doi = b.GetMate();
	if (unu > doi) return 1;
	if (unu == doi) return 0;
	if (unu < doi) return -1;
}

int CIstorie(Student a, Student b)
{

	float unu = a.GetIstorie();
	float doi = b.GetIstorie();
	if (unu > doi) return 1;
	if (unu == doi) return 0;
	if (unu < doi) return -1;
}

int CEngleza(Student a, Student b)
{

float unu = a.GetEngleza();
float doi = b.GetEngleza();
	if (unu > doi) return 1;
	if (unu == doi) return 0;
	if (unu < doi) return -1;


}

int CMedie(Student a, Student b)
{
	float unu = a.Medie();
	float doi = b.Medie();
	if (unu > doi) return 1;
	if (unu == doi) return 0;
	if (unu < doi) return -1;
}

int CNume(Student a, Student b)
{
	char* unu = a.GetNume();
	char* doi = b.GetNume();

	return strcmp(unu, doi);
}