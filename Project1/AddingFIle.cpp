#include "AddingFIle.h"
#include <Windows.h>
using namespace System;
using namespace System::Windows::Forms;

AddingFIle::AddingFIle()
{
}

AddingFIle::AddingFIle(string adr)
{
	adress = adr;
}


AddingFIle::~AddingFIle()
{
}
/*
AddingFIle* AddingFIle::createAdd(add_id id)
{
	AddingFIle* af;
	switch (id)
	{
	case act_id:
		af = new AddActor();
		break;
	case dir_id:
		af = new AddDirector();
		break;
	case play_id:
		af = new AddPlay();
		break;
	case trupp_id:
		af = new AddTrupp();
		break;
	case season_id:
		af = new AddSeason();
		break;
	case seaplay_id:
		af = new AddSeaplay();
		break;
	case place_id:
		af = new AddPlace();
		break;
	default:
		return nullptr;
		break;
	}
}
*/
int AddingFIle::actor(Actor** actors)
{
	ifstream f1;
	int N = 30;
	f1.open(adress, ios_base::in); //открыть файл
	if (!f1.is_open() || f1.fail()) //проверка на корректность открытия
	{
		return 0;
	}
	char* xline = new char[N]; //массив в который загружается строка
	f1.getline(xline, N);
	int act_num = atoi(xline);
	(*actors) = new Actor[act_num];

	for (int i = 0; i < act_num; i++)
	{
		f1.getline(xline, N);
		for (int j = 0; j < 9; j++)
		{
			f1.getline(xline, N);
			switch (j) {
			case 0:
				(*actors)[i].set_id(atoi(xline));
				break;
			case 1:
				(*actors)[i].set_name(xline);
				break;
			case 2:
				(*actors)[i].set_sure(xline);
				break;
			case 3:
				(*actors)[i].set_patr(xline);
				break;
			case 4:
				(*actors)[i].set_age(atoi(xline));
				break;
			case 5:
				(*actors)[i].set_edu(xline);
				break;
			case 6:
				(*actors)[i].set_exp(atoi(xline));
				break;
			case 7:
				(*actors)[i].set_rew(xline);
				break;
			case 8:
				(*actors)[i].set_mon(atoi(xline));
				break;
			}
		}
	}
	return act_num;
}

int AddingFIle::director(Director** direct)
{
	ifstream f1;
	int N = 30;
	f1.open(adress, ios_base::in); //открыть файл
	if (!f1.is_open() || f1.fail()) //проверка на корректность открытия
	{
		return 0;
	}
	char* xline = new char[N]; //массив в который загружается строка
	f1.getline(xline, N);
	int act_num = atoi(xline);
	(*direct) = new Director[act_num];

	for (int i = 0; i < act_num; i++)
	{
		f1.getline(xline, N);
		for (int j = 0; j < 9; j++)
		{
			f1.getline(xline, N);
			switch (j) {
			case 0:
				(*direct)[i].set_id(atoi(xline));
				break;
			case 1:
				(*direct)[i].set_name(xline);
				break;
			case 2:
				(*direct)[i].set_sure(xline);
				break;
			case 3:
				(*direct)[i].set_patr(xline);
				break;
			case 4:
				(*direct)[i].set_age(atoi(xline));
				break;
			case 5:
				(*direct)[i].set_edu(xline);
				break;
			case 6:
				(*direct)[i].set_exp(atoi(xline));
				break;
			case 7:
				(*direct)[i].set_rew(xline);
				break;
			case 8:
				(*direct)[i].set_mon(atoi(xline));
				break;
			}
		}
	}
	return act_num;
}



int AddingFIle::play(Play** plays)
{
	ifstream f1;
	int N = 150;
	f1.open(adress, ios_base::in); //открыть файл
	if (!f1.is_open() || f1.fail()) //проверка на корректность открытия
	{
		(*plays) = 0;
		return 0;
	}
	char* xline = new char[N]; //массив в который загружается строка
	f1.getline(xline, N);
	int act_num = atoi(xline);
	(*plays) = new Play[act_num];
	for (int i = 0; i < act_num; i++)
	{
		f1.getline(xline, N);
		f1.getline(xline, N);
		(*plays)[i].set_id(atoi(xline));
		f1.getline(xline, N);
		(*plays)[i].set_name(xline);
		f1.getline(xline, N);
		AddingFIle d_f("directors.txt");
		(*plays)[i].set_dir(d_f.find_dir(atoi(xline)));
		f1.getline(xline, N);
		AddingFIle t_f(xline);
		vector<Trupp_role> trupp;
		t_f.trupp(&trupp);
		(*plays)[i].set_trup(trupp);
		f1.getline(xline, N);
		(*plays)[i].set_ann(xline);
	}
	return act_num;
}

int AddingFIle::trupp(vector<Trupp_role>* trup)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream f1;
	int N = 30;
	f1.open(adress, ios_base::in); //открыть файл
	if (!f1.is_open() || f1.fail()) //проверка на корректность открытия
	{
		(*trup).clear();
		return 0;
	}
	char* xline = new char[N]; //массив в который загружается строка
	f1.getline(xline, N);
	int num = atoi(xline);
	f1.getline(xline, N);
	int play_id = atoi(xline);
	(*trup).resize(num);
	for (int i = 0; i < num; i++)
	{
		(*trup)[i].set_id(play_id);
		f1.getline(xline, N);
		int j = 0;
		string str = "";
		while (xline[j] != '-')
		{
			str = str + xline[j];
			j++;
		}
		j++;
		(*trup)[i].set_role(str);
		str = "";
		while (xline[j] != '-')
		{
			str = str + xline[j];
			j++;
		}
		j++;
		AddingFIle f_a("actors.txt");
		(*trup)[i].set_act(f_a.find_act(atoi(str.c_str())));
		str = "";
		while (j<30)
		{
			str = str + xline[j];
			j++;
		}
		(*trup)[i].set_lev(atoi(str.c_str()));
	}
	
	return num;
}

int AddingFIle::season(Season** seasons)
{
	ifstream f1;
	int N = 150;
	f1.open(adress, ios_base::in); //открыть файл
	if (!f1.is_open() || f1.fail()) //проверка на корректность открытия
	{
		MessageBox::Show("Ошибочка в открытии файла Season", "Ошибка");
		return 0;
	}
	char* xline = new char[N]; //массив в который загружается строка
	f1.getline(xline, N);
	int n = atoi(xline);
	(*seasons) = new Season[n];
	for (int i = 0; i < n; i++)
	{
		f1.getline(xline, N);
		f1.getline(xline, N);
		int s_id = atoi(xline);
		(*seasons)[i].set_id(s_id);
		f1.getline(xline, N);
		Date dat;
		xline[10] = '/0';
		dat.set_date(xline);
		(*seasons)[i].set_start(dat);
		f1.getline(xline, N);
		xline[10] = '/0';
		dat.set_date(xline);
		(*seasons)[i].set_end(dat);

		string adr = "plays_";
		adr = adr + to_string(s_id) + ".txt";
		SeasonPlay* seaplay;
		AddingFIle p_f(adr);
		(*seasons)[i].set_num(p_f.seaplay(&seaplay));
		(*seasons)[i].set_plays(seaplay);
	}
	return n;
}

int AddingFIle::seaplay(SeasonPlay** s_plays)
{
	ifstream f1;
	int N = 50;
	f1.open(adress, ios_base::in); //открыть файл
	if (!f1.is_open() || f1.fail()) //проверка на корректность открытия
	{
		MessageBox::Show("Ошибочка в открытии файла SeasonPlay", "Ошибка");
		(*s_plays) = 0;
		return 0;
	}
	char* xline = new char[N]; //массив в который загружается строка
	f1.getline(xline, N);
	int n = atoi(xline);
	(*s_plays) = new SeasonPlay[n];
	for (int i = 0; i < n; i++)
	{
		f1.getline(xline, N);
		f1.getline(xline, N);
		int p_id = atoi(xline);
		(*s_plays)[i].set_id(p_id);
		f1.getline(xline, N);
		(*s_plays)[i].set_plid(atoi(xline));
		f1.getline(xline, N);
		Date dat;
		dat.set_date(xline);
		(*s_plays)[i].set_date(dat);
		
		string adr = "places_" + to_string(p_id)+".txt";
		AddingFIle f_h(adr);
		Hall hall;
		Place* places;
		hall.set_N(f_h.place(&places));
		hall.set_plac(places);
		(*s_plays)[i].set_hall(hall);
	}
	return n;
}

int AddingFIle::place(Place** places)
{
	ifstream f1;
	int N = 10;
	f1.open(adress, ios_base::in); //открыть файл
	if (!f1.is_open() || f1.fail()) //проверка на корректность открытия
	{
		return 0;
	}
	char* xline = new char[N]; //массив в который загружается строка
	Place* a = 0;
	Place* b = 0;
	int i = 0;
	for (i = 0; !f1.eof(); i++)
	{
		f1.getline(xline, N);
		string s = xline;
		if (s.empty())
		{
			i--;
			continue;
		}
		a = new Place[i + 1];
		Place c;
		c.set_mon(atoi(xline));
		f1.getline(xline, N);
		c.set_stat(atoi(xline));
		c.set_pres(0);
		if (i!=0)
			for (int j = 0; j < i; j++)
			{
				a[j] = b[j];
			}
		b = new Place[i + 1];
		a[i] = c;

		for (int j = 0; j <=i; j++)
		{
			b[j] = a[j];
		}
	}
	(*places) = b;
	return i;
}

Director AddingFIle::find_dir(int id)
{
	Director* dirs;
	AddingFIle d_f("directors.txt");
	int n = d_f.director(&dirs);
	for (int i = 0; i < n; i++)
	{
		if (dirs[i].get_id() == id)
			return dirs[i];
	}
	return Director();
}

Actor AddingFIle::find_act(int id)
{
	Actor* actors;
	AddingFIle d_f("actors.txt");
	int n = d_f.actor(&actors);
	for (int i = 0; i < n; i++)
	{
		if (actors[i].get_id() == id)
			return actors[i];
	}
	return Actor();
}

Play AddingFIle::find_play(int id)
{
	Play* plays;
	AddingFIle d_f("plays.txt");
	int n = d_f.play(&plays);
	for (int i = 0; i < n; i++)
	{
		if (plays[i].get_id() == id)
			return plays[i];
	}
	return Play();
}
/*
AddActor::AddActor()
{
	adress = "actors.txt";
}

int AddActor::download(Actor** actors)
{
	ifstream f1;
	int N = 30;
	string adr = "actors.txt";
	f1.open(adr, ios_base::in); //открыть файл
	if (!f1.is_open() || f1.fail()) //проверка на корректность открытия
	{
		MessageBox::Show("Ошибочка", "Ошибка");
		return 0;
	}
	char* xline = new char[N]; //массив в который загружается строка
	f1.getline(xline, N);
	int act_num = atoi(xline);
	(*actors) = new Actor[act_num];

	for (int i = 0; i < act_num; i++)
	{
		f1.getline(xline, N);
		for (int j = 0; j < 9; j++)
		{
			f1.getline(xline, N);
			switch (j) {
			case 0:
				(*actors)[i].set_id(atoi(xline));
				break;
			case 1:
				(*actors)[i].set_name(xline);
				break;
			case 2:
				(*actors)[i].set_sure(xline);
				break;
			case 3:
				(*actors)[i].set_patr(xline);
				break;
			case 4:
				(*actors)[i].set_age(atoi(xline));
				break;
			case 5:
				(*actors)[i].set_edu(xline);
				break;
			case 6:
				(*actors)[i].set_exp(atoi(xline));
				break;
			case 7:
				(*actors)[i].set_rew(xline);
				break;
			case 8:
				(*actors)[i].set_mon(atoi(xline));
				break;
			}
		}
	}
	return act_num;
}
/*
//полностью переделать в неклассическую реализацию..............
Actor AddActor::find(int id)
{
	Actor* actors;
	ActorFactory* actfac = new ActorFactory;
	AddingFIle* d_f = actfac->createAdd();
	int n = d_f->download(&actors);
	for (int i = 0; i < n; i++)
	{
		if (actors[i].get_id() == id)
			return actors[i];
	}
	return Actor();
}*/
