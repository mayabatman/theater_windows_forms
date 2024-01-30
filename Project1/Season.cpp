#include "Season.h"



Season::Season()
{
	ID = 0;
	num_of_plays = 0;
	Plays = 0;

}

Season::Season(int i, Date start, Date end, SeasonPlay* plays, int num)
{
	ID = i;
	Start_date = start;
	End_date = end;
	Plays = plays;
	num_of_plays = num;
}


Season::~Season()
{
}

void Season::set_id(int i)
{
	ID = i;
}

void Season::set_start(Date dat)
{
	Start_date = dat;
}

void Season::set_end(Date dat)
{
	End_date = dat;
}

void Season::set_plays(SeasonPlay* plays)
{
	Plays = plays;
}

void Season::set_num(int num)
{
	num_of_plays = num;
}

int Season::get_id()
{
	return ID;
}

Date Season::get_start()
{
	return Start_date;
}

Date Season::get_end()
{
	return End_date;
}

SeasonPlay* Season::get_plays()
{
	return Plays;
}

int Season::get_num()
{
	return num_of_plays;
}
