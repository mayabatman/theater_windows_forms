#pragma once
#include "Worker.h"
#include "Season.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ списокСпектаклейToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ расписаниеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ поискToolStripMenuItem;








	private: System::Windows::Forms::ToolStripMenuItem^ выйтиИзРежимаЗрителяToolStripMenuItem;



	private: System::Windows::Forms::Label^ label1;





	protected:

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
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->списокСпектаклейToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->расписаниеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поискToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйтиИзРежимаЗрителяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem2,
					this->поискToolStripMenuItem, this->выйтиИзРежимаЗрителяToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(641, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->списокСпектаклейToolStripMenuItem,
					this->расписаниеToolStripMenuItem
			});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(77, 20);
			this->toolStripMenuItem2->Text = L"Спектакли";
			// 
			// списокСпектаклейToolStripMenuItem
			// 
			this->списокСпектаклейToolStripMenuItem->Name = L"списокСпектаклейToolStripMenuItem";
			this->списокСпектаклейToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->списокСпектаклейToolStripMenuItem->Text = L"Список спектаклей";
			// 
			// расписаниеToolStripMenuItem
			// 
			this->расписаниеToolStripMenuItem->Name = L"расписаниеToolStripMenuItem";
			this->расписаниеToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->расписаниеToolStripMenuItem->Text = L"Расписание";
			// 
			// поискToolStripMenuItem
			// 
			this->поискToolStripMenuItem->Name = L"поискToolStripMenuItem";
			this->поискToolStripMenuItem->Size = System::Drawing::Size(112, 20);
			this->поискToolStripMenuItem->Text = L"Поиск спектакля";
			// 
			// выйтиИзРежимаЗрителяToolStripMenuItem
			// 
			this->выйтиИзРежимаЗрителяToolStripMenuItem->Name = L"выйтиИзРежимаЗрителяToolStripMenuItem";
			this->выйтиИзРежимаЗрителяToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выйтиИзРежимаЗрителяToolStripMenuItem->Text = L"Выйти";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(229, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Немного о нашем театре";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(641, 339);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"ВАШ ТЕАТР";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->label6->Text = Alex.get_name();
	}
	
	private: System::Void Show_workers(System::Object^ sender, System::EventArgs^ e);
};
}
