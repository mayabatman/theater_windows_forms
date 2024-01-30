#pragma once
#include "MainM.h"
#include "ViewerMenu.h"
#include "CalenderPlays.h"
#include "SearchForm.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ListPlays
	/// </summary>
	public ref class ListPlays : public System::Windows::Forms::Form
	{
	public:
		ListPlays(void)
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
		~ListPlays()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ back_btn;
	protected:






	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ buy_btn;


	private: System::Windows::Forms::Button^ more_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ exit_btn;


	private: System::Windows::Forms::ToolStripMenuItem^ Plays;
	private: System::Windows::Forms::ToolStripMenuItem^ list_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ cal_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ search_btn;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->back_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Plays = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->list_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cal_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->search_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->buy_btn = (gcnew System::Windows::Forms::Button());
			this->more_btn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
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
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// back_btn
			// 
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(63, 20);
			this->back_btn->Text = L"Главная";
			this->back_btn->Click += gcnew System::EventHandler(this, &ListPlays::Back_btn_Click);
			// 
			// Plays
			// 
			this->Plays->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->list_btn, this->cal_btn });
			this->Plays->Name = L"Plays";
			this->Plays->Size = System::Drawing::Size(77, 20);
			this->Plays->Text = L"Спектакли";
			// 
			// list_btn
			// 
			this->list_btn->Name = L"list_btn";
			this->list_btn->Size = System::Drawing::Size(180, 22);
			this->list_btn->Text = L"Список спектаклей";
			// 
			// cal_btn
			// 
			this->cal_btn->Name = L"cal_btn";
			this->cal_btn->Size = System::Drawing::Size(180, 22);
			this->cal_btn->Text = L"Расписание";
			this->cal_btn->Click += gcnew System::EventHandler(this, &ListPlays::Cal_btn_Click);
			// 
			// search_btn
			// 
			this->search_btn->Name = L"search_btn";
			this->search_btn->Size = System::Drawing::Size(112, 20);
			this->search_btn->Text = L"Поиск спектакля";
			this->search_btn->Click += gcnew System::EventHandler(this, &ListPlays::Search_btn_Click);
			// 
			// exit_btn
			// 
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(54, 20);
			this->exit_btn->Text = L"Выйти";
			this->exit_btn->Click += gcnew System::EventHandler(this, &ListPlays::Exit_btn_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(13, 28);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(307, 316);
			this->listBox1->TabIndex = 3;
			// 
			// buy_btn
			// 
			this->buy_btn->Location = System::Drawing::Point(410, 174);
			this->buy_btn->Name = L"buy_btn";
			this->buy_btn->Size = System::Drawing::Size(75, 48);
			this->buy_btn->TabIndex = 8;
			this->buy_btn->Text = L"Купить билет";
			this->buy_btn->UseVisualStyleBackColor = true;
			this->buy_btn->Click += gcnew System::EventHandler(this, &ListPlays::Buy_btn_Click);
			// 
			// more_btn
			// 
			this->more_btn->Location = System::Drawing::Point(410, 63);
			this->more_btn->Name = L"more_btn";
			this->more_btn->Size = System::Drawing::Size(75, 45);
			this->more_btn->TabIndex = 7;
			this->more_btn->Text = L"Подробнее";
			this->more_btn->UseVisualStyleBackColor = true;
			this->more_btn->Click += gcnew System::EventHandler(this, &ListPlays::More_btn_Click);
			// 
			// ListPlays
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->buy_btn);
			this->Controls->Add(this->more_btn);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ListPlays";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ВАШ ТЕАТР. Список спектаклей";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Back_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Cal_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Search_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Exit_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Buy_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void More_btn_Click(System::Object^ sender, System::EventArgs^ e);
};
}
