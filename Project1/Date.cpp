#include "Date.h"

Date::Date()
{
	day = 1;
	month = 1;
	year = 2020;
}

Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

Date::~Date()
{
}

void Date::set_date(string d)
{
	for (int i = 0; i < 10; i++)
	{
		if (((i == 2) || (i == 5)) && (d[i] == '/' || d[i] == '.'))
			continue;
		else if (isdigit(d[i]))
			continue;
		else
			return;
	}
	char c[5];
	c[2] = '\0';
	c[0] = d[0]; c[1] = d[1];
	day = atoi(c);
	c[0] = d[3]; c[1] = d[4];
	month = atoi(c);
	c[4] = '\0';
	c[0] = d[6]; c[1] = d[7]; c[2] = d[8]; c[3] = d[9];
	year = atoi(c);
	if (!is_exist()) {
		Date();
	}
}

void Date::set_day(int)
{
}

void Date::set_month(int)
{
}

void Date::set_year(int)
{
}

string Date::dat()
{
	string str;
	if (day > 9)
		str = to_string(day);
	else
		str = "0" + to_string(day);
	if (month > 9)
		str = str + "/" + to_string(month);
	else
		str = str + "/0" + to_string(month);
	if (year > 9)
		str = str + "/" + to_string(year);
	else
		str = str + "/0" + to_string(year);
	return str;
}

int Date::get_day()
{
	return day;
}

int Date::get_month()
{
	return month;
}

int Date::get_year()
{
	return year;
}

void Date::set_dat_now()
{
	std::time_t t = std::time(nullptr);
	std::tm* now = std::localtime(&t);

	day = now->tm_mday;
	month = now->tm_mon + 1;
	year = now->tm_year + 1900;
}

bool Date::is_exist() //проверка является ли дата существующей
{
	if (year<2030 && year>2020)
	{
		if (month < 13 && month > 0)
		{
			if (day > 0)
			{
				if (month == 2 && ((day == 29 && year % 4 == 0) || day < 29))
					return true;
				else if (((month % 2 == 1 && month < 8) || (month >= 8 && month % 2 == 0)) && (day <= 31))
					return true;
				else if (((month % 2 == 1 && month > 8) || (month < 7 && month % 2 == 0)) && (day <= 30))
					return true;
			}
		}
	}
	return false;
}

bool Date::is_future()
{
	Date today;
	today.set_dat_now();
	if (today.get_year() < year) 
	{
		return true;
	}
	else if (today.get_year() == year)
	{
		if (today.get_month() < month)
		{
			return true;
		}
		else if (today.get_month() == month)
		{
			if (today.get_day() <= day)
				return true;
		}
	}
	return false;
}
