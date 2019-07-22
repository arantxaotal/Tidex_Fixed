#include "UnitForm.h"

using namespace System;
using namespace System::Windows::Forms;

 void Unit(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Tidex2019::UnitForm form;
	Application::Run(%form);
}