#include "Pokedex.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab5KennySical1273922::Pokedex form;
	Application::Run(% form);
	return 0;
}

