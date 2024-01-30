#include "AdminMenu.h"

using namespace System;
using namespace System::Windows::Forms;

System::Void Project1::AdminMenu::Back_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::MainM^ form = gcnew Project1::MainM;
	form->Show();
	Project1::AdminMenu::Close();
	return System::Void();
}

System::Void Project1::AdminMenu::Seasons_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::SeasonsForm^ form = gcnew Project1::SeasonsForm;
	form->Show();
	Project1::AdminMenu::Close();
	return System::Void();
}

System::Void Project1::AdminMenu::Plays_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::PlaysForm^ form = gcnew Project1::PlaysForm;
	form->Show();
	Project1::AdminMenu::Close();
	return System::Void();
}

System::Void Project1::AdminMenu::Directors_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::DirectorsForm^ form = gcnew Project1::DirectorsForm;
	form->Show();
	Project1::AdminMenu::Close();
	return System::Void();
}

System::Void Project1::AdminMenu::Actors_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::ActorsForm^ form = gcnew Project1::ActorsForm;
	form->Show();
	Project1::AdminMenu::Close();
	return System::Void();
}
/*
System::Void Project1::AdminMenu::Statistic_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::Statistica^ form = gcnew Project1::Statistica;
	form->Show();
	Project1::AdminMenu::Close();
	return System::Void();
}*/
