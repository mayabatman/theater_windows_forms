#include "ListPlays.h"

using namespace System;
using namespace System::Windows::Forms;

System::Void Project1::ListPlays::Back_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::ViewerMenu^ form = gcnew Project1::ViewerMenu;
	form->Show();
	Project1::ListPlays::Hide();
	return System::Void();
}

System::Void Project1::ListPlays::Cal_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::CalenderPlays^ form = gcnew Project1::CalenderPlays;
	form->Show();
	Project1::ListPlays::Hide();
	return System::Void();
}

System::Void Project1::ListPlays::Search_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::SearchForm^ form = gcnew Project1::SearchForm;
	form->Show();
	Project1::ListPlays::Hide();
	return System::Void();
}

System::Void Project1::ListPlays::Exit_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::ListPlays::Close();
	return System::Void();
}

System::Void Project1::ListPlays::Buy_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::BuyTicket^ form = gcnew Project1::BuyTicket;
	form->Show();
	return System::Void();
}

System::Void Project1::ListPlays::More_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::AboutPlay^ form = gcnew Project1::AboutPlay;
	form->Show();
	return System::Void();
}
