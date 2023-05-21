#pragma once

namespace myFinals {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Key1
	/// </summary>
	public ref class Key1 : public System::Windows::Forms::Form
	{
	public:

		Key1(void)
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
		~Key1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::TextBox^ sHustle;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Reset;
	private: System::Windows::Forms::Button^ Submit;
	private: System::Windows::Forms::TextBox^ tSpent;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tBudget;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ Back;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Days;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Budget;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Spent;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Savings;
	private: System::Windows::Forms::Label^ dDays;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ tSavings;
	private: System::Windows::Forms::Label^ Total_Savings;
	private: System::Windows::Forms::Label^ ttSpent;
	private: System::Windows::Forms::Label^ Total_Spent;
	private: System::Windows::Forms::Label^ ttBudget;
	private: System::Windows::Forms::Label^ Total_Budget;
	private: System::Windows::Forms::Label^ dHustle;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->sHustle = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->Submit = (gcnew System::Windows::Forms::Button());
			this->tSpent = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tBudget = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dHustle = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Days = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Budget = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Spent = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Savings = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dDays = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tSavings = (gcnew System::Windows::Forms::Label());
			this->Total_Savings = (gcnew System::Windows::Forms::Label());
			this->ttSpent = (gcnew System::Windows::Forms::Label());
			this->Total_Spent = (gcnew System::Windows::Forms::Label());
			this->ttBudget = (gcnew System::Windows::Forms::Label());
			this->Total_Budget = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->panel1->Controls->Add(this->sHustle);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->Reset);
			this->panel1->Controls->Add(this->Submit);
			this->panel1->Controls->Add(this->tSpent);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->tBudget);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(138, 364);
			this->panel1->TabIndex = 0;
			// 
			// sHustle
			// 
			this->sHustle->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->sHustle->Font = (gcnew System::Drawing::Font(L"Satoshi", 9.75F));
			this->sHustle->Location = System::Drawing::Point(19, 175);
			this->sHustle->Name = L"sHustle";
			this->sHustle->Size = System::Drawing::Size(106, 18);
			this->sHustle->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Satoshi", 9.75F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(16, 146);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 16);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Side Hustle";
			// 
			// Reset
			// 
			this->Reset->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->Reset->FlatAppearance->BorderSize = 0;
			this->Reset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Reset->Font = (gcnew System::Drawing::Font(L"Satoshi", 9.75F));
			this->Reset->ForeColor = System::Drawing::Color::White;
			this->Reset->Location = System::Drawing::Point(30, 248);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(75, 23);
			this->Reset->TabIndex = 17;
			this->Reset->Text = L"Reset";
			this->Reset->UseVisualStyleBackColor = false;
			this->Reset->Click += gcnew System::EventHandler(this, &Key1::Reset_Click);
			// 
			// Submit
			// 
			this->Submit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->Submit->FlatAppearance->BorderSize = 0;
			this->Submit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Submit->Font = (gcnew System::Drawing::Font(L"Satoshi", 9.75F));
			this->Submit->ForeColor = System::Drawing::Color::White;
			this->Submit->Location = System::Drawing::Point(30, 219);
			this->Submit->Name = L"Submit";
			this->Submit->Size = System::Drawing::Size(75, 23);
			this->Submit->TabIndex = 16;
			this->Submit->Text = L"Submit";
			this->Submit->UseVisualStyleBackColor = false;
			this->Submit->Click += gcnew System::EventHandler(this, &Key1::Submit_Click);
			// 
			// tSpent
			// 
			this->tSpent->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tSpent->Font = (gcnew System::Drawing::Font(L"Satoshi", 9.75F));
			this->tSpent->Location = System::Drawing::Point(16, 107);
			this->tSpent->Name = L"tSpent";
			this->tSpent->Size = System::Drawing::Size(106, 18);
			this->tSpent->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Satoshi", 9.75F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(13, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 16);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Spent";
			// 
			// tBudget
			// 
			this->tBudget->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tBudget->Font = (gcnew System::Drawing::Font(L"Satoshi", 9.75F));
			this->tBudget->Location = System::Drawing::Point(16, 42);
			this->tBudget->Name = L"tBudget";
			this->tBudget->Size = System::Drawing::Size(106, 18);
			this->tBudget->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Satoshi", 9.75F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(13, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Budget";
			// 
			// Back
			// 
			this->Back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->Back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Back->Font = (gcnew System::Drawing::Font(L"Satoshi", 9.75F));
			this->Back->ForeColor = System::Drawing::Color::White;
			this->Back->Location = System::Drawing::Point(603, 7);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(60, 25);
			this->Back->TabIndex = 20;
			this->Back->Text = L"Info";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &Key1::Back_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->panel2->Controls->Add(this->Back);
			this->panel2->Controls->Add(this->dHustle);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->dDays);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(138, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(675, 364);
			this->panel2->TabIndex = 1;
			// 
			// dHustle
			// 
			this->dHustle->AutoSize = true;
			this->dHustle->Font = (gcnew System::Drawing::Font(L"Satoshi", 9.75F));
			this->dHustle->ForeColor = System::Drawing::Color::White;
			this->dHustle->Location = System::Drawing::Point(185, 11);
			this->dHustle->Name = L"dHustle";
			this->dHustle->Size = System::Drawing::Size(16, 16);
			this->dHustle->TabIndex = 22;
			this->dHustle->Text = L"0";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Satoshi", 9.75F));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(108, 11);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 16);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Side Hustle:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Satoshi", 9.75F));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(9, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 16);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Days:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Satoshi", 9.75F));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Days, this->Budget,
					this->Spent, this->Savings
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->dataGridView1->Location = System::Drawing::Point(12, 45);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowHeadersVisible = false;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->dataGridView1->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::White;
			this->dataGridView1->Size = System::Drawing::Size(401, 309);
			this->dataGridView1->TabIndex = 20;
			// 
			// Days
			// 
			this->Days->HeaderText = L"Days";
			this->Days->Name = L"Days";
			this->Days->ReadOnly = true;
			// 
			// Budget
			// 
			this->Budget->HeaderText = L"Budget";
			this->Budget->Name = L"Budget";
			this->Budget->ReadOnly = true;
			// 
			// Spent
			// 
			this->Spent->HeaderText = L"Spent";
			this->Spent->Name = L"Spent";
			this->Spent->ReadOnly = true;
			// 
			// Savings
			// 
			this->Savings->HeaderText = L"Savings";
			this->Savings->Name = L"Savings";
			this->Savings->ReadOnly = true;
			// 
			// dDays
			// 
			this->dDays->AutoSize = true;
			this->dDays->Font = (gcnew System::Drawing::Font(L"Satoshi", 9.75F));
			this->dDays->ForeColor = System::Drawing::Color::White;
			this->dDays->Location = System::Drawing::Point(50, 11);
			this->dDays->Name = L"dDays";
			this->dDays->Size = System::Drawing::Size(16, 16);
			this->dDays->TabIndex = 17;
			this->dDays->Text = L"0";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tSavings);
			this->groupBox1->Controls->Add(this->Total_Savings);
			this->groupBox1->Controls->Add(this->ttSpent);
			this->groupBox1->Controls->Add(this->Total_Spent);
			this->groupBox1->Controls->Add(this->ttBudget);
			this->groupBox1->Controls->Add(this->Total_Budget);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Satoshi", 9.75F));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(433, 45);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(230, 309);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Update";
			// 
			// tSavings
			// 
			this->tSavings->BackColor = System::Drawing::Color::White;
			this->tSavings->ForeColor = System::Drawing::Color::Black;
			this->tSavings->Location = System::Drawing::Point(6, 204);
			this->tSavings->Name = L"tSavings";
			this->tSavings->Size = System::Drawing::Size(218, 18);
			this->tSavings->TabIndex = 5;
			this->tSavings->Text = L"0";
			// 
			// Total_Savings
			// 
			this->Total_Savings->AutoSize = true;
			this->Total_Savings->Location = System::Drawing::Point(6, 175);
			this->Total_Savings->Name = L"Total_Savings";
			this->Total_Savings->Size = System::Drawing::Size(82, 16);
			this->Total_Savings->TabIndex = 4;
			this->Total_Savings->Text = L"Total Savings";
			// 
			// ttSpent
			// 
			this->ttSpent->BackColor = System::Drawing::Color::White;
			this->ttSpent->ForeColor = System::Drawing::Color::Black;
			this->ttSpent->Location = System::Drawing::Point(6, 133);
			this->ttSpent->Name = L"ttSpent";
			this->ttSpent->Size = System::Drawing::Size(218, 18);
			this->ttSpent->TabIndex = 3;
			this->ttSpent->Text = L"0";
			// 
			// Total_Spent
			// 
			this->Total_Spent->AutoSize = true;
			this->Total_Spent->Location = System::Drawing::Point(6, 104);
			this->Total_Spent->Name = L"Total_Spent";
			this->Total_Spent->Size = System::Drawing::Size(71, 16);
			this->Total_Spent->TabIndex = 2;
			this->Total_Spent->Text = L"Total Spent";
			// 
			// ttBudget
			// 
			this->ttBudget->BackColor = System::Drawing::Color::White;
			this->ttBudget->ForeColor = System::Drawing::Color::Black;
			this->ttBudget->Location = System::Drawing::Point(6, 65);
			this->ttBudget->Name = L"ttBudget";
			this->ttBudget->Size = System::Drawing::Size(218, 18);
			this->ttBudget->TabIndex = 1;
			this->ttBudget->Text = L"0";
			// 
			// Total_Budget
			// 
			this->Total_Budget->AutoSize = true;
			this->Total_Budget->Location = System::Drawing::Point(6, 36);
			this->Total_Budget->Name = L"Total_Budget";
			this->Total_Budget->Size = System::Drawing::Size(80, 16);
			this->Total_Budget->TabIndex = 0;
			this->Total_Budget->Text = L"Total Budget";
			// 
			// Key1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(813, 364);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Key1";
			this->Text = L"Key1";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Submit_Click(System::Object^ sender, System::EventArgs^ e) {
		//Our String Variables
		String^ spentInput = tSpent->Text;
		String^ budgetInput = tBudget->Text;
		String^ sideInput = sHustle->Text;
		String^ ddDays = dDays->Text;
		String^ ddHustle = dHustle->Text;

		try {
			//Converting String to Double
			double tSpentV = System::Convert::ToDouble(spentInput);
			double tBudgetV = System::Convert::ToDouble(budgetInput);
			double dHustleValue = System::Convert::ToDouble(ddHustle);
			double days = System::Convert::ToDouble(ddDays);
			double sHustleV = 0;
			double totalSavings = 0;
			double totalSpent = 0;
			double totalBudget = 0;
			double updatedSideHustle = dHustleValue - (tSpentV - tBudgetV);

			
			//if (tSpentV > tBudgetV) { //Checks if TextBox(tSpentV) is greater than TextBox(tBudgetV)
				//MessageBox::Show("Expense exceeds budget!", "Error");
			//}
			//else {
				//++days; //Will start incrementing by 1
				//dataGridView1->Rows->Add(days, tBudgetV, tSpentV, tBudgetV - tSpentV);
				//dDays->Text = days.ToString();
				/*
				Could also use this to start from 0
				dDays->Text = (++days).ToString();
				*/
			//}
			

			if (tSpentV > tBudgetV) {
				MessageBox::Show("Expense exceeds budget!", "Error");
				// Update the Side Hustle value only if spent amount exceeds budget
				if (updatedSideHustle >= 0) {
					dHustleValue = updatedSideHustle;
					// Update the Side Hustle TextBox with the updated value
					dHustle->Text = dHustleValue.ToString();
					++days; //Will start incrementing by 1
					dataGridView1->Rows->Add(days, tBudgetV, tSpentV, 0);
					dDays->Text = days.ToString();
				}
				else {
					MessageBox::Show("Expense exceeds Side Hustle!", "Error");
				}
			}else { //Data Grid View
				++days; //Will start incrementing by 1
				dataGridView1->Rows->Add(days, tBudgetV, tSpentV, tBudgetV - tSpentV);
				dDays->Text = days.ToString();
				/*
				Could also use this to start from 0
				dDays->Text = (++days).ToString();
				*/
			}


			if (!String::IsNullOrEmpty(sideInput)) { //This part is just for the Side Hustle
				sHustleV = System::Convert::ToDouble(sideInput); //Converts String to Double, could be placed outside.
				dHustle->Text = (dHustleValue + sHustleV).ToString(); //Adds the sHustleV(The one in the input) and the current one dHustleValue(Which is also dHustle->Text).
			}
			for (int i = 0; i < dataGridView1->Rows->Count; i++) { //Update
				//So here... We use for loop to add row all of the column in the rows.
				DataGridViewRow^ row = dataGridView1->Rows[i]; //Just like array, it starts from 0.
				double savingsValue = System::Convert::ToDouble(row->Cells["Savings"]->Value); //Assuming that I have a value of 20 at our first row(0), then the next one is 10 which is row(1). So it would add/sum 20 and 10. But in this line of code, we'll just get the value of "i".
				double spentValue = System::Convert::ToDouble(row->Cells["Spent"]->Value);
				double budgetValue = System::Convert::ToDouble(row->Cells["Budget"]->Value);
				totalSavings += savingsValue; //So, here's where we actually add them. So its like this. Assuming that I have savingsValue of 20, it will then be the new value of totalSavings. So we have += to add the value on its right to the variable or property on its left.
				totalSpent += spentValue;
				totalBudget += budgetValue;
			}

			tSavings->Text = totalSavings.ToString(); //This converts its Double value into its String representation.
			ttSpent->Text = totalSpent.ToString();
			ttBudget->Text = (totalBudget + System::Convert::ToDouble(dHustle->Text)).ToString();

			tBudget->Text = "";
			tSpent->Text = "";
			sHustle->Text = "";


		}
		catch (FormatException^) {
			MessageBox::Show("Please enter valid integer values.", "Error");
		}
	}
	private: System::Void Reset_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Clear(); //Reset the Data Grid

		//Reset the labels. (...)
		dDays->Text = "0";
		tSavings->Text = "0";
		ttSpent->Text = "0";
		ttBudget->Text = "0";
		dHustle->Text = "0";
		tBudget->Text = "";
		tSpent->Text = "";
		sHustle->Text = "";
	}

	private:
		System::Void Back_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("Expense Manager\n\nWelcome to Expense Manager! This application is designed to help you keep track of your expenses and manage your finances. You can easily record your expenses, categorize them, view reports, and set budgets to stay on top of your financial goals.\n\nStart organizing your expenses today with Expense Manager!", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

	};
}
