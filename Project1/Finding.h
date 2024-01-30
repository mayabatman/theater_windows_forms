#pragma once
#include <string>
#include <iostream>
#include "AddingFIle.h"
enum find_id { act_find_id = 0, dir_find_id, play_find_id, date_find_id};

class Finding
{
protected:
	int* ids;
public:
	Finding();
	~Finding();
	char Tolower(char r);//функция преобразования заглавных букв в строчные

	int* fillSample(string name);
	virtual int* findID(string name) = 0;
	virtual SeasonPlay* findplays(int*N) = 0;
	int BoyerMoor(std::string text, string name, int* sample);

	Finding* createFind(find_id id);
};

class ActorFind : public Finding
{
public:
	int* findID(string name);
	SeasonPlay* findplays(int *N);
};

class DirectorFind : public Finding
{
public:
	int* findID(string name);
	SeasonPlay* findplays(int* N);
};

class PlayFind : public Finding
{
public:
	int* findID(string name);
	SeasonPlay* findplays(int* N);
};


class DataFind : public Finding
{
public:
	int* findID(string name);
	SeasonPlay* findplays(int* N);
};

