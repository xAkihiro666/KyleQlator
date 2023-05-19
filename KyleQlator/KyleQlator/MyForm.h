#pragma once

namespace KyleQlator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;



















	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ Output;

	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ num_9;

	private: System::Windows::Forms::Button^ num_6;

	private: System::Windows::Forms::Button^ num_3;

	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ d_Divide;

	private: System::Windows::Forms::Button^ num_8;

	private: System::Windows::Forms::Button^ num_5;

	private: System::Windows::Forms::Button^ num_2;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ c_clear;

	private: System::Windows::Forms::Button^ num_7;

	private: System::Windows::Forms::Button^ num_4;

	private: System::Windows::Forms::Button^ num_one;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Label^ label1;









	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->num_9 = (gcnew System::Windows::Forms::Button());
			this->num_6 = (gcnew System::Windows::Forms::Button());
			this->num_3 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->d_Divide = (gcnew System::Windows::Forms::Button());
			this->num_8 = (gcnew System::Windows::Forms::Button());
			this->num_5 = (gcnew System::Windows::Forms::Button());
			this->num_2 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->c_clear = (gcnew System::Windows::Forms::Button());
			this->num_7 = (gcnew System::Windows::Forms::Button());
			this->num_4 = (gcnew System::Windows::Forms::Button());
			this->num_one = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Output = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button21);
			this->panel1->Controls->Add(this->button20);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 421);
			this->panel1->TabIndex = 0;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(55, 154);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 23);
			this->button21->TabIndex = 2;
			this->button21->Text = L"Grades";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(55, 88);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 1;
			this->button20->Text = L"Students";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Cornsilk;
			this->label2->Location = System::Drawing::Point(-1, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 54);
			this->label2->TabIndex = 0;
			this->label2->Text = L"MENU";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->button16);
			this->panel2->Controls->Add(this->button17);
			this->panel2->Controls->Add(this->button18);
			this->panel2->Controls->Add(this->button19);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->num_9);
			this->panel2->Controls->Add(this->num_6);
			this->panel2->Controls->Add(this->num_3);
			this->panel2->Controls->Add(this->button15);
			this->panel2->Controls->Add(this->d_Divide);
			this->panel2->Controls->Add(this->num_8);
			this->panel2->Controls->Add(this->num_5);
			this->panel2->Controls->Add(this->num_2);
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->c_clear);
			this->panel2->Controls->Add(this->num_7);
			this->panel2->Controls->Add(this->num_4);
			this->panel2->Controls->Add(this->num_one);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->Output);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(200, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(384, 421);
			this->panel2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(249, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 16);
			this->label1->TabIndex = 21;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button16
			// 
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(279, 88);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(80, 60);
			this->button16->TabIndex = 20;
			this->button16->Text = L"⌫";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(279, 154);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(80, 60);
			this->button17->TabIndex = 19;
			this->button17->Text = L"-";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(279, 220);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 60);
			this->button18->TabIndex = 18;
			this->button18->Text = L"+";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Calibri", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(279, 286);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(80, 123);
			this->button19->TabIndex = 17;
			this->button19->Text = L"=";
			this->button19->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(193, 88);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(80, 60);
			this->button11->TabIndex = 15;
			this->button11->Text = L"×";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// num_9
			// 
			this->num_9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->num_9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->num_9->FlatAppearance->BorderSize = 0;
			this->num_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num_9->Font = (gcnew System::Drawing::Font(L"Calibri", 22));
			this->num_9->ForeColor = System::Drawing::Color::White;
			this->num_9->Location = System::Drawing::Point(193, 154);
			this->num_9->Name = L"num_9";
			this->num_9->Size = System::Drawing::Size(80, 60);
			this->num_9->TabIndex = 14;
			this->num_9->Text = L"9";
			this->num_9->UseVisualStyleBackColor = false;
			this->num_9->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// num_6
			// 
			this->num_6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->num_6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->num_6->FlatAppearance->BorderSize = 0;
			this->num_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num_6->Font = (gcnew System::Drawing::Font(L"Calibri", 22));
			this->num_6->ForeColor = System::Drawing::Color::White;
			this->num_6->Location = System::Drawing::Point(193, 220);
			this->num_6->Name = L"num_6";
			this->num_6->Size = System::Drawing::Size(80, 60);
			this->num_6->TabIndex = 13;
			this->num_6->Text = L"6";
			this->num_6->UseVisualStyleBackColor = false;
			this->num_6->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// num_3
			// 
			this->num_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->num_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->num_3->FlatAppearance->BorderSize = 0;
			this->num_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num_3->Font = (gcnew System::Drawing::Font(L"Calibri", 22));
			this->num_3->ForeColor = System::Drawing::Color::White;
			this->num_3->Location = System::Drawing::Point(193, 286);
			this->num_3->Name = L"num_3";
			this->num_3->Size = System::Drawing::Size(80, 60);
			this->num_3->TabIndex = 12;
			this->num_3->Text = L"3";
			this->num_3->UseVisualStyleBackColor = false;
			this->num_3->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Calibri", 22));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(193, 352);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(80, 60);
			this->button15->TabIndex = 11;
			this->button15->Text = L".";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// d_Divide
			// 
			this->d_Divide->FlatAppearance->BorderSize = 0;
			this->d_Divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->d_Divide->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->d_Divide->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->d_Divide->Location = System::Drawing::Point(107, 88);
			this->d_Divide->Name = L"d_Divide";
			this->d_Divide->Size = System::Drawing::Size(80, 60);
			this->d_Divide->TabIndex = 10;
			this->d_Divide->Text = L"÷";
			this->d_Divide->UseVisualStyleBackColor = true;
			// 
			// num_8
			// 
			this->num_8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->num_8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->num_8->FlatAppearance->BorderSize = 0;
			this->num_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num_8->Font = (gcnew System::Drawing::Font(L"Calibri", 22));
			this->num_8->ForeColor = System::Drawing::Color::White;
			this->num_8->Location = System::Drawing::Point(107, 154);
			this->num_8->Name = L"num_8";
			this->num_8->Size = System::Drawing::Size(80, 60);
			this->num_8->TabIndex = 9;
			this->num_8->Text = L"8";
			this->num_8->UseVisualStyleBackColor = false;
			this->num_8->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// num_5
			// 
			this->num_5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->num_5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->num_5->FlatAppearance->BorderSize = 0;
			this->num_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num_5->Font = (gcnew System::Drawing::Font(L"Calibri", 22));
			this->num_5->ForeColor = System::Drawing::Color::White;
			this->num_5->Location = System::Drawing::Point(107, 220);
			this->num_5->Name = L"num_5";
			this->num_5->Size = System::Drawing::Size(80, 60);
			this->num_5->TabIndex = 8;
			this->num_5->Text = L"5";
			this->num_5->UseVisualStyleBackColor = false;
			this->num_5->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// num_2
			// 
			this->num_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->num_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->num_2->FlatAppearance->BorderSize = 0;
			this->num_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num_2->Font = (gcnew System::Drawing::Font(L"Calibri", 22));
			this->num_2->ForeColor = System::Drawing::Color::White;
			this->num_2->Location = System::Drawing::Point(107, 286);
			this->num_2->Name = L"num_2";
			this->num_2->Size = System::Drawing::Size(80, 60);
			this->num_2->TabIndex = 7;
			this->num_2->Text = L"2";
			this->num_2->UseVisualStyleBackColor = false;
			this->num_2->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Calibri", 22));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(107, 352);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(80, 60);
			this->button10->TabIndex = 6;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// c_clear
			// 
			this->c_clear->FlatAppearance->BorderSize = 0;
			this->c_clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->c_clear->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->c_clear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->c_clear->Location = System::Drawing::Point(21, 88);
			this->c_clear->Name = L"c_clear";
			this->c_clear->Size = System::Drawing::Size(80, 60);
			this->c_clear->TabIndex = 5;
			this->c_clear->Text = L"C";
			this->c_clear->UseVisualStyleBackColor = true;
			// 
			// num_7
			// 
			this->num_7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->num_7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->num_7->FlatAppearance->BorderSize = 0;
			this->num_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num_7->Font = (gcnew System::Drawing::Font(L"Calibri", 22));
			this->num_7->ForeColor = System::Drawing::Color::White;
			this->num_7->Location = System::Drawing::Point(21, 154);
			this->num_7->Name = L"num_7";
			this->num_7->Size = System::Drawing::Size(80, 60);
			this->num_7->TabIndex = 4;
			this->num_7->Text = L"7";
			this->num_7->UseVisualStyleBackColor = false;
			this->num_7->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// num_4
			// 
			this->num_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->num_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->num_4->FlatAppearance->BorderSize = 0;
			this->num_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num_4->Font = (gcnew System::Drawing::Font(L"Calibri", 22));
			this->num_4->ForeColor = System::Drawing::Color::White;
			this->num_4->Location = System::Drawing::Point(21, 220);
			this->num_4->Name = L"num_4";
			this->num_4->Size = System::Drawing::Size(80, 60);
			this->num_4->TabIndex = 3;
			this->num_4->Text = L"4";
			this->num_4->UseVisualStyleBackColor = false;
			this->num_4->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// num_one
			// 
			this->num_one->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->num_one->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->num_one->FlatAppearance->BorderSize = 0;
			this->num_one->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num_one->Font = (gcnew System::Drawing::Font(L"Calibri", 22));
			this->num_one->ForeColor = System::Drawing::Color::White;
			this->num_one->Location = System::Drawing::Point(21, 286);
			this->num_one->Name = L"num_one";
			this->num_one->Size = System::Drawing::Size(80, 60);
			this->num_one->TabIndex = 2;
			this->num_one->Text = L"1";
			this->num_one->UseVisualStyleBackColor = false;
			this->num_one->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 22));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(21, 352);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 60);
			this->button1->TabIndex = 1;
			this->button1->Text = L"%";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// Output
			// 
			this->Output->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->Output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Output->ForeColor = System::Drawing::Color::White;
			this->Output->Location = System::Drawing::Point(23, 25);
			this->Output->Name = L"Output";
			this->Output->Size = System::Drawing::Size(336, 54);
			this->Output->TabIndex = 0;
			this->Output->Text = L"0";
			this->Output->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Output->Click += gcnew System::EventHandler(this, &MyForm::Output_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 421);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"KyleQlator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Output_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
};