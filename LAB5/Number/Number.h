#pragma once
#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
class Number
{
private:
	int baza = 10, valoare;
	int val(char c); //char to int
	char reVal(int num); //int to char
	void strev(char* str);



public:
	Number(const char* value, int base); // where base is between 2 and 16

	Number(const Number& d); 
	Number(const int val);
	Number(const char* str);

	friend Number operator+ (Number n1, Number n2);
	friend Number operator- (Number n1, Number n2);
	bool  operator== (const Number& n);
	bool  operator> (const Number& n);
	bool  operator< (const Number& n);
	bool  operator<= (const Number& n);
	bool  operator>= (const Number& n);
	bool  operator!= (const Number& n);
	bool  operator! () const;
	Number operator-- (int);
	Number& operator--();
	int operator[] (int index);
	void operator+= (Number i);

	void SwitchBase(int newBase);
	void Print();
	int  GetDigitsCount(); // returns the number of digits for the current number
	int  GetBase(); // returns the current base
};