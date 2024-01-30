#pragma once
#include "MainM.h"
#include "ViewerMenu.h"
#include "CalenderPlays.h"
#include "ListPlays.h"
#include "Finding.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SearchForm
	/// </summary>
	public ref class SearchForm : public System::Windows::Forms::Form
	{
	public:
		SearchForm(void)
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
		~SearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ play_radio;
	private: System::Windows::Forms::RadioButton^ dir_radio;
	private: System::Windows::Forms::RadioButton^ act_radio;

	protected:

	protected:










	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ search_name;
	private: System::Windows::Forms::Button^ search;
	private: System::Windows::Forms::ListBox^ plays_list;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Buy;

	private: System::Windows::Forms::Button^ More;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ back_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ Plays;


	private: System::Windows::Forms::ToolStripMenuItem^ search_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ exit_btn;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SearchForm::typeid));
			this->play_radio = (gcnew System::Windows::Forms::RadioButton());
			this->dir_radio = (gcnew System::Windows::Forms::RadioButton());
			this->act_radio = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->search_name = (gcnew System::Windows::Forms::TextBox());
			this->search = (gcnew System::Windows::Forms::Button());
			this->plays_list = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Buy = (gcnew System::Windows::Forms::Button());
			this->More = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->back_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Plays = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->search_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// play_radio
			// 
			this->play_radio->AutoSize = true;
			this->play_radio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->play_radio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->play_radio->Location = System::Drawing::Point(66, 52);
			this->play_radio->Name = L"play_radio";
			this->play_radio->Size = System::Drawing::Size(126, 24);
			this->play_radio->TabIndex = 4;
			this->play_radio->TabStop = true;
			this->play_radio->Text = L"По названию";
			this->play_radio->UseVisualStyleBackColor = false;
			// 
			// dir_radio
			// 
			this->dir_radio->AutoSize = true;
			this->dir_radio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->dir_radio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dir_radio->Location = System::Drawing::Point(66, 84);
			this->dir_radio->Name = L"dir_radio";
			this->dir_radio->Size = System::Drawing::Size(131, 24);
			this->dir_radio->TabIndex = 5;
			this->dir_radio->TabStop = true;
			this->dir_radio->Text = L"По режиссёру";
			this->dir_radio->UseVisualStyleBackColor = false;
			// 
			// act_radio
			// 
			this->act_radio->AutoSize = true;
			this->act_radio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->act_radio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->act_radio->Location = System::Drawing::Point(66, 116);
			this->act_radio->Name = L"act_radio";
			this->act_radio->Size = System::Drawing::Size(103, 24);
			this->act_radio->TabIndex = 6;
			this->act_radio->TabStop = true;
			this->act_radio->Text = L"По актёру";
			this->act_radio->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(289, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Введите фрагмент:";
			// 
			// search_name
			// 
			this->search_name->Location = System::Drawing::Point(292, 76);
			this->search_name->Name = L"search_name";
			this->search_name->Size = System::Drawing::Size(180, 20);
			this->search_name->TabIndex = 9;
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->search->Location = System::Drawing::Point(292, 117);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(75, 26);
			this->search->TabIndex = 10;
			this->search->Text = L"Поиск";
			this->search->UseVisualStyleBackColor = false;
			this->search->Click += gcnew System::EventHandler(this, &SearchForm::Search_Click);
			// 
			// plays_list
			// 
			this->plays_list->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plays_list->FormattingEnabled = true;
			this->plays_list->ItemHeight = 16;
			this->plays_list->Location = System::Drawing::Point(66, 208);
			this->plays_list->Name = L"plays_list";
			this->plays_list->Size = System::Drawing::Size(340, 116);
			this->plays_list->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(66, 187);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Результаты поиска:";
			// 
			// Buy
			// 
			this->Buy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Buy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Buy->Location = System::Drawing::Point(457, 276);
			this->Buy->Name = L"Buy";
			this->Buy->Size = System::Drawing::Size(90, 48);
			this->Buy->TabIndex = 14;
			this->Buy->Text = L"Купить билет";
			this->Buy->UseVisualStyleBackColor = false;
			this->Buy->Click += gcnew System::EventHandler(this, &SearchForm::Buy_Click);
			// 
			// More
			// 
			this->More->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->More->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->More->Location = System::Drawing::Point(457, 208);
			this->More->Name = L"More";
			this->More->Size = System::Drawing::Size(90, 37);
			this->More->TabIndex = 13;
			this->More->Text = L"Подробнее";
			this->More->UseVisualStyleBackColor = false;
			this->More->Click += gcnew System::EventHandler(this, &SearchForm::More_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->back_btn, this->Plays,
					this->search_btn, this->exit_btn
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(584, 24);
			this->menuStrip1->TabIndex = 15;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// back_btn
			// 
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(63, 20);
			this->back_btn->Text = L"Главная";
			this->back_btn->Click += gcnew System::EventHandler(this, &SearchForm::Back_btn_Click);
			// 
			// Plays
			// 
			this->Plays->Name = L"Plays";
			this->Plays->Size = System::Drawing::Size(77, 20);
			this->Plays->Text = L"Спектакли";
			this->Plays->Click += gcnew System::EventHandler(this, &SearchForm::Cal_btn_Click);
			// 
			// search_btn
			// 
			this->search_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->search_btn->Name = L"search_btn";
			this->search_btn->Size = System::Drawing::Size(112, 20);
			this->search_btn->Text = L"Поиск спектакля";
			// 
			// exit_btn
			// 
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(54, 20);
			this->exit_btn->Text = L"Выйти";
			this->exit_btn->Click += gcnew System::EventHandler(this, &SearchForm::Exit_btn_Click);
			// 
			// SearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->Buy);
			this->Controls->Add(this->More);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->plays_list);
			this->Controls->Add(this->search);
			this->Controls->Add(this->search_name);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->act_radio);
			this->Controls->Add(this->dir_radio);
			this->Controls->Add(this->play_radio);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SearchForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ВАШ ТЕАТР. Поиск";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Back_btn_Click(System::Object^ sender, System::EventArgs^ e);
	//private: System::Void List_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Cal_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Exit_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void FillList(SeasonPlay*, int);
	private: System::Void More_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Buy_Click(System::Object^ sender, System::EventArgs^ e);
};
}
