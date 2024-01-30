#pragma once

#include "ActorsForm.h"
#include "DirectorsForm.h"
#include "PlaysForm.h"
#include "MainM.h"
#include "Statistica.h"
#include "AdminMenu.h"
#include "Play.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SeasonsForm
	/// </summary>
	public ref class SeasonsForm : public System::Windows::Forms::Form
	{
	public:
		SeasonsForm(void)
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
		~SeasonsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ seasons_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ plays_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ directors_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ actors_btn;

	private: System::Windows::Forms::ComboBox^ season_combo;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::ListBox^ list_next;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MaskedTextBox^ season_start;
	private: System::Windows::Forms::MaskedTextBox^ season_end;




	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ plays_combo;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::MaskedTextBox^ play_time;



	private: System::Windows::Forms::MaskedTextBox^ play_date;

	private: System::Windows::Forms::Button^ new_btn;
	private: System::Windows::Forms::Button^ save_btn;




	private: System::Windows::Forms::Button^ load_btn;
	private: System::Windows::Forms::Button^ del_play_btn;
	private: System::Windows::Forms::Button^ add_play_btn;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ del_btn;
	private: System::Windows::Forms::Label^ season_id;
	private: System::Windows::Forms::Label^ seaplay_id;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SeasonsForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->seasons_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->plays_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->directors_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actors_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->season_combo = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->list_next = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->season_start = (gcnew System::Windows::Forms::MaskedTextBox());
			this->season_end = (gcnew System::Windows::Forms::MaskedTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->season_id = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->seaplay_id = (gcnew System::Windows::Forms::Label());
			this->del_play_btn = (gcnew System::Windows::Forms::Button());
			this->add_play_btn = (gcnew System::Windows::Forms::Button());
			this->play_time = (gcnew System::Windows::Forms::MaskedTextBox());
			this->play_date = (gcnew System::Windows::Forms::MaskedTextBox());
			this->plays_combo = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->new_btn = (gcnew System::Windows::Forms::Button());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->load_btn = (gcnew System::Windows::Forms::Button());
			this->del_btn = (gcnew System::Windows::Forms::Button());
			back_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// back_btn
			// 
			back_btn->Name = L"back_btn";
			back_btn->Size = System::Drawing::Size(63, 20);
			back_btn->Text = L"Главная";
			back_btn->Click += gcnew System::EventHandler(this, &SeasonsForm::Back_btn_Click);
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
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// seasons_btn
			// 
			this->seasons_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->seasons_btn->Name = L"seasons_btn";
			this->seasons_btn->Size = System::Drawing::Size(61, 20);
			this->seasons_btn->Text = L"Сезоны";
			// 
			// plays_btn
			// 
			this->plays_btn->Name = L"plays_btn";
			this->plays_btn->Size = System::Drawing::Size(77, 20);
			this->plays_btn->Text = L"Спектакли";
			this->plays_btn->Click += gcnew System::EventHandler(this, &SeasonsForm::Plays_btn_Click);
			// 
			// directors_btn
			// 
			this->directors_btn->Name = L"directors_btn";
			this->directors_btn->Size = System::Drawing::Size(82, 20);
			this->directors_btn->Text = L"Режиссёры";
			this->directors_btn->Click += gcnew System::EventHandler(this, &SeasonsForm::Directors_btn_Click);
			// 
			// actors_btn
			// 
			this->actors_btn->Name = L"actors_btn";
			this->actors_btn->Size = System::Drawing::Size(60, 20);
			this->actors_btn->Text = L"Актёры";
			this->actors_btn->Click += gcnew System::EventHandler(this, &SeasonsForm::Actors_btn_Click);
			// 
			// season_combo
			// 
			this->season_combo->FormattingEnabled = true;
			this->season_combo->Location = System::Drawing::Point(117, 3);
			this->season_combo->Name = L"season_combo";
			this->season_combo->Size = System::Drawing::Size(150, 23);
			this->season_combo->TabIndex = 4;
			this->season_combo->SelectedIndexChanged += gcnew System::EventHandler(this, &SeasonsForm::Season_combo_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 15);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Выберете сезон:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 15);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Спектакли";
			// 
			// list_next
			// 
			this->list_next->FormattingEnabled = true;
			this->list_next->ItemHeight = 15;
			this->list_next->Location = System::Drawing::Point(10, 136);
			this->list_next->Name = L"list_next";
			this->list_next->Size = System::Drawing::Size(254, 154);
			this->list_next->TabIndex = 8;
			this->list_next->SelectedIndexChanged += gcnew System::EventHandler(this, &SeasonsForm::List_next_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 15);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Начало сезона";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 84);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 15);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Конец сезона";
			// 
			// season_start
			// 
			this->season_start->Location = System::Drawing::Point(117, 54);
			this->season_start->Mask = L"00/00/0000";
			this->season_start->Name = L"season_start";
			this->season_start->Size = System::Drawing::Size(100, 21);
			this->season_start->TabIndex = 11;
			this->season_start->ValidatingType = System::DateTime::typeid;
			// 
			// season_end
			// 
			this->season_end->Location = System::Drawing::Point(117, 81);
			this->season_end->Mask = L"00/00/0000";
			this->season_end->Name = L"season_end";
			this->season_end->Size = System::Drawing::Size(100, 21);
			this->season_end->TabIndex = 12;
			this->season_end->ValidatingType = System::DateTime::typeid;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->panel1->Controls->Add(this->season_id);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->season_end);
			this->panel1->Controls->Add(this->season_start);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->list_next);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->season_combo);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel1->Location = System::Drawing::Point(22, 35);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(270, 304);
			this->panel1->TabIndex = 15;
			// 
			// season_id
			// 
			this->season_id->AutoSize = true;
			this->season_id->Location = System::Drawing::Point(114, 32);
			this->season_id->Name = L"season_id";
			this->season_id->Size = System::Drawing::Size(14, 15);
			this->season_id->TabIndex = 14;
			this->season_id->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 15);
			this->label3->TabIndex = 13;
			this->label3->Text = L"ID";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->panel2->Controls->Add(this->seaplay_id);
			this->panel2->Controls->Add(this->del_play_btn);
			this->panel2->Controls->Add(this->add_play_btn);
			this->panel2->Controls->Add(this->play_time);
			this->panel2->Controls->Add(this->play_date);
			this->panel2->Controls->Add(this->plays_combo);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel2->Location = System::Drawing::Point(298, 161);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(267, 178);
			this->panel2->TabIndex = 16;
			// 
			// seaplay_id
			// 
			this->seaplay_id->Location = System::Drawing::Point(161, 34);
			this->seaplay_id->Name = L"seaplay_id";
			this->seaplay_id->Size = System::Drawing::Size(103, 13);
			this->seaplay_id->TabIndex = 19;
			this->seaplay_id->Text = L"0";
			this->seaplay_id->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// del_play_btn
			// 
			this->del_play_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->del_play_btn->Location = System::Drawing::Point(139, 138);
			this->del_play_btn->Name = L"del_play_btn";
			this->del_play_btn->Size = System::Drawing::Size(125, 23);
			this->del_play_btn->TabIndex = 18;
			this->del_play_btn->Text = L"Удалить событие";
			this->del_play_btn->UseVisualStyleBackColor = false;
			this->del_play_btn->Click += gcnew System::EventHandler(this, &SeasonsForm::Del_play_btn_Click);
			// 
			// add_play_btn
			// 
			this->add_play_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->add_play_btn->Location = System::Drawing::Point(7, 138);
			this->add_play_btn->Name = L"add_play_btn";
			this->add_play_btn->Size = System::Drawing::Size(125, 23);
			this->add_play_btn->TabIndex = 17;
			this->add_play_btn->Text = L"Добавить событие";
			this->add_play_btn->UseVisualStyleBackColor = false;
			this->add_play_btn->Click += gcnew System::EventHandler(this, &SeasonsForm::Add_play_btn_Click);
			// 
			// play_time
			// 
			this->play_time->Location = System::Drawing::Point(164, 84);
			this->play_time->Mask = L"00:00";
			this->play_time->Name = L"play_time";
			this->play_time->Size = System::Drawing::Size(100, 21);
			this->play_time->TabIndex = 15;
			this->play_time->ValidatingType = System::DateTime::typeid;
			// 
			// play_date
			// 
			this->play_date->Location = System::Drawing::Point(164, 57);
			this->play_date->Mask = L"00/00/0000";
			this->play_date->Name = L"play_date";
			this->play_date->Size = System::Drawing::Size(100, 21);
			this->play_date->TabIndex = 14;
			this->play_date->ValidatingType = System::DateTime::typeid;
			// 
			// plays_combo
			// 
			this->plays_combo->FormattingEnabled = true;
			this->plays_combo->Location = System::Drawing::Point(92, 111);
			this->plays_combo->Name = L"plays_combo";
			this->plays_combo->Size = System::Drawing::Size(172, 23);
			this->plays_combo->TabIndex = 5;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(8, 115);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(69, 15);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Спектакль";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 89);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 15);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Время";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(7, 61);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 15);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Дата";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(8, 34);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 15);
			this->label7->TabIndex = 1;
			this->label7->Text = L"ID ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(4, 4);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 15);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Информация о событии";
			// 
			// new_btn
			// 
			this->new_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->new_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->new_btn->Location = System::Drawing::Point(298, 104);
			this->new_btn->Name = L"new_btn";
			this->new_btn->Size = System::Drawing::Size(118, 23);
			this->new_btn->TabIndex = 17;
			this->new_btn->Text = L"Добавить сезон";
			this->new_btn->UseVisualStyleBackColor = false;
			this->new_btn->Click += gcnew System::EventHandler(this, &SeasonsForm::New_btn_Click);
			// 
			// save_btn
			// 
			this->save_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->save_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save_btn->Location = System::Drawing::Point(471, 35);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(91, 59);
			this->save_btn->TabIndex = 18;
			this->save_btn->Text = L"Сохранить изменения";
			this->save_btn->UseVisualStyleBackColor = false;
			this->save_btn->Click += gcnew System::EventHandler(this, &SeasonsForm::Save_btn_Click);
			// 
			// load_btn
			// 
			this->load_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->load_btn->Location = System::Drawing::Point(298, 35);
			this->load_btn->Name = L"load_btn";
			this->load_btn->Size = System::Drawing::Size(118, 46);
			this->load_btn->TabIndex = 20;
			this->load_btn->Text = L"Восстановить / обновить данные";
			this->load_btn->UseVisualStyleBackColor = false;
			this->load_btn->Click += gcnew System::EventHandler(this, &SeasonsForm::Load_btn_Click);
			// 
			// del_btn
			// 
			this->del_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->del_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->del_btn->Location = System::Drawing::Point(298, 133);
			this->del_btn->Name = L"del_btn";
			this->del_btn->Size = System::Drawing::Size(118, 23);
			this->del_btn->TabIndex = 21;
			this->del_btn->Text = L"Удалить сезон";
			this->del_btn->UseVisualStyleBackColor = false;
			this->del_btn->Click += gcnew System::EventHandler(this, &SeasonsForm::Del_btn_Click);
			// 
			// SeasonsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->del_btn);
			this->Controls->Add(this->load_btn);
			this->Controls->Add(this->save_btn);
			this->Controls->Add(this->new_btn);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SeasonsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ВАШ ТЕАТР. Сезоны";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Back_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Plays_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Directors_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Actors_btn_Click(System::Object^ sender, System::EventArgs^ e);
	//private: System::Void Statistic_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Load_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void WriteSeasons();
	private: System::Void Season_combo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void List_next_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void FillWithPlays();
			 int SetDirPlay(int play_id);
	private: System::Void Del_play_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Add_play_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: bool del_from_seaplays(int N, int del_ind);
	private: System::Void Save_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void New_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Del_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: bool del_from_seasons(int del_ind);
	private: System::Void ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SaveChanges();
};
}
