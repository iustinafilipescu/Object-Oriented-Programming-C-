#include "Sort.h"
int main()
{/*
	Sort s1("10,16,33,44,54,2,9,8,1"); //string
	s1.QuickSort();
	s1.Print();
	cout << endl;

	int v[] = { 4,2,6,1,7 };
	Sort s2(v, 5); //vectorul si lungime
	s2.QuickSort();
	s2.Print();
	cout << endl;

	Sort s3(3, 20, 10); //min si max
	s3.BubbleSort();
	s3.Print();
	cout << endl;
	*/

	int* v = new int[3]{ 10,60,30 };
	Sort s4(v,3); //lista intializare
	s4.BubbleSort();
	s4.Print();
	cout << endl;

	//Sort s5(5, 6, 9, 20, 3, 1); //count
	//s5.InsertSort();
	//s5.Print();
	//cout << endl;


	



}