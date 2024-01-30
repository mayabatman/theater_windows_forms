#pragma once
#include "DirectorsForm.h"
#include "SeasonsForm.h"
#include "PlaysForm.h"
#include "MainM.h"
#include "Statistica.h"
#include "AdminMenu.h"
#include "AddingFIle.h"
#include "WritingFile.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ActorsForm
	/// </summary>
	public ref class ActorsForm : public System::Windows::Forms::Form
	{
	public:
		ActorsForm(void)
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
		~ActorsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ save_btn;
	private: System::Windows::Forms::Button^ recover_btn;


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ seasons_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ plays_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ directors_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ actors_btn;

	private: System::Windows::Forms::Button^ load_btn;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::NumericUpDown^ mon_num;
	private: System::Windows::Forms::NumericUpDown^ stage_num;

	private: System::Windows::Forms::NumericUpDown^ age_num;
	private: System::Windows::Forms::TextBox^ rew_text;
	private: System::Windows::Forms::TextBox^ edu_text;
	private: System::Windows::Forms::TextBox^ patr_text;
	private: System::Windows::Forms::TextBox^ sure_text;
	private: System::Windows::Forms::TextBox^ name_text;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ActorsForm::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->recover_btn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->seasons_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->plays_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->directors_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actors_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->load_btn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
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
			back_btn->Click += gcnew System::EventHandler(this, &ActorsForm::Back_btn_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(13, 65);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(157, 212);
			this->listBox1->TabIndex = 2;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ActorsForm::ListBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Данные об актёре";
			// 
			// save_btn
			// 
			this->save_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->save_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save_btn->Location = System::Drawing::Point(401, 326);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(127, 23);
			this->save_btn->TabIndex = 4;
			this->save_btn->Text = L"Сохранить изменения";
			this->save_btn->UseVisualStyleBackColor = false;
			this->save_btn->Click += gcnew System::EventHandler(this, &ActorsForm::Save_Click);
			// 
			// recover_btn
			// 
			this->recover_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->recover_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->recover_btn->Location = System::Drawing::Point(194, 326);
			this->recover_btn->Name = L"recover_btn";
			this->recover_btn->Size = System::Drawing::Size(155, 23);
			this->recover_btn->TabIndex = 6;
			this->recover_btn->Text = L"Убрать изменения";
			this->recover_btn->UseVisualStyleBackColor = false;
			this->recover_btn->Click += gcnew System::EventHandler(this, &ActorsForm::ListBox1_SelectedIndexChanged);
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
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// seasons_btn
			// 
			this->seasons_btn->Name = L"seasons_btn";
			this->seasons_btn->Size = System::Drawing::Size(61, 20);
			this->seasons_btn->Text = L"Сезоны";
			this->seasons_btn->Click += gcnew System::EventHandler(this, &ActorsForm::Seasons_btn_Click);
			// 
			// plays_btn
			// 
			this->plays_btn->Name = L"plays_btn";
			this->plays_btn->Size = System::Drawing::Size(77, 20);
			this->plays_btn->Text = L"Спектакли";
			this->plays_btn->Click += gcnew System::EventHandler(this, &ActorsForm::Plays_btn_Click);
			// 
			// directors_btn
			// 
			this->directors_btn->Name = L"directors_btn";
			this->directors_btn->Size = System::Drawing::Size(82, 20);
			this->directors_btn->Text = L"Режиссёры";
			this->directors_btn->Click += gcnew System::EventHandler(this, &ActorsForm::Directors_btn_Click);
			// 
			// actors_btn
			// 
			this->actors_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->actors_btn->Name = L"actors_btn";
			this->actors_btn->Size = System::Drawing::Size(60, 20);
			this->actors_btn->Text = L"Актёры";
			// 
			// load_btn
			// 
			this->load_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->load_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->load_btn->Location = System::Drawing::Point(12, 34);
			this->load_btn->Name = L"load_btn";
			this->load_btn->Size = System::Drawing::Size(158, 23);
			this->load_btn->TabIndex = 8;
			this->load_btn->Text = L"Загрузить список";
			this->load_btn->UseVisualStyleBackColor = false;
			this->load_btn->Click += gcnew System::EventHandler(this, &ActorsForm::Load_btn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Имя";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Фамилия";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 120);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Отчество";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(5, 148);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Возраст";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(5, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Образование";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(5, 204);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 17);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Стаж";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(5, 232);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 17);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Награды";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(5, 260);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(137, 17);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Зарплата (в месяц)";
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
			this->panel1->Location = System::Drawing::Point(194, 36);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(348, 284);
			this->panel1->TabIndex = 18;
			// 
			// id_num
			// 
			this->id_num->AutoSize = true;
			this->id_num->Location = System::Drawing::Point(126, 38);
			this->id_num->Name = L"id_num";
			this->id_num->Size = System::Drawing::Size(16, 17);
			this->id_num->TabIndex = 30;
			this->id_num->Text = L"0";
			this->id_num->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// mon_num
			// 
			this->mon_num->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->mon_num->Location = System::Drawing::Point(225, 256);
			this->mon_num->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->mon_num->Name = L"mon_num";
			this->mon_num->Size = System::Drawing::Size(120, 23);
			this->mon_num->TabIndex = 29;
			// 
			// stage_num
			// 
			this->stage_num->Location = System::Drawing::Point(225, 200);
			this->stage_num->Name = L"stage_num";
			this->stage_num->Size = System::Drawing::Size(120, 23);
			this->stage_num->TabIndex = 28;
			// 
			// age_num
			// 
			this->age_num->Location = System::Drawing::Point(225, 144);
			this->age_num->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 18, 0, 0, 0 });
			this->age_num->Name = L"age_num";
			this->age_num->Size = System::Drawing::Size(120, 23);
			this->age_num->TabIndex = 19;
			this->age_num->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 18, 0, 0, 0 });
			// 
			// rew_text
			// 
			this->rew_text->Location = System::Drawing::Point(128, 228);
			this->rew_text->Name = L"rew_text";
			this->rew_text->Size = System::Drawing::Size(217, 23);
			this->rew_text->TabIndex = 25;
			// 
			// edu_text
			// 
			this->edu_text->Location = System::Drawing::Point(128, 172);
			this->edu_text->Name = L"edu_text";
			this->edu_text->Size = System::Drawing::Size(217, 23);
			this->edu_text->TabIndex = 23;
			// 
			// patr_text
			// 
			this->patr_text->Location = System::Drawing::Point(128, 116);
			this->patr_text->Name = L"patr_text";
			this->patr_text->Size = System::Drawing::Size(217, 23);
			this->patr_text->TabIndex = 21;
			// 
			// sure_text
			// 
			this->sure_text->Location = System::Drawing::Point(128, 88);
			this->sure_text->Name = L"sure_text";
			this->sure_text->Size = System::Drawing::Size(217, 23);
			this->sure_text->TabIndex = 20;
			// 
			// name_text
			// 
			this->name_text->Location = System::Drawing::Point(128, 60);
			this->name_text->Name = L"name_text";
			this->name_text->Size = System::Drawing::Size(217, 23);
			this->name_text->TabIndex = 19;
			// 
			// add_btn
			// 
			this->add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_btn->Location = System::Drawing::Point(13, 299);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(158, 23);
			this->add_btn->TabIndex = 24;
			this->add_btn->Text = L"Добаить актёра";
			this->add_btn->UseVisualStyleBackColor = false;
			this->add_btn->Click += gcnew System::EventHandler(this, &ActorsForm::Add_btn_Click);
			// 
			// del_btn
			// 
			this->del_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->del_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->del_btn->Location = System::Drawing::Point(13, 328);
			this->del_btn->Name = L"del_btn";
			this->del_btn->Size = System::Drawing::Size(158, 23);
			this->del_btn->TabIndex = 25;
			this->del_btn->Text = L"Удалить актёра";
			this->del_btn->UseVisualStyleBackColor = false;
			this->del_btn->Click += gcnew System::EventHandler(this, &ActorsForm::Del_btn_Click);
			// 
			// ActorsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->del_btn);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->load_btn);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->recover_btn);
			this->Controls->Add(this->save_btn);
			this->Controls->Add(this->listBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ActorsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ВАШ ТЕАТР. Актёры";
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
	private: System::Void Directors_btn_Click(System::Object^ sender, System::EventArgs^ e);
	//private: System::Void Statistic_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Load_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void WriteActors();
	private: System::Void ListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void FillWithActor(Actor actor);
	private: Actor ReWriteActor();
	private: System::Void Save_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Add_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Del_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: bool del_from_actors(int del_ind);
};
}
