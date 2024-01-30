#pragma once
#include "Place.h"

class Hall
{
private:
	Place* Places;
	int N;
public:
	Hall();
	Hall(Place*, int);
	~Hall();

	void set_plac(Place*);
	void set_N(int);

	Place* get_plac();
	int get_N();


};

