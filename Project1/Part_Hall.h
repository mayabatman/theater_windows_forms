#pragma once
#include <string>
#include "Place.h"

using namespace std;
class Part_Hall
{
private:
	string Name;
	Place* places;
	int N;
public:
	Part_Hall();
	~Part_Hall();
};

