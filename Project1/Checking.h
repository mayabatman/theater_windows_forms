#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Checking
{
public:
	Checking();
	~Checking();
	bool file_exist(string filename);
};

