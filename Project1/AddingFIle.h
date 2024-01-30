#pragma once
#include "Actor.h"
#include "Director.h"
#include "Play.h"
#include "Trupp_role.h"
#include "Season.h"
#include "SeasonPlay.h"

//enum add_id { act_id = 1, dir_id, play_id, trupp_id, season_id, seaplay_id, place_id };

class AddingFIle
{
protected:
	string adress;
public:
	AddingFIle();
	AddingFIle(string);
	~AddingFIle();
	//virtual int download() = 0;
	//static AddingFIle* createAdd(add_id id);

	int actor(Actor**);
	int director(Director**);
	int play(Play**);
	int trupp(vector<Trupp_role>*);
	int season(Season**);
	int seaplay(SeasonPlay**);
	int place(Place**);

	Director find_dir(int id);
	Actor find_act(int id);
	Play find_play(int id);

};


/*


class AddActor : public AddingFIle
{
public:
	AddActor();
	int download(Actor** actors);
	Actor find(int id);
};

class AddDirector : public AddingFIle
{
public:
	int download(Director**);
	Director find(int);
};

class AddPlay : public AddingFIle
{
public:
	int download(Play**);
	Play find(int);
};

class AddTrupp : public AddingFIle
{
public:
	int download(Trupp_role**);
	//Trupp_role find(int);
};

class AddSeason : public AddingFIle
{
public:
	int download(Season**);
	//Season find(int);
};

class AddSeaplay : public AddingFIle
{
public:
	int download(SeasonPlay**);
	//SeasonPlay find(int);
};

class AddPlace : public AddingFIle
{
public:
	int download(Place**);
	//Place find(int);
};


/*
class AddFactory
{
public:
	virtual AddingFIle* createAdd() = 0;
	virtual ~AddFactory();
};

class ActorFactory
{
public:
	AddingFIle* createAdd()
	{
		return new AddActor;
	}
};
class DirectorFactory
{
public:
	AddingFIle* createAdd()
	{
		return new AddDirector;
	}
};
class PlayFactory
{
public:
	AddingFIle* createAdd()
	{
		return new AddPlay;
	}
};
class TruppFactory
{
public:
	AddingFIle* createAdd()
	{
		return new AddTrupp;
	}
};
class SeaplayFactory
{
public:
	AddingFIle* createAdd()
	{
		return new AddSeaplay;
	}
};
class PlaceFactory
{
public:
	AddingFIle* createAdd()
	{
		return new AddPlace;
	}
};
class SeasonFactory
{
public:
	AddingFIle* createAdd()
	{
		return new AddSeason;
	}
};*/
