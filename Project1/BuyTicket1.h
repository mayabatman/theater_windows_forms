#pragma once

#include "Hall.h"
#include "Place.h"
#include "Pay_office.h"
#include "AddingFIle.h"
#include "WritingFile.h"
#include <string>
#include <iostream>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для BuyTicket
	/// </summary>
	public ref class BuyTicket : public System::Windows::Forms::Form
	{
	public:
		BuyTicket(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~BuyTicket()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ esc_btn;
	protected:

	private: System::Windows::Forms::Button^ buy_btn;
	private: System::Windows::Forms::RadioButton^ card_radio;
	private: System::Windows::Forms::RadioButton^ pushkin_radio;
	private: System::Windows::Forms::RadioButton^ sertif_radio;
	protected:




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lable_data;

	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::TextBox^ mail;
	private: System::Windows::Forms::TextBox^ pay_data;


			 /*
	private: System::Windows::Forms::Button^* btns;
	private: Systen:array<Button^> btns;
	private: int N;*/
	private: System::Windows::Forms::Button^ btn_11;
	private: System::Windows::Forms::Button^ btn_12;
	private: System::Windows::Forms::Button^ btn_13;
	private: System::Windows::Forms::Button^ btn_14;
	private: System::Windows::Forms::Button^ btn_15;
	private: System::Windows::Forms::Button^ btn_25;






	private: System::Windows::Forms::Button^ btn_24;

	private: System::Windows::Forms::Button^ btn_23;

	private: System::Windows::Forms::Button^ btn_22;

	private: System::Windows::Forms::Button^ btn_21;
	private: System::Windows::Forms::Button^ btn_45;


	private: System::Windows::Forms::Button^ btn_44;

	private: System::Windows::Forms::Button^ btn_43;

	private: System::Windows::Forms::Button^ btn_42;

	private: System::Windows::Forms::Button^ btn_41;
	private: System::Windows::Forms::Button^ btn_55;


	private: System::Windows::Forms::Button^ btn_54;

	private: System::Windows::Forms::Button^ btn_53;

	private: System::Windows::Forms::Button^ btn_52;

	private: System::Windows::Forms::Button^ btn_51;

	private: System::Windows::Forms::Button^ btn_35;

	private: System::Windows::Forms::Button^ btn_34;

	private: System::Windows::Forms::Button^ btn_33;

	private: System::Windows::Forms::Button^ btn_32;

	private: System::Windows::Forms::Button^ btn_31;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ payment;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ play_id;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BuyTicket::typeid));
			this->esc_btn = (gcnew System::Windows::Forms::Button());
			this->buy_btn = (gcnew System::Windows::Forms::Button());
			this->card_radio = (gcnew System::Windows::Forms::RadioButton());
			this->pushkin_radio = (gcnew System::Windows::Forms::RadioButton());
			this->sertif_radio = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lable_data = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->mail = (gcnew System::Windows::Forms::TextBox());
			this->pay_data = (gcnew System::Windows::Forms::TextBox());
			this->btn_11 = (gcnew System::Windows::Forms::Button());
			this->btn_12 = (gcnew System::Windows::Forms::Button());
			this->btn_13 = (gcnew System::Windows::Forms::Button());
			this->btn_14 = (gcnew System::Windows::Forms::Button());
			this->btn_15 = (gcnew System::Windows::Forms::Button());
			this->btn_25 = (gcnew System::Windows::Forms::Button());
			this->btn_24 = (gcnew System::Windows::Forms::Button());
			this->btn_23 = (gcnew System::Windows::Forms::Button());
			this->btn_22 = (gcnew System::Windows::Forms::Button());
			this->btn_21 = (gcnew System::Windows::Forms::Button());
			this->btn_45 = (gcnew System::Windows::Forms::Button());
			this->btn_44 = (gcnew System::Windows::Forms::Button());
			this->btn_43 = (gcnew System::Windows::Forms::Button());
			this->btn_42 = (gcnew System::Windows::Forms::Button());
			this->btn_41 = (gcnew System::Windows::Forms::Button());
			this->btn_55 = (gcnew System::Windows::Forms::Button());
			this->btn_54 = (gcnew System::Windows::Forms::Button());
			this->btn_53 = (gcnew System::Windows::Forms::Button());
			this->btn_52 = (gcnew System::Windows::Forms::Button());
			this->btn_51 = (gcnew System::Windows::Forms::Button());
			this->btn_35 = (gcnew System::Windows::Forms::Button());
			this->btn_34 = (gcnew System::Windows::Forms::Button());
			this->btn_33 = (gcnew System::Windows::Forms::Button());
			this->btn_32 = (gcnew System::Windows::Forms::Button());
			this->btn_31 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->payment = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->play_id = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// esc_btn
			// 
			this->esc_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->esc_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->esc_btn->Location = System::Drawing::Point(486, 312);
			this->esc_btn->Name = L"esc_btn";
			this->esc_btn->Size = System::Drawing::Size(75, 37);
			this->esc_btn->TabIndex = 0;
			this->esc_btn->Text = L"отмена";
			this->esc_btn->UseVisualStyleBackColor = false;
			this->esc_btn->Click += gcnew System::EventHandler(this, &BuyTicket::Esc_btn_Click);
			// 
			// buy_btn
			// 
			this->buy_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buy_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buy_btn->Location = System::Drawing::Point(486, 263);
			this->buy_btn->Name = L"buy_btn";
			this->buy_btn->Size = System::Drawing::Size(75, 43);
			this->buy_btn->TabIndex = 1;
			this->buy_btn->Text = L"купить";
			this->buy_btn->UseVisualStyleBackColor = false;
			this->buy_btn->Click += gcnew System::EventHandler(this, &BuyTicket::Buy_Click);
			// 
			// card_radio
			// 
			this->card_radio->AutoSize = true;
			this->card_radio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->card_radio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->card_radio->Location = System::Drawing::Point(12, 266);
			this->card_radio->Name = L"card_radio";
			this->card_radio->Size = System::Drawing::Size(78, 19);
			this->card_radio->TabIndex = 2;
			this->card_radio->TabStop = true;
			this->card_radio->Text = L"По карте";
			this->card_radio->UseVisualStyleBackColor = false;
			// 
			// pushkin_radio
			// 
			this->pushkin_radio->AutoSize = true;
			this->pushkin_radio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->pushkin_radio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pushkin_radio->Location = System::Drawing::Point(12, 299);
			this->pushkin_radio->Name = L"pushkin_radio";
			this->pushkin_radio->Size = System::Drawing::Size(131, 19);
			this->pushkin_radio->TabIndex = 3;
			this->pushkin_radio->TabStop = true;
			this->pushkin_radio->Text = L"Пушкинская карта";
			this->pushkin_radio->UseVisualStyleBackColor = false;
			// 
			// sertif_radio
			// 
			this->sertif_radio->AutoSize = true;
			this->sertif_radio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->sertif_radio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sertif_radio->Location = System::Drawing::Point(12, 332);
			this->sertif_radio->Name = L"sertif_radio";
			this->sertif_radio->Size = System::Drawing::Size(99, 19);
			this->sertif_radio->TabIndex = 4;
			this->sertif_radio->TabStop = true;
			this->sertif_radio->Text = L"Сертификат";
			this->sertif_radio->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(155, 264);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Имя";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(155, 297);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Почта";
			// 
			// lable_data
			// 
			this->lable_data->AutoSize = true;
			this->lable_data->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lable_data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lable_data->Location = System::Drawing::Point(155, 330);
			this->lable_data->Name = L"lable_data";
			this->lable_data->Size = System::Drawing::Size(114, 17);
			this->lable_data->TabIndex = 7;
			this->lable_data->Text = L"Данные оплаты";
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(275, 263);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(181, 20);
			this->name->TabIndex = 8;
			// 
			// mail
			// 
			this->mail->Location = System::Drawing::Point(275, 296);
			this->mail->Name = L"mail";
			this->mail->Size = System::Drawing::Size(181, 20);
			this->mail->TabIndex = 9;
			// 
			// pay_data
			// 
			this->pay_data->Location = System::Drawing::Point(275, 329);
			this->pay_data->Name = L"pay_data";
			this->pay_data->Size = System::Drawing::Size(181, 20);
			this->pay_data->TabIndex = 10;
			// 
			// btn_11
			// 
			this->btn_11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_11->Location = System::Drawing::Point(0, 0);
			this->btn_11->Name = L"btn_11";
			this->btn_11->Size = System::Drawing::Size(39, 24);
			this->btn_11->TabIndex = 11;
			this->btn_11->Text = L"1";
			this->btn_11->UseVisualStyleBackColor = false;
			this->btn_11->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_12
			// 
			this->btn_12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_12->Location = System::Drawing::Point(45, 0);
			this->btn_12->Name = L"btn_12";
			this->btn_12->Size = System::Drawing::Size(39, 24);
			this->btn_12->TabIndex = 12;
			this->btn_12->Text = L"2";
			this->btn_12->UseVisualStyleBackColor = false;
			this->btn_12->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_13
			// 
			this->btn_13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_13->Location = System::Drawing::Point(90, 0);
			this->btn_13->Name = L"btn_13";
			this->btn_13->Size = System::Drawing::Size(39, 24);
			this->btn_13->TabIndex = 13;
			this->btn_13->Text = L"3";
			this->btn_13->UseVisualStyleBackColor = false;
			this->btn_13->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_14
			// 
			this->btn_14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_14->Location = System::Drawing::Point(135, 0);
			this->btn_14->Name = L"btn_14";
			this->btn_14->Size = System::Drawing::Size(39, 24);
			this->btn_14->TabIndex = 14;
			this->btn_14->Text = L"4";
			this->btn_14->UseVisualStyleBackColor = false;
			this->btn_14->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_15
			// 
			this->btn_15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_15->Location = System::Drawing::Point(180, 0);
			this->btn_15->Name = L"btn_15";
			this->btn_15->Size = System::Drawing::Size(39, 24);
			this->btn_15->TabIndex = 15;
			this->btn_15->Text = L"5";
			this->btn_15->UseVisualStyleBackColor = false;
			this->btn_15->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_25
			// 
			this->btn_25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_25->Location = System::Drawing::Point(181, 30);
			this->btn_25->Name = L"btn_25";
			this->btn_25->Size = System::Drawing::Size(39, 24);
			this->btn_25->TabIndex = 25;
			this->btn_25->Text = L"5";
			this->btn_25->UseVisualStyleBackColor = false;
			this->btn_25->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_24
			// 
			this->btn_24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_24->Location = System::Drawing::Point(135, 30);
			this->btn_24->Name = L"btn_24";
			this->btn_24->Size = System::Drawing::Size(39, 24);
			this->btn_24->TabIndex = 24;
			this->btn_24->Text = L"4";
			this->btn_24->UseVisualStyleBackColor = false;
			this->btn_24->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_23
			// 
			this->btn_23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_23->Location = System::Drawing::Point(90, 30);
			this->btn_23->Name = L"btn_23";
			this->btn_23->Size = System::Drawing::Size(39, 24);
			this->btn_23->TabIndex = 23;
			this->btn_23->Text = L"3";
			this->btn_23->UseVisualStyleBackColor = false;
			this->btn_23->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_22
			// 
			this->btn_22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_22->Location = System::Drawing::Point(45, 30);
			this->btn_22->Name = L"btn_22";
			this->btn_22->Size = System::Drawing::Size(39, 24);
			this->btn_22->TabIndex = 22;
			this->btn_22->Text = L"2";
			this->btn_22->UseVisualStyleBackColor = false;
			this->btn_22->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_21
			// 
			this->btn_21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_21->Location = System::Drawing::Point(0, 30);
			this->btn_21->Name = L"btn_21";
			this->btn_21->Size = System::Drawing::Size(39, 24);
			this->btn_21->TabIndex = 21;
			this->btn_21->Text = L"1";
			this->btn_21->UseVisualStyleBackColor = false;
			this->btn_21->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_45
			// 
			this->btn_45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_45->Location = System::Drawing::Point(180, 90);
			this->btn_45->Name = L"btn_45";
			this->btn_45->Size = System::Drawing::Size(39, 24);
			this->btn_45->TabIndex = 45;
			this->btn_45->Text = L"5";
			this->btn_45->UseVisualStyleBackColor = false;
			this->btn_45->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_44
			// 
			this->btn_44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_44->Location = System::Drawing::Point(135, 90);
			this->btn_44->Name = L"btn_44";
			this->btn_44->Size = System::Drawing::Size(39, 24);
			this->btn_44->TabIndex = 44;
			this->btn_44->Text = L"4";
			this->btn_44->UseVisualStyleBackColor = false;
			this->btn_44->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_43
			// 
			this->btn_43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_43->Location = System::Drawing::Point(90, 90);
			this->btn_43->Name = L"btn_43";
			this->btn_43->Size = System::Drawing::Size(39, 24);
			this->btn_43->TabIndex = 43;
			this->btn_43->Text = L"3";
			this->btn_43->UseVisualStyleBackColor = false;
			this->btn_43->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_42
			// 
			this->btn_42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_42->Location = System::Drawing::Point(45, 90);
			this->btn_42->Name = L"btn_42";
			this->btn_42->Size = System::Drawing::Size(39, 24);
			this->btn_42->TabIndex = 42;
			this->btn_42->Text = L"2";
			this->btn_42->UseVisualStyleBackColor = false;
			this->btn_42->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_41
			// 
			this->btn_41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_41->Location = System::Drawing::Point(0, 90);
			this->btn_41->Name = L"btn_41";
			this->btn_41->Size = System::Drawing::Size(39, 24);
			this->btn_41->TabIndex = 41;
			this->btn_41->Text = L"1";
			this->btn_41->UseVisualStyleBackColor = false;
			this->btn_41->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_55
			// 
			this->btn_55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_55->Location = System::Drawing::Point(180, 120);
			this->btn_55->Name = L"btn_55";
			this->btn_55->Size = System::Drawing::Size(39, 24);
			this->btn_55->TabIndex = 55;
			this->btn_55->Text = L"5";
			this->btn_55->UseVisualStyleBackColor = false;
			this->btn_55->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_54
			// 
			this->btn_54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_54->Location = System::Drawing::Point(135, 120);
			this->btn_54->Name = L"btn_54";
			this->btn_54->Size = System::Drawing::Size(39, 24);
			this->btn_54->TabIndex = 54;
			this->btn_54->Text = L"4";
			this->btn_54->UseVisualStyleBackColor = false;
			this->btn_54->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_53
			// 
			this->btn_53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_53->Location = System::Drawing::Point(90, 120);
			this->btn_53->Name = L"btn_53";
			this->btn_53->Size = System::Drawing::Size(39, 24);
			this->btn_53->TabIndex = 53;
			this->btn_53->Text = L"3";
			this->btn_53->UseVisualStyleBackColor = false;
			this->btn_53->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_52
			// 
			this->btn_52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_52->Location = System::Drawing::Point(45, 120);
			this->btn_52->Name = L"btn_52";
			this->btn_52->Size = System::Drawing::Size(39, 24);
			this->btn_52->TabIndex = 52;
			this->btn_52->Text = L"2";
			this->btn_52->UseVisualStyleBackColor = false;
			this->btn_52->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_51
			// 
			this->btn_51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_51->Location = System::Drawing::Point(0, 120);
			this->btn_51->Name = L"btn_51";
			this->btn_51->Size = System::Drawing::Size(39, 24);
			this->btn_51->TabIndex = 51;
			this->btn_51->Text = L"1";
			this->btn_51->UseVisualStyleBackColor = false;
			this->btn_51->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_35
			// 
			this->btn_35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_35->Location = System::Drawing::Point(180, 60);
			this->btn_35->Name = L"btn_35";
			this->btn_35->Size = System::Drawing::Size(39, 24);
			this->btn_35->TabIndex = 35;
			this->btn_35->Text = L"5";
			this->btn_35->UseVisualStyleBackColor = false;
			this->btn_35->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_34
			// 
			this->btn_34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_34->Location = System::Drawing::Point(135, 60);
			this->btn_34->Name = L"btn_34";
			this->btn_34->Size = System::Drawing::Size(39, 24);
			this->btn_34->TabIndex = 34;
			this->btn_34->Text = L"4";
			this->btn_34->UseVisualStyleBackColor = false;
			this->btn_34->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_33
			// 
			this->btn_33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_33->Location = System::Drawing::Point(90, 60);
			this->btn_33->Name = L"btn_33";
			this->btn_33->Size = System::Drawing::Size(39, 24);
			this->btn_33->TabIndex = 33;
			this->btn_33->Text = L"3";
			this->btn_33->UseVisualStyleBackColor = false;
			this->btn_33->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_32
			// 
			this->btn_32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_32->Location = System::Drawing::Point(45, 60);
			this->btn_32->Name = L"btn_32";
			this->btn_32->Size = System::Drawing::Size(39, 24);
			this->btn_32->TabIndex = 32;
			this->btn_32->Text = L"2";
			this->btn_32->UseVisualStyleBackColor = false;
			this->btn_32->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// btn_31
			// 
			this->btn_31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_31->Location = System::Drawing::Point(0, 60);
			this->btn_31->Name = L"btn_31";
			this->btn_31->Size = System::Drawing::Size(39, 24);
			this->btn_31->TabIndex = 31;
			this->btn_31->Text = L"1";
			this->btn_31->UseVisualStyleBackColor = false;
			this->btn_31->Click += gcnew System::EventHandler(this, &BuyTicket::Button_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(288, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 20);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Сцена";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(150, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 13);
			this->label5->TabIndex = 37;
			this->label5->Text = L"1 ряд";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(150, 84);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 38;
			this->label6->Text = L"2 ряд";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(150, 114);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 13);
			this->label7->TabIndex = 39;
			this->label7->Text = L"3 ряд";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(150, 144);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 13);
			this->label8->TabIndex = 40;
			this->label8->Text = L"4 ряд";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(150, 174);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 42;
			this->label10->Text = L"5 ряд";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(147, 218);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 17);
			this->label9->TabIndex = 43;
			this->label9->Text = L"Сумма:";
			// 
			// payment
			// 
			this->payment->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->payment->Location = System::Drawing::Point(275, 213);
			this->payment->Name = L"payment";
			this->payment->Size = System::Drawing::Size(181, 23);
			this->payment->TabIndex = 44;
			this->payment->Text = L"0";
			this->payment->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(428, 54);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 13);
			this->label12->TabIndex = 45;
			this->label12->Text = L"1500";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(428, 84);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 13);
			this->label13->TabIndex = 46;
			this->label13->Text = L"1200";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(428, 114);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(31, 13);
			this->label14->TabIndex = 47;
			this->label14->Text = L"1000";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(431, 144);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(25, 13);
			this->label15->TabIndex = 48;
			this->label15->Text = L"800";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(431, 174);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(25, 13);
			this->label16->TabIndex = 49;
			this->label16->Text = L"500";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btn_11);
			this->panel1->Controls->Add(this->btn_12);
			this->panel1->Controls->Add(this->btn_13);
			this->panel1->Controls->Add(this->btn_14);
			this->panel1->Controls->Add(this->btn_15);
			this->panel1->Controls->Add(this->btn_21);
			this->panel1->Controls->Add(this->btn_22);
			this->panel1->Controls->Add(this->btn_23);
			this->panel1->Controls->Add(this->btn_24);
			this->panel1->Controls->Add(this->btn_25);
			this->panel1->Controls->Add(this->btn_31);
			this->panel1->Controls->Add(this->btn_32);
			this->panel1->Controls->Add(this->btn_33);
			this->panel1->Controls->Add(this->btn_34);
			this->panel1->Controls->Add(this->btn_35);
			this->panel1->Controls->Add(this->btn_41);
			this->panel1->Controls->Add(this->btn_42);
			this->panel1->Controls->Add(this->btn_43);
			this->panel1->Controls->Add(this->btn_44);
			this->panel1->Controls->Add(this->btn_45);
			this->panel1->Controls->Add(this->btn_51);
			this->panel1->Controls->Add(this->btn_52);
			this->panel1->Controls->Add(this->btn_53);
			this->panel1->Controls->Add(this->btn_54);
			this->panel1->Controls->Add(this->btn_55);
			this->panel1->Location = System::Drawing::Point(202, 48);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(219, 148);
			this->panel1->TabIndex = 56;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 57;
			this->label3->Text = L"ID события";
			// 
			// play_id
			// 
			this->play_id->AutoSize = true;
			this->play_id->Location = System::Drawing::Point(15, 30);
			this->play_id->Name = L"play_id";
			this->play_id->Size = System::Drawing::Size(13, 13);
			this->play_id->TabIndex = 58;
			this->play_id->Text = L"0";
			// 
			// BuyTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->play_id);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->payment);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pay_data);
			this->Controls->Add(this->mail);
			this->Controls->Add(this->name);
			this->Controls->Add(this->lable_data);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->sertif_radio);
			this->Controls->Add(this->pushkin_radio);
			this->Controls->Add(this->card_radio);
			this->Controls->Add(this->buy_btn);
			this->Controls->Add(this->esc_btn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"BuyTicket";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ВАШ ТЕАТР. Купить билет";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button_Click(System::Object^ sender, System::EventArgs^ e);
	private: int Turn_Index(int index);
	private: System::Void FillPlaces(Place* pl);
	private: System::Void SetPayment(Place* pl);
	public: System::Void BuyTicket_Load(System::Object^ sender, System::EventArgs^ e, int id_seaplay);
	private: System::Void Buy_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Pay();
	private: System::Void ClearTextBox();
	private: int which_pay();
	private: System::Void Esc_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SavePlaces();
};
}
