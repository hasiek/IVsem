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
	using namespace System::Windows::Forms::DataVisualization::Charting;

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Books = (gcnew System::Windows::Forms::ListBox());
			this->Confirm = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(363, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Choose a book:";
			// 
			// Books
			// 
			this->Books->FormattingEnabled = true;
			this->Books->Location = System::Drawing::Point(341, 54);
			this->Books->Name = L"Books";
			this->Books->Size = System::Drawing::Size(120, 95);
			this->Books->TabIndex = 1;
			// 
			// Confirm
			// 
			this->Confirm->Location = System::Drawing::Point(366, 164);
			this->Confirm->Name = L"Confirm";
			this->Confirm->Size = System::Drawing::Size(75, 23);
			this->Confirm->TabIndex = 2;
			this->Confirm->Text = L"Confirm";
			this->Confirm->UseVisualStyleBackColor = true;
			this->Confirm->Click += gcnew System::EventHandler(this, &Form4::Confirm_Click);
			// 
			// Back
			// 
			this->Back->Location = System::Drawing::Point(366, 279);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(75, 23);
			this->Back->TabIndex = 3;
			this->Back->Text = L"Back";
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &Form4::Back_Click);
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->AxisX->Minimum = 0;
			chartArea1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->BorderColor = System::Drawing::Color::Transparent;
			chartArea1->BorderWidth = 0;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->BackColor = System::Drawing::Color::Transparent;
			legend1->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::NotSet;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(-1, 2);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(336, 313);
			this->chart1->TabIndex = 4;
			this->chart1->Text = L"chart1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(385, 220);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(239, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 6;
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(473, 314);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->Confirm);
			this->Controls->Add(this->Books);
			this->Controls->Add(this->label1);
			this->Name = L"Form4";
			this->Text = L"Form4";
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
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

private: System::Void Confirm_Click(System::Object^  sender, System::EventArgs^  e) {
				
				this -> chart1 -> Series -> Clear();
				this -> chart1 -> Visible = true;
				StreamReader^ book = gcnew StreamReader("Books\\" + Books -> SelectedItem -> ToString() + ".txt");
				book -> ReadLine();
				Series^ progress = gcnew Series;
				progress -> ChartArea = L"ChartArea1";
				progress -> ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
				progress -> Legend = L"Legend1";
				progress -> Name = L"progress";
				int i = 0;
				progress -> Points -> Add(gcnew DataPoint(0,0));
				String^ element = " ";
				while(book -> Peek() > 0) {

						i++;
						element = book -> ReadLine();
						int number = Convert::ToInt32(element);
						DataPoint^ point = gcnew DataPoint(i, element);
						progress -> Points -> Add(point);
				}
				if (i == 0) {
					MessageBox::Show("You made no updates for this book so far.", "Just saying.", MessageBoxButtons::OK);
					this -> chart1 -> Hide();
				}
				else label3 -> Text = "You're currently on " + element + ". page of this book.";
				book -> Close();
				this -> chart1 -> Series -> Add(progress);
		 }
};
}
