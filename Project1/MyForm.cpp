

#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main_myForm(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::MyForm form;
	Application::Run(% form);
	return 0;
}
/*
Worker* workers;

System::Void Project1::MyForm::Show_workers(System::Object^ sender, System::EventArgs^ e)
{
	/*workers = new Worker[2];
	workers[0].set_name("Alex");
	workers[1].set_name("Sasha");
	this->listBox1->Items->Add(gcnew String(workers[0].get_name().c_str()));
	this->listBox1->Items->Add(gcnew String(workers[1].get_name().c_str()));
	return System::Void();
}
*/