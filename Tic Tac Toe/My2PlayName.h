#pragma once
#include"PlayerForm.h"

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

public ref class My2PlayName : public System::Windows::Forms::Form{
public:
	My2PlayName(){
		InitializeComponent();
		int r, b, g;
		r = 100, g = 0, b = 255;
		this->BackColor = System::Drawing::Color::FromArgb(r, g, b);
	}
   ~My2PlayName(){
	
	   if (components)
		{
			delete components;
		}
	}

#pragma region Windows Form Designer generated code
	private: 
		// player 1 name 
		System::Windows::Forms::PictureBox^ pictureBox1;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::RichTextBox^ pl1name;
		
		// player 2 name 
		System::Windows::Forms::PictureBox^ pictureBox3;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::RichTextBox^ pl2name;

		// rounds
		System::Windows::Forms::Label^ label9;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::MaskedTextBox^ no_round;


		// back & forward
		System::Windows::Forms::PictureBox^ backward;
		System::Windows::Forms::PictureBox^ forward;

		System::ComponentModel::Container ^components;

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(My2PlayName::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->backward = (gcnew System::Windows::Forms::PictureBox());
			this->forward = (gcnew System::Windows::Forms::PictureBox());
			this->pl1name = (gcnew System::Windows::Forms::RichTextBox());
			this->pl2name = (gcnew System::Windows::Forms::RichTextBox());
			this->no_round = (gcnew System::Windows::Forms::MaskedTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backward))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->forward))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(594, 202);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 63);
			this->label4->TabIndex = 7;
			this->label4->Text = L":";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(198, 203);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(71, 66);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label6->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(275, 202);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(299, 65);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Player 2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(594, 309);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 63);
			this->label7->TabIndex = 7;
			this->label7->Text = L":";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label9->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(274, 309);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(300, 65);
			this->label9->TabIndex = 0;
			this->label9->Text = L" Rounds ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(289, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(285, 65);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Player 1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(198, 98);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(71, 66);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(594, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 63);
			this->label3->TabIndex = 7;
			this->label3->Text = L":";
			// 
			// backward
			// 
			this->backward->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backward->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backward.Image")));
			this->backward->Location = System::Drawing::Point(503, 497);
			this->backward->Name = L"backward";
			this->backward->Size = System::Drawing::Size(71, 66);
			this->backward->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backward->TabIndex = 8;
			this->backward->TabStop = false;
			this->backward->Click += gcnew System::EventHandler(this, &My2PlayName::backward_Click);
			// 
			// forward
			// 
			this->forward->Cursor = System::Windows::Forms::Cursors::Hand;
			this->forward->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"forward.Image")));
			this->forward->Location = System::Drawing::Point(659, 497);
			this->forward->Name = L"forward";
			this->forward->Size = System::Drawing::Size(71, 66);
			this->forward->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->forward->TabIndex = 9;
			this->forward->TabStop = false;
			this->forward->Click += gcnew System::EventHandler(this, &My2PlayName::forward_Click);
			// 
			// pl1name
			// 
			this->pl1name->BackColor = System::Drawing::Color::CornflowerBlue;
			this->pl1name->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->pl1name->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pl1name->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->pl1name->Location = System::Drawing::Point(659, 98);
			this->pl1name->Name = L"pl1name";
			this->pl1name->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->pl1name->Size = System::Drawing::Size(574, 66);
			this->pl1name->TabIndex = 10;
			this->pl1name->Text = L"Enter your name";
			this->pl1name->TextChanged += gcnew System::EventHandler(this, &My2PlayName::pl1name_TextChanged);
			// 
			// pl2name
			// 
			this->pl2name->BackColor = System::Drawing::Color::CornflowerBlue;
			this->pl2name->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pl2name->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->pl2name->Location = System::Drawing::Point(659, 203);
			this->pl2name->Name = L"pl2name";
			this->pl2name->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->pl2name->Size = System::Drawing::Size(574, 66);
			this->pl2name->TabIndex = 11;
			this->pl2name->Text = L"Enter your name";
			this->pl2name->TextChanged += gcnew System::EventHandler(this, &My2PlayName::pl2name_TextChanged_1);
			// 
			// no_round
			// 
			this->no_round->BackColor = System::Drawing::Color::CornflowerBlue;
			this->no_round->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->no_round->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->no_round->Location = System::Drawing::Point(659, 301);
			this->no_round->Mask = L"0";
			this->no_round->Name = L"no_round";
			this->no_round->Size = System::Drawing::Size(116, 71);
			this->no_round->TabIndex = 13;
			this->no_round->ValidatingType = System::Int32::typeid;
			this->no_round->Click += gcnew System::EventHandler(this, &My2PlayName::no_round_Click);
			// 
			// My2PlayName
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(1354, 749);
			this->Controls->Add(this->no_round);
			this->Controls->Add(this->pl2name);
			this->Controls->Add(this->pl1name);
			this->Controls->Add(this->forward);
			this->Controls->Add(this->backward);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->Name = L"My2PlayName";
			this->Text = L"My2PlayName";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backward))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->forward))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private:
	int pl1 = 1, pl2 = 1, ro = 1;

	System::Void forward_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pl1 == 0 && pl2 == 0) {
			if (ro == 0) {
				PlayerForm^ maingame = gcnew PlayerForm((pl1name->Text), (pl2name->Text), (Convert::ToString(no_round->Text)));
				this->Hide();
				maingame->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("Pls enter the number of Round", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		else {
			MessageBox::Show("Pls enter the Name", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	System::Void backward_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	System::Void pl1name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (pl1) {
			pl1name->Text = "";
			pl1 = 0;
		}
		this->pl1name->ForeColor = SystemColors::ControlLightLight;
	}

	System::Void pl2name_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
		if (pl2) {
			pl2name->Text = "";
			pl2 = 0;
		}
		this->pl2name->ForeColor = SystemColors::ControlLightLight;
	}

	System::Void no_round_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ro) {
			no_round->Text = "";
			ro = 0;
		}
		this->no_round->ForeColor = SystemColors::ControlLightLight;
	}
};
}
