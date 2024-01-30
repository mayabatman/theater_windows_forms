#include "AboutPlay.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Drawing::Imaging;


Play the_play;

System::Void Project1::AboutPlay::Exit_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::AboutPlay::Close();
	return System::Void();
}

System::Void Project1::AboutPlay::Buy_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::BuyTicket^ form = gcnew Project1::BuyTicket;
	form->Show();
	return System::Void();
}

System::Void Project1::AboutPlay::Load_Form(int index_play)
{
	AddingFIle play_file;
	the_play = play_file.find_play(index_play);
	FillPlay();
	return System::Void();
}

System::Void Project1::AboutPlay::FillPlay()
{
	this->play_name->Text = gcnew System::String(the_play.get_name().c_str());
	this->play_dir->Text = gcnew System::String(the_play.get_dir().get_FIO().c_str());
	this->play_ann->Text = gcnew System::String(the_play.get_ann().c_str());
	vector<Trupp_role> trup = the_play.get_trup();
	for (int i = 0; i < trup.size(); i++)
	{
		String^ str = gcnew System::String(trup[i].get_role().c_str());
		str += "  -  " + gcnew System::String(trup[i].get_act().get_FIO().c_str()) + "\n";
		this->play_trupp->Text += str;

	}
	string adr1 = to_string(the_play.get_id()) + ".jpg";
	String^ adr2 = System::Convert::ToString(the_play.get_id()) + ".jpg";
	Checking ch;
	if(ch.file_exist(adr1))
		this->play_img->Image = gcnew Bitmap(adr2);
	return System::Void();
}
