#include "NivelMedio.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int Medio(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Colormania::NivelMedio form;
	Application::Run(% form);
	return 0;
}
