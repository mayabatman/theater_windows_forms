#include "SearchForm.h"
#include <Windows.h>
using namespace System;
using namespace System::Windows::Forms;

SeasonPlay* FoundPlays;

System::Void Project1::SearchForm::Back_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::ViewerMenu^ form = gcnew Project1::ViewerMenu;
	form->Show();
	Project1::SearchForm::Close();
	return System::Void();
}

System::Void Project1::SearchForm::Cal_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::CalenderPlays^ form = gcnew Project1::CalenderPlays;
	form->Show();
	form->Start();
	Project1::SearchForm::Close();
	return System::Void();
}
/*
System::Void Project1::SearchForm::List_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::ListPlays^ form = gcnew Project1::ListPlays;
	form->Show();
	Project1::SearchForm::Hide();
	return System::Void();
}*/

System::Void Project1::SearchForm::Exit_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::MainM^ form = gcnew Project1::MainM;
	form->Show();
	Project1::SearchForm::Close();
	return System::Void();
}

System::Void Project1::SearchForm::Search_Click(System::Object^ sender, System::EventArgs^ e)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	using namespace System::Runtime::InteropServices;
	string search_text = (const char*)(Marshal::StringToHGlobalAnsi(this->search_name->Text).ToPointer());
	if (search_text == "" || search_text == " ")
	{
		MessageBox::Show("Ошибка введённого для поиска текста", "ОЙ");
		return System::Void();
	}

	if (this->act_radio->Checked)
	{
		Finding* find_act = find_act->createFind(act_find_id);
		find_act->findID(search_text);
		int n = 0;
		SeasonPlay* plays;
		plays = find_act->findplays(&n);
		if (n == 0)
		{
			MessageBox::Show("Спектакль не найден!", "Очень жаль");
			return System::Void();
		}
		FillList(plays, n);
	}
	if (this->dir_radio->Checked)
	{
		Finding* find_dir = find_dir->createFind(dir_find_id);
		find_dir->findID(search_text);
		int n = 0;
		SeasonPlay* plays;
		plays = find_dir->findplays(&n);
		if (n == 0)
		{
			MessageBox::Show("Спектакль не найден!", "Очень жаль");
			return System::Void();
		}
		FillList(plays, n);
	}
	if (this->play_radio->Checked)
	{
		Finding* find_play = find_play->createFind(play_find_id);
		find_play->findID(search_text);
		int n = 0;
		FoundPlays = find_play->findplays(&n);
		if (n == 0)
		{
			MessageBox::Show("Спектакль не найден!", "Очень жаль");
			return System::Void();
		}
		FillList(FoundPlays, n);
	}
	return System::Void();
}

System::Void Project1::SearchForm::FillList(SeasonPlay* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		AddingFIle to_find;
		Play pl = to_find.find_play(p[i].get_plid());
		String^ str = "(" + System::Convert::ToString(p[i].get_id()) + ")  ";
		str += gcnew System::String(p[i].get_date().dat().c_str()) + "   ";
		str += gcnew System::String(pl.get_name().c_str());
		this->plays_list->Items->Add(str);
	}
	return System::Void();
}

System::Void Project1::SearchForm::More_Click(System::Object^ sender, System::EventArgs^ e)
{
	int ind_list = this->plays_list->SelectedIndex;
	int ind_play = FoundPlays[ind_list].get_plid();
	Project1::AboutPlay^ form = gcnew Project1::AboutPlay;
	form->Show();
	form->Load_Form(ind_play);
	return System::Void();
}

System::Void Project1::SearchForm::Buy_Click(System::Object^ sender, System::EventArgs^ e)
{
	int ind_list = this->plays_list->SelectedIndex;
	int ind_play = FoundPlays[ind_list].get_id();
	Project1::BuyTicket^ form = gcnew Project1::BuyTicket;
	form->Show();
	form->BuyTicket_Load(sender, e, ind_play);
	return System::Void();
}
