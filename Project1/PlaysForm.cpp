#include "PlaysForm.h"
#include <Windows.h>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

Play* plays =0;
int N_pl;

bool change = false;
bool built = false;

System::Void Project1::PlaysForm::Back_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::AdminMenu^ form = gcnew Project1::AdminMenu;
	form->Show();
	Project1::PlaysForm::Close();
	return System::Void();
}

System::Void Project1::PlaysForm::Seasons_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::SeasonsForm^ form = gcnew Project1::SeasonsForm;
	form->Show();
	Project1::PlaysForm::Close();
	return System::Void();
}

System::Void Project1::PlaysForm::Directors_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::DirectorsForm^ form = gcnew Project1::DirectorsForm;
	form->Show();
	Project1::PlaysForm::Close();
	return System::Void();
}

System::Void Project1::PlaysForm::Actors_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::ActorsForm^ form = gcnew Project1::ActorsForm;
	form->Show();
	Project1::PlaysForm::Close();
	return System::Void();
}
/*
System::Void Project1::PlaysForm::Statistic_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::Statistica^ form = gcnew Project1::Statistica;
	form->Show();
	Project1::PlaysForm::Hide();
	return System::Void();
}*/

System::Void Project1::PlaysForm::Load_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->listBox1->Items->Clear();
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	AddingFIle file("plays.txt");
	N_pl = file.play(&plays);
	WritePlays(N_pl);
	WriteComboDir();
	return System::Void();
}

System::Void Project1::PlaysForm::WriteComboDir()
{
	this->dir_combo->Items->Clear();
	AddingFIle file("directors.txt");
	Director* dirs;
	int n_d = file.director(&dirs);
	for (int i = 0; i < n_d; i++)
	{
		String^ str = System::Convert::ToString(dirs[i].get_id());
		str = str + " (" + gcnew System::String(dirs[i].get_name().c_str()) + ")";
		this->dir_combo->Items->Add(str);
	}
	return System::Void();
}

System::Void Project1::PlaysForm::WritePlays(int n)
{
	for (int i = 0; i < n; i++)
	{
		String^ str = System::Convert::ToString(plays[i].get_id());
		str = str + " (" + gcnew System::String(plays[i].get_name().c_str()) + ")";
		this->listBox1->Items->Add(str);
	}
	return System::Void();
}

System::Void Project1::PlaysForm::ListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	int id = this->listBox1->SelectedIndex;
	//AddingFIle file("plays.txt");
	//N_pl = file.play(&plays);
	if(id >= 0 && id < N_pl)
	FillWithPlay(plays[id]);
	return System::Void();
}

int Project1::PlaysForm::which_director(Play play) 
{
	AddingFIle d_f("directors.txt");
	Director* dirs;
	int n_d = d_f.director(&dirs);
	for (int i = 0; i < n_d; i++)
	{
		if (dirs[i].get_id() == play.get_dir().get_id())
			return i;
	}
	return -1;
}


System::Void Project1::PlaysForm::FillWithPlay(Play play)
{
	this->id_num->Text = System::Convert::ToString(play.get_id());
	int index_dir = which_director(play);
	this->dir_combo->SelectedIndex = index_dir;
	this->play_name->Clear();
	this->play_name->Text = gcnew System::String(play.get_name().c_str());
	this->annotation->Clear();
	this->annotation->Text = gcnew System::String(play.get_ann().c_str());
	BuildTable();
	return System::Void();
}

System::Void Project1::PlaysForm::BuildTable()
{
	built = false;
	int k = System::Convert::ToInt32(this->id_num->Text);
	String^ adress = "trupp_" + k + ".txt";
	using namespace System::Runtime::InteropServices;
	string adr = (const char*)(Marshal::StringToHGlobalAnsi(adress).ToPointer());
	AddingFIle file(adr);
	vector<Trupp_role> roles;
	int NR = file.trupp(&roles);
	if (NR < 1)
	{
		NR = 1;
	}
	this->trupp_table->RowCount = NR;
	this->trupp_table->ColumnCount = 3;
	this->trupp_table->Columns[0]->HeaderText = "Роль";
	this->trupp_table->Columns[1]->HeaderText = "Актёр";
	this->trupp_table->Columns[2]->HeaderText = "План";
	if (!roles.empty()) {
		for (int i = 0; i < NR; i++)
		{
			this->trupp_table->Rows[i]->Cells[0]->Value = gcnew System::String(roles[i].get_role().c_str());
			String^ actor = System::Convert::ToString(roles[i].get_act().get_id()) + " (" + gcnew System::String(roles[i].get_act().get_name().c_str()) + ")";
			this->trupp_table->Rows[i]->Cells[1]->Value = actor;
			this->trupp_table->Rows[i]->Cells[2]->Value = System::Convert::ToString(roles[i].get_lev());
		}
	}
	/*else
	{
		this->trupp_table->Rows[i]->Cells[0]->Value 
	}*/
	built = true;

	return System::Void();
}

System::Void Project1::PlaysForm::Save_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	int id_new = this->listBox1->SelectedIndex;
	if (plays == 0 || id_new ==-1)
	{
		MessageBox::Show("Мы не знаем, что сохранять", "Ой!");
		return System::Void();
	}
	plays[id_new] = ReWritePlay(plays[id_new]);
	WritingFile file2("plays.txt");
	file2.play(plays, N_pl);
	if(change)
		ListBox1_SelectedIndexChanged(sender,e);
	else {
		MessageBox::Show("Изменения успешно сохранены", "ВАШ ТЕАТР");
		Load_btn_Click(sender, e);
	}
	change = false;
	this->listBox1->SelectedIndex = id_new;
	return System::Void();
}

Play Project1::PlaysForm::ReWritePlay(Play play)
{
	play.set_id(System::Convert::ToInt32(this->id_num->Text));
	using namespace System::Runtime::InteropServices;
	AddingFIle d_f("directors.txt");
	if (this->dir_combo->SelectedItem == -1)
	{
		MessageBox::Show("Ничего не выбрано!", "Ошибчик!");
		return play;
	}
	String^ str = (this->dir_combo->SelectedItem->ToString());
	int num_dir = atoi((const char*)(Marshal::StringToHGlobalAnsi(str).ToPointer()));
	Director dir = d_f.find_dir(num_dir);
	play.set_dir(dir);
	play.set_name((const char*)(Marshal::StringToHGlobalAnsi(this->play_name->Text).ToPointer()));
	play.set_ann((const char*)(Marshal::StringToHGlobalAnsi(this->annotation->Text).ToPointer()));
	string tr = "trupp_" + to_string(play.get_id()) + ".txt";
	AddingFIle t_f(tr);
	vector<Trupp_role> trupp;
	int n_t = t_f.trupp(&trupp);
	play.set_trup(ReWriteTrupp(trupp));
	return play;
}

vector<Trupp_role> Project1::PlaysForm::ReWriteTrupp(vector<Trupp_role> trupp)
{
	vector<Trupp_role> trup;
	int n = this->trupp_table->RowCount;
	trup.resize(n);
	for (int i = 0; i < n; i++)
	{
		String^ temp = System::Convert::ToString(this->trupp_table->Rows[i]->Cells[1]->Value);
		using namespace System::Runtime::InteropServices;
		char* temp2 = (char*)(Marshal::StringToHGlobalAnsi(temp).ToPointer());
		int id_act = atoi(temp2);
		AddingFIle a_f("actros.txt");
		Actor actor = a_f.find_act(id_act);
		if (actor.get_id() == 0 && i != n - 1)
		{
			String^ error = "В базе данных не найден актёр из строчки " + (i+1);
			MessageBox::Show(error, "Ошибка!");
			//change = false;
		}
		else trup[i].set_act(actor);
		trup[i].set_id(System::Convert::ToInt32(this->id_num->Text));
		trup[i].set_lev(System::Convert::ToInt32(this->trupp_table->Rows[i]->Cells[2]->Value));
		
		
		
		String^ rol = System::Convert::ToString(this->trupp_table->Rows[i]->Cells[0]->Value);
		trup[i].set_role((const char*)(Marshal::StringToHGlobalAnsi(rol).ToPointer()));
	}
	string s = "trupp_" + std::to_string(trup[0].get_id()) + ".txt";
	WritingFile t_f(s);
	t_f.trupp(trup, n);
	return trup;
}

System::Void Project1::PlaysForm::Add_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Play new_play;
	N_pl++;


	if (N_pl == 1)
	{
		plays = new Play[1];
		plays[0] = new_play;
		plays[0].set_id(1);
	}
	else
	{
		//----------------------------------------------
		Play* temp = new Play[N_pl];
		for (int i = 0; i < N_pl - 1; i++)
			temp[i] = plays[i];
		temp[N_pl - 1] = new_play;
		delete[] plays;

		plays = new Play[N_pl];
		for (int i = 0; i < N_pl; i++)
			plays[i] = temp[i];
		delete[] temp;
		temp = 0;

		int id = plays[N_pl - 2].get_id();
		plays[N_pl - 1].set_id(++id);
	}
	//----------------------------------------------
	this->listBox1->Items->Add("Новый спектакль");
	return System::Void();
}

System::Void Project1::PlaysForm::Trupp_table_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e)
{
	if (built) {
		Trupp_role empt;
		int i = this->trupp_table->RowCount - 1;
		this->trupp_table->Rows[i]->Cells[0]->Value = gcnew System::String(empt.get_role().c_str());
		String^ actor = System::Convert::ToString(empt.get_act().get_id()) + " (" + gcnew System::String(empt.get_act().get_name().c_str()) + ")";
		this->trupp_table->Rows[i]->Cells[1]->Value = actor;
		this->trupp_table->Rows[i]->Cells[2]->Value = System::Convert::ToString(empt.get_lev());
		return System::Void();
	}
}

System::Void Project1::PlaysForm::Del_row_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!built)
	{
		MessageBox::Show("Таблица ещё не была построена", "Ой");
		return System::Void();
	}
	this->trupp_table->AllowUserToDeleteRows = false;
	int id = this->trupp_table->CurrentRow->Index;
	if(id != this->trupp_table->RowCount-1)
		this->trupp_table->Rows->RemoveAt(id);
	else
	{
		MessageBox::Show("Невозможно удалить последнюю строку", "вы поступаете неправильно");
	}
	return System::Void();
}

System::Void Project1::PlaysForm::Del_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	int del_ind = this->listBox1->SelectedIndex;
	if (N_pl == 1)
	{
		this->listBox1->Items->Clear();
		this->listBox1->SelectedIndex = -1;
		this->id_num->Text = "0";
		this->dir_combo->SelectedIndex = -1;
		this->play_name->Clear();
		this->annotation->Clear();
		this->trupp_table->RowCount = 1;
		delete[] plays;
		plays = 0;
		N_pl--;
		return System::Void();
	}
	if (!del_from_plays(del_ind))
	{
		MessageBox::Show("Удалить данный элемент не получается", "Ошибка");
		return System::Void();
	}
	string adr = "trupp_" + std::to_string(del_ind+1) + ".txt";
	if (remove(adr.c_str()) != 0)
		MessageBox::Show("Error deleting file", "oh");
	else
		MessageBox::Show("File successfully deleted","yeeee");
	WritingFile file2("plays.txt");
	file2.play(plays, N_pl);
	Load_btn_Click(sender, e);
	MessageBox::Show("Элемент успешно удален", "ВАШ ТЕАТР");
	if(del_ind == N_pl)
		this->listBox1->SelectedIndex = del_ind-1;
	else
		this->listBox1->SelectedIndex = del_ind;

	return System::Void();
}

bool Project1::PlaysForm::del_from_plays(int del_ind)
{
	if (del_ind >= N_pl || del_ind < 0)
		return false;
	Play * temp = new Play[N_pl];
	for (int i = 0; i < del_ind; i++)
		temp[i] = plays[i];
	for (int i = del_ind; i < N_pl - 1; i++)
		temp[i] = plays[i + 1];
	delete[] plays;
	N_pl--;
	plays = new Play[N_pl];
	for (int i = 0; i < N_pl; i++)
		plays[i] = temp[i];
	delete[] temp;
	temp = 0;
	return true;
}