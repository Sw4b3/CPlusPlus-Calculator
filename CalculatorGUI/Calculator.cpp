#include "CalculatorGUI.h"
#include <string>


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CalculatorGUI::MyForm form;
	Application::Run(%form);
}
