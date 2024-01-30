#pragma once
#include "Season.h"
#include "Worker.h"

class Systema
{
private:
	Season Season_now;
	Season* Season_next;
	Season* Season_archive;
	Worker* Workers;
//	Object* Objects;
	Hall* Halls;
public:
	Systema();
	~Systema();
};

