#pragma once

namespace Project1 {

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
	protected:



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ grade;
	private: System::Windows::Forms::Button^ submit;




	private: System::Windows::Forms::Label^ test;
	private: System::Windows::Forms::TextBox^ subject;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;








	protected:



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->subject = (gcnew System::Windows::Forms::TextBox());
			this->test = (gcnew System::Windows::Forms::Label());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->grade = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->subject);
			this->panel1->Controls->Add(this->test);
			this->panel1->Controls->Add(this->submit);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->grade);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(173, 413);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(65, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"KyleQlator";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(26, 15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(33, 30);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// subject
			// 
			this->subject->Location = System::Drawing::Point(12, 107);
			this->subject->Name = L"subject";
			this->subject->Size = System::Drawing::Size(143, 20);
			this->subject->TabIndex = 7;
			// 
			// test
			// 
			this->test->ForeColor = System::Drawing::Color::Coral;
			this->test->Location = System::Drawing::Point(52, 295);
			this->test->Name = L"test";
			this->test->Size = System::Drawing::Size(74, 13);
			this->test->TabIndex = 6;
			this->test->Text = L"Test Message";
			this->test->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// submit
			// 
			this->submit->Location = System::Drawing::Point(55, 214);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(63, 23);
			this->submit->TabIndex = 5;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(59, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Grade";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(51, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Subject";
			// 
			// grade
			// 
			this->grade->Location = System::Drawing::Point(12, 166);
			this->grade->Name = L"grade";
			this->grade->Size = System::Drawing::Size(143, 20);
			this->grade->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(173, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(432, 413);
			this->panel2->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(605, 413);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"KyleQlator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this-> Close();
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ subj = subject->Text;
	String^ grd = grade->Text;
	int gradeValue;
	try {
		gradeValue = System::Convert::ToInt32(grade->Text);
		if (subject->Text == "" || grade->Text == "") {
			MessageBox::Show("Please enter a value for both subject and grade.");
		}
		else {
			MessageBox::Show("Added!");

			Label^ subjectLabel = gcnew Label();
			subjectLabel->Text = subj;
			subjectLabel->AutoSize = false;
			subjectLabel->Width = 100;
			subjectLabel->Dock = DockStyle::Left;

			Label^ gradeLabel = gcnew Label();
			gradeLabel->Text = grd;
			gradeLabel->AutoSize = false;
			gradeLabel->Width = 50;
			gradeLabel->Dock = DockStyle::Left;

			Button^ removeButton = gcnew Button();
			removeButton->Text = "Remove";
			removeButton->Dock = DockStyle::Right;
			removeButton->Click += gcnew EventHandler(this, &MyForm::RemovePanel);


			Panel^ newPanel = gcnew Panel();
			newPanel->Dock = DockStyle::Top;
			newPanel->Height = 25;

			newPanel->Controls->Add(gradeLabel);
			newPanel->Controls->Add(subjectLabel);
			
			newPanel->Controls->Add(removeButton);

			panel2->Controls->Add(newPanel);

			subject->Text = "";
			grade->Text = "";
		}
	}
	catch (System::FormatException^) {
		MessageBox::Show("Please enter a valid integer for the grade.");
	}

}

private: System::Void RemovePanel(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = static_cast<Button^>(sender);
	Panel^ parentPanel = static_cast<Panel^>(button->Parent);
	panel2->Controls->Remove(parentPanel);
}

//This automatically generated... Because of the panel...
private: System::Void removeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ removeButton = safe_cast<Button^>(sender);
	Label^ subjLabel = safe_cast<Label^>(removeButton->Parent->Controls[0]);
	Label^ grdLabel = safe_cast<Label^>(removeButton->Parent->Controls[1]);
	panel2->Controls->Remove(subjLabel);
	panel2->Controls->Remove(grdLabel);
	panel2->Controls->Remove(removeButton);
	
}


};
}
