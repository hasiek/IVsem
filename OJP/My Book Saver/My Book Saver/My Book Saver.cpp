// My Book Saver.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "Form2.h"
#include "Form3.h"
#include "Form4.h"


using namespace MyBookSaver;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
