#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "Student.h"
#include "fglobale.h"

int main()
{
	Student i;
	i.SetNume("Iustina Filipescu");
	i.SetMate(8);
	i.SetEngleza(9);
	i.SetIstorie(9);

	Student m;
	m.SetNume("Miruna Iosub");
	m.SetMate(9);
	m.SetEngleza(10);
	m.SetIstorie(7);

	cout << " Cmp Matematica"<<" " << CMate(i,m) << endl;
	cout << " Cmp Engleza" <<" "<< CEngleza(i,m) << endl;
	cout << " Cmp Istorie" <<" "<< CIstorie(i,m) << endl;
	cout << " Cmp Medie" <<" "<< CMedie(i,m) << endl;
	cout << " Cmp Nume" <<" "<< CNume(i,m) << endl;
}