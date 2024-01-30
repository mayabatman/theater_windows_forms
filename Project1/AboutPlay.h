#pragma once
#include "BuyTicket1.h"
#include "AddingFIle.h"
#include "Checking.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� AboutPlay
	/// </summary>
	public ref class AboutPlay : public System::Windows::Forms::Form
	{
	public:
		AboutPlay(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~AboutPlay()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ play_img;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ play_ann;

	private: System::Windows::Forms::Label^ play_dir;

	private: System::Windows::Forms::Label^ play_name;
	private: System::Windows::Forms::Label^ play_trupp;



	private: System::Windows::Forms::Button^ exit_btn;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutPlay::typeid));
			this->play_img = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->play_ann = (gcnew System::Windows::Forms::Label());
			this->play_dir = (gcnew System::Windows::Forms::Label());
			this->play_name = (gcnew System::Windows::Forms::Label());
			this->play_trupp = (gcnew System::Windows::Forms::Label());
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->play_img))->BeginInit();
			this->SuspendLayout();
			// 
			// play_img
			// 
			this->play_img->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->play_img->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->play_img->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"play_img.Image")));
			this->play_img->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"play_img.InitialImage")));
			this->play_img->Location = System::Drawing::Point(12, 34);
			this->play_img->Name = L"play_img";
			this->play_img->Size = System::Drawing::Size(175, 148);
			this->play_img->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->play_img->TabIndex = 0;
			this->play_img->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(193, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"��������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(193, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"��������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(201, 182);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"� �����:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(192, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"�������";
			// 
			// play_ann
			// 
			this->play_ann->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->play_ann->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->play_ann->Location = System::Drawing::Point(272, 92);
			this->play_ann->Name = L"play_ann";
			this->play_ann->Size = System::Drawing::Size(296, 75);
			this->play_ann->TabIndex = 5;
			this->play_ann->Text = L"label5";
			// 
			// play_dir
			// 
			this->play_dir->AutoSize = true;
			this->play_dir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->play_dir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->play_dir->Location = System::Drawing::Point(272, 61);
			this->play_dir->Name = L"play_dir";
			this->play_dir->Size = System::Drawing::Size(46, 17);
			this->play_dir->TabIndex = 6;
			this->play_dir->Text = L"label6";
			// 
			// play_name
			// 
			this->play_name->AutoSize = true;
			this->play_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->play_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->play_name->Location = System::Drawing::Point(272, 34);
			this->play_name->Name = L"play_name";
			this->play_name->Size = System::Drawing::Size(46, 17);
			this->play_name->TabIndex = 7;
			this->play_name->Text = L"label7";
			// 
			// play_trupp
			// 
			this->play_trupp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->play_trupp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->play_trupp->Location = System::Drawing::Point(272, 182);
			this->play_trupp->Name = L"play_trupp";
			this->play_trupp->Size = System::Drawing::Size(296, 142);
			this->play_trupp->TabIndex = 8;
			// 
			// exit_btn
			// 
			this->exit_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->exit_btn->Location = System::Drawing::Point(529, 13);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(43, 23);
			this->exit_btn->TabIndex = 10;
			this->exit_btn->Text = L"x";
			this->exit_btn->UseVisualStyleBackColor = false;
			this->exit_btn->Click += gcnew System::EventHandler(this, &AboutPlay::Exit_btn_Click);
			// 
			// AboutPlay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->exit_btn);
			this->Controls->Add(this->play_trupp);
			this->Controls->Add(this->play_name);
			this->Controls->Add(this->play_dir);
			this->Controls->Add(this->play_ann);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->play_img);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AboutPlay";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"��� �����. ���������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->play_img))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Exit_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Buy_btn_Click(System::Object^ sender, System::EventArgs^ e);
	public: System::Void Load_Form(int index_play);
	private: System::Void FillPlay();
};
}
