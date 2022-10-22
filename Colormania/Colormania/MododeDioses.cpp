#include "MododeDioses.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int Dificil(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Colormania::MododeDioses form;
	Application::Run(% form);
	return 0;
}
