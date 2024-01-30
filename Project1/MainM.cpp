#include "MainM.h"
//#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

//Actor* actors;

/*void start()
{
	AddFromFile file("actors.txt");
	file.actor(actors);
}*/

[STAThread]
int Main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//start();

	Project1::MainM form;
	Application::Run(% form);
	return 0;
}



System::Void Project1::MainM::Adm_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->password->Text == this->pass)
	{
		Project1::AdminMenu^ a_form = gcnew Project1::AdminMenu();
		a_form->Show();
		Project1::MainM::Hide();
	}
	else
	{
		this->error_text->Show();
		this->error_text->Text = "Произошла ошибочка!\nПопробуйте ещё разок)";
	}
}

System::Void Project1::MainM::View_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	Project1::ViewerMenu^ v_form = gcnew Project1::ViewerMenu();
	v_form->Show();
	Project1::MainM::Hide();
}

System::Void Project1::MainM::Exit_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::MainM::Close();
	return System::Void();
}
