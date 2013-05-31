#pragma once

#include "Form1.h"


namespace MyBookSaver {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  Author;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Title;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Pages;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  Confirm;
	private: System::Windows::Forms::Button^  Back;
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
			this->Author = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Title = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Pages = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Confirm = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Author
			// 
			this->Author->Location = System::Drawing::Point(12, 36);
			this->Author->Name = L"Author";
			this->Author->Size = System::Drawing::Size(100, 20);
			this->Author->TabIndex = 0;
			this->Author->Text = L" ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Author:";
			// 
			// Title
			// 
			this->Title->Location = System::Drawing::Point(12, 85);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(100, 20);
			this->Title->TabIndex = 2;
			this->Title->Text = L" ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Title:";
			// 
			// Pages
			// 
			this->Pages->Location = System::Drawing::Point(12, 139);
			this->Pages->Name = L"Pages";
			this->Pages->Size = System::Drawing::Size(100, 20);
			this->Pages->TabIndex = 4;
			this->Pages->Text = L" ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Number of pages:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(134, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 6;
			// 
			// Confirm
			// 
			this->Confirm->Location = System::Drawing::Point(166, 31);
			this->Confirm->Name = L"Confirm";
			this->Confirm->Size = System::Drawing::Size(105, 51);
			this->Confirm->TabIndex = 7;
			this->Confirm->Text = L"Create!";
			this->Confirm->UseVisualStyleBackColor = true;
			this->Confirm->Click += gcnew System::EventHandler(this, &Form2::Confirm_Click);
			// 
			// Back
			// 
			this->Back->Location = System::Drawing::Point(166, 108);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(105, 51);
			this->Back->TabIndex = 8;
			this->Back->Text = L"Back";
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &Form2::Back_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(296, 199);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->Confirm);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Pages);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Author);
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Confirm_Click(System::Object^  sender, System::EventArgs^  e) {

				 if (Author -> Text != " " && Title -> Text != " " && Pages -> Text != " ") {

					 String^ filename = "Books\\" + Author -> Text + " - " + Title -> Text + ".txt";
					 StreamWriter^ book = gcnew StreamWriter(filename);
					 StreamWriter^ list = gcnew StreamWriter("Books\\list.txt", true);
					 book -> WriteLine(Author->Text + " || " + Title -> Text + " || " + Pages -> Text);
					 book -> Close();
					 list -> WriteLine(filename -> Substring(6));
					 list -> Close();
					 
					 // TODO: add an update label in main menu

					 Close();

					 
				 }
				 else MessageBox::Show("Insert all information!", "Not enough data!", MessageBoxButtons::OK);

			 }
private: System::Void Back_Click(System::Object^  sender, System::EventArgs^  e) {

			 Close();

		 }
};
}
