#include "IndexForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
 void Main(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Tidex2019::IndexForm form;
	Application::Run(%form);
}