#pragma once
#include "Actor.h"
#include "Director.h"

class AddFromFile
{
private:
	string adress;
public:
	AddFromFile();
	AddFromFile(string);
	~AddFromFile();

	void actor(Actor**);
	void director(Director**);
};

