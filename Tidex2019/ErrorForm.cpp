#include "ErrorForm.h"
using namespace System;
using namespace System::Windows::Forms;

void Error(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Tidex2019::ErrorForm form;
	Application::Run(% form);
}

