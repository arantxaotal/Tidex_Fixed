#include "HelpForm.h"

using namespace System;
using namespace System::Windows::Forms;

void Help(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Tidex2019::HelpForm form;
	Application::Run(%form);
}