#pragma once
#include "Choise.h"

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Start : public System::Windows::Forms::Form
	{
	public:
		Start(){
			InitializeComponent(); 
			int r, b, g;
			r = 100, g = 0, b = 255;
			this->BackColor = System::Drawing::Color::FromArgb(r, g, b);
		}

		~Start(){
			if (components)
			{
				delete components;
			}
		}

#pragma region Windows Form Designer generated code
	private: 
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::PictureBox^ Play;
		System::ComponentModel::Container ^components;

		void InitializeComponent(void){
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Start::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Play = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Play))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 72, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(126, 123);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1183, 131);
			this->label1->TabIndex = 1;
			this->label1->Text = L"     Tic     Tac     Toe     ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::AliceBlue;
			this->label2->Location = System::Drawing::Point(674, 518);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 36);
			this->label2->TabIndex = 2;
			this->label2->Text = L"PLAY";
			// 
			// Play
			// 
			this->Play->BackColor = System::Drawing::Color::Transparent;
			this->Play->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Play->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Play.Image")));
			this->Play->Location = System::Drawing::Point(658, 387);
			this->Play->Name = L"Play";
			this->Play->Size = System::Drawing::Size(128, 128);
			this->Play->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->Play->TabIndex = 3;
			this->Play->TabStop = false;
			this->Play->Click += gcnew System::EventHandler(this, &Start::Play_Click);
			// 
			// Start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->ClientSize = System::Drawing::Size(1353, 748);
			this->Controls->Add(this->Play);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::MediumBlue;
			this->Name = L"Start";
			this->Text = L"Start";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Play))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: 
	Choise^ nextForm = gcnew Choise(); // next page object
	System::Void Play_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		nextForm->ShowDialog(); // show the next page 
		this->Show();
}


};
}



