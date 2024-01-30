#pragma once

#include "ActorsForm.h"
#include "DirectorsForm.h"
#include "SeasonsForm.h"
#include "PlaysForm.h"
#include "MainM.h"
#include "AdminMenu.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Statistica
	/// </summary>
	public ref class Statistica : public System::Windows::Forms::Form
	{
	public:
		Statistica(void)
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
		~Statistica()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ seasons_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ plays_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ directors_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ actors_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ statistic_btn;


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
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->seasons_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->plays_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->directors_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actors_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statistic_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			back_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// back_btn
			// 
			back_btn->Name = L"back_btn";
			back_btn->Size = System::Drawing::Size(63, 20);
			back_btn->Text = L"Главная";
			back_btn->Click += gcnew System::EventHandler(this, &Statistica::Back_btn_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(23, 63);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(106, 17);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"По режиссёрам";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(23, 86);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(85, 17);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"По актёрам";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(23, 109);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(103, 17);
			this->radioButton3->TabIndex = 5;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"По спектаклям";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(23, 132);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(86, 17);
			this->radioButton4->TabIndex = 6;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"По сезонам";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(23, 178);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(115, 17);
			this->radioButton5->TabIndex = 7;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Отчёт по доходам";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(277, 51);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(252, 236);
			this->panel1->TabIndex = 8;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				back_btn, this->seasons_btn,
					this->plays_btn, this->directors_btn, this->actors_btn, this->statistic_btn
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(584, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// seasons_btn
			// 
			this->seasons_btn->Name = L"seasons_btn";
			this->seasons_btn->Size = System::Drawing::Size(61, 20);
			this->seasons_btn->Text = L"Сезоны";
			this->seasons_btn->Click += gcnew System::EventHandler(this, &Statistica::Seasons_btn_Click);
			// 
			// plays_btn
			// 
			this->plays_btn->Name = L"plays_btn";
			this->plays_btn->Size = System::Drawing::Size(77, 20);
			this->plays_btn->Text = L"Спектакли";
			this->plays_btn->Click += gcnew System::EventHandler(this, &Statistica::Plays_btn_Click);
			// 
			// directors_btn
			// 
			this->directors_btn->Name = L"directors_btn";
			this->directors_btn->Size = System::Drawing::Size(82, 20);
			this->directors_btn->Text = L"Режиссёры";
			this->directors_btn->Click += gcnew System::EventHandler(this, &Statistica::Directors_btn_Click);
			// 
			// actors_btn
			// 
			this->actors_btn->Name = L"actors_btn";
			this->actors_btn->Size = System::Drawing::Size(60, 20);
			this->actors_btn->Text = L"Актёры";
			this->actors_btn->Click += gcnew System::EventHandler(this, &Statistica::Actors_btn_Click);
			// 
			// statistic_btn
			// 
			this->statistic_btn->Name = L"statistic_btn";
			this->statistic_btn->Size = System::Drawing::Size(80, 20);
			this->statistic_btn->Text = L"Статистика";
			// 
			// Statistica
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Statistica";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Statistica";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Back_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Seasons_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Plays_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Directors_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Actors_btn_Click(System::Object^ sender, System::EventArgs^ e);
};
}
