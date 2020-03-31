
#include"Car.h"
#include"Circuit.h"
#include"Weather.h"
#include"Dacia.h"
#include"Ford.h"
#include"Mercedes.h"
#include"Toyota.h"
#include"Mazda.h"

int main()
{
	Circuit c;
	c.SetLength(200);
	c.SetWeather(Weather::Rain);
	c.AddCar(new Dacia());
	c.AddCar(new Toyota());
	c.AddCar(new Mercedes());
	c.AddCar(new Ford());
	c.AddCar(new Mazda());
	c.Race();
	c.ShowFinalRanks();
	c.ShowWhoDidNotFinis(); // it is possible that some cars don't have enough fuel to finish the circuit

	
}