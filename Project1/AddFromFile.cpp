#include "AddFromFile.h"

using namespace System;
using namespace System::Windows::Forms;

AddFromFile::AddFromFile()
{
}

AddFromFile::AddFromFile(string adr)
{
	adress = adr;
}


AddFromFile::~AddFromFile()
{
}

void AddFromFile::actor(Actor** actors)
{
	ifstream f1;
	int N = 30;
	f1.open(adress, ios_base::in); //открыть файл
	if (!f1.is_open() || f1.fail()) //проверка на корректность открытия
	{
		MessageBox::Show("Ошибочка", "Ошибка");
		return;
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

}

void AddFromFile::director(Director** direct)
{
	ifstream f1;
	int N = 30;
	f1.open(adress, ios_base::in); //открыть файл
	if (!f1.is_open() || f1.fail()) //проверка на корректность открытия
	{
		MessageBox::Show("Ошибочка", "Ошибка");
		return;
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

}
