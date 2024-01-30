#include "Statistica.h"

using namespace System;
using namespace System::Windows::Forms;

System::Void Project1::Statistica::Back_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::AdminMenu^ form = gcnew Project1::AdminMenu;
	form->Show();
	Project1::Statistica::Hide();
	return System::Void();
}

System::Void Project1::Statistica::Seasons_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::SeasonsForm^ form = gcnew Project1::SeasonsForm;
	form->Show();
	Project1::Statistica::Hide();
	return System::Void();
}

System::Void Project1::Statistica::Plays_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::PlaysForm^ form = gcnew Project1::PlaysForm;
	form->Show();
	Project1::Statistica::Hide();
	return System::Void();
}

System::Void Project1::Statistica::Directors_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::DirectorsForm^ form = gcnew Project1::DirectorsForm;
	form->Show();
	Project1::Statistica::Hide();
	return System::Void();
}

System::Void Project1::Statistica::Actors_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::ActorsForm^ form = gcnew Project1::ActorsForm;
	form->Show();
	Project1::Statistica::Hide();
	return System::Void();
}
