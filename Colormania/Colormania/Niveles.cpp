#include "Niveles.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int niveles(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Colormania::Niveles form;
	Application::Run(% form);
	return 0;
}

