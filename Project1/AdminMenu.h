#pragma once
#include "ActorsForm.h"
#include "DirectorsForm.h"
#include "SeasonsForm.h"
#include "PlaysForm.h"
#include "MainM.h"
#include "Statistica.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AdminMenu
	/// </summary>
	public ref class AdminMenu : public System::Windows::Forms::Form
	{
	public:
		AdminMenu(void)
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
		~AdminMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ seasons_btn;

	private: System::Windows::Forms::ToolStripMenuItem^ plays_btn;


	private: System::Windows::Forms::ToolStripMenuItem^ directors_btn;


	private: System::Windows::Forms::ToolStripMenuItem^ actors_btn;



	protected:







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
			System::Windows::Forms::ToolStripMenuItem^ back_btn;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminMenu::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->seasons_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->plays_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->directors_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actors_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			back_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// back_btn
			// 
			back_btn->Name = L"back_btn";
			back_btn->Size = System::Drawing::Size(54, 20);
			back_btn->Text = L"Выйти";
			back_btn->Click += gcnew System::EventHandler(this, &AdminMenu::Back_btn_Click);
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
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// seasons_btn
			// 
			this->seasons_btn->Name = L"seasons_btn";
			this->seasons_btn->Size = System::Drawing::Size(61, 20);
			this->seasons_btn->Text = L"Сезоны";
			this->seasons_btn->Click += gcnew System::EventHandler(this, &AdminMenu::Seasons_btn_Click);
			// 
			// plays_btn
			// 
			this->plays_btn->Name = L"plays_btn";
			this->plays_btn->Size = System::Drawing::Size(77, 20);
			this->plays_btn->Text = L"Спектакли";
			this->plays_btn->Click += gcnew System::EventHandler(this, &AdminMenu::Plays_btn_Click);
			// 
			// directors_btn
			// 
			this->directors_btn->Name = L"directors_btn";
			this->directors_btn->Size = System::Drawing::Size(82, 20);
			this->directors_btn->Text = L"Режиссёры";
			this->directors_btn->Click += gcnew System::EventHandler(this, &AdminMenu::Directors_btn_Click);
			// 
			// actors_btn
			// 
			this->actors_btn->Name = L"actors_btn";
			this->actors_btn->Size = System::Drawing::Size(60, 20);
			this->actors_btn->Text = L"Актёры";
			this->actors_btn->Click += gcnew System::EventHandler(this, &AdminMenu::Actors_btn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(169, 139);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(253, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"О том как быть админом";
			// 
			// AdminMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"AdminMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ВАШ ТЕАТР. Админка";
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
	//private: System::Void Statistic_btn_Click(System::Object^ sender, System::EventArgs^ e);
};
}
