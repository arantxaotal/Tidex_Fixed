#include "ChartForm.h"

using namespace System;
using namespace System::Windows::Forms;

void Chart(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Tidex2019::ChartForm form;
	Application::Run(%form);
}