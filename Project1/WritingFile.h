#pragma once
#include "Actor.h"
#include "Director.h"
#include "Play.h"
#include "Trupp_role.h"
#include "Season.h"
#include "SeasonPlay.h"
#include "Place.h"

class WritingFile
{
private:
	string filename;
public:
	WritingFile();
	WritingFile(string);
	~WritingFile();

	void actor(Actor*, int);
	void director(Director*, int);
	void play(Play*, int);
	void trupp(vector<Trupp_role>, int);
	void season(Season*, int);
	void seaplay(SeasonPlay*, int);
	void places(Place*, int);
};

