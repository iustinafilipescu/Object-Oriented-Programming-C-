
#include "NumberList.h"

void NumberList::Init()
{
	count = 0;
}
bool NumberList::Add(int x)
{
	if (count >= 10)
		return false;
	else
	{
		numbers[count] = x;
		count++;
	}
	
}
void NumberList::Sort()
{
	int aux;
	for (int i = 0; i < count-1; i++)
		for (int j = i + 1; j < count; j++)
			if (numbers[i] > numbers[j])
			{
				aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
				
}

void NumberList::Print()
{
	for (int i = 0; i < count; i++)
	{
		printf("%d", numbers[i]);
		printf("\n");
	}

}
