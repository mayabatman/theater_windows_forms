#include "Play.h"



Play::Play()
{
}



Play::Play(int i, string name, Director dir, vector<Trupp_role> trup, string annot)
{
	id = i;
	Name = name;
	director = dir;
	Trupp = trup;
	Annotation = annot;
}


Play::~Play()
{
}

int Play::get_id()
{
	return id;
}

string Play::get_name()
{
	return Name;
}

Director Play::get_dir()
{
	return director;
}

vector<Trupp_role> Play::get_trup()
{
	return Trupp;
}

string Play::get_ann()
{
	return Annotation;
}

void Play::set_id(int i)
{
	id = i;
}

void Play::set_name(string name)
{
	Name = name;
}

void Play::set_dir(Director dir)
{
	director = dir;
}

void Play::set_trup(vector<Trupp_role> trup)
{
	Trupp = trup;
}

void Play::set_ann(string anot)
{
	Annotation = anot;
}
