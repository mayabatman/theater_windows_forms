#include "CalenderPlays.h"

using namespace System;
using namespace System::Windows::Forms;
SeasonPlay* allplays;

System::Void Project1::CalenderPlays::Back_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::ViewerMenu^ form = gcnew Project1::ViewerMenu;
	form->Show();
	Project1::CalenderPlays::Close();
	return System::Void();
}

System::Void Project1::CalenderPlays::Search_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::SearchForm^ form = gcnew Project1::SearchForm;
	form->Show();
	Project1::CalenderPlays::Close();
	return System::Void();
}

System::Void Project1::CalenderPlays::Exit_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::MainM^ form = gcnew Project1::MainM;
	form->Show();
	Project1::CalenderPlays::Close();
	return System::Void();
}

System::Void Project1::CalenderPlays::More_Click(System::Object^ sender, System::EventArgs^ e)
{
	int ind_table = this->calend_table->CurrentCell->RowIndex;
	int ind_play = allplays[ind_table].get_plid();
	Project1::AboutPlay^ form = gcnew Project1::AboutPlay;
	form->Show();
	form->Load_Form(ind_play);
	return System::Void();
}

System::Void Project1::CalenderPlays::Buy_Click(System::Object^ sender, System::EventArgs^ e)
{
	int ind_table = this->calend_table->CurrentCell->RowIndex;
	int ind_play = allplays[ind_table].get_id();
	Project1::BuyTicket^ form = gcnew Project1::BuyTicket;
	form->Show();
	form->BuyTicket_Load(sender, e, ind_play);
	//Project1::CalenderPlays::Hide();
	return System::Void();
}

/*
System::Void Project1::CalenderPlays::List_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::ListPlays^ form = gcnew Project1::ListPlays;
	form->Show();
	Project1::CalenderPlays::Hide();
	return System::Void();
}*/

System::Void Project1::CalenderPlays::Start()
{
	Season* seas;
	AddingFIle sea_file("seasons.txt");
	int N_seas = sea_file.season(&seas);
	int N = 0;
	for (int i = 0; i < N_seas; i++) //в этом цикле в массив записываются все события
	{
		SeasonPlay* temp;
		SeasonPlay* containplays;
		containplays = seas[i].get_plays();
		int num = seas[i].get_num();
		temp = new SeasonPlay[N + num];
		for (int j = 0; j < (N); j++)
		{
			temp[j] = allplays[j];
		}
		for (int j = N; j < N + num; j++)
		{
			temp[j] = containplays[j - N];
		}
		N += num;
		allplays = new SeasonPlay[N];
		for (int j = 0; j < (N); j++)
		{
			allplays[j] = temp[j];
		}
	}
	if (N < 1)
	{
		MessageBox::Show("Ошибка в количестве строк", "Ошибка при создании таблицы");
		N = 1;
	}
	this->calend_table->RowCount = N;
	this->calend_table->ColumnCount = 2;
	this->calend_table->Columns[0]->HeaderText = "Дата";
	this->calend_table->Columns[1]->HeaderText = "Название";
	if (allplays!= 0) {
		for (int i = 0; i < N; i++)
		{
			this->calend_table->Rows[i]->Cells[0]->Value = gcnew System::String(allplays[i].get_date().dat().c_str());
			AddingFIle play_f("plays.txt");
			Play* plays;
			play_f.play(&plays);
			int j = allplays[i].get_plid();
			Play the_play = play_f.find_play(j);
			this->calend_table->Rows[i]->Cells[1]->Value = gcnew System::String(the_play.get_name().c_str());
		}
	}
	return System::Void();
}
