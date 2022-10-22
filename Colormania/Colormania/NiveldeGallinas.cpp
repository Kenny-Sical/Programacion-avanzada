#include "NiveldeGallinas.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int Facil(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Colormania::NiveldeGallinas form;
	Application::Run(% form);
	return 0;
}
