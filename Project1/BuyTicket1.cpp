#include "BuyTicket1.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

Hall hall;


int Project1::BuyTicket::Turn_Index(int index)
{
	return (index / 10 - 1)*5 + index % 10-1;
}

System::Void Project1::BuyTicket::FillPlaces(Place* pl)
{
	int n = 5;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int index = (i - 1) * 5 + j-1;
			//std::string str = "btn_" + std::to_string(i) + std::to_string(j);
			Button^ b = safe_cast<Button^>(this->panel1->Controls[index]);
			if(pl[index].get_pres())
				b->BackColor = System::Drawing::Color::Aqua;
			else if(pl[index].get_stat())
				b->BackColor = System::Drawing::Color::Red;
			else
				b->BackColor = System::Drawing::Color::White;
			using namespace System::Runtime::InteropServices;
		}
	}
	return System::Void();
}

System::Void Project1::BuyTicket::SetPayment(Place* pl)
{
	int summ = 0;
	
	for (int i = 0; i < 25; i++)
	{
		if (pl[i].get_pres())
		{
			summ += pl[i].get_mon();
		}
	}
	this->payment->Text = System::Convert::ToString(summ);
	return System::Void();
}

System::Void Project1::BuyTicket::BuyTicket_Load(System::Object^ sender, System::EventArgs^ e, int id_seaplay)
{
	Place* places;
	this->play_id->Text = System::Convert::ToString( id_seaplay);
	string adr = "places_" + to_string(id_seaplay) + ".txt";
	AddingFIle file(adr);
	int n = file.place(&places);
	if (n == 0)
	{
		FillPlaces(hall.get_plac());
		return System::Void();
	}
	FillPlaces(places);
	hall.set_plac(places);
	hall.set_N(n);	
}

System::Void Project1::BuyTicket::Pay()
{
	Place* pl = hall.get_plac();
	int summ_pay = System::Convert::ToInt32(this->payment->Text);
	if (summ_pay == 0)
	{
		MessageBox::Show("Места не выбраны!", "Ошибка!");
		return System::Void();
	}
	for (int i = 0; i < 25; i++)
	{
		if (pl[i].get_pres())
		{
			pl[i].set_pres(false);
			pl[i].set_stat(true);
		}
	}
	
	int id_pay = which_pay();
	switch (id_pay)
	{
	case 1:
	{
		Pay_office* card_pay;
		CardFactory* cardpay = new CardFactory;
		card_pay = cardpay->createPay();
		if (card_pay->to_pay())
		{
			MessageBox::Show("Оплата по карте успешно проведена!", "Ура!");
			//Project1::BuyTicket::Close();
		}
	}
		break;
	case 2:
	{
		Pay_office* push_pay;
		PushkinFactory* pushpay = new PushkinFactory;
		push_pay = pushpay->createPay();
		if (push_pay->to_pay())
		{
			MessageBox::Show("Оплата по Пушкинской карте успешно проведена!", "Ура!");
			//Project1::BuyTicket::Close();
		}
	}
		break;
	case 3:
	{
		Pay_office* sert_pay;
		SertifFactory* sertpay = new SertifFactory;
		sert_pay = sertpay->createPay();
		if (sert_pay->to_pay())
		{
			MessageBox::Show("Оплата по сертификату успешно проведена!", "Ура!");
			//Project1::BuyTicket::Close();
		}
	}
		break;
	default:
		MessageBox::Show("Произошла ошибка при оплате!", "О нет!");
		break;
	}
	FillPlaces(pl);
	SetPayment(pl);
	hall.set_plac(pl);
	return System::Void();
}

System::Void Project1::BuyTicket::ClearTextBox()
{
	this->name->Text = "";
	this->mail->Text = "";
	this->pay_data->Text = "";
	return System::Void();
}

int Project1::BuyTicket::which_pay()
{
	if (this->card_radio->Checked)
		return 1;
	if (this->pushkin_radio->Checked)
		return 2;
	if (this->sertif_radio->Checked)
		return 3;
	return 0;
}

System::Void Project1::BuyTicket::Esc_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1::BuyTicket::Close();
	return System::Void();
}

System::Void Project1::BuyTicket::SavePlaces()
{
	int num = System::Convert::ToInt32(this->play_id->Text);
	string adr = "places_" + to_string(num) + ".txt";
	WritingFile savefile(adr);
	savefile.places(hall.get_plac(), hall.get_N());
	return System::Void();
}

System::Void Project1::BuyTicket::Buy_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ name = this->name->Text;
	String^ mail = this->mail->Text;
	String^ pay_data = this->pay_data->Text;
	if (name == "")
	{
		MessageBox::Show("Введите имя!", "Погодите...");
		return System::Void();
	}
	if (mail == "")
	{
		MessageBox::Show("Введите почту!", "Погодите...");
		return System::Void();
	}
	if (which_pay() == 0)
	{
		MessageBox::Show("Выберете способ оплаты!", "Погодите...");
		return System::Void();
	}
	if (pay_data == "")
	{
		MessageBox::Show("Введите данные оплаты!", "Погодите...");
		return System::Void();
	}
	Pay();
	ClearTextBox();
	SavePlaces();
	return System::Void();
}

System::Void Project1::BuyTicket::Button_Click(System::Object^ sender, System::EventArgs^ e)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Place* places = hall.get_plac();
	Button^ btn = safe_cast<Button^>(sender);
	int index = Turn_Index(btn->TabIndex);
	if (places[index].get_stat())
	{
		MessageBox::Show("Данное место уже занято", "Увы и ах");
		return System::Void();
	}
	//int price = 0;
	bool pressed = false;
	/*switch (index/10) {
	case 1:
		price = 1500;
		break;
	case 2:
		price = 1200;
		break;
	case 3:
		price = 1000;
		break;
	case 4:
		price = 800;
		break;
	case 5:
		price = 700;
		break;
	default:
		MessageBox::Show("Ошибка выбора места", "Ошибочка");
		return System::Void();
		break;
	}*/
	if (places[index].get_pres()) {
		//btn->BackColor = System::Drawing::Color::White;
		pressed = false;
	}
	else {
		//btn->BackColor = System::Drawing::Color::Aqua;
		pressed = true;
	}

	places[index].set_pres(pressed);
	FillPlaces(places);
	SetPayment(places);
	hall.set_plac(places);
	return System::Void();
}
