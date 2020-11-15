#pragma once
#include"Compage.h"

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class CompName : public System::Windows::Forms::Form
	{
	public:
		CompName()
		{
			InitializeComponent();
			int r, b, g;
			r = 100, g = 0, b = 255;
			this->BackColor = System::Drawing::Color::FromArgb(r, g, b);
		}

		~CompName()
		{
			if (components)
			{
				delete components;
			}
		}

#pragma region Windows Form Designer generated code
	private: 
		System::Windows::Forms::PictureBox^ forward;
		System::Windows::Forms::PictureBox^ backward;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::Label^ label9;
		System::Windows::Forms::Label^ label3;

		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::PictureBox^ pictureBox3;
		System::Windows::Forms::RichTextBox^ plyname;

		System::Windows::Forms::MaskedTextBox^ no_round;

		System::ComponentModel::Container ^components;

		void InitializeComponent(void){
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CompName::typeid));
			this->forward = (gcnew System::Windows::Forms::PictureBox());
			this->backward = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->plyname = (gcnew System::Windows::Forms::RichTextBox());
			this->no_round = (gcnew System::Windows::Forms::MaskedTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->forward))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backward))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// forward
			// 
			this->forward->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->forward->Cursor = System::Windows::Forms::Cursors::Hand;
			this->forward->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"forward.Image")));
			this->forward->Location = System::Drawing::Point(617, 512);
			this->forward->Name = L"forward";
			this->forward->Size = System::Drawing::Size(71, 66);
			this->forward->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->forward->TabIndex = 22;
			this->forward->TabStop = false;
			this->forward->Click += gcnew System::EventHandler(this, &CompName::forward_Click);
			// 
			// backward
			// 
			this->backward->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->backward->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backward->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backward.Image")));
			this->backward->Location = System::Drawing::Point(486, 512);
			this->backward->Name = L"backward";
			this->backward->Size = System::Drawing::Size(71, 66);
			this->backward->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backward->TabIndex = 21;
			this->backward->TabStop = false;
			this->backward->Click += gcnew System::EventHandler(this, &CompName::backward_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(563, 312);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 63);
			this->label7->TabIndex = 18;
			this->label7->Text = L":";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label9->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(295, 312);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(262, 65);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Rounds";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(563, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 63);
			this->label3->TabIndex = 20;
			this->label3->Text = L":";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(296, 197);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(261, 65);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Player ";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(219, 197);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(71, 66);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 23;
			this->pictureBox3->TabStop = false;
			// 
			// plyname
			// 
			this->plyname->BackColor = System::Drawing::Color::CornflowerBlue;
			this->plyname->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plyname->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->plyname->Location = System::Drawing::Point(617, 197);
			this->plyname->Name = L"plyname";
			this->plyname->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->plyname->Size = System::Drawing::Size(574, 66);
			this->plyname->TabIndex = 24;
			this->plyname->Text = L"Enter your name";
			this->plyname->TextChanged += gcnew System::EventHandler(this, &CompName::plyname_TextChanged);
			// 
			// no_round
			// 
			this->no_round->BackColor = System::Drawing::Color::CornflowerBlue;
			this->no_round->Font = (gcnew System::Drawing::Font(L"Snap ITC", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->no_round->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->no_round->Location = System::Drawing::Point(617, 306);
			this->no_round->Mask = L"00";
			this->no_round->Name = L"no_round";
			this->no_round->Size = System::Drawing::Size(100, 69);
			this->no_round->TabIndex = 26;
			this->no_round->ValidatingType = System::Int32::typeid;
			this->no_round->Click += gcnew System::EventHandler(this, &CompName::no_round_Click);
			// 
			// CompName
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(1354, 749);
			this->Controls->Add(this->no_round);
			this->Controls->Add(this->plyname);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->forward);
			this->Controls->Add(this->backward);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"CompName";
			this->Text = L"CompName";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->forward))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backward))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: 

	int pl1 = 1, ro = 1;
	System::Void forward_Click(System::Object^ sender, System::EventArgs^ e) {
	if (pl1 == 0 ) {
		if (ro == 0) {
			Compage^ maingame = gcnew Compage((plyname->Text), (Convert::ToString(no_round->Text)));
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

	System::Void plyname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (pl1) {
			plyname->Text = "";
			pl1 = 0;
		}
		this->plyname->ForeColor = SystemColors::ControlLightLight;
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
