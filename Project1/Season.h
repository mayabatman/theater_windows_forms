	#pragma once
#include "Date.h"
#include "SeasonPlay.h"

class Season
{
private:
	int ID;
	Date Start_date;
	Date End_date;
	SeasonPlay* Plays;
	int num_of_plays;
public:
	Season();
	Season(int, Date, Date, SeasonPlay*, int);
	~Season();

	void set_id(int);
	void set_start(Date);
	void set_end(Date);
	void set_plays(SeasonPlay*);
	void set_num(int);

	int get_id();
	Date get_start();
	Date get_end();
	SeasonPlay* get_plays();
	int get_num();
};

