#include "SeasonsForm.h"
#include <iostream>
#include <Windows.h>
#include <winuser.h>

using namespace System;
using namespace System::Windows::Forms;

Season* seasons;
int N_s;
SeasonPlay* sea_plays;
bool saved = true;
Play* pl;
int index_s = -1;
int index_p = -1;

System::Void Project1::SeasonsForm::Back_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::AdminMenu^ form = gcnew Project1::AdminMenu;
	form->Show();
	Project1::SeasonsForm::Close();
	return System::Void();
}

System::Void Project1::SeasonsForm::Plays_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::PlaysForm^ form = gcnew Project1::PlaysForm;
	form->Show();
	Project1::SeasonsForm::Close();
	return System::Void();
}

System::Void Project1::SeasonsForm::Directors_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::DirectorsForm^ form = gcnew Project1::DirectorsForm;
	form->Show();
	Project1::SeasonsForm::Close();
	return System::Void();
}

System::Void Project1::SeasonsForm::Actors_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::ActorsForm^ form = gcnew Project1::ActorsForm;
	form->Show();
	Project1::SeasonsForm::Close();
	return System::Void();
}
/*
System::Void Project1::SeasonsForm::Statistic_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::Statistica^ form = gcnew Project1::Statistica;
	form->Show();
	Project1::SeasonsForm::Hide();
	return System::Void();
}
*/
System::Void Project1::SeasonsForm::Load_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	index_s = -1;
	index_p = -1;
	N_s = 0;
	if (seasons != 0) {
		delete[] seasons;
		seasons = 0;
	}
	if (sea_plays != 0) {
		delete[] sea_plays;
		sea_plays = 0;
	}
	if (pl != 0) {
		delete[] pl;
		pl = 0;
	}
	this->list_next->Items->Clear();
	this->season_combo->Items->Clear();
	this->plays_combo->Items->Clear();
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	AddingFIle file("seasons.txt");
	N_s = file.season(&seasons);
	int nn = seasons[1].get_num();
	WriteSeasons();
	FillWithPlays();
	if (N_s != 0)
		this->season_combo->SelectedIndex = 1;
	return System::Void();
}

System::Void Project1::SeasonsForm::WriteSeasons()
{
	for (int i = 0; i < N_s; i++)
	{
		String^ str = System::Convert::ToString(seasons[i].get_id());
		str = str + " (" + gcnew System::String(seasons[i].get_start().dat().c_str()) + "-";
		str = str + gcnew System::String(seasons[i].get_end().dat().c_str()) + ")";
		this->season_combo->Items->Add(str);
	}
	return System::Void();
}

System::Void Project1::SeasonsForm::Season_combo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	SaveChanges();
	this->list_next->Items->Clear();
	index_s = this->season_combo->SelectedIndex;
	if (index_s == -1)
	{
		//if (index_p != -1) {
			index_p = -1;
			delete[] sea_plays;
			sea_plays = 0;
		//}
		return System::Void();
	}
	this->season_id->Text = System::Convert::ToString(seasons[index_s].get_id());
	this->season_start->Text = gcnew System::String(seasons[index_s].get_start().dat().c_str());
	this->season_end->Text = gcnew System::String(seasons[index_s].get_end().dat().c_str());
	int n = seasons[index_s].get_num();
	sea_plays = seasons[index_s].get_plays();
	for (int i = 0; i < n; i++)
	{
		String^ str = gcnew System::String(sea_plays[i].get_date().dat().c_str());
		AddingFIle find;
		Play the_play = find.find_play(sea_plays[i].get_plid());
		str = str + " " + gcnew System::String(the_play.get_name().c_str());
		//if (sea_plays[i].get_date().is_future())
		//{
		this->list_next->Items->Add(str);
		//}
		/*else
		{
			this->list_arch->Items->Add(str);
		}*/
	}
	saved = false;
	return System::Void();
}

System::Void Project1::SeasonsForm::List_next_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	/*if (!saved)
	{
		MessageBox::Show(
			"»змененные данные не были сохранены",
			"¬нимание");
	}*/
	
	SaveChanges();
	ListBox^ list = safe_cast<ListBox^>(sender);
	index_p = list->SelectedIndex;
	AddingFIle find;
	Play the_play = find.find_play(sea_plays[index_p].get_plid());
	this->seaplay_id->Text = System::Convert::ToString(sea_plays[index_p].get_id());
	SetDirPlay(the_play.get_id());
	this->play_date->Text = gcnew System::String(sea_plays[index_p].get_date().dat().c_str());
	this->play_time->Text = "18:00";
	return System::Void();
	//saved = false;
}

int Project1::SeasonsForm::SetDirPlay(int play_id)
{
	Play* pl;
	AddingFIle p_f("plays.txt");
	int n = p_f.play(&pl);
	int answ = -1;
	for (int i = 0; i < n; i++)
	{
		if (play_id == pl[i].get_id())
			answ = i;
	}
	if (answ == -1)
	{
		MessageBox::Show("ѕьеса не найдена в базе данных!", "ќшибка!");
	}
	this->plays_combo->SelectedIndex = answ;
	return answ;
}

System::Void Project1::SeasonsForm::FillWithPlays()
{
	AddingFIle p_f("plays.txt");
	int n = p_f.play(&pl);
	for (int i = 0; i < n; i++)
	{
		String^ str = System::Convert::ToString(pl[i].get_id());
		str = str + " (" + gcnew System::String(pl[i].get_name().c_str()) + ")";
		this->plays_combo->Items->Add(str);
	}
	return System::Void();
}

bool Project1::SeasonsForm::del_from_seaplays(int N, int del_ind)
{
	if (del_ind >= N || del_ind < 0)
		return false;
	SeasonPlay* temp = new SeasonPlay[N];

	for (int i = 0; i < del_ind; i++)
		temp[i] = sea_plays[i];
	for (int i = del_ind; i < N-1; i++)
		temp[i] = sea_plays[i+1];
	
	delete [] sea_plays;
	N--;
	sea_plays = new SeasonPlay[N];
	for (int i = 0; i < N; i++)
		sea_plays[i] = temp[i];

	delete [] temp;
	temp = 0;
	return true;
}

System::Void Project1::SeasonsForm::Save_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	SaveChanges();
	//записать сезоны чеез сизонс
	WritingFile sea_file("seasons.txt");
	sea_file.season(seasons, N_s);
	//записать спектакли через си плейс
	Load_btn_Click(sender, e);
	return System::Void();
}

System::Void Project1::SeasonsForm::New_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Season new_season;
	N_s++;


	if (N_s == 1)
	{
		seasons = new Season[1];
		seasons[0] = new_season;
		seasons[0].set_id(1);
	}
	else
	{
		//----------------------------------------------
		Season* temp = new Season[N_s];
		for (int i = 0; i < N_s - 1; i++)
			temp[i] = seasons[i];
		temp[N_s - 1] = new_season;
		delete[] seasons;

		seasons = new Season[N_s];
		for (int i = 0; i < N_s; i++)
			seasons[i] = temp[i];
		delete[] temp;
		temp = 0;

		int id = seasons[N_s - 2].get_id();
		seasons[N_s - 1].set_id(++id);
	}
	//----------------------------------------------
	delete[] sea_plays;
	sea_plays = 0;
	index_p = -1;
	this->season_combo->Items->Add("Ќовый сезон");
	this->season_combo->SelectedIndex++;

	return System::Void();
}

System::Void Project1::SeasonsForm::Del_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	int del_ind = this->season_combo->SelectedIndex;
	if (del_ind == -1)
	{
		MessageBox::Show("Ёлемент не выбран", "”пс");
		return System::Void();
	}
	if (N_s == 1)
	{
		this->season_combo->Items->Clear();
		this->list_next->Items->Clear();
		this->seaplay_id->Text = "0";
		this->play_date->Text = "";
		this->play_time->Text = "";
		this->plays_combo->SelectedIndex = -1;
		delete[] seasons;
		seasons = 0;
		delete[] sea_plays;
		sea_plays = 0;
		N_s = 0;
		return System::Void();
	}
	this->season_combo->SelectedIndex = -1;

	if (!del_from_seasons(del_ind))
	{
		MessageBox::Show("”далить данный элемент не получаетс€", "ќшибка");
		return System::Void();
	}
	this->season_combo->Items->RemoveAt(del_ind);
	index_s = -1;
	index_p = -1;
	return System::Void();
}

bool Project1::SeasonsForm::del_from_seasons(int del_ind)
{
	if (del_ind >= N_s || del_ind < 0)
		return false;
	Season * temp = new Season[N_s];

	for (int i = 0; i < del_ind; i++)
		temp[i] = seasons[i];
	for (int i = del_ind; i < N_s - 1; i++)
		temp[i] = seasons[i + 1];

	delete[] seasons;
	N_s--;
	seasons = new Season[N_s];
	for (int i = 0; i < N_s; i++)
		seasons[i] = temp[i];

	delete[] temp;
	temp = 0;
	delete[] sea_plays;
	sea_plays = 0;
	return true;
}

System::Void Project1::SeasonsForm::ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	//saved = false;
	return System::Void();
}

System::Void Project1::SeasonsForm::SaveChanges()
{
	//if (saved)
		//return System::Void();
	using namespace System::Runtime::InteropServices;
	int id;
	Date dat;
	if (index_s >= 0) 
	{
		id = System::Convert::ToInt32(this->season_id->Text);
		dat.set_date((const char*)(Marshal::StringToHGlobalAnsi(this->season_start->Text).ToPointer()));
		seasons[index_s].set_id(id);
		seasons[index_s].set_start(dat);
		dat.set_date((const char*)(Marshal::StringToHGlobalAnsi(this->season_end->Text).ToPointer()));
		seasons[index_s].set_end(dat);
		if (index_p >= 0)
		{
			id = System::Convert::ToInt32(this->seaplay_id->Text);
			sea_plays[index_p].set_id(id);
			dat.set_date((const char*)(Marshal::StringToHGlobalAnsi(this->play_date->Text).ToPointer()));
			sea_plays[index_p].set_date(dat);
			id = this->plays_combo->SelectedIndex;
			sea_plays[index_p].set_plid(pl[id].get_id());
		}
		seasons[index_s].set_plays(sea_plays);
	}
	else
	{
		delete[] sea_plays;
		sea_plays = 0;
	}
	return System::Void();
}

System::Void Project1::SeasonsForm::Del_play_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	int del_ind = this->list_next->SelectedIndex;
	if (del_ind == -1)
	{
		MessageBox::Show("Ёлемент не выбран", "”пс");
		return System::Void();
	}
	int sea_ind = this->season_combo->SelectedIndex;
	if (sea_ind == -1)
	{
		MessageBox::Show("Ёлемент не выбран", "”пс");
		return System::Void();
	}
	int num = seasons[sea_ind].get_num();
	if (num == 1)
	{
		this->list_next->Items->Clear();
		this->seaplay_id->Text = "0";
		this->play_date->Text = "";
		this->play_time->Text = "";
		this->plays_combo->SelectedIndex = -1;
		this->season_start->Text = "";
		this->season_end->Text = "";
		this->season_combo->Text = "";
		delete[] sea_plays;
		sea_plays = 0;
		return System::Void();
	}
	this->list_next->SelectedIndex = -1;
	
	if (!del_from_seaplays(num, del_ind))
	{
		MessageBox::Show("”далить данный элемент не получаетс€", "ќшибка");
		return System::Void();
	}
	this->list_next->Items->RemoveAt(del_ind);
	seasons[sea_ind].set_num(num - 1);
	return System::Void();
}

System::Void Project1::SeasonsForm::Add_play_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	SeasonPlay new_splay;
	int sea_ind = this->season_combo->SelectedIndex;
	if (sea_ind == -1)
	{
		MessageBox::Show("Ёлемент не выбран", "”пс");
		return System::Void();
	}
	int num = seasons[sea_ind].get_num();
	num++;
	seasons[sea_ind].set_num(num);

	if (num == 1)
	{
		sea_plays = new SeasonPlay[num];
		sea_plays[0] = new_splay;
		int i = seasons[sea_ind].get_id() * 100;
		sea_plays[0].set_id(i+1);
	}
	else
	{	//----------------------------------------------
		SeasonPlay* temp = new SeasonPlay[num];

		for (int i = 0; i < num - 1; i++)
			temp[i] = sea_plays[i];
		temp[num - 1] = new_splay;

		delete[] sea_plays;

		sea_plays = new SeasonPlay[num];

		for (int i = 0; i < num; i++)
			sea_plays[i] = temp[i];

		delete[] temp;
		temp = 0;

		int id = sea_plays[num - 2].get_id();
		sea_plays[num - 1].set_id(++id);
	}
	//----------------------------------------------

	this->list_next->Items->Add("Ќовое событие");
	saved = false;
	return System::Void();
}
