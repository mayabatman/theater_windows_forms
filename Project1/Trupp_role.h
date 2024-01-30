#pragma once
#include "Actor.h"
class Trupp_role
{
private:
	int play_id;
	string Role;
	Actor actor;
	int Level;
public:
	Trupp_role();
	Trupp_role(int, string, Actor, int);
	~Trupp_role();

	void set_id(int i);
	void set_role(string role);
	void set_act(Actor act);
	void set_lev(int lev);

	int get_id();
	string get_role();
	Actor get_act();
	int get_lev();
};

