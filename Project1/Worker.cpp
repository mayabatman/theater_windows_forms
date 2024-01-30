#include "Worker.h"



Worker::Worker()
{
	id = 0;
	Name = "Неизвестно";
	Surename = "Неизвестно";
	Patronymic = "Неизвестно";
	Age = 18;
	Edu = "Неизвестно";
	Experience = 0;
	Rewards = "Неизвестно";
	Money = 0;
}

Worker::Worker(int i, string name, string surenaneme, string patronymic, int age)
{
	id = i;
	Name = name;
	Surename = surenaneme;
	Patronymic = patronymic;
	Age = age;
}

Worker::Worker(int i, string name, string surename, string patrinymic, int age, string edu, int exp, string rew, int money)
{
	id = i;
	Name = name;
	Surename = surename;
	Patronymic = patrinymic;
	Age = age;
	Edu = edu;
	Experience = exp;
	Rewards = rew;
	Money = money;
}


Worker::~Worker()
{
}

int Worker::get_id()
{
	return id;
}

string Worker::get_name()
{
	return Name;
}

string Worker::get_sure()
{
	return Surename;
}

string Worker::get_patr()
{
	return Patronymic;
}

int Worker::get_age()
{
	return Age;
}

string Worker::get_edu()
{
	return Edu;
}

int Worker::get_exp()
{
	return Experience;
}

string Worker::get_rew()
{
	return Rewards;
}

int Worker::get_mon()
{
	return Money;
}

string Worker::get_FIO()
{
	return Surename +" "+ Name +" "+ Patronymic;
}

void Worker::set_id(int i)
{
	id = i;
}

void Worker::set_name(string name)
{
	Name = name;
}

void Worker::set_sure(string surename)
{
	Surename = surename;
}

void Worker::set_patr(string patronymic)
{
	Patronymic = patronymic;
}

void Worker::set_age(int age)
{
	Age = age;
}

void Worker::set_edu(string edu)
{
	Edu = edu;
}

void Worker::set_exp(int experience)
{
	Experience = experience;
}

void Worker::set_rew(string rewards)
{
	Rewards = rewards;
}

void Worker::set_mon(int money)
{
	Money = money;
}
