#include "MyForm2.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int Ejercicio2(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab6KennySical1273922::MyForm2 form;
	Application::Run(% form);
	return 0;
}

