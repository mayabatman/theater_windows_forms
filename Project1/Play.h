#pragma once
#include <string>
#include "Director.h"
#include "Trupp_role.h"
#include <vector>

using namespace std;
class Play
{
private:
	int id;
	string Name;
	Director director;
	vector<Trupp_role> Trupp;
	string Annotation;
public:
	Play();
	Play(int, string, Director, vector<Trupp_role>, string);
	~Play();

	int get_id();
	string get_name();
	Director get_dir();
	vector<Trupp_role> get_trup();
	string get_ann();

	void set_id(int);
	void set_name(string);
	void set_dir(Director);
	void set_trup(vector<Trupp_role>);
	void set_ann(string);


};

