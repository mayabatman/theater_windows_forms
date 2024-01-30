#pragma once
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int, int, int);
	~Date();

	void set_date(string);
	void set_day(int);
	void set_month(int);
	void set_year(int);

	string dat();
	int get_day();
	int get_month();
	int get_year();

	void set_dat_now();

	bool is_exist();

	bool is_future();
};

