#pragma once
#include <string>
#include "Cuadrado.h"
#include "lista.h"
#include "Triangulo.h"
#include "Poligonos.h"
#include "Rectanculo.h"
namespace Lab6KennySical1273922 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		int ID = 1;
		int* arreglo;
		int cantidad;
		Lista<Poligonos>* poligonos;
		Lista<int>* Arreglo;
		array<Lista<int>*, 1>^ Hash = gcnew array<Lista<int>*, 1>(100);
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			poligonos = new Lista<Poligonos>();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label15;
	protected:
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ btnInicializar;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::GroupBox^ groupBoxRectangulo;
	private: System::Windows::Forms::Button^ btnRectangulo;
	private: System::Windows::Forms::TextBox^ txtAlturaR;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtBaseR;
	private: System::Windows::Forms::TextBox^ txtColorR;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBoxCuadrado;
	private: System::Windows::Forms::Button^ btnCuadrado;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtLadoC;
	private: System::Windows::Forms::TextBox^ txtColorC;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::GroupBox^ groupBoxTriangulo;
	private: System::Windows::Forms::TextBox^ txtBaseT;
	private: System::Windows::Forms::Button^ btnTriangulo;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtColorT;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtLadoT;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->btnInicializar = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBoxRectangulo = (gcnew System::Windows::Forms::GroupBox());
			this->btnRectangulo = (gcnew System::Windows::Forms::Button());
			this->txtAlturaR = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtBaseR = (gcnew System::Windows::Forms::TextBox());
			this->txtColorR = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBoxCuadrado = (gcnew System::Windows::Forms::GroupBox());
			this->btnCuadrado = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtLadoC = (gcnew System::Windows::Forms::TextBox());
			this->txtColorC = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBoxTriangulo = (gcnew System::Windows::Forms::GroupBox());
			this->txtBaseT = (gcnew System::Windows::Forms::TextBox());
			this->btnTriangulo = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtColorT = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtLadoT = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxRectangulo->SuspendLayout();
			this->groupBoxCuadrado->SuspendLayout();
			this->groupBoxTriangulo->SuspendLayout();
			this->SuspendLayout();
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label15->Location = System::Drawing::Point(246, 383);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(53, 13);
			this->label15->TabIndex = 54;
			this->label15->Text = L"Perímetro";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label14->Location = System::Drawing::Point(196, 383);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(29, 13);
			this->label14->TabIndex = 53;
			this->label14->Text = L"Área";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label11->Location = System::Drawing::Point(138, 383);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 13);
			this->label11->TabIndex = 52;
			this->label11->Text = L"Color";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label9->Location = System::Drawing::Point(73, 383);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 13);
			this->label9->TabIndex = 51;
			this->label9->Text = L"Figura";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label16->Location = System::Drawing::Point(30, 383);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(18, 13);
			this->label16->TabIndex = 50;
			this->label16->Text = L"ID";
			// 
			// btnInicializar
			// 
			this->btnInicializar->ForeColor = System::Drawing::SystemColors::MenuText;
			this->btnInicializar->Location = System::Drawing::Point(117, 525);
			this->btnInicializar->Margin = System::Windows::Forms::Padding(2);
			this->btnInicializar->Name = L"btnInicializar";
			this->btnInicializar->Size = System::Drawing::Size(106, 20);
			this->btnInicializar->TabIndex = 49;
			this->btnInicializar->Text = L"Inicializar lista";
			this->btnInicializar->UseVisualStyleBackColor = true;
			this->btnInicializar->Click += gcnew System::EventHandler(this, &MyForm2::btnInicializar_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(23, 404);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(497, 108);
			this->listBox1->TabIndex = 48;
			// 
			// groupBoxRectangulo
			// 
			this->groupBoxRectangulo->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBoxRectangulo->Controls->Add(this->btnRectangulo);
			this->groupBoxRectangulo->Controls->Add(this->txtAlturaR);
			this->groupBoxRectangulo->Controls->Add(this->label7);
			this->groupBoxRectangulo->Controls->Add(this->txtBaseR);
			this->groupBoxRectangulo->Controls->Add(this->txtColorR);
			this->groupBoxRectangulo->Controls->Add(this->label12);
			this->groupBoxRectangulo->Controls->Add(this->label10);
			this->groupBoxRectangulo->Controls->Add(this->groupBoxCuadrado);
			this->groupBoxRectangulo->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBoxRectangulo->Location = System::Drawing::Point(33, 158);
			this->groupBoxRectangulo->Margin = System::Windows::Forms::Padding(2);
			this->groupBoxRectangulo->Name = L"groupBoxRectangulo";
			this->groupBoxRectangulo->Padding = System::Windows::Forms::Padding(2);
			this->groupBoxRectangulo->Size = System::Drawing::Size(405, 197);
			this->groupBoxRectangulo->TabIndex = 47;
			this->groupBoxRectangulo->TabStop = false;
			this->groupBoxRectangulo->Text = L"Rectángulo";
			// 
			// btnRectangulo
			// 
			this->btnRectangulo->ForeColor = System::Drawing::SystemColors::WindowText;
			this->btnRectangulo->Location = System::Drawing::Point(332, 50);
			this->btnRectangulo->Margin = System::Windows::Forms::Padding(2);
			this->btnRectangulo->Name = L"btnRectangulo";
			this->btnRectangulo->Size = System::Drawing::Size(56, 20);
			this->btnRectangulo->TabIndex = 14;
			this->btnRectangulo->Text = L"Enviar";
			this->btnRectangulo->UseVisualStyleBackColor = true;
			this->btnRectangulo->Click += gcnew System::EventHandler(this, &MyForm2::btnRectangulo_Click);
			// 
			// txtAlturaR
			// 
			this->txtAlturaR->Location = System::Drawing::Point(141, 50);
			this->txtAlturaR->Margin = System::Windows::Forms::Padding(2);
			this->txtAlturaR->Name = L"txtAlturaR";
			this->txtAlturaR->Size = System::Drawing::Size(60, 20);
			this->txtAlturaR->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label7->Location = System::Drawing::Point(261, 34);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Color";
			// 
			// txtBaseR
			// 
			this->txtBaseR->Location = System::Drawing::Point(27, 50);
			this->txtBaseR->Margin = System::Windows::Forms::Padding(2);
			this->txtBaseR->Name = L"txtBaseR";
			this->txtBaseR->Size = System::Drawing::Size(60, 20);
			this->txtBaseR->TabIndex = 13;
			// 
			// txtColorR
			// 
			this->txtColorR->Location = System::Drawing::Point(253, 50);
			this->txtColorR->Margin = System::Windows::Forms::Padding(2);
			this->txtColorR->Name = L"txtColorR";
			this->txtColorR->Size = System::Drawing::Size(60, 20);
			this->txtColorR->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(35, 34);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 13);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Base";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label10->Location = System::Drawing::Point(153, 34);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Altura";
			// 
			// groupBoxCuadrado
			// 
			this->groupBoxCuadrado->Controls->Add(this->btnCuadrado);
			this->groupBoxCuadrado->Controls->Add(this->label13);
			this->groupBoxCuadrado->Controls->Add(this->txtLadoC);
			this->groupBoxCuadrado->Controls->Add(this->txtColorC);
			this->groupBoxCuadrado->Controls->Add(this->label17);
			this->groupBoxCuadrado->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBoxCuadrado->Location = System::Drawing::Point(8, 97);
			this->groupBoxCuadrado->Margin = System::Windows::Forms::Padding(2);
			this->groupBoxCuadrado->Name = L"groupBoxCuadrado";
			this->groupBoxCuadrado->Padding = System::Windows::Forms::Padding(2);
			this->groupBoxCuadrado->Size = System::Drawing::Size(278, 96);
			this->groupBoxCuadrado->TabIndex = 4;
			this->groupBoxCuadrado->TabStop = false;
			this->groupBoxCuadrado->Text = L"Cuadrado";
			// 
			// btnCuadrado
			// 
			this->btnCuadrado->ForeColor = System::Drawing::SystemColors::WindowText;
			this->btnCuadrado->Location = System::Drawing::Point(211, 46);
			this->btnCuadrado->Margin = System::Windows::Forms::Padding(2);
			this->btnCuadrado->Name = L"btnCuadrado";
			this->btnCuadrado->Size = System::Drawing::Size(56, 20);
			this->btnCuadrado->TabIndex = 14;
			this->btnCuadrado->Text = L"Enviar";
			this->btnCuadrado->UseVisualStyleBackColor = true;
			this->btnCuadrado->Click += gcnew System::EventHandler(this, &MyForm2::btnCuadrado_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label13->Location = System::Drawing::Point(136, 27);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Color";
			// 
			// txtLadoC
			// 
			this->txtLadoC->Location = System::Drawing::Point(33, 46);
			this->txtLadoC->Margin = System::Windows::Forms::Padding(2);
			this->txtLadoC->Name = L"txtLadoC";
			this->txtLadoC->Size = System::Drawing::Size(60, 20);
			this->txtLadoC->TabIndex = 13;
			// 
			// txtColorC
			// 
			this->txtColorC->Location = System::Drawing::Point(124, 46);
			this->txtColorC->Margin = System::Windows::Forms::Padding(2);
			this->txtColorC->Name = L"txtColorC";
			this->txtColorC->Size = System::Drawing::Size(60, 20);
			this->txtColorC->TabIndex = 20;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label17->Location = System::Drawing::Point(19, 28);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(85, 13);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Medida de lados";
			// 
			// groupBoxTriangulo
			// 
			this->groupBoxTriangulo->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBoxTriangulo->Controls->Add(this->txtBaseT);
			this->groupBoxTriangulo->Controls->Add(this->btnTriangulo);
			this->groupBoxTriangulo->Controls->Add(this->label8);
			this->groupBoxTriangulo->Controls->Add(this->txtColorT);
			this->groupBoxTriangulo->Controls->Add(this->label6);
			this->groupBoxTriangulo->Controls->Add(this->label5);
			this->groupBoxTriangulo->Controls->Add(this->txtLadoT);
			this->groupBoxTriangulo->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBoxTriangulo->Location = System::Drawing::Point(33, 30);
			this->groupBoxTriangulo->Margin = System::Windows::Forms::Padding(2);
			this->groupBoxTriangulo->Name = L"groupBoxTriangulo";
			this->groupBoxTriangulo->Padding = System::Windows::Forms::Padding(2);
			this->groupBoxTriangulo->Size = System::Drawing::Size(405, 102);
			this->groupBoxTriangulo->TabIndex = 46;
			this->groupBoxTriangulo->TabStop = false;
			this->groupBoxTriangulo->Text = L"Triángulo isósceles";
			// 
			// txtBaseT
			// 
			this->txtBaseT->Location = System::Drawing::Point(121, 53);
			this->txtBaseT->Name = L"txtBaseT";
			this->txtBaseT->Size = System::Drawing::Size(66, 20);
			this->txtBaseT->TabIndex = 13;
			// 
			// btnTriangulo
			// 
			this->btnTriangulo->ForeColor = System::Drawing::SystemColors::WindowText;
			this->btnTriangulo->Location = System::Drawing::Point(323, 54);
			this->btnTriangulo->Margin = System::Windows::Forms::Padding(2);
			this->btnTriangulo->Name = L"btnTriangulo";
			this->btnTriangulo->Size = System::Drawing::Size(56, 20);
			this->btnTriangulo->TabIndex = 6;
			this->btnTriangulo->Text = L"Enviar";
			this->btnTriangulo->UseVisualStyleBackColor = true;
			this->btnTriangulo->Click += gcnew System::EventHandler(this, &MyForm2::btnTriangulo_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label8->Location = System::Drawing::Point(252, 33);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Color";
			// 
			// txtColorT
			// 
			this->txtColorT->Location = System::Drawing::Point(244, 55);
			this->txtColorT->Margin = System::Windows::Forms::Padding(2);
			this->txtColorT->Name = L"txtColorT";
			this->txtColorT->Size = System::Drawing::Size(60, 20);
			this->txtColorT->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(118, 33);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Medida de base";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label5->Location = System::Drawing::Point(5, 33);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Medida de lados";
			// 
			// txtLadoT
			// 
			this->txtLadoT->Location = System::Drawing::Point(18, 55);
			this->txtLadoT->Margin = System::Windows::Forms::Padding(2);
			this->txtLadoT->Name = L"txtLadoT";
			this->txtLadoT->Size = System::Drawing::Size(60, 20);
			this->txtLadoT->TabIndex = 0;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(550, 563);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->btnInicializar);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->groupBoxRectangulo);
			this->Controls->Add(this->groupBoxTriangulo);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->groupBoxRectangulo->ResumeLayout(false);
			this->groupBoxRectangulo->PerformLayout();
			this->groupBoxCuadrado->ResumeLayout(false);
			this->groupBoxCuadrado->PerformLayout();
			this->groupBoxTriangulo->ResumeLayout(false);
			this->groupBoxTriangulo->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void llenarListBox() {
			listBox1->Items->Clear();
			int contador = 0;
			while (poligonos->get(contador) != nullptr) {
				string Figura;
				string Color;
				Color = poligonos->get(contador)->getColor();
				String^ color = gcnew String(Color.c_str());
				Figura = poligonos->get(contador)->getFigura();
				String^ figura = gcnew String(Figura.c_str());
				listBox1->Items->Add(poligonos->get(contador)->id() + "        " + figura + "    " + color + "\t   " + (poligonos->get(contador)->Area()) + "\t    " + poligonos->get(contador)->Perimetro());
				contador++;
			}
		}
		void MarshalString(String^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	private: System::Void btnTriangulo_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((txtBaseT->Text->Trim() != "") && (txtLadoT->Text->Trim() != "") && (txtColorT->Text->Trim() != "")) {
			double base = Convert::ToDouble(txtBaseT->Text);
			double ladoT = Convert::ToDouble(txtLadoT->Text);
			String^ color = txtColorT->Text->Trim();
			string color2;
			MarshalString(color, color2);
			String^ figura = "Triángulo";
			string figura2;
			MarshalString(figura, figura2);
			Triangulo* triangulito = new Triangulo(figura2, color2, ID, ladoT, base);
			poligonos->add(triangulito);
			ID++;
			MessageBox::Show("Ingresado, cantidad de elementos: " + poligonos->getSize(), "Ingreso", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Complete todos los campos", "Ingreso incorrecto", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


private: System::Void btnRectangulo_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((txtAlturaR->Text->Trim() != "") && (txtBaseR->Text->Trim() != "") && (txtColorR->Text->Trim() != "")) {
		double base = Convert::ToDouble(txtBaseR->Text);
		double ladoT = Convert::ToDouble(txtAlturaR->Text);
		String^ color = txtColorR->Text->Trim();
		string color2;
		MarshalString(color, color2);
		String^ figura = "Rectángulo";
		string figura2;
		MarshalString(figura, figura2);
		Rectangulo* rectangulito = new Rectangulo(figura2, color2, ID, base, ladoT);
		poligonos->add(rectangulito);
		ID++;
		MessageBox::Show("Ingresado, cantidad de elementos: " + poligonos->getSize(), "Ingreso", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("Complete todos los campos", "Ingreso incorrecto", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnCuadrado_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((txtLadoC->Text->Trim() != "") && (txtColorC->Text->Trim() != "")) {
		double base = Convert::ToDouble(txtLadoC->Text);
		String^ color = txtColorC->Text->Trim();
		string color2;
		MarshalString(color, color2);
		String^ figura = "Cuadrado";
		string figura2;
		MarshalString(figura, figura2);
		Cuadrado* cuadradito = new Cuadrado(figura2, color2, ID, base);
		poligonos->add(cuadradito);
		ID++;
		MessageBox::Show("Ingresado, cantidad de elementos: " + poligonos->getSize(), "Ingreso", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("Complete todos los campos", "Ingreso incorrecto", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnInicializar_Click(System::Object^ sender, System::EventArgs^ e) {
	llenarListBox();
}
};
}
