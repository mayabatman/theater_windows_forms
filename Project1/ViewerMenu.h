#pragma once
#include "MainM.h"
#include "CalenderPlays.h"
#include "ListPlays.h"
#include "SearchForm.h"


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ViewerMenu
	/// </summary>
	public ref class ViewerMenu : public System::Windows::Forms::Form
	{
	public:
		ViewerMenu(void)
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
		~ViewerMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ Plays;


	private: System::Windows::Forms::ToolStripMenuItem^ search_btn;
	protected:




	private: System::Windows::Forms::ToolStripMenuItem^ exit_btn;


	private: System::Windows::Forms::Label^ label1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewerMenu::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->exit_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Plays = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->search_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->exit_btn, this->Plays,
					this->search_btn
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(584, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// exit_btn
			// 
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(54, 20);
			this->exit_btn->Text = L"Выйти";
			this->exit_btn->Click += gcnew System::EventHandler(this, &ViewerMenu::Exit_btn_Click);
			// 
			// Plays
			// 
			this->Plays->Name = L"Plays";
			this->Plays->Size = System::Drawing::Size(77, 20);
			this->Plays->Text = L"Спектакли";
			this->Plays->Click += gcnew System::EventHandler(this, &ViewerMenu::Cal_btn_Click);
			// 
			// search_btn
			// 
			this->search_btn->Name = L"search_btn";
			this->search_btn->Size = System::Drawing::Size(112, 20);
			this->search_btn->Text = L"Поиск спектакля";
			this->search_btn->Click += gcnew System::EventHandler(this, &ViewerMenu::Search_btn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(139, 137);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(329, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Немного о нашем театре";
			// 
			// ViewerMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ViewerMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ВАШ ТЕАТР";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Exit_btn_Click(System::Object^ sender, System::EventArgs^ e);
//private: System::Void List_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Cal_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Search_btn_Click(System::Object^ sender, System::EventArgs^ e);
};
}
