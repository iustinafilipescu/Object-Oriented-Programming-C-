#include "Number.h"
#pragma once
#define _CRT_SECURE_NO_WARNINGS 


Number::Number(const char* value, int base)
{
	baza = base;
	if (value == "0")
		valoare = 0;
	int power = 1;
	int num = 0;
	int i;
	int len = strlen(value);
	for (i = len - 1; i >= 0; i--)
	{
		num += val(value[i]) * power;
		power = power * base;
	}
	valoare = num;


}


Number::Number(const Number& d) //copy
{
	valoare = d.valoare;
	baza = d.baza;
}


Number::Number(const int val)
{
	valoare = val;
}
Number::Number(const char* str)
{
	int power = 1;
	int num = 0;
	int i;
	int len = strlen(str);
	for (i = len - 1; i >= 0; i--)
	{
		num += val(str[i]) * power;
		power = power * baza;
	}
	valoare = num;
}
int Number::val(char c)
{
	if (c >= '0' && c <= '9')
		return (int)c - '0';
	else
		return (int)c - 'A' + 10; //pt baze cu litere
}
void Number::Print()
{
	int v = valoare;
	char res[500];
	int index = 0;  // Initialize index of result 

// Convert input number is given base by repeatedly 
// dividing it by base and taking remainder 
	while (v > 0)
	{
		res[index++] =reVal(v % baza);
		v /= baza;
	}
	res[index] = '\0';

	// Reverse the result 
	strev(res);

	cout << res << endl;

}


Number operator+(Number n1, Number n2)
{
	int maxx = 0;
	if (n1.baza > n2.baza)
		maxx = n1.baza;
	else
		maxx = n2.baza;
	Number temp("0", maxx);
	temp.valoare = n1.valoare + n2.valoare;
	return temp;
}
Number operator- (Number n1, Number n2)
{
	int maxx = 0;
	if (n1.baza > n2.baza)
		maxx = n1.baza;
	else
		maxx = n2.baza;
	Number temp("0", maxx);
	if (n1.valoare > n2.valoare)
		temp.valoare = n1.valoare - n2.valoare;
	else
		temp.valoare = n2.valoare - n1.valoare;

	return temp;
}
bool Number:: operator== (const Number& n)
{
	if (n.valoare == valoare)
		return true;
	else
		return false;

}
bool Number:: operator> (const Number& n)
{
	if (n.valoare > valoare)
		return true;
	else
		return false;

}
bool Number:: operator< (const Number& n)
{
	if (n.valoare < valoare)
		return true;
	else
		return false;

}
bool Number:: operator<= (const Number& n)
{
	if (n.valoare <= valoare)
		return true;
	else
		return false;

}
bool Number:: operator>= (const Number& n)
{
	if (n.valoare >= valoare)
		return true;
	else
		return false;

}
bool Number:: operator!= (const Number& n)
{
	if (n.valoare != valoare)
		return true;
	else
		return false;

}
bool Number:: operator! () const
{
	return (valoare == 0);
}
Number Number :: operator--(int)
{
	int x = valoare;
	char res[500];
	int index = 0;  

	while (x > 0)
	{
		res[index++] = reVal(x % baza);
		x /= baza;
	}
	res[index] = '\0';

	strev(res);
	res[strlen(res) - 1] = '\0';

	int power = 1;
	int num = 0;
	int i;
	int len = strlen(res);
	for (i = len - 1; i >= 0; i--)
	{
		num += val(res[i]) * power;
		power = power * baza;
	}
	valoare = num;
	return(*this);

	
}
Number& Number ::operator-- ()
{
	int x = valoare;
	char res[500];
	int index = 0;   

	while (x > 0)
	{
		res[index++] = reVal(x % baza);
		x /= baza;
	}
	res[index] = '\0';

	strev(res);

	int i, len = strlen(res);
	for (i = 1; i < len ; i++)
	{
		res[i - 1] = res[i];
	}
	res[i - 1] = '\0';

	int power = 1;
	int num = 0;
	int j;
	int lun = strlen(res);
	for (j = lun - 1; j >= 0; j--)
	{
		num += val(res[j]) * power;
		power = power * baza;
	}
	valoare = num;
	return(*this);
	
}
int Number::operator[]( int index)
{

	int x = valoare;
	char res[500];
	int ind = 0;
	while (x > 0)
	{
		res[ind++] = reVal(x % baza);
		x /= baza;
	}
	res[ind] = '\0';

	strev(res);
	return res[index];
}
void Number::operator+=(Number i)
{
	if (baza > i.baza)
		baza = baza;
	else
		baza = i.baza;
	valoare = valoare + i.valoare;
}


char Number::reVal(int num)
{
	if (num >= 0 && num <= 9)
		return (char)(num + '0');
	else
		return (char)(num - 10 + 'A');
}
void Number::strev(char* str)
{
	int len = strlen(str);
	int i;
	for (i = 0; i < len / 2; i++)
	{
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}

void Number::SwitchBase(int newbase)
{
	baza = newbase;
}
int Number::GetBase()
{
	return baza;
}
int Number::GetDigitsCount()
{
	int x = valoare;
	char res[500];
	int index = 0; 
	while (x > 0)
	{
		res[index++] = reVal(x % baza);
		x /= baza;
	}
	res[index] = '\0';

	strev(res);
	int c = strlen(res);
	return c;
	
}
