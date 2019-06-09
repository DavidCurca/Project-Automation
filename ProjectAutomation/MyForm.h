#pragma once
#include <windows.h>
#include <exception>
#include <fstream>
#include <string.h>
#include <iostream>
bool can = false;

namespace ProjectAutomation {

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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label11;





	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label12;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(9, 145);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 96);
			this->button1->TabIndex = 0;
			this->button1->Text = L"CREATE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username : ";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(112, 247);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(227, 23);
			this->progressBar1->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 22);
			this->textBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password : ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(93, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(180, 22);
			this->textBox2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Description : ";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(94, 125);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(146, 116);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(172, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Programming Language : ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(173, 96);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 277);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Message : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(81, 277);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 17);
			this->label6->TabIndex = 11;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->progressBar1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(12, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(353, 304);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Please Insert Text";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(112, 71);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(161, 22);
			this->textBox4->TabIndex = 16;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 71);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(105, 17);
			this->label15->TabIndex = 15;
			this->label15->Text = L"Project Name : ";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Yellow;
			this->button6->Location = System::Drawing::Point(246, 128);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 113);
			this->button6->TabIndex = 14;
			this->button6->Text = L"RESET SETTINGS";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 251);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 17);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Loading Bar : ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(87, 277);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(248, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"------------------------------------------------";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 29);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 17);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Settings : ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(79, 26);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"HIDE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(160, 26);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"SHOW";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 63);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(64, 17);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Theme : ";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(78, 83);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(61, 21);
			this->checkBox1->TabIndex = 17;
			this->checkBox1->Text = L"Gray";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(79, 133);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(58, 21);
			this->checkBox2->TabIndex = 18;
			this->checkBox2->Text = L"Blue";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(79, 184);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(75, 21);
			this->checkBox3->TabIndex = 19;
			this->checkBox3->Text = L"Default";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(24, 253);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 33);
			this->button4->TabIndex = 20;
			this->button4->Text = L"ABORT";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Red;
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(144, 253);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 33);
			this->button5->TabIndex = 21;
			this->button5->Text = L"EXIT";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(118, 262);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(21, 17);
			this->label11->TabIndex = 22;
			this->label11->Text = L"or";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(93, 321);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(221, 17);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Are You Sure You Want to Exit\? : ";
			this->label13->Visible = false;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(320, 318);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 29;
			this->button7->Text = L"YES";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(398, 318);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(21, 17);
			this->label14->TabIndex = 30;
			this->label14->Text = L"or";
			this->label14->Visible = false;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(429, 318);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 31;
			this->button8->Text = L"NO";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Location = System::Drawing::Point(371, 4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(281, 304);
			this->groupBox2->TabIndex = 32;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Settings";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(79, 161);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(123, 17);
			this->label17->TabIndex = 25;
			this->label17->Text = L"-----------------------";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(76, 107);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(128, 17);
			this->label16->TabIndex = 24;
			this->label16->Text = L"------------------------";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(72, 63);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(133, 17);
			this->label12->TabIndex = 23;
			this->label12->Text = L"-------------------------";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(664, 358);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Project Automation";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void webBrowser1_DocumentCompleted(System::Object^  sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	std::ofstream fout("date.txt");
	using namespace System::Runtime::InteropServices;
	String^ username = textBox1->Text;
	String^ password = textBox2->Text;
	String^ projectname = textBox4->Text;
	String^ description = richTextBox1->Text;
	IntPtr p1 = Marshal::StringToHGlobalAnsi(username);
	IntPtr p2 = Marshal::StringToHGlobalAnsi(password);
	IntPtr p3 = Marshal::StringToHGlobalAnsi(description);
	IntPtr p4 = Marshal::StringToHGlobalAnsi(projectname);
	const char* cUstr = static_cast<const char*>(p1.ToPointer());
	const char* cPas = static_cast<const char*>(p2.ToPointer());
	const char* cDes = static_cast<const char*>(p3.ToPointer());
	const char* cNme = static_cast<const char*>(p4.ToPointer());
	fout << cUstr << std::endl;
	fout << cPas << std::endl;
	fout << cNme << std::endl;
	fout <<  cDes << std::endl;
	system("C:/Users/Admin/Desktop/create.py");
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	label10->Visible = false; label12->Visible = false;
	checkBox1->Visible = false; checkBox2->Visible = false; checkBox3->Visible = false;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	label10->Visible = true; label12->Visible = true;
	checkBox1->Visible = true; checkBox2->Visible = true; checkBox3->Visible = true;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	label7->Text = "You Can't Abort! HaHA!!";
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (can) {
		exit(0);
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (can) {
		label13->Visible = false; label14->Visible = false;
		button7->Visible = false; button8->Visible = false;
		can = false;
	}else {

	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	label13->Visible = true; label14->Visible = true;
	button7->Visible = true; button8->Visible = true;
	can = true;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	checkBox1->Checked = false; checkBox2->Checked = false; checkBox3->Checked = true;
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	checkBox2->Checked = false; checkBox3->Checked = false;
	this->BackColor = SystemColors::ActiveBorder;
}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	checkBox1->Checked = false; checkBox3->Checked = false;
	this->BackColor = SystemColors::GradientInactiveCaption;
}
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	checkBox1->Checked = false; checkBox2->Checked = false;
	this->BackColor = SystemColors::Control;
}
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
