#include "MododeDioses.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int Dificil(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProyectoColormania::MododeDioses form;
	Application::Run(% form);
	return 0;
}

