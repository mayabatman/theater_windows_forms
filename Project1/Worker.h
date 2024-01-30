#pragma once
#include <string>
//#include "Education.h"

using namespace std;

class Worker
{
private:
	int id;
	string Name;
	string Surename;
	string Patronymic;
	unsigned int Age;
	string Edu;
	int Experience;
	string Rewards;
	int Money;
public:
	Worker();
	Worker(int, string, string, string, int);
	Worker(int, string, string, string, int, string, int, string, int);
	~Worker();

	int get_id();
	string get_name();
	string get_sure();
	string get_patr();
	int get_age();
	string get_edu();
	int get_exp();
	string get_rew();
	int get_mon();
	string get_FIO();

	void set_id(int);
	void set_name(string);
	void set_sure(string);
	void set_patr(string);
	void set_age(int);
	void set_edu(string);
	void set_exp(int);
	void set_rew(string);
	void set_mon(int);

	//virtual int busy() = 0;
};

