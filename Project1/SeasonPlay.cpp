#include "SeasonPlay.h"



SeasonPlay::SeasonPlay()
{
	ID = 0;
	play_id = 0;
}

SeasonPlay::SeasonPlay(int i, int p_i, Hall hal, Date dat)
{
	ID = i;
	play_id = p_i;
	the_hall = hal;
	the_date = dat;
}


SeasonPlay::~SeasonPlay()
{
}

int SeasonPlay::get_id()
{
	return ID;
}

int SeasonPlay::get_plid()
{
	return play_id;
}

Hall SeasonPlay::get_hall()
{
	return the_hall;
}

Date SeasonPlay::get_date()
{
	return the_date;
}

void SeasonPlay::set_id(int i)
{
	ID = i;
}

void SeasonPlay::set_plid(int p_i)
{
	play_id = p_i;
}

void SeasonPlay::set_hall(Hall hal)
{
	the_hall = hal;
}

void SeasonPlay::set_date(Date dat)
{
	the_date = dat;
}
