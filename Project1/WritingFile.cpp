#include "WritingFile.h"

using namespace System;
using namespace System::Windows::Forms;

WritingFile::WritingFile()
{
}

WritingFile::WritingFile(string name)
{
	filename = name;
}


WritingFile::~WritingFile()
{
}

void WritingFile::actor(Actor* actors, int n)
{
	ofstream f2;
	f2.open(filename, ios_base::out);
	if (!f2.is_open()) //проверка на корректность открытия
	{
		MessageBox::Show("Ошибочка", "Ошибка");
		return;
	}
	f2 << n << "\n\n";
	for (int i = 0; i < n; i++)
	{
		f2 << actors[i].get_id() << endl;
		f2 << actors[i].get_name() << endl;
		f2 << actors[i].get_sure() << endl;
		f2 << actors[i].get_patr() << endl;
		f2 << actors[i].get_age() << endl;
		f2 << actors[i].get_edu() << endl;
		f2 << actors[i].get_exp() << endl;
		f2 << actors[i].get_rew() << endl;
		f2 << actors[i].get_mon() << endl;
		f2 << endl;
	}
}

void WritingFile::director(Director* dirs, int n)
{
	ofstream f2;
	f2.open(filename, ios_base::out);
	if (!f2.is_open()) //проверка на корректность открытия
	{
		MessageBox::Show("Ошибочка", "Ошибка");
		return;
	}
	f2 << n << "\n\n";
	for (int i = 0; i < n; i++)
	{
		f2 << dirs[i].get_id() << endl;
		f2 << dirs[i].get_name() << endl;
		f2 << dirs[i].get_sure() << endl;
		f2 << dirs[i].get_patr() << endl;
		f2 << dirs[i].get_age() << endl;
		f2 << dirs[i].get_edu() << endl;
		f2 << dirs[i].get_exp() << endl;
		f2 << dirs[i].get_rew() << endl;
		f2 << dirs[i].get_mon() << endl;
		f2 << endl;
	}
}

void WritingFile::play(Play* plays, int n)
{
	ofstream f2;
	f2.open(filename, ios_base::out);
	if (!f2.is_open()) //проверка на корректность открытия
	{
		MessageBox::Show("Ошибочка", "Ошибка");
		return;
	}
	f2 << n << "\n\n";
	for (int i = 0; i < n; i++)
	{
		f2 << plays[i].get_id() << endl;
		f2 << plays[i].get_name() << endl;
		f2 << plays[i].get_dir().get_id() << endl;
		string s = "trupp_"+ to_string(plays[i].get_id()) + ".txt";
		f2 << s << endl;
		f2 << plays[i].get_ann() << endl;
		f2 << endl;
		
	}
}

void WritingFile::trupp(vector<Trupp_role> trup, int n)
{
	ofstream f2;
	f2.open(filename, ios_base::out);
	if (!f2.is_open()) //проверка на корректность открытия
	{
		MessageBox::Show("Ошибочка", "Ошибка");
		return;
	}
	f2 << n << endl;
	f2 << trup[0].get_id() << endl;
	for (int i = 0; i < n; i++)
	{
		f2 << trup[i].get_role() << "-" << trup[i].get_act().get_id() << "-" << trup[i].get_lev() << endl;
	}

}

void WritingFile::season(Season* seasons, int n)
{
	ofstream f2;
	f2.open(filename, ios_base::out);
	if (!f2.is_open()) //проверка на корректность открытия
	{
		MessageBox::Show("Ошибочка", "Ошибка");
		return;
	}
	f2 << n << "\n\n";
	for (int i = 0; i < n; i++)
	{
		f2 << seasons[i].get_id() << endl;
		f2 << seasons[i].get_start().dat() << endl;
		f2 << seasons[i].get_end().dat() << endl;
		f2 << endl;
		string str = "plays_";
		str = str + to_string(seasons[i].get_id()) + ".txt";
		WritingFile plays(str);
		SeasonPlay* pl = seasons[i].get_plays();
		if (pl != 0)
		{
			std::cout << " ID " << pl[0].get_id() << endl;
			plays.seaplay(pl, seasons[i].get_num());
		}
	}


}

void WritingFile::seaplay(SeasonPlay* seaplays, int n)
{
	ofstream f2;
	f2.open(filename, ios_base::out);
	if (!f2.is_open()) //проверка на корректность открытия
	{
		MessageBox::Show("Ошибочка", "Ошибка");
		return;
	}
	f2 << n << "\n\n";
	std::cout << n << " eto n" << endl;
	for (int i = 0; i < n; i++)
	{
		f2 << seaplays[i].get_id() << endl;
		f2 << seaplays[i].get_plid() << endl;
		f2 << seaplays[i].get_date().dat() << endl;
		f2 << endl;
	}
}

void WritingFile::places(Place* places, int n)
{
	ofstream f2;
	f2.open(filename, ios_base::out);
	if (!f2.is_open()) //проверка на корректность открытия
	{
		MessageBox::Show("Ошибочка", "Ошибка");
		return;
	}
	for (int i = 0; i < n; i++)
	{
		f2 << places[i].get_mon() << endl;
		f2 << places[i].get_stat() << endl;
		f2 << endl;
	}
}
