#include "Mymenu.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Colormania::Mymenu form;
	Application::Run(% form);
	return 0;
}

