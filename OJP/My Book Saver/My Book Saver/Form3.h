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
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
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
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  wybierz;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  Books;
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
			this->wybierz = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Books = (gcnew System::Windows::Forms::ListBox());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// wybierz
			// 
			this->wybierz->Location = System::Drawing::Point(12, 126);
			this->wybierz->Name = L"wybierz";
			this->wybierz->Size = System::Drawing::Size(75, 23);
			this->wybierz->TabIndex = 0;
			this->wybierz->Text = L"Confirm";
			this->wybierz->UseVisualStyleBackColor = true;
			this->wybierz->Click += gcnew System::EventHandler(this, &Form3::wybierz_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Choose a book:";
			// 
			// Books
			// 
			this->Books->FormattingEnabled = true;
			this->Books->Location = System::Drawing::Point(26, 25);
			this->Books->Name = L"Books";
			this->Books->Size = System::Drawing::Size(120, 95);
			this->Books->TabIndex = 2;
			// 
			// Back
			// 
			this->Back->Location = System::Drawing::Point(95, 126);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(75, 23);
			this->Back->TabIndex = 3;
			this->Back->Text = L"Back";
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &Form3::Back_Click);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(182, 161);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->Books);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->wybierz);
			this->Name = L"Form3";
			this->Text = L"Form3";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form3_Load(System::Object^  sender, System::EventArgs^  e) {
			
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
	private: System::Void wybierz_Click(System::Object^  sender, System::EventArgs^  e) {

				 Form^ update = gcnew Form;
				 NumericUpDown^ page = gcnew NumericUpDown;
				 page -> Location = Point(80,100);
				 StreamReader^ book1 = gcnew StreamReader("Books\\" + Books -> SelectedItem -> ToString() + ".txt");
				 String^ read = book1 -> ReadLine();
				 int index = read -> LastIndexOf('|');
				 book1 -> Close();
				 read = read -> Substring(index+2,read->Length - (index+2));
				 page -> Maximum = Convert::ToInt32(read);
				 update -> Controls -> Add(page);
				 Label^ describe = gcnew Label;
				 describe -> SetBounds(60,75,update -> Width - 50, 20);
				 describe -> Text = "On which page are you now?";
				 update -> Controls -> Add(describe);
				 Button^ ok = gcnew Button;
				 ok -> Text = "Confirm";
				 ok -> Location = Point(90,120);
				 update -> Controls -> Add(ok);
				 ok -> DialogResult = System::Windows::Forms::DialogResult::OK;
				 update -> ShowDialog();
				 StreamWriter^ book = gcnew StreamWriter("Books\\" + Books -> SelectedItem -> ToString() + ".txt", true);
				 book -> WriteLine(page -> Text);
				 book -> Close();

			 }
private: System::Void Back_Click(System::Object^  sender, System::EventArgs^  e) {

			 Close();

		 }
};
}
