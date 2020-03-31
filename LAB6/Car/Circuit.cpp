
#include "Circuit.h"

void Circuit::SetLength(int x)
{
	length = x;
}
void Circuit::SetWeather(Weather p)
{
	vreme = p;
}
void Circuit::AddCar(Car* x)
{
	masina[index++] = x;
}
void Circuit::Race()
{
	
	if (vreme == Rain)
	{
		for (int i = 0; i < 5; i++)
		{
			time[indexpoz++] = length / masina[i]->getRain();
			int a = length % masina[i]->getRain();
			float b = (float)a / masina[i]->getRain();
			minute[k++] = b * 60;
		
			if (length * masina[i]->getfconsumption() > masina[i]->getfcapacity() * 100)
			{
				x = i;
				notfinis[x] = masina[i]->getfcapacity();
				
			}
		}

	}

	if (vreme == Sun)
	{
		for (int i = 0; i < 5; i++)
		{
			time[indexpoz++] = length / masina[i]->getSun();
			int a = length % masina[i]->getSun();
			float b = (float)a / masina[i]->getSun();
			minute[k++] = b * 60;

			if (length * masina[i]->getfconsumption() > masina[i]->getfcapacity() * 100)
			{
				x = i;
				notfinis[x] = masina[i]->getfcapacity();

			}
		}

	}

	if (vreme == Snow)
	{
		for (int i = 0; i < 5; i++)
		{
			time[indexpoz++] = length / masina[i]->getSnow();
			int a = length % masina[i]->getSnow();
			float b = (float)a / masina[i]->getSnow();
			minute[k++] = b * 60;

			if (length * masina[i]->getfconsumption() > masina[i]->getfcapacity() * 100)
			{
				x = i;
				notfinis[x] = masina[i]->getfcapacity();

			}
		}

	}


}

void Circuit::ShowFinalRanks()
{
	printf("TIMP NECESAR PENTRU A TERMINA CURSA: \n"); 
	int a = 0;
	for (int i = 0; i < indexpoz; i++)
	{
		printf("%s", masina[i]->getname()); printf(": ");
		printf("%d", time[i]);
		printf(" ore si "); 
		printf("%d", minute[a]); printf(" minute \n");
		a++;
		
	}


}

void Circuit::ShowWhoDidNotFinis()
{
	printf("NU AU TERMINAT CURSA: ");
	for (int i = 0; i < 5; i++)
		if (notfinis[i] != 0)
		{
			printf("%s", masina[i]->getname()); printf(" ");
		}
}
