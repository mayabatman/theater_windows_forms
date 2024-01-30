#pragma once

#include "ActorsForm.h"
#include "DirectorsForm.h"
#include "SeasonsForm.h"
#include "MainM.h"
#include "Statistica.h"
#include "AdminMenu.h"
#include "Play.h"
#include "Trupp_role.h"
#include "AddingFIle.h"
#include "WritingFile.h"
#include "Actor.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для PlaysForm
	/// </summary>
	public ref class PlaysForm : public System::Windows::Forms::Form
	{
	public:
		PlaysForm(void)
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
		~PlaysForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ save_btn;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ seasons_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ plays_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ directors_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ actors_btn;

	private: System::Windows::Forms::Button^ load_btn;
	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ annotation;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ trupp_table;
	private: System::Windows::Forms::TextBox^ play_name;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ dir_combo;
	private: System::Windows::Forms::Button^ del_row;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlaysForm::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->seasons_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->plays_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->directors_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actors_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->load_btn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->id_num = (gcnew System::Windows::Forms::Label());
			this->del_row = (gcnew System::Windows::Forms::Button());
			this->dir_combo = (gcnew System::Windows::Forms::ComboBox());
			this->play_name = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->trupp_table = (gcnew System::Windows::Forms::DataGridView());
			this->annotation = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->del_btn = (gcnew System::Windows::Forms::Button());
			back_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trupp_table))->BeginInit();
			this->SuspendLayout();
			// 
			// back_btn
			// 
			back_btn->Name = L"back_btn";
			back_btn->Size = System::Drawing::Size(63, 20);
			back_btn->Text = L"Главная";
			back_btn->Click += gcnew System::EventHandler(this, &PlaysForm::Back_btn_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(13, 77);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(175, 276);
			this->listBox1->TabIndex = 2;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &PlaysForm::ListBox1_SelectedIndexChanged);
			// 
			// save_btn
			// 
			this->save_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->save_btn->Location = System::Drawing::Point(218, 350);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(132, 23);
			this->save_btn->TabIndex = 3;
			this->save_btn->Text = L"Сохранить изменения";
			this->save_btn->UseVisualStyleBackColor = false;
			this->save_btn->Click += gcnew System::EventHandler(this, &PlaysForm::Save_btn_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Location = System::Drawing::Point(81, 350);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Убрать изменения";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &PlaysForm::ListBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Данные о спектакле";
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
			this->seasons_btn->Click += gcnew System::EventHandler(this, &PlaysForm::Seasons_btn_Click);
			// 
			// plays_btn
			// 
			this->plays_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->plays_btn->Name = L"plays_btn";
			this->plays_btn->Size = System::Drawing::Size(77, 20);
			this->plays_btn->Text = L"Спектакли";
			// 
			// directors_btn
			// 
			this->directors_btn->Name = L"directors_btn";
			this->directors_btn->Size = System::Drawing::Size(82, 20);
			this->directors_btn->Text = L"Режиссёры";
			this->directors_btn->Click += gcnew System::EventHandler(this, &PlaysForm::Directors_btn_Click);
			// 
			// actors_btn
			// 
			this->actors_btn->Name = L"actors_btn";
			this->actors_btn->Size = System::Drawing::Size(60, 20);
			this->actors_btn->Text = L"Актёры";
			this->actors_btn->Click += gcnew System::EventHandler(this, &PlaysForm::Actors_btn_Click);
			// 
			// load_btn
			// 
			this->load_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->load_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->load_btn->Location = System::Drawing::Point(20, 38);
			this->load_btn->Name = L"load_btn";
			this->load_btn->Size = System::Drawing::Size(158, 23);
			this->load_btn->TabIndex = 21;
			this->load_btn->Text = L"Загрузить список";
			this->load_btn->UseVisualStyleBackColor = false;
			this->load_btn->Click += gcnew System::EventHandler(this, &PlaysForm::Load_btn_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->panel1->Controls->Add(this->id_num);
			this->panel1->Controls->Add(this->del_row);
			this->panel1->Controls->Add(this->dir_combo);
			this->panel1->Controls->Add(this->play_name);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->save_btn);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->trupp_table);
			this->panel1->Controls->Add(this->annotation);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel1->Location = System::Drawing::Point(202, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(357, 388);
			this->panel1->TabIndex = 22;
			// 
			// id_num
			// 
			this->id_num->AutoSize = true;
			this->id_num->Location = System::Drawing::Point(337, 31);
			this->id_num->Name = L"id_num";
			this->id_num->Size = System::Drawing::Size(16, 17);
			this->id_num->TabIndex = 42;
			this->id_num->Text = L"0";
			this->id_num->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// del_row
			// 
			this->del_row->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->del_row->Location = System::Drawing::Point(49, 310);
			this->del_row->Name = L"del_row";
			this->del_row->Size = System::Drawing::Size(26, 23);
			this->del_row->TabIndex = 41;
			this->del_row->Text = L"-";
			this->del_row->UseVisualStyleBackColor = false;
			this->del_row->Click += gcnew System::EventHandler(this, &PlaysForm::Del_row_Click);
			// 
			// dir_combo
			// 
			this->dir_combo->FormattingEnabled = true;
			this->dir_combo->Location = System::Drawing::Point(96, 78);
			this->dir_combo->Name = L"dir_combo";
			this->dir_combo->Size = System::Drawing::Size(254, 24);
			this->dir_combo->TabIndex = 39;
			// 
			// play_name
			// 
			this->play_name->Location = System::Drawing::Point(96, 50);
			this->play_name->Name = L"play_name";
			this->play_name->Size = System::Drawing::Size(254, 23);
			this->play_name->TabIndex = 38;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 17);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Название";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(11, 183);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 17);
			this->label6->TabIndex = 36;
			this->label6->Text = L"В ролях";
			// 
			// trupp_table
			// 
			this->trupp_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->trupp_table->Location = System::Drawing::Point(81, 183);
			this->trupp_table->Name = L"trupp_table";
			this->trupp_table->Size = System::Drawing::Size(269, 150);
			this->trupp_table->TabIndex = 35;
			this->trupp_table->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &PlaysForm::Trupp_table_RowsAdded);
			// 
			// annotation
			// 
			this->annotation->Location = System::Drawing::Point(96, 108);
			this->annotation->Multiline = true;
			this->annotation->Name = L"annotation";
			this->annotation->Size = System::Drawing::Size(254, 69);
			this->annotation->TabIndex = 34;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 108);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 17);
			this->label5->TabIndex = 33;
			this->label5->Text = L"Аннотация";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 17);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Директор";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 17);
			this->label2->TabIndex = 28;
			this->label2->Text = L"ID";
			// 
			// add_btn
			// 
			this->add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_btn->Location = System::Drawing::Point(20, 360);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(158, 23);
			this->add_btn->TabIndex = 23;
			this->add_btn->Text = L"Добавить спектакль";
			this->add_btn->UseVisualStyleBackColor = false;
			this->add_btn->Click += gcnew System::EventHandler(this, &PlaysForm::Add_btn_Click);
			// 
			// del_btn
			// 
			this->del_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->del_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->del_btn->Location = System::Drawing::Point(20, 393);
			this->del_btn->Name = L"del_btn";
			this->del_btn->Size = System::Drawing::Size(158, 23);
			this->del_btn->TabIndex = 24;
			this->del_btn->Text = L"Удалить спектакль";
			this->del_btn->UseVisualStyleBackColor = false;
			this->del_btn->Click += gcnew System::EventHandler(this, &PlaysForm::Del_btn_Click);
			// 
			// PlaysForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 454);
			this->Controls->Add(this->del_btn);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->load_btn);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"PlaysForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ВАШ ТЕАТР. Спектакли";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trupp_table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Back_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Seasons_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Directors_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Actors_btn_Click(System::Object^ sender, System::EventArgs^ e);
	//private: System::Void Statistic_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Load_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void WriteComboDir();
	private: System::Void WritePlays(int n);
	private: System::Void ListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void FillWithPlay(Play play);
	private: System::Void BuildTable();
	private: System::Void Save_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: Play ReWritePlay(Play);
	private: vector<Trupp_role> ReWriteTrupp(vector<Trupp_role> trupp);
	private: int Project1::PlaysForm::which_director(Play play);
	private: System::Void Add_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Trupp_table_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e);
	private: System::Void Del_row_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Del_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: bool Project1::PlaysForm::del_from_plays(int del_ind);
};
}
