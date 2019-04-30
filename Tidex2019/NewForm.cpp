#include "NewForm.h"

using namespace System;
using namespace System::Windows::Forms;

void Nuevo(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Tidex2019::NewForm form;
	Application::Run(%form);
}