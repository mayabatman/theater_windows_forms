#include "DirectorsForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

Director* dirs = 0;
int N_d = 0;

System::Void Project1::DirectorsForm::Back_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::AdminMenu^ form = gcnew Project1::AdminMenu;
	form->Show();
	Project1::DirectorsForm::Close();
	return System::Void();
}

System::Void Project1::DirectorsForm::Seasons_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::SeasonsForm^ form = gcnew Project1::SeasonsForm;
	form->Show();
	Project1::DirectorsForm::Close();
	return System::Void();
}

System::Void Project1::DirectorsForm::Plays_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::PlaysForm^ form = gcnew Project1::PlaysForm;
	form->Show();
	Project1::DirectorsForm::Close();
	return System::Void();
}

System::Void Project1::DirectorsForm::Actors_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::ActorsForm^ form = gcnew Project1::ActorsForm;
	form->Show();
	Project1::DirectorsForm::Close();
	return System::Void();
}
/*
System::Void Project1::DirectorsForm::Statistic_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::Statistica^ form = gcnew Project1::Statistica;
	form->Show();
	Project1::DirectorsForm::Hide();
	return System::Void();
}*/




System::Void Project1::DirectorsForm::WriteDirs()
{
	for (int i = 0; i < N_d; i++)
	{
		String^ str = System::Convert::ToString(dirs[i].get_id());
		str = str + " (" + gcnew System::String(dirs[i].get_name().c_str()) + ")";
		this->listBox1->Items->Add(str);
	}
	return System::Void();
}

System::Void Project1::DirectorsForm::FillWithDir(Director dir)
{
	this->id_num->Text = System::Convert::ToString(dir.get_id());
	this->name_text->Text = gcnew System::String(dir.get_name().c_str());
	this->sure_text->Text = gcnew System::String(dir.get_sure().c_str());
	this->patr_text->Text = gcnew System::String(dir.get_patr().c_str());
	this->age_num->Value = dir.get_age();
	this->edu_text->Text = gcnew System::String(dir.get_edu().c_str());
	this->stage_num->Value = dir.get_exp();
	this->rew_text->Text = gcnew System::String(dir.get_rew().c_str());
	this->mon_num->Value = dir.get_mon();


	return System::Void();
}

Director Project1::DirectorsForm::ReWriteDir()
{
	Director dir;
	dir.set_id(System::Convert::ToInt32(this->id_num->Text));
	dir.set_age(System::Convert::ToInt32(this->age_num->Value));
	dir.set_exp(System::Convert::ToInt32(this->stage_num->Value));
	dir.set_mon(System::Convert::ToInt32(this->mon_num->Value));
	using namespace System::Runtime::InteropServices;
	dir.set_name((const char*)(Marshal::StringToHGlobalAnsi(this->name_text->Text).ToPointer()));
	dir.set_sure((const char*)(Marshal::StringToHGlobalAnsi(this->sure_text->Text).ToPointer()));
	dir.set_patr((const char*)(Marshal::StringToHGlobalAnsi(this->patr_text->Text).ToPointer()));
	dir.set_edu((const char*)(Marshal::StringToHGlobalAnsi(this->edu_text->Text).ToPointer()));
	dir.set_rew((const char*)(Marshal::StringToHGlobalAnsi(this->rew_text->Text).ToPointer()));

	return dir;
}

System::Void Project1::DirectorsForm::Save_Click(System::Object^ sender, System::EventArgs^ e)
{
	int id_new = this->listBox1->SelectedIndex;
	if (id_new == -1)
	{
		MessageBox::Show("Не выбран элемент для сохранения", "Ошибка!");
		return System::Void();
	}
	dirs[id_new] = ReWriteDir();
	WritingFile file2("directors.txt");
	file2.director(dirs, N_d);
	MessageBox::Show("Изменения успешно сохранены", "ВАШ ТЕАТР");
	Load_btn_Click(sender, e);
	return System::Void();
}

System::Void Project1::DirectorsForm::Add_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Director new_dir;
	N_d++;


	if (N_d == 1)
	{
		dirs = new Director[1];
		dirs[0] = new_dir;
		dirs[0].set_id(1);
	}
	else
	{
		//----------------------------------------------
		Director* temp = new Director[N_d];
		for (int i = 0; i < N_d - 1; i++)
			temp[i] = dirs[i];
		temp[N_d - 1] = new_dir;
		delete[] dirs;

		dirs = new Director[N_d];
		for (int i = 0; i < N_d; i++)
			dirs[i] = temp[i];
		delete[] temp;
		temp = 0;

		int id = dirs[N_d - 2].get_id();
		dirs[N_d - 1].set_id(++id);
	}
	//----------------------------------------------
	this->listBox1->Items->Add("Новый режиссёр");
	return System::Void();
}

System::Void Project1::DirectorsForm::ListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	int id = this->listBox1->SelectedIndex;
	if (id == -1)
	{
		MessageBox::Show("Не выбран элемент", "Ошибка!");
		return System::Void();
	}
	FillWithDir(dirs[id]);
	return System::Void();
}



System::Void Project1::DirectorsForm::Load_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->listBox1->Items->Clear();
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	AddingFIle file("directors.txt");
	N_d = file.director(&dirs);
	WriteDirs();
	return System::Void();
}

System::Void Project1::DirectorsForm::Del_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	int del_ind = this->listBox1->SelectedIndex;
	if (N_d == 1)
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
		delete[] dirs;
		dirs = 0;
		N_d--;
		return System::Void();
	}
	if (!del_from_dirs(del_ind))
	{
		MessageBox::Show("Удалить данный элемент не получается", "Ошибка");
		return System::Void();
	}
	WritingFile file2("directors.txt");
	file2.director(dirs, N_d);
	Load_btn_Click(sender, e);
	MessageBox::Show("Элемент успешно удален", "ВАШ ТЕАТР");
	if (del_ind == N_d)
		this->listBox1->SelectedIndex = del_ind - 1;
	else
		this->listBox1->SelectedIndex = del_ind;

	return System::Void();
}

bool Project1::DirectorsForm::del_from_dirs(int del_ind)
{
	if (del_ind >= N_d || del_ind < 0)
		return false;
	Director* temp = new Director[N_d];
	for (int i = 0; i < del_ind; i++)
		temp[i] = dirs[i];
	for (int i = del_ind; i < N_d - 1; i++)
		temp[i] = dirs[i + 1];
	delete[] dirs;
	N_d--;
	dirs = new Director[N_d];
	for (int i = 0; i < N_d; i++)
		dirs[i] = temp[i];
	delete[] temp;
	temp = 0;
	return true;
}
