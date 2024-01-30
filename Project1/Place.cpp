#include "Place.h"



Place::Place()
{
	Money = 1000;
	Status = 0;
	Pressed = 0;
}

Place::Place(int mon)
{
	Money = mon;
}


Place::~Place()
{
}

void Place::set_mon(int mon)
{
	Money = mon;
}

void Place::set_stat(bool b)
{
	Status = b;
}

void Place::set_pres(bool p)
{
	Pressed = p;
}

int Place::get_mon()
{
	return Money;
}

bool Place::get_stat()
{
	return Status;
}

bool Place::get_pres()
{
	return Pressed;
}

//Place& Place::operator=(Place const& second) {

//	this->Money = (&second).get_mon();
	//this->Status = (&second).get_stat();
//	return *this;
//}