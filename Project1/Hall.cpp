#include "Hall.h"



Hall::Hall()
{
	N = 25;
	Places = new Place[N];
	for (int i = 0; i < 5; i++)
	{
		Places[i].set_mon(1500);
	}
	for (int i = 5; i < 10; i++)
	{
		Places[i].set_mon(1200);
	}
	for (int i = 10; i <15; i++)
	{
		Places[i].set_mon(1000);
	}
	for (int i = 15; i < 20; i++)
	{
		Places[i].set_mon(800);
	}
	for (int i = 20; i < 25; i++)
	{
		Places[i].set_mon(500);
	}
	
}

Hall::Hall(Place* pl, int n)
{
	Places = pl;
	N = n;
}


Hall::~Hall()
{
}

void Hall::set_plac(Place* pl)
{
	Places = pl;
}

void Hall::set_N(int n)
{
	N = n;
}

Place* Hall::get_plac()
{
	return Places;
}

int Hall::get_N()
{
	return N;
}
