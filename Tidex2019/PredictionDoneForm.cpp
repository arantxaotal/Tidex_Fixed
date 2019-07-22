#include "PredictionDoneForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Prediction(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Tidex2019::PredictionDoneForm form;
	Application::Run(% form);
}