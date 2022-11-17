#include "Principal_Menu.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab6KennySical1273922::Principal_Menu form;
	Application::Run(% form);
	return 0;
}
