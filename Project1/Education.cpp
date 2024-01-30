#include "Education.h"



Education::Education()
{
}

Education::Education(int stat, string un, string sp)
{
	Status = stat;
	University = un;
	Special = sp;
}


Education::~Education()
{
}

int Education::get_stat()
{
	return Status;
}

string Education::get_un()
{
	return University;
}

string Education::get_sp()
{
	return Special;
}

void Education::set_stat(int stat)
{
	Status = stat;
}

void Education::set_un(string un)
{
	University = un;
}

void Education::set_sp(string sp)
{
	Special = sp;
}
