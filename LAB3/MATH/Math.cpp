#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"
#include "stdarg.h"
#include <string>
#include <cstring>
using namespace std;

int Math::Add(int x, int y)
{
	return x + y;
}

int Math::Add(int x, int y, int z)
{
	return x + y + z;
}
int Math::Add(double x, double y)
{
	return x + y;
}
int Math::Add(double x, double y, double z)
{
	return x + y + z;
}
int Math::Mul(int x, int y)
{
	return x * y;
}
int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}
int Math::Mul(double x, double y)
{
	return x * y;
}
int Math::Mul(double x, double y, double z)
{
	return x * y * z;
}
int Math::Add(int count, ...)
{
	/*va_list ap;
	va_start(ap, count);
	int sum = va_arg(ap, int);
	for (int i = 1; i < count; i++)
	{
		int a = va_arg(ap, int);
		sum = sum + a;
	}
	va_end(ap);
	return sum;*/
	int s = 0;
	int* p = &count;
	p++;
	for (int i = 0; i < count; i++)
	{
		s = s + *p;
		p++;
	}
	return s;
}
char* Math::Add(const char* x, const char* y)
{
	if (x == nullptr || y == nullptr) return nullptr;
	string str = x;
	str += y;
	char* c = strcpy(new char[str.length() + 1], str.c_str());
	return c;


	/*char p = *x - 48 + *y;
	char* ret = (char*)malloc(sizeof(char));
	*ret = p;
	return ret;*/
}