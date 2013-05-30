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
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
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
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  Books;
	protected: 

	private: System::Windows::Forms::Button^  Confirm;
	private: System::Windows::Forms::Button^  Back;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Books = (gcnew System::Windows::Forms::ListBox());
			this->Confirm = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Choose a book:";
			// 
			// Books
			// 
			this->Books->FormattingEnabled = true;
			this->Books->Location = System::Drawing::Point(28, 25);
			this->Books->Name = L"Books";
			this->Books->Size = System::Drawing::Size(120, 95);
			this->Books->TabIndex = 1;
			// 
			// Confirm
			// 
			this->Confirm->Location = System::Drawing::Point(12, 126);
			this->Confirm->Name = L"Confirm";
			this->Confirm->Size = System::Drawing::Size(75, 23);
			this->Confirm->TabIndex = 2;
			this->Confirm->Text = L"Confirm";
			this->Confirm->UseVisualStyleBackColor = true;
			// 
			// Back
			// 
			this->Back->Location = System::Drawing::Point(95, 126);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(75, 23);
			this->Back->TabIndex = 3;
			this->Back->Text = L"Back";
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &Form4::Back_Click);
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(182, 161);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->Confirm);
			this->Controls->Add(this->Books);
			this->Controls->Add(this->label1);
			this->Name = L"Form4";
			this->Text = L"Form4";
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form4_Load(System::Object^  sender, System::EventArgs^  e) {

			this -> Books -> BeginUpdate();
			StreamReader^ list = gcnew StreamReader("Books\\list.txt");
			while(list -> Peek() > 0) {

				String^ element = list -> ReadLine();
				element = element -> Substring(0, (element -> Length) - 4);
				this -> Books -> Items -> Add(element);
			}
			list -> Close();
			this -> Books -> SelectedIndex = 0;
			this -> Books -> EndUpdate();

			 }
	private: System::Void Back_Click(System::Object^  sender, System::EventArgs^  e) {

				 Close();

			 }
};
}
