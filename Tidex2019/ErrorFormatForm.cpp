#include "ErrorFormatForm.h"
using namespace System;
using namespace System::Windows::Forms;

void ErrorFormat(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Tidex2019::ErrorFormatForm form;
	Application::Run(% form);
}

