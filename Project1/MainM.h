#pragma once
#include "AdminMenu.h"
#include "ViewerMenu.h"
#include "Actor.h"
#include "AddFromFile.h"


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainM
	/// </summary>
	public ref class MainM : public System::Windows::Forms::Form
	{
	public:
		MainM(void)
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
		~MainM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ view_btn;
	private: System::Windows::Forms::Button^ adm_btn;
	private: System::Windows::Forms::TextBox^ password;
	private: System::String^ pass = "1305";
	private: System::Windows::Forms::Label^ error_text;
	private: System::Windows::Forms::Button^ exit_btn;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainM::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->view_btn = (gcnew System::Windows::Forms::Button());
			this->adm_btn = (gcnew System::Windows::Forms::Button());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->error_text = (gcnew System::Windows::Forms::Label());
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(180, 152);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Если вы желаете войти как администратор, то введите пароль";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(132, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(322, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Добро пожаловать в ВАШ ТЕАТР";
			// 
			// view_btn
			// 
			this->view_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->view_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->view_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->view_btn->Location = System::Drawing::Point(219, 68);
			this->view_btn->Name = L"view_btn";
			this->view_btn->Size = System::Drawing::Size(149, 54);
			this->view_btn->TabIndex = 2;
			this->view_btn->Text = L"Войти как зритель";
			this->view_btn->UseVisualStyleBackColor = false;
			this->view_btn->Click += gcnew System::EventHandler(this, &MainM::View_btn_Click);
			// 
			// adm_btn
			// 
			this->adm_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->adm_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->adm_btn->Location = System::Drawing::Point(189, 224);
			this->adm_btn->Name = L"adm_btn";
			this->adm_btn->Size = System::Drawing::Size(209, 28);
			this->adm_btn->TabIndex = 3;
			this->adm_btn->Text = L"Войти как администратор";
			this->adm_btn->UseVisualStyleBackColor = false;
			this->adm_btn->Click += gcnew System::EventHandler(this, &MainM::Adm_btn_Click);
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(189, 201);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(209, 20);
			this->password->TabIndex = 4;
			this->password->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// error_text
			// 
			this->error_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->error_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->error_text->ForeColor = System::Drawing::Color::Red;
			this->error_text->Location = System::Drawing::Point(219, 255);
			this->error_text->Name = L"error_text";
			this->error_text->Size = System::Drawing::Size(148, 31);
			this->error_text->TabIndex = 5;
			this->error_text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->error_text->Hide();

			// 
			// exit_btn
			// 
			this->exit_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->exit_btn->ForeColor = System::Drawing::SystemColors::WindowText;
			this->exit_btn->Location = System::Drawing::Point(256, 326);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(75, 23);
			this->exit_btn->TabIndex = 6;
			this->exit_btn->Text = L"Уйти";
			this->exit_btn->UseVisualStyleBackColor = false;
			this->exit_btn->Click += gcnew System::EventHandler(this, &MainM::Exit_btn_Click);
			// 
			// MainM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->exit_btn);
			this->Controls->Add(this->error_text);
			this->Controls->Add(this->password);
			this->Controls->Add(this->adm_btn);
			this->Controls->Add(this->view_btn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainM";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ВАШ ТЕАТР";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void Adm_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void View_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Exit_btn_Click(System::Object^ sender, System::EventArgs^ e);
};
}