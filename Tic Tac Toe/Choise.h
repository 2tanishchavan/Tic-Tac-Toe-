#pragma once
#include"My2PlayName.h"
#include"CompName.h"

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Choise : public System::Windows::Forms::Form
	{
	public:
		Choise(){
			InitializeComponent();
			int r, b, g;
			r = 100, g = 0, b = 255;
			this->BackColor = System::Drawing::Color::FromArgb(r, g, b);

		}

		~Choise(){
			if (components)
			{
				delete components;
			}
		}

#pragma region Windows Form Designer generated code
	private: 
		System::Windows::Forms::PictureBox^ imgbtn2pla;
		System::Windows::Forms::PictureBox^ imgbtn1pla;
		System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Label^ btn2pla;
		System::Windows::Forms::Label^ btn1pla;
		System::Windows::Forms::Panel^ panel2;
		System::Windows::Forms::Label^ label3;
		System::ComponentModel::IContainer^ components;


		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Choise::typeid));
			this->imgbtn2pla = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtn1pla = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn2pla = (gcnew System::Windows::Forms::Label());
			this->btn1pla = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtn2pla))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtn1pla))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// imgbtn2pla
			// 
			this->imgbtn2pla->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgbtn2pla->Cursor = System::Windows::Forms::Cursors::Hand;
			this->imgbtn2pla->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtn2pla.Image")));
			this->imgbtn2pla->Location = System::Drawing::Point(31, 9);
			this->imgbtn2pla->Name = L"imgbtn2pla";
			this->imgbtn2pla->Size = System::Drawing::Size(132, 132);
			this->imgbtn2pla->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->imgbtn2pla->TabIndex = 1;
			this->imgbtn2pla->TabStop = false;
			this->imgbtn2pla->Click += gcnew System::EventHandler(this, &Choise::imgbtn2pla_Click);
			// 
			// imgbtn1pla
			// 
			this->imgbtn1pla->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgbtn1pla->Cursor = System::Windows::Forms::Cursors::Hand;
			this->imgbtn1pla->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtn1pla.Image")));
			this->imgbtn1pla->Location = System::Drawing::Point(31, 12);
			this->imgbtn1pla->Name = L"imgbtn1pla";
			this->imgbtn1pla->Size = System::Drawing::Size(132, 132);
			this->imgbtn1pla->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->imgbtn1pla->TabIndex = 2;
			this->imgbtn1pla->TabStop = false;
			this->imgbtn1pla->Click += gcnew System::EventHandler(this, &Choise::imgbtn1pla_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->imgbtn2pla);
			this->panel1->Controls->Add(this->btn2pla);
			this->panel1->Location = System::Drawing::Point(297, 274);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(776, 156);
			this->panel1->TabIndex = 3;
			// 
			// btn2pla
			// 
			this->btn2pla->AutoSize = true;
			this->btn2pla->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->btn2pla->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn2pla->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2pla->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn2pla->Location = System::Drawing::Point(352, 39);
			this->btn2pla->Name = L"btn2pla";
			this->btn2pla->Size = System::Drawing::Size(299, 65);
			this->btn2pla->TabIndex = 0;
			this->btn2pla->Text = L"2 Player";
			this->btn2pla->Click += gcnew System::EventHandler(this, &Choise::btn2pla_Click);
			// 
			// btn1pla
			// 
			this->btn1pla->AutoSize = true;
			this->btn1pla->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->btn1pla->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn1pla->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1pla->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn1pla->Location = System::Drawing::Point(352, 45);
			this->btn1pla->Name = L"btn1pla";
			this->btn1pla->Size = System::Drawing::Size(340, 65);
			this->btn1pla->TabIndex = 1;
			this->btn1pla->Text = L"Computer";
			this->btn1pla->Click += gcnew System::EventHandler(this, &Choise::btn1pla_Click);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->imgbtn1pla);
			this->panel2->Controls->Add(this->btn1pla);
			this->panel2->Location = System::Drawing::Point(297, 521);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(776, 160);
			this->panel2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 72, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Location = System::Drawing::Point(94, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1183, 131);
			this->label3->TabIndex = 5;
			this->label3->Text = L"     Tic     Tac     Toe     ";
			// 
			// Choise
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(1354, 749);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Name = L"Choise";
			this->Text = L"Choise";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtn2pla))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtn1pla))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: 
	My2PlayName^ playname = gcnew My2PlayName();
	CompName^ compname = gcnew CompName();
	System::Void btn2pla_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		playname->ShowDialog();
		this->Close();
	}		
	System::Void imgbtn2pla_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		playname->ShowDialog();
		this->Close();
	}

	System::Void btn1pla_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		compname->ShowDialog();
		this->Close();
	}
	System::Void imgbtn1pla_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		compname->ShowDialog();
		this->Close();
	}
};
}


/*
* Start::Void Play_Click(System::Object^ sender, System::EventArgs^ e)
	Parameters:
		sender: The source of the event.
		e: An object that contains no event data.

	Altritube
		nextForm: Choise

	function
		event handler
			Play_Click
*/
