#include "ViewerMenu.h"

using namespace System;
using namespace System::Windows::Forms;

System::Void Project1::ViewerMenu::Exit_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::MainM^ exit_form = gcnew Project1::MainM;
	exit_form->Show();
	Project1::ViewerMenu::Close();
	return System::Void();
}
/*
System::Void Project1::ViewerMenu::List_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::ListPlays^ list_form = gcnew Project1::ListPlays;
	list_form->Show();
	Project1::ViewerMenu::Close();
	return System::Void();
}*/

System::Void Project1::ViewerMenu::Cal_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::CalenderPlays^ cal_form = gcnew Project1::CalenderPlays;
	cal_form->Show();
	cal_form->Start();
	Project1::ViewerMenu::Close();
	return System::Void();
}

System::Void Project1::ViewerMenu::Search_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::SearchForm^ search_form = gcnew Project1::SearchForm;
	search_form->Show();
	Project1::ViewerMenu::Close();
	return System::Void();
}
