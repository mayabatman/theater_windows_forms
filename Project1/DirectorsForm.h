#pragma once

#include "ActorsForm.h"
#include "SeasonsForm.h"
#include "PlaysForm.h"
#include "MainM.h"
#include "Statistica.h"
#include "AdminMenu.h"
#include "Director.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для DirectorsForm
	/// </summary>
	public ref class DirectorsForm : public System::Windows::Forms::Form
	{
	public:
		DirectorsForm(void)
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
		~DirectorsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::Button^ button2;

	protected:

	protected:










	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ seasons_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ plays_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ directors_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ actors_btn;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::NumericUpDown^ mon_num;
	private: System::Windows::Forms::NumericUpDown^ stage_num;

	private: System::Windows::Forms::NumericUpDown^ age_num;
	private: System::Windows::Forms::TextBox^ rew_text;
	private: System::Windows::Forms::TextBox^ edu_text;
	private: System::Windows::Forms::TextBox^ patr_text;
	private: System::Windows::Forms::TextBox^ sure_text;
	private: System::Windows::Forms::TextBox^ name_text;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ load_btn;
	private: System::Windows::Forms::Button^ add_btn;
	private: System::Windows::Forms::Label^ id_num;
	private: System::Windows::Forms::Button^ del_btn;


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
			System::Windows::Forms::ToolStripMenuItem^ back_btn;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DirectorsForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->seasons_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->plays_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->directors_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actors_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->id_num = (gcnew System::Windows::Forms::Label());
			this->mon_num = (gcnew System::Windows::Forms::NumericUpDown());
			this->stage_num = (gcnew System::Windows::Forms::NumericUpDown());
			this->age_num = (gcnew System::Windows::Forms::NumericUpDown());
			this->rew_text = (gcnew System::Windows::Forms::TextBox());
			this->edu_text = (gcnew System::Windows::Forms::TextBox());
			this->patr_text = (gcnew System::Windows::Forms::TextBox());
			this->sure_text = (gcnew System::Windows::Forms::TextBox());
			this->name_text = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->load_btn = (gcnew System::Windows::Forms::Button());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->del_btn = (gcnew System::Windows::Forms::Button());
			back_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mon_num))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stage_num))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->age_num))->BeginInit();
			this->SuspendLayout();
			// 
			// back_btn
			// 
			back_btn->Name = L"back_btn";
			back_btn->Size = System::Drawing::Size(63, 20);
			back_btn->Text = L"Главная";
			back_btn->Click += gcnew System::EventHandler(this, &DirectorsForm::Back_btn_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(376, 323);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Сохранить изменения";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DirectorsForm::Save_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(218, 323);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Убрать изменения";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DirectorsForm::ListBox1_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(13, 77);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(176, 212);
			this->listBox1->TabIndex = 5;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DirectorsForm::ListBox1_SelectedIndexChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				back_btn, this->seasons_btn,
					this->plays_btn, this->directors_btn, this->actors_btn
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(584, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// seasons_btn
			// 
			this->seasons_btn->Name = L"seasons_btn";
			this->seasons_btn->Size = System::Drawing::Size(61, 20);
			this->seasons_btn->Text = L"Сезоны";
			this->seasons_btn->Click += gcnew System::EventHandler(this, &DirectorsForm::Seasons_btn_Click);
			// 
			// plays_btn
			// 
			this->plays_btn->Name = L"plays_btn";
			this->plays_btn->Size = System::Drawing::Size(77, 20);
			this->plays_btn->Text = L"Спектакли";
			this->plays_btn->Click += gcnew System::EventHandler(this, &DirectorsForm::Plays_btn_Click);
			// 
			// directors_btn
			// 
			this->directors_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->directors_btn->Name = L"directors_btn";
			this->directors_btn->Size = System::Drawing::Size(82, 20);
			this->directors_btn->Text = L"Режиссёры";
			// 
			// actors_btn
			// 
			this->actors_btn->Name = L"actors_btn";
			this->actors_btn->Size = System::Drawing::Size(60, 20);
			this->actors_btn->Text = L"Актёры";
			this->actors_btn->Click += gcnew System::EventHandler(this, &DirectorsForm::Actors_btn_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->panel1->Controls->Add(this->id_num);
			this->panel1->Controls->Add(this->mon_num);
			this->panel1->Controls->Add(this->stage_num);
			this->panel1->Controls->Add(this->age_num);
			this->panel1->Controls->Add(this->rew_text);
			this->panel1->Controls->Add(this->edu_text);
			this->panel1->Controls->Add(this->patr_text);
			this->panel1->Controls->Add(this->sure_text);
			this->panel1->Controls->Add(this->name_text);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel1->Location = System::Drawing::Point(210, 38);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(348, 280);
			this->panel1->TabIndex = 19;
			// 
			// id_num
			// 
			this->id_num->AutoSize = true;
			this->id_num->Location = System::Drawing::Point(126, 39);
			this->id_num->Name = L"id_num";
			this->id_num->Size = System::Drawing::Size(16, 17);
			this->id_num->TabIndex = 30;
			this->id_num->Text = L"0";
			this->id_num->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// mon_num
			// 
			this->mon_num->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->mon_num->Location = System::Drawing::Point(225, 241);
			this->mon_num->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->mon_num->Name = L"mon_num";
			this->mon_num->Size = System::Drawing::Size(120, 23);
			this->mon_num->TabIndex = 29;
			// 
			// stage_num
			// 
			this->stage_num->Location = System::Drawing::Point(225, 189);
			this->stage_num->Name = L"stage_num";
			this->stage_num->Size = System::Drawing::Size(120, 23);
			this->stage_num->TabIndex = 28;
			// 
			// age_num
			// 
			this->age_num->Location = System::Drawing::Point(225, 137);
			this->age_num->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 18, 0, 0, 0 });
			this->age_num->Name = L"age_num";
			this->age_num->Size = System::Drawing::Size(120, 23);
			this->age_num->TabIndex = 19;
			this->age_num->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 18, 0, 0, 0 });
			// 
			// rew_text
			// 
			this->rew_text->Location = System::Drawing::Point(128, 215);
			this->rew_text->Name = L"rew_text";
			this->rew_text->Size = System::Drawing::Size(217, 23);
			this->rew_text->TabIndex = 25;
			// 
			// edu_text
			// 
			this->edu_text->Location = System::Drawing::Point(128, 163);
			this->edu_text->Name = L"edu_text";
			this->edu_text->Size = System::Drawing::Size(217, 23);
			this->edu_text->TabIndex = 23;
			// 
			// patr_text
			// 
			this->patr_text->Location = System::Drawing::Point(128, 111);
			this->patr_text->Name = L"patr_text";
			this->patr_text->Size = System::Drawing::Size(217, 23);
			this->patr_text->TabIndex = 21;
			// 
			// sure_text
			// 
			this->sure_text->Location = System::Drawing::Point(128, 85);
			this->sure_text->Name = L"sure_text";
			this->sure_text->Size = System::Drawing::Size(217, 23);
			this->sure_text->TabIndex = 20;
			// 
			// name_text
			// 
			this->name_text->Location = System::Drawing::Point(128, 59);
			this->name_text->Name = L"name_text";
			this->name_text->Size = System::Drawing::Size(217, 23);
			this->name_text->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(5, 245);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(137, 17);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Зарплата (в месяц)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(5, 219);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 17);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Награды";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(5, 193);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 17);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Стаж";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(5, 167);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Образование";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(5, 141);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Возраст";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Данные о режиссёре";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Отчество";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Фамилия";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Имя";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"ID";
			// 
			// load_btn
			// 
			this->load_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->load_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->load_btn->Location = System::Drawing::Point(22, 39);
			this->load_btn->Name = L"load_btn";
			this->load_btn->Size = System::Drawing::Size(158, 23);
			this->load_btn->TabIndex = 20;
			this->load_btn->Text = L"Загрузить список";
			this->load_btn->UseVisualStyleBackColor = false;
			this->load_btn->Click += gcnew System::EventHandler(this, &DirectorsForm::Load_btn_Click);
			// 
			// add_btn
			// 
			this->add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_btn->Location = System::Drawing::Point(22, 295);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(158, 23);
			this->add_btn->TabIndex = 24;
			this->add_btn->Text = L"Добавить режиссёра";
			this->add_btn->UseVisualStyleBackColor = false;
			this->add_btn->Click += gcnew System::EventHandler(this, &DirectorsForm::Add_btn_Click);
			// 
			// del_btn
			// 
			this->del_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->del_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->del_btn->Location = System::Drawing::Point(22, 324);
			this->del_btn->Name = L"del_btn";
			this->del_btn->Size = System::Drawing::Size(158, 23);
			this->del_btn->TabIndex = 25;
			this->del_btn->Text = L"Удалить режиссёра";
			this->del_btn->UseVisualStyleBackColor = false;
			this->del_btn->Click += gcnew System::EventHandler(this, &DirectorsForm::Del_btn_Click);
			// 
			// DirectorsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->del_btn);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->load_btn);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DirectorsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ВАШ ТЕАТР. Режиссёры";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mon_num))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stage_num))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->age_num))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Back_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Seasons_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Plays_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Actors_btn_Click(System::Object^ sender, System::EventArgs^ e);
	//private: System::Void Statistic_btn_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Load_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void WriteDirs();
	private: System::Void ListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void FillWithDir(Director dir);
	private: Director ReWriteDir();
	private: System::Void Save_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Add_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Del_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: bool del_from_dirs(int del_ind);
};
}
