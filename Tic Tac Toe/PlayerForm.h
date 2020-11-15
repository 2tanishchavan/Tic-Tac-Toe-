#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	static int roundtotal;
	static int board1[3][3] = { 1,1,1,	1,1,1,	1,1,1 };

	public ref class PlayerForm : public System::Windows::Forms::Form
	{
	public:
		
		PlayerForm(){
			InitializeComponent();
			boxsetting->Hide();
		}

		PlayerForm(String^pl1name, String^pl2name, String^ totalround){
			InitializeComponent();
			boxsetting->Hide();
			whowin->Hide();
			pl1->Text = pl1name;
			pl2->Text = pl2name;
			int r, b, g;
			r = 100, g = 0, b = 255;
			this->BackColor = System::Drawing::Color::FromArgb(r, g, b);
			roundtotal = Convert::ToInt32(totalround);
		}

		~PlayerForm(){
			if (components)
			{
				delete components;
			}
		}

#pragma region Windows Form Designer generated code
	private:
		System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Panel^ panel2;
		System::Windows::Forms::Panel^ panel6;
		System::Windows::Forms::Panel^ panel3;
		System::Windows::Forms::Panel^ panel5;
		System::Windows::Forms::Panel^ panel4;
		System::Windows::Forms::Button^ btn9;
		System::Windows::Forms::Button^ btn8;
		System::Windows::Forms::Button^ btn6;
		System::Windows::Forms::Button^ btn7;
		System::Windows::Forms::Button^ btn4;
		System::Windows::Forms::Button^ btn3;
		System::Windows::Forms::Button^ btn1;
		System::Windows::Forms::Button^ btn5;
		System::Windows::Forms::Button^ btn2;
		System::Windows::Forms::Label^ pl1;
		System::Windows::Forms::Label^ pl2;
		System::Windows::Forms::Panel^ panel8;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Panel^ panel9;
		System::Windows::Forms::Label^ ply2sco;
		System::Windows::Forms::Label^ Pla1Sco;
		System::Windows::Forms::Label^ ply1sco;
		System::Windows::Forms::Label^ roundno;
		System::Windows::Forms::PictureBox^ btnsetting;
		System::Windows::Forms::Panel^ boxsetting;
		System::Windows::Forms::PictureBox^ reseticon;
		System::Windows::Forms::PictureBox^ restarticon;
		System::Windows::Forms::PictureBox^ backicon;
		System::Windows::Forms::PictureBox^ exiticon;
		System::Windows::Forms::PictureBox^ nexticon;
		System::Windows::Forms::Label^ XorO;
		System::Windows::Forms::Label^ labal1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ OorX;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::Panel^ whowin;
		System::Windows::Forms::Label^ whowintxt;
		System::Windows::Forms::Label^ roundleft;

		System::ComponentModel::Container ^components;

		void InitializeComponent(void)	{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlayerForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->XorO = (gcnew System::Windows::Forms::Label());
			this->labal1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pl1 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->ply1sco = (gcnew System::Windows::Forms::Label());
			this->Pla1Sco = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->OorX = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pl2 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->ply2sco = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->roundno = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnsetting = (gcnew System::Windows::Forms::PictureBox());
			this->boxsetting = (gcnew System::Windows::Forms::Panel());
			this->reseticon = (gcnew System::Windows::Forms::PictureBox());
			this->restarticon = (gcnew System::Windows::Forms::PictureBox());
			this->backicon = (gcnew System::Windows::Forms::PictureBox());
			this->exiticon = (gcnew System::Windows::Forms::PictureBox());
			this->nexticon = (gcnew System::Windows::Forms::PictureBox());
			this->whowin = (gcnew System::Windows::Forms::Panel());
			this->roundleft = (gcnew System::Windows::Forms::Label());
			this->whowintxt = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnsetting))->BeginInit();
			this->boxsetting->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reseticon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->restarticon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backicon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exiticon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nexticon))->BeginInit();
			this->whowin->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(26, 21);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1316, 133);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->XorO);
			this->panel2->Controls->Add(this->labal1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->pl1);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Location = System::Drawing::Point(23, 19);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(570, 85);
			this->panel2->TabIndex = 1;
			// 
			// XorO
			// 
			this->XorO->AccessibleName = L"";
			this->XorO->AutoSize = true;
			this->XorO->Font = (gcnew System::Drawing::Font(L"Chiller", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->XorO->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->XorO->Location = System::Drawing::Point(202, 15);
			this->XorO->Name = L"XorO";
			this->XorO->Size = System::Drawing::Size(46, 56);
			this->XorO->TabIndex = 9;
			this->XorO->Text = L"X";
			// 
			// labal1
			// 
			this->labal1->AccessibleName = L"";
			this->labal1->AutoSize = true;
			this->labal1->Font = (gcnew System::Drawing::Font(L"Chiller", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labal1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->labal1->Location = System::Drawing::Point(167, 15);
			this->labal1->Name = L"labal1";
			this->labal1->Size = System::Drawing::Size(43, 56);
			this->labal1->TabIndex = 8;
			this->labal1->Text = L"(";
			// 
			// label2
			// 
			this->label2->AccessibleName = L"";
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Chiller", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(234, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 56);
			this->label2->TabIndex = 7;
			this->label2->Text = L")";
			// 
			// pl1
			// 
			this->pl1->AccessibleName = L"";
			this->pl1->AutoSize = true;
			this->pl1->Font = (gcnew System::Drawing::Font(L"Chiller", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pl1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->pl1->Location = System::Drawing::Point(34, 15);
			this->pl1->Name = L"pl1";
			this->pl1->Size = System::Drawing::Size(127, 56);
			this->pl1->TabIndex = 5;
			this->pl1->Text = L"Player1";
			// 
			// panel6
			// 
			this->panel6->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->ply1sco);
			this->panel6->Controls->Add(this->Pla1Sco);
			this->panel6->ForeColor = System::Drawing::Color::Transparent;
			this->panel6->Location = System::Drawing::Point(452, 12);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(93, 57);
			this->panel6->TabIndex = 3;
			// 
			// ply1sco
			// 
			this->ply1sco->AutoSize = true;
			this->ply1sco->Enabled = false;
			this->ply1sco->Font = (gcnew System::Drawing::Font(L"Chiller", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ply1sco->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->ply1sco->Location = System::Drawing::Point(29, 1);
			this->ply1sco->Name = L"ply1sco";
			this->ply1sco->Size = System::Drawing::Size(46, 56);
			this->ply1sco->TabIndex = 2;
			this->ply1sco->Text = L"0\r\n";
			this->ply1sco->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Pla1Sco
			// 
			this->Pla1Sco->AutoSize = true;
			this->Pla1Sco->BackColor = System::Drawing::Color::DodgerBlue;
			this->Pla1Sco->Location = System::Drawing::Point(36, 24);
			this->Pla1Sco->Name = L"Pla1Sco";
			this->Pla1Sco->Size = System::Drawing::Size(0, 13);
			this->Pla1Sco->TabIndex = 2;
			this->Pla1Sco->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->OorX);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->pl2);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Location = System::Drawing::Point(673, 19);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(617, 85);
			this->panel3->TabIndex = 2;
			// 
			// OorX
			// 
			this->OorX->AccessibleName = L"";
			this->OorX->AutoSize = true;
			this->OorX->Font = (gcnew System::Drawing::Font(L"Chiller", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OorX->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->OorX->Location = System::Drawing::Point(214, 15);
			this->OorX->Name = L"OorX";
			this->OorX->Size = System::Drawing::Size(46, 56);
			this->OorX->TabIndex = 12;
			this->OorX->Text = L"O";
			// 
			// label4
			// 
			this->label4->AccessibleName = L"";
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Chiller", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(189, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 56);
			this->label4->TabIndex = 11;
			this->label4->Text = L"(";
			// 
			// pl2
			// 
			this->pl2->AutoSize = true;
			this->pl2->Font = (gcnew System::Drawing::Font(L"Chiller", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pl2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->pl2->Location = System::Drawing::Point(41, 15);
			this->pl2->Name = L"pl2";
			this->pl2->Size = System::Drawing::Size(132, 56);
			this->pl2->TabIndex = 4;
			this->pl2->Text = L"Player2";
			// 
			// panel5
			// 
			this->panel5->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->ply2sco);
			this->panel5->ForeColor = System::Drawing::Color::Transparent;
			this->panel5->Location = System::Drawing::Point(498, 12);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(93, 59);
			this->panel5->TabIndex = 2;
			// 
			// ply2sco
			// 
			this->ply2sco->AutoSize = true;
			this->ply2sco->Font = (gcnew System::Drawing::Font(L"Chiller", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ply2sco->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->ply2sco->Location = System::Drawing::Point(25, 1);
			this->ply2sco->Name = L"ply2sco";
			this->ply2sco->Size = System::Drawing::Size(46, 56);
			this->ply2sco->TabIndex = 1;
			this->ply2sco->Text = L"0\r\n";
			this->ply2sco->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AccessibleName = L"";
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Chiller", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(248, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 56);
			this->label5->TabIndex = 10;
			this->label5->Text = L")";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->btn9);
			this->panel4->Controls->Add(this->btn8);
			this->panel4->Controls->Add(this->btn6);
			this->panel4->Controls->Add(this->btn7);
			this->panel4->Controls->Add(this->btn4);
			this->panel4->Controls->Add(this->btn3);
			this->panel4->Controls->Add(this->btn1);
			this->panel4->Controls->Add(this->btn5);
			this->panel4->Controls->Add(this->btn2);
			this->panel4->Location = System::Drawing::Point(12, 190);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(637, 498);
			this->panel4->TabIndex = 2;
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Stencil", 72, System::Drawing::FontStyle::Bold));
			this->btn9->Location = System::Drawing::Point(422, 328);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(210, 162);
			this->btn9->TabIndex = 15;
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &PlayerForm::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Stencil", 72, System::Drawing::FontStyle::Bold));
			this->btn8->Location = System::Drawing::Point(211, 328);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(210, 162);
			this->btn8->TabIndex = 14;
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &PlayerForm::btn8_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Stencil", 72, System::Drawing::FontStyle::Bold));
			this->btn6->Location = System::Drawing::Point(422, 165);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(210, 162);
			this->btn6->TabIndex = 13;
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &PlayerForm::btn6_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Stencil", 72, System::Drawing::FontStyle::Bold));
			this->btn7->Location = System::Drawing::Point(-1, 328);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(210, 162);
			this->btn7->TabIndex = 12;
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &PlayerForm::btn7_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Stencil", 72, System::Drawing::FontStyle::Bold));
			this->btn4->Location = System::Drawing::Point(-1, 166);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(210, 162);
			this->btn4->TabIndex = 11;
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &PlayerForm::btn4_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Stencil", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(422, 3);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(210, 162);
			this->btn3->TabIndex = 10;
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &PlayerForm::btn3_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Stencil", 72, System::Drawing::FontStyle::Bold));
			this->btn1->Location = System::Drawing::Point(-1, 3);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(210, 162);
			this->btn1->TabIndex = 9;
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &PlayerForm::btn1_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Stencil", 72, System::Drawing::FontStyle::Bold));
			this->btn5->Location = System::Drawing::Point(211, 165);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(210, 162);
			this->btn5->TabIndex = 5;
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &PlayerForm::btn5_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Stencil", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(211, 3);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(210, 162);
			this->btn2->TabIndex = 3;
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &PlayerForm::btn2_Click);
			// 
			// panel8
			// 
			this->panel8->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel8->Controls->Add(this->panel9);
			this->panel8->Controls->Add(this->label1);
			this->panel8->Location = System::Drawing::Point(664, 201);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(534, 117);
			this->panel8->TabIndex = 3;
			// 
			// panel9
			// 
			this->panel9->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel9->BackColor = System::Drawing::Color::Transparent;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel9->Controls->Add(this->roundno);
			this->panel9->ForeColor = System::Drawing::Color::Transparent;
			this->panel9->Location = System::Drawing::Point(381, 23);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(99, 66);
			this->panel9->TabIndex = 2;
			// 
			// roundno
			// 
			this->roundno->Enabled = false;
			this->roundno->Font = (gcnew System::Drawing::Font(L"Chiller", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roundno->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->roundno->Location = System::Drawing::Point(32, 6);
			this->roundno->Name = L"roundno";
			this->roundno->Size = System::Drawing::Size(43, 49);
			this->roundno->TabIndex = 3;
			this->roundno->Text = L"1";
			this->roundno->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(3, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(350, 66);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ROUND ";
			// 
			// btnsetting
			// 
			this->btnsetting->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnsetting.Image")));
			this->btnsetting->Location = System::Drawing::Point(1310, 160);
			this->btnsetting->Name = L"btnsetting";
			this->btnsetting->Size = System::Drawing::Size(32, 32);
			this->btnsetting->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnsetting->TabIndex = 18;
			this->btnsetting->TabStop = false;
			this->btnsetting->Click += gcnew System::EventHandler(this, &PlayerForm::btnsetting_Click);
			// 
			// boxsetting
			// 
			this->boxsetting->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->boxsetting->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->boxsetting->BackColor = System::Drawing::Color::SpringGreen;
			this->boxsetting->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->boxsetting->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->boxsetting->Controls->Add(this->reseticon);
			this->boxsetting->Controls->Add(this->restarticon);
			this->boxsetting->Controls->Add(this->backicon);
			this->boxsetting->Controls->Add(this->exiticon);
			this->boxsetting->Controls->Add(this->nexticon);
			this->boxsetting->Location = System::Drawing::Point(1152, 160);
			this->boxsetting->Name = L"boxsetting";
			this->boxsetting->Size = System::Drawing::Size(201, 589);
			this->boxsetting->TabIndex = 19;
			this->boxsetting->Visible = false;
			// 
			// reseticon
			// 
			this->reseticon->AccessibleDescription = L"reset the current game";
			this->reseticon->AccessibleName = L"reset";
			this->reseticon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reseticon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reseticon.Image")));
			this->reseticon->Location = System::Drawing::Point(96, 44);
			this->reseticon->Name = L"reseticon";
			this->reseticon->Size = System::Drawing::Size(38, 32);
			this->reseticon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->reseticon->TabIndex = 24;
			this->reseticon->TabStop = false;
			this->reseticon->Click += gcnew System::EventHandler(this, &PlayerForm::reseticon_Click);
			// 
			// restarticon
			// 
			this->restarticon->AccessibleDescription = L"restart the whole game";
			this->restarticon->AccessibleName = L"restart";
			this->restarticon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->restarticon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"restarticon.Image")));
			this->restarticon->Location = System::Drawing::Point(96, 249);
			this->restarticon->Name = L"restarticon";
			this->restarticon->Size = System::Drawing::Size(38, 32);
			this->restarticon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->restarticon->TabIndex = 23;
			this->restarticon->TabStop = false;
			this->restarticon->Click += gcnew System::EventHandler(this, &PlayerForm::restarticon_Click);
			// 
			// backicon
			// 
			this->backicon->AccessibleDescription = L"back";
			this->backicon->AccessibleName = L"back";
			this->backicon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backicon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backicon.Image")));
			this->backicon->Location = System::Drawing::Point(96, 435);
			this->backicon->Name = L"backicon";
			this->backicon->Size = System::Drawing::Size(38, 48);
			this->backicon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backicon->TabIndex = 21;
			this->backicon->TabStop = false;
			this->backicon->Click += gcnew System::EventHandler(this, &PlayerForm::backicon_Click);
			// 
			// exiticon
			// 
			this->exiticon->AccessibleDescription = L"exit";
			this->exiticon->AccessibleName = L"exit";
			this->exiticon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exiticon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exiticon.Image")));
			this->exiticon->Location = System::Drawing::Point(96, 336);
			this->exiticon->Name = L"exiticon";
			this->exiticon->Size = System::Drawing::Size(38, 33);
			this->exiticon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->exiticon->TabIndex = 22;
			this->exiticon->TabStop = false;
			this->exiticon->Click += gcnew System::EventHandler(this, &PlayerForm::exiticon_Click);
			// 
			// nexticon
			// 
			this->nexticon->AccessibleDescription = L"next game";
			this->nexticon->AccessibleName = L"next game";
			this->nexticon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->nexticon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nexticon.Image")));
			this->nexticon->Location = System::Drawing::Point(96, 149);
			this->nexticon->Name = L"nexticon";
			this->nexticon->Size = System::Drawing::Size(38, 42);
			this->nexticon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->nexticon->TabIndex = 20;
			this->nexticon->TabStop = false;
			this->nexticon->Click += gcnew System::EventHandler(this, &PlayerForm::nexticon_Click);
			// 
			// whowin
			// 
			this->whowin->BackColor = System::Drawing::Color::Transparent;
			this->whowin->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->whowin->Controls->Add(this->roundleft);
			this->whowin->Controls->Add(this->whowintxt);
			this->whowin->Location = System::Drawing::Point(664, 368);
			this->whowin->Name = L"whowin";
			this->whowin->Size = System::Drawing::Size(534, 163);
			this->whowin->TabIndex = 20;
			// 
			// roundleft
			// 
			this->roundleft->AutoSize = true;
			this->roundleft->Font = (gcnew System::Drawing::Font(L"Chiller", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roundleft->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->roundleft->Location = System::Drawing::Point(56, 84);
			this->roundleft->Name = L"roundleft";
			this->roundleft->Size = System::Drawing::Size(110, 56);
			this->roundleft->TabIndex = 1;
			this->roundleft->Text = L"label3";
			// 
			// whowintxt
			// 
			this->whowintxt->AutoSize = true;
			this->whowintxt->Font = (gcnew System::Drawing::Font(L"Chiller", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->whowintxt->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->whowintxt->Location = System::Drawing::Point(56, 18);
			this->whowintxt->Name = L"whowintxt";
			this->whowintxt->Size = System::Drawing::Size(110, 56);
			this->whowintxt->TabIndex = 0;
			this->whowintxt->Text = L"label3";
			// 
			// PlayerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DodgerBlue;
			this->ClientSize = System::Drawing::Size(1354, 749);
			this->Controls->Add(this->whowin);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->boxsetting);
			this->Controls->Add(this->btnsetting);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Name = L"PlayerForm";
			this->Text = L"PlayerForm";
			this->Click += gcnew System::EventHandler(this, &PlayerForm::PlayerForm_Click);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnsetting))->EndInit();
			this->boxsetting->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reseticon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->restarticon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backicon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exiticon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nexticon))->EndInit();
			this->whowin->ResumeLayout(false);
			this->whowin->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: 

	bool checker = false;
	int pluscore;
	int round = 1;
	int pl1score, pl2score;
	String ^x = "X", ^ o = "O";
	int tempx = 22, tempo = 23;
	int b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0, b6 = 0, b7 = 0, b8 = 0, b9 = 0;

	void scorback() {
		pl1score = Convert::ToInt32(ply1sco->Text);
		pl2score = Convert::ToInt32(ply2sco->Text);

		if (pl1score == pl2score) {
			panel5->BackColor = System::Drawing::Color::Gold;
			panel6->BackColor = System::Drawing::Color::Gold;
		}
		else if (pl1score < pl2score) {
			panel5->BackColor = System::Drawing::Color::Lime;
			panel6->BackColor = System::Drawing::Color::Tomato;
		}
		else if (pl1score > pl2score) {
			panel5->BackColor = System::Drawing::Color::Tomato;
			panel6->BackColor = System::Drawing::Color::Lime;
		}
	}

	void Enable_True() {

		round = Convert::ToInt32(roundno->Text);
		roundno->Text = Convert::ToString(round + 1);

		scorback();
		if (round >= roundtotal) {
			if (pl1score == pl2score) {
				MessageBox::Show("It is a Tie", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Close();
			}
			else if (pl1score > pl2score) {
				MessageBox::Show("The Winner is " + pl1->Text, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Close();
			}
			else if (pl1score < pl2score) {
				MessageBox::Show("The Winner is " + pl2->Text, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Close();
			}
		}
			
		if (XorO->Text == "O" && OorX->Text == "X") {
			XorO->Text = x;
			OorX->Text = o;
		}
		else if (XorO->Text == "X" && OorX->Text == "O")
		{
			XorO->Text = o;
			OorX->Text = x;
		}
	}

	void btnEnable() {
		board1[0][0] = 1;
		board1[0][1] = 1;
		board1[0][2] = 1;
		board1[1][0] = 1;
		board1[1][1] = 1;
		board1[1][2] = 1;
		board1[2][0] = 1;
		board1[2][1] = 1;
		board1[2][2] = 1;
		b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0, b6 = 0, b7 = 0, b8 = 0, b9 = 0, checker = false;
		btn1->Text = "";
		btn2->Text = "";
		btn3->Text = "";
		btn4->Text = "";
		btn5->Text = "";
		btn6->Text = "";
		btn7->Text = "";
		btn8->Text = "";
		btn9->Text = "";
		btn1->Enabled = true;
		btn2->Enabled = true;
		btn3->Enabled = true;
		btn4->Enabled = true;
		btn5->Enabled = true;
		btn6->Enabled = true;
		btn7->Enabled = true;
		btn8->Enabled = true;
		btn9->Enabled = true;
	}
	inline void whowonpl1(){ 
		whowin->Show();
		whowintxt->Text = "The Winner is " + pl1->Text;
		roundleft->Text = Convert::ToString(roundtotal - round) + " Rounds are reamaining";
	}
	inline void whowonpl2() {
		whowin->Show();
		whowintxt->Text = "The Winner is " + pl2->Text;
		roundleft->Text = Convert::ToString(roundtotal - round) + " Rounds are reamaining";
	}
	void whowontie() {
		whowin->Show();
		whowintxt->Text = "It is a Tie ";
		roundleft->Text = Convert::ToString(roundtotal - round) + " Rounds are reamaining";
		pluscore = Convert::ToInt32(ply2sco->Text);
		ply2sco->Text = Convert::ToString(pluscore + 1);
		pluscore = Convert::ToInt32(ply1sco->Text);
		ply1sco->Text = Convert::ToString(pluscore + 1);
	}
	void pl1plus() {
		pluscore = Convert::ToInt32(ply1sco->Text);
		ply1sco->Text = Convert::ToString(pluscore + 2);
	}
	void pl2plus() {
		pluscore = Convert::ToInt32(ply2sco->Text);
		ply2sco->Text = Convert::ToString(pluscore + 2);
	}
	void pl1win() {
		pl1plus();
		btnEnable();
		Enable_True();
		whowonpl1();
	}
	void pl2win() {
		pl2plus();
		btnEnable();
		Enable_True();
		whowonpl2();
	}		
	void itstie() {
		whowontie();
		btnEnable();
		Enable_True();
	}

	void score(int b[3][3]) {
		if (XorO->Text == "X") {
			for (int row = 0; row < 3; row++) {
				if (b[row][0] == b[row][1] && b[row][1] == b[row][2]) {
					if (b[row][0] == tempx)
						pl1win();
					else if (b[row][0] == tempo)
						pl2win();
				}
			}

			for (int col = 0; col < 3; col++) {
				if (b[0][col] == b[1][col] && b[1][col] == b[2][col]) {
					if (b[0][col] == tempx)
						pl1win();
					else if (b[0][col] == tempo)
						pl2win();
				}
			}

			if (b[0][0] == b[1][1] && b[1][1] == b[2][2]) {
				if (b[0][0] == tempx)
					pl1win();
				else if (b[0][0] == tempo)
					pl2win();
			}

			else if (b[0][2] == b[1][1] && b[1][1] == b[2][0]) {
				if (b[0][2] == tempx)
					pl1win();
				else if (b[0][2] == tempo)
					pl2win();
			}
			else if ((b1) && (b2) && (b3) && (b4) && (b5) && (b6) && (b7) && (b8) && (b9)) {
				itstie();
			}
		}
		else {
			for (int row = 0; row < 3; row++) {
				if (b[row][0] == b[row][1] && b[row][1] == b[row][2]) {
					if (b[row][0] == tempo)
						pl1win();
					else if (b[row][0] == tempx)
						pl2win();
				}
			}

			for (int col = 0; col < 3; col++) {
				if (b[0][col] == b[1][col] && b[1][col] == b[2][col]) {
					if (b[0][col] == tempo)
						pl1win();
					else if (b[0][col] == tempx)
						pl2win();
				}
			}

			if (b[0][0] == b[1][1] && b[1][1] == b[2][2]) {
				if (b[0][0] == tempo)
					pl1win();
				else if (b[0][0] == tempx)
					pl2win();
			}

			else if (b[0][2] == b[1][1] && b[1][1] == b[2][0]) {
				if (b[0][2] == tempo)
					pl1win();
				else if (b[0][2] == tempx)
					pl2win();
			}
			else if ((b1) && (b2) && (b3) && (b4) && (b5) && (b6) && (b7) && (b8) && (b9)) {
				itstie();
			}
		}
	}
	
	System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			btn1->Text = "X";
			checker = true;
			board1[0][0] = tempx;
		}
		else {
			btn1->Text = "O";
			checker = false;
			board1[0][0] = tempo;
		}
		b1 = 1;
		btn1->Enabled = false;
		score(board1);
	}
	System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			btn2->Text = "X";
			checker = true;
			board1[0][1] = tempx;
		}
		else {
			btn2->Text = "O";
			checker = false;
			board1[0][1] = tempo;
		}
		b2 = 1;
		btn2->Enabled = false;
		score(board1);
	}
	System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			btn3->Text = "X";
			checker = true;
			board1[0][2] = tempx;
		}
		else {
			btn3->Text = "O";
			checker = false;
			board1[0][2] = tempo;
		}
		b3 = 1;
		btn3->Enabled = false;
		score(board1);
	}
	System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			btn4->Text = "X";
			checker = true;
			board1[1][0] = tempx;
		}
		else {
			btn4->Text = "O";
			checker = false;
			board1[1][0] = tempo;
		}
		b4 = 1;
		btn4->Enabled = false;
		score(board1);
	}
	System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			btn5->Text = "X";
			checker = true;
			board1[1][1] = tempx;
		}
		else {
			btn5->Text = "O";
			checker = false;
			board1[1][1] = tempo;
		}
		b5 = 1;
		btn5->Enabled = false;
		score(board1);
	}
	System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			btn6->Text = "X";
			checker = true;
			board1[1][2] = tempx;
		}
		else {
			btn6->Text = "O";
			checker = false;
			board1[1][2] = tempo;
		}
		b6 = 1;
		btn6->Enabled = false;
		score(board1);
	}
	System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			btn7->Text = "X";
			checker = true;
			board1[2][0] = tempx;
		}
		else {
			btn7->Text = "O";
			checker = false;
			board1[2][0] = tempo;
		}
		b7 = 1;
		btn7->Enabled = false;
		score(board1);
	}
	System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			btn8->Text = "X";
			checker = true;
			board1[2][1] = tempx;
		}
		else {
			btn8->Text = "O";
			checker = false;
			board1[2][1] = tempo;
		}
		b8 = 1;
		btn8->Enabled = false;
		score(board1);

	}
	System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			btn9->Text = "X";
			checker = true;
			board1[2][2] = tempx;
		}
		else {
			btn9->Text = "O";
			checker = false;
			board1[2][2] = tempo;
		}
		b9 = 1;
		btn9->Enabled = false;
		score(board1);
	}

	System::Void btnsetting_Click(System::Object^ sender, System::EventArgs^ e) {
		boxsetting->Show();
	}

	System::Void restarticon_Click(System::Object^ sender, System::EventArgs^ e) {
		btnEnable();
		Enable_True();
		roundno->Text = "1";
		ply1sco->Text = "0";
		ply2sco->Text = "0";
		panel5->BackColor = System::Drawing::Color::Transparent;
		panel6->BackColor = System::Drawing::Color::Transparent;
	}
	System::Void reseticon_Click(System::Object^ sender, System::EventArgs^ e) {
		round = Convert::ToInt32(roundno->Text);
		roundno->Text = Convert::ToString(round - 1);
		btnEnable();
		Enable_True();
	}
	System::Void nexticon_Click(System::Object^ sender, System::EventArgs^ e) {
		itstie();
	}
	System::Void exiticon_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do you really want to exit?", "Tic Tac Toe",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question) ==
			System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
	}	

	System::Void backicon_Click(System::Object^ sender, System::EventArgs^ e) {
		boxsetting->Hide();
	}

	System::Void PlayerForm_Click(System::Object^ sender, System::EventArgs^ e) {
		whowin->Hide();
		boxsetting->Hide();
	}
};
}
