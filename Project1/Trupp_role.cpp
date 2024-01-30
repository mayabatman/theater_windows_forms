#include "Trupp_role.h"



Trupp_role::Trupp_role()
{
	play_id = 0;
	Role = "Неизвестно";
	Level = 1;
}

Trupp_role::Trupp_role(int i, string role, Actor act, int lev)
{
	play_id = i;
	Role = role;
	actor = act;
	Level = lev;
}


Trupp_role::~Trupp_role()
{
}

void Trupp_role::set_id(int i)
{
	play_id = i;
}

void Trupp_role::set_role(string role)
{
	Role = role;
}

void Trupp_role::set_act(Actor act)
{
	actor = act;
}

void Trupp_role::set_lev(int lev)
{
	Level = lev;
}

int Trupp_role::get_id()
{
	return play_id;
}

string Trupp_role::get_role()
{
	return Role;
}

Actor Trupp_role::get_act()
{
	return actor;
}

int Trupp_role::get_lev()
{
	return Level;
}
