#include "NivelGallinas.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int Facil(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProyectoColormania::NivelGallinas form;
	Application::Run(% form);
	return 0;
}

