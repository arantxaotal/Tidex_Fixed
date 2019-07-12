#include "UnityForm.h"
using namespace System;
using namespace System::Windows::Forms;

void Unity(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Tidex2019::UnityForm form;
	Application::Run(% form);
}
