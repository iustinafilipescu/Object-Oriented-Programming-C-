#include "template.h" 
#include <iostream> 

using namespace std;

int cmpf( const int& a,  const int& b)
{
	if (a > b)
		return 1;
	else return 0;
}

int egal(const int& a, const int& b)
{
	if (a == b)
		return 1;
	else
		return 0;
}

int main()
{
	tablou<int> s;

	s.Push(3);
	s.Push(2);
	s.Push(4);
	s.Push(20);
	s.Push(5);
	 
	


	s.print();

	printf("Elementul cerut este: %d  \n ", s.Get(3));
	
	printf("Ultimul element este: %d \n", s.Pop());
	
	printf("Numarul elementelor din vector este: %d \n", s.Count());
	

	s.Set(14, 3);

	s.print();

	s.Insert(22, 4);
	
	s.print();

	s.Delete(4);

	s.print();

	s.Sort(cmpf);
	
	s.print();

	printf("Pozitia elementului din vector care este e egal cu numarul dat este: %d \n", s.firstindexof(14, egal));

	
}


