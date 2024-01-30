#pragma once
#include "Play.h"
#include "Hall.h"
#include "Date.h"

class SeasonPlay
{
private:
	int ID;
	int play_id;
	Hall the_hall;
	Date the_date;
public:
	SeasonPlay();
	SeasonPlay(int, int, Hall, Date);
	~SeasonPlay();

	int get_id();
	int get_plid();
	Hall get_hall();
	Date get_date();

	void set_id(int);
	void set_plid(int);
	void set_hall(Hall);
	void set_date(Date);
};

