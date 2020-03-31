
#include"Number.h"

using namespace std;
int main()
{

	Number n1("10110010", 2);
	Number n2("734", 8);
	Number n3("FF", 16);

	printf("n1 has %d digits and it is written in base %d\n", n1.GetDigitsCount(), n1.GetBase());
	for (int tr = 0; tr < n1.GetDigitsCount(); tr++)
	{
		printf("n1[%d]=%c\n", tr, n1[tr]);
	}
	n1.Print();
	n2.Print();
	n1 = (n2 + n3 - n1) + n1; // after this n1 will be in base 16
	n1.SwitchBase(2);
	n1.Print();

	if (n1 > n2) printf("n1 is bigger than n2\n"); else printf("n2 is bigger than n1\n"); 
	
	
	Number n4 = 12345; // n4 will be in base 10
	n1 = 255; // n1 will be 11111111 (value 255 from base 10 in base 2)
	n4 += n1;
	n4.Print(); 

	 n4="13579"; // n4 mentains its base (10) and will be 13579
	n4.Print();
	--n4; // the first digit from n4 will be remove ==> n4 becomes 3579
	n4.Print();
	n4--; // the last digit from n4 will be remove ==> n4 becomes 357
	n4.Print(); 
	
	
	
	/*
	Number x1("11",2);
	cout << "cifrele numarului x1 sunt: ";
	for (int tr = 0; tr < x1.GetDigitsCount(); tr++)
	{
		printf("n1[%d]=%c\n", tr, x1[tr]);
	}

	Number x2("167", 8);
	printf("x2 has %d digits and it is written in base %d\n", x2.GetDigitsCount(), x2.GetBase());


	Number a("33", 4);
		a= x1 - x2;
	a.SwitchBase(4);
	cout << "numarul a este: ";
	a.Print();
	cout << "numarul a-- este: ";
	a--;
	a.Print();
	cout << "numarul --a este: ";
	--a;
	a.Print();

	Number b("41203", 5);
	b = x1 + x2;
	b.SwitchBase(5);
	cout << "numarul b este: ";
	b.Print();


	if (x1 == x2)
		cout << "numerele sunt egale"<<endl;
	if (x1 < x2)
		cout << "nr1 mai mic decat nr2"<<endl;
	if (x1 > x2)
		cout << "nr1 mai mare decat nr2"<<endl;
	if (x1 <= x2)
		cout << "nr1 mai mic sau egal decat nr2"<<endl;
	if (x1 >= x2)
		cout << "nr1 mai mare sau egal decat nr2"<<endl;
	if (x1 != x2)
		cout << "numerele sunt diferite" << endl;
	if (!x1)
		cout << "nr e 0"<<endl;
	else
		cout << "nr nu e 0"<<endl;

	x1 = x2;
	x1.Print();
	*/
	
	
	return 0;

	
	

}