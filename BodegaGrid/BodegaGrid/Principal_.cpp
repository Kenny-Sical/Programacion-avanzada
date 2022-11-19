#include "Principal_.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BodegaGrid::Principal_ form;
	Application::Run(% form);
	return 0;
}
