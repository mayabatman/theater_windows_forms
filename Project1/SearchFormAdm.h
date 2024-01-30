#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ SearchFormAdm
	/// </summary>
	public ref class SearchFormAdm : public System::Windows::Forms::Form
	{
	public:
		SearchFormAdm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~SearchFormAdm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ âûéòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñåçîíûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñïåêòàêëèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğåæèññ¸ğûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ àêò¸ğûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîèñêToolStripMenuItem;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòàòèñòèêàToolStripMenuItem;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->âûéòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñåçîíûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïåêòàêëèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğåæèññ¸ğûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àêò¸ğûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîèñêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->ñòàòèñòèêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 177);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 13);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Ğåçóëüòàòû ïîèñêà:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(59, 198);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(340, 121);
			this->listBox1->TabIndex = 21;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(285, 107);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Ïîèñê";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(285, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 20);
			this->textBox1->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(282, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Ââåäèòå äàííûå:";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(59, 113);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(65, 17);
			this->radioButton4->TabIndex = 17;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Ïî äàòå";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(59, 90);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(76, 17);
			this->radioButton3->TabIndex = 16;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Ïî àêò¸ğó";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(59, 66);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(97, 17);
			this->radioButton2->TabIndex = 15;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Ïî ğåæèññ¸ğó";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(59, 42);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(92, 17);
			this->radioButton1->TabIndex = 14;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Ïî íàçâàíèş";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->âûéòèToolStripMenuItem,
					this->ñåçîíûToolStripMenuItem, this->ñïåêòàêëèToolStripMenuItem, this->ğåæèññ¸ğûToolStripMenuItem, this->àêò¸ğûToolStripMenuItem,
					this->ïîèñêToolStripMenuItem, this->ñòàòèñòèêàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(584, 24);
			this->menuStrip1->TabIndex = 24;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// âûéòèToolStripMenuItem
			// 
			this->âûéòèToolStripMenuItem->Name = L"âûéòèToolStripMenuItem";
			this->âûéòèToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->âûéòèToolStripMenuItem->Text = L"Âûéòè";
			// 
			// ñåçîíûToolStripMenuItem
			// 
			this->ñåçîíûToolStripMenuItem->Name = L"ñåçîíûToolStripMenuItem";
			this->ñåçîíûToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->ñåçîíûToolStripMenuItem->Text = L"Ñåçîíû";
			// 
			// ñïåêòàêëèToolStripMenuItem
			// 
			this->ñïåêòàêëèToolStripMenuItem->Name = L"ñïåêòàêëèToolStripMenuItem";
			this->ñïåêòàêëèToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->ñïåêòàêëèToolStripMenuItem->Text = L"Ñïåêòàêëè";
			// 
			// ğåæèññ¸ğûToolStripMenuItem
			// 
			this->ğåæèññ¸ğûToolStripMenuItem->Name = L"ğåæèññ¸ğûToolStripMenuItem";
			this->ğåæèññ¸ğûToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->ğåæèññ¸ğûToolStripMenuItem->Text = L"Ğåæèññ¸ğû";
			// 
			// àêò¸ğûToolStripMenuItem
			// 
			this->àêò¸ğûToolStripMenuItem->Name = L"àêò¸ğûToolStripMenuItem";
			this->àêò¸ğûToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->àêò¸ğûToolStripMenuItem->Text = L"Àêò¸ğû";
	
			// 
			// ïîèñêToolStripMenuItem
			// 
			this->ïîèñêToolStripMenuItem->Name = L"ïîèñêToolStripMenuItem";
			this->ïîèñêToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->ïîèñêToolStripMenuItem->Text = L"Ïîèñê";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(443, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 55);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Ğåäàêòèğîâàòü";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// ñòàòèñòèêàToolStripMenuItem
			// 
			this->ñòàòèñòèêàToolStripMenuItem->Name = L"ñòàòèñòèêàToolStripMenuItem";
			this->ñòàòèñòèêàToolStripMenuItem->Size = System::Drawing::Size(80, 20);
			this->ñòàòèñòèêàToolStripMenuItem->Text = L"Ñòàòèñòèêà";
			// 
			// SearchFormAdm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Name = L"SearchFormAdm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ÂÀØ ÒÅÀÒĞ. Ïîèñê";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
