#include<iostream>
#include "Math.h"

using namespace std;
int main()
{
	Math d;

	cout << d.Add(1, 2)<<endl;
	cout << d.Add(1.5, 2.5)<<endl;
	cout << d.Add(1, 2, 3)<<endl;
	cout << d.Add(1.5, 2.5, 1.5)<<endl;
	cout << d.Mul(1,9)<<endl;
	cout << d.Mul(1, 9, 2)<<endl;
	cout << d.Mul(1.5, 1.5)<<endl;
	cout << d.Mul(1.5, 1.5, 2.5)<<endl;
	cout << d.Add(5, 1, 2, 3, 4, 5) << endl;;







	
	cout << d.Add("1","2");

}