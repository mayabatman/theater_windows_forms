#include "ActorsForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

Actor* actors = 0;
int N_a = 0;

System::Void Project1::ActorsForm::Back_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::AdminMenu^ form = gcnew Project1::AdminMenu;
	form->Show();
	Project1::ActorsForm::Close();
	return System::Void();
}

System::Void Project1::ActorsForm::Seasons_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::SeasonsForm^ form = gcnew Project1::SeasonsForm;
	form->Show();
	Project1::ActorsForm::Close();
	return System::Void();
}

System::Void Project1::ActorsForm::Plays_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::PlaysForm^ form = gcnew Project1::PlaysForm;
	form->Show();
	Project1::ActorsForm::Close();
	return System::Void();
}

System::Void Project1::ActorsForm::Directors_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::DirectorsForm^ form = gcnew Project1::DirectorsForm;
	form->Show();
	Project1::ActorsForm::Close();
	return System::Void();
}
/*
System::Void Project1::ActorsForm::Statistic_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::Statistica^ form = gcnew Project1::Statistica;
	form->Show();
	Project1::ActorsForm::Hide();
	return System::Void();
}*/

System::Void Project1::ActorsForm::WriteActors()
{
	for (int i = 0; i < N_a; i++)
	{
		String^ str = System::Convert::ToString(actors[i].get_id());
		str = str + " (" + gcnew System::String(actors[i].get_name().c_str()) + ")";
		this->listBox1->Items->Add(str);
	}
	return System::Void();
}

System::Void Project1::ActorsForm::FillWithActor(Actor actor)
{
	this->id_num->Text = System::Convert::ToString(actor.get_id());
	this->name_text->Text = gcnew System::String(actor.get_name().c_str());
	this->sure_text->Text = gcnew System::String(actor.get_sure().c_str());
	this->patr_text->Text = gcnew System::String(actor.get_patr().c_str());
	this->age_num->Value = actor.get_age();
	this->edu_text->Text = gcnew System::String(actor.get_edu().c_str());
	this->stage_num->Value = actor.get_exp();
	this->rew_text->Text = gcnew System::String(actor.get_rew().c_str());
	this->mon_num->Value = actor.get_mon();

	
	return System::Void();
}

Actor Project1::ActorsForm::ReWriteActor()
{
	Actor actor;
	actor.set_id(System::Convert::ToInt32(this->id_num->Text));
	actor.set_age(System::Convert::ToInt32(this->age_num->Value));
	actor.set_exp(System::Convert::ToInt32(this->stage_num->Value));
	actor.set_mon(System::Convert::ToInt32(this->mon_num->Value));
	using namespace System::Runtime::InteropServices;
	actor.set_name((const char*)(Marshal::StringToHGlobalAnsi(this->name_text->Text).ToPointer()));
	actor.set_sure((const char*)(Marshal::StringToHGlobalAnsi(this->sure_text->Text).ToPointer()));
	actor.set_patr((const char*)(Marshal::StringToHGlobalAnsi(this->patr_text->Text).ToPointer()));
	actor.set_edu((const char*)(Marshal::StringToHGlobalAnsi(this->edu_text->Text).ToPointer()));
	actor.set_rew((const char*)(Marshal::StringToHGlobalAnsi(this->rew_text->Text).ToPointer()));

	return actor;
}

System::Void Project1::ActorsForm::Save_Click(System::Object^ sender, System::EventArgs^ e)
{
	int id_new = this->listBox1->SelectedIndex;
	if (id_new == -1)
	{
		MessageBox::Show("Не выбран элемент для сохранения", "Ошибка!");
		return System::Void();
	}
	actors[id_new] = ReWriteActor();
	WritingFile file2("actors.txt");
	file2.actor(actors, N_a);
	MessageBox::Show("Изменения успешно сохранены", "ВАШ ТЕАТР");
	Load_btn_Click(sender, e);
	return System::Void();
}

System::Void Project1::ActorsForm::Add_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Actor new_act;
	N_a++;


	if (N_a == 1)
	{
		actors = new Actor[1];
		actors[0] = new_act;
		actors[0].set_id(1);
	}
	else
	{
		//----------------------------------------------
		Actor* temp = new Actor[N_a];
		for (int i = 0; i < N_a - 1; i++)
			temp[i] = actors[i];
		temp[N_a - 1] = new_act;
		delete[] actors;

		actors = new Actor[N_a];
		for (int i = 0; i < N_a; i++)
			actors[i] = temp[i];
		delete[] temp;
		temp = 0;

		int id = actors[N_a - 2].get_id();
		actors[N_a - 1].set_id(++id);
	}
	//----------------------------------------------
	this->listBox1->Items->Add("Новый актёр");
	return System::Void();
}



System::Void Project1::ActorsForm::ListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	int id = this->listBox1->SelectedIndex;
	if (id == -1)
	{
		MessageBox::Show("Не выбран элемент", "Ошибка!");
		return System::Void();
	}
	FillWithActor(actors[id]);
	return System::Void();
}



System::Void Project1::ActorsForm::Load_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->listBox1->Items->Clear();
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	AddingFIle file("actors.txt");
	N_a = file.actor(&actors);
	/*
	AddingFIle* file;
+	file = AddingFIle::createAdd(act_i)*/
	WriteActors();
	return System::Void();
}

System::Void Project1::ActorsForm::Del_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	int del_ind = this->listBox1->SelectedIndex;
	if (N_a == 1)
	{
		this->listBox1->Items->Clear();
		this->listBox1->SelectedIndex = -1;
		this->id_num->Text = "0";
		this->name_text->Text = "";
		this->sure_text->Text = "";
		this->patr_text->Text = "";
		this->age_num->Value = 18;
		this->edu_text->Text = "";
		this->stage_num->Value = 0;
		this->rew_text->Text = "";
		this->mon_num->Value = 0;
		delete[] actors;
		actors = 0;
		N_a--;
		return System::Void();
	}
	if (!del_from_actors(del_ind))
	{
		MessageBox::Show("Удалить данный элемент не получается", "Ошибка");
		return System::Void();
	}
	WritingFile file2("actors.txt");
	file2.actor(actors, N_a);
	Load_btn_Click(sender, e);
	MessageBox::Show("Элемент успешно удален", "ВАШ ТЕАТР");
	if (del_ind == N_a)
		this->listBox1->SelectedIndex = del_ind - 1;
	else
		this->listBox1->SelectedIndex = del_ind;

	return System::Void();
}

bool Project1::ActorsForm::del_from_actors(int del_ind)
{
	if (del_ind >= N_a || del_ind < 0)
		return false;
	Actor * temp = new Actor[N_a];
	for (int i = 0; i < del_ind; i++)
		temp[i] = actors[i];
	for (int i = del_ind; i < N_a - 1; i++)
		temp[i] = actors[i + 1];
	delete[] actors;
	N_a--;
	actors = new Actor[N_a];
	for (int i = 0; i < N_a; i++)
		actors[i] = temp[i];
	delete[] temp;
	temp = 0;
	return true;
}


