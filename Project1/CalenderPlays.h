#pragma once
#include "MainM.h"
#include "ViewerMenu.h"
#include "SearchForm.h"
#include "ListPlays.h"
#include "AboutPlay.h"
#include "BuyTicket1.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CalenderPlays
	/// </summary>
	public ref class CalenderPlays : public System::Windows::Forms::Form
	{
	public:
		CalenderPlays(void)
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
		~CalenderPlays()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ calend_table;
	protected:

	protected:







	private: System::Windows::Forms::Button^ More;
	private: System::Windows::Forms::Button^ buy_btn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CalenderPlays::typeid));
			this->calend_table = (gcnew System::Windows::Forms::DataGridView());
			this->More = (gcnew System::Windows::Forms::Button());
			this->buy_btn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->back_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Plays = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->search_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->calend_table))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// calend_table
			// 
			this->calend_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->calend_table->Location = System::Drawing::Point(12, 36);
			this->calend_table->Name = L"calend_table";
			this->calend_table->Size = System::Drawing::Size(313, 228);
			this->calend_table->TabIndex = 4;
			// 
			// More
			// 
			this->More->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->More->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->More->Location = System::Drawing::Point(408, 73);
			this->More->Name = L"More";
			this->More->Size = System::Drawing::Size(111, 49);
			this->More->TabIndex = 5;
			this->More->Text = L"Подробнее";
			this->More->UseVisualStyleBackColor = false;
			this->More->Click += gcnew System::EventHandler(this, &CalenderPlays::More_Click);
			// 
			// buy_btn
			// 
			this->buy_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buy_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buy_btn->Location = System::Drawing::Point(408, 175);
			this->buy_btn->Name = L"buy_btn";
			this->buy_btn->Size = System::Drawing::Size(111, 53);
			this->buy_btn->TabIndex = 6;
			this->buy_btn->Text = L"Купить билет";
			this->buy_btn->UseVisualStyleBackColor = false;
			this->buy_btn->Click += gcnew System::EventHandler(this, &CalenderPlays::Buy_Click);
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
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// back_btn
			// 
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(63, 20);
			this->back_btn->Text = L"Главная";
			this->back_btn->Click += gcnew System::EventHandler(this, &CalenderPlays::Back_btn_Click);
			// 
			// Plays
			// 
			this->Plays->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Plays->Name = L"Plays";
			this->Plays->Size = System::Drawing::Size(77, 20);
			this->Plays->Text = L"Спектакли";
			// 
			// search_btn
			// 
			this->search_btn->Name = L"search_btn";
			this->search_btn->Size = System::Drawing::Size(112, 20);
			this->search_btn->Text = L"Поиск спектакля";
			this->search_btn->Click += gcnew System::EventHandler(this, &CalenderPlays::Search_btn_Click);
			// 
			// exit_btn
			// 
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(54, 20);
			this->exit_btn->Text = L"Выйти";
			this->exit_btn->Click += gcnew System::EventHandler(this, &CalenderPlays::Exit_btn_Click);
			// 
			// CalenderPlays
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->buy_btn);
			this->Controls->Add(this->More);
			this->Controls->Add(this->calend_table);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CalenderPlays";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ВАШ ТЕАТР. Расписание";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->calend_table))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Back_btn_Click(System::Object^ sender, System::EventArgs^ e);
	//private: System::Void List_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Search_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Exit_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void More_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Buy_Click(System::Object^ sender, System::EventArgs^ e);
	public: System::Void Start();
};
}
