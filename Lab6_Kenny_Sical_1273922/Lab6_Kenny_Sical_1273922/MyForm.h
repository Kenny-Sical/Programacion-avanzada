#pragma once
#include <string>
#include <list>

namespace Lab6KennySical1273922 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ tamañotxt;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ ListaDatos;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ Secuencialtxt;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Binariotxt;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ Hashtxt;
	private: System::Windows::Forms::Button^ button4;
































	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tamañotxt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ListaDatos = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Secuencialtxt = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Hashtxt = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Binariotxt = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(38, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Crear arreglo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tamañotxt
			// 
			this->tamañotxt->Location = System::Drawing::Point(38, 53);
			this->tamañotxt->Name = L"tamañotxt";
			this->tamañotxt->Size = System::Drawing::Size(100, 20);
			this->tamañotxt->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingrese el tamaño";
			// 
			// ListaDatos
			// 
			this->ListaDatos->FormattingEnabled = true;
			this->ListaDatos->Location = System::Drawing::Point(38, 123);
			this->ListaDatos->Name = L"ListaDatos";
			this->ListaDatos->Size = System::Drawing::Size(120, 277);
			this->ListaDatos->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(284, 83);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Secuencial";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// Secuencialtxt
			// 
			this->Secuencialtxt->Location = System::Drawing::Point(284, 57);
			this->Secuencialtxt->Name = L"Secuencialtxt";
			this->Secuencialtxt->Size = System::Drawing::Size(100, 20);
			this->Secuencialtxt->TabIndex = 5;
			this->Secuencialtxt->TextChanged += gcnew System::EventHandler(this, &MyForm::Secuencialtxt_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(281, 218);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Hash";
			// 
			// Hashtxt
			// 
			this->Hashtxt->Location = System::Drawing::Point(284, 243);
			this->Hashtxt->Name = L"Hashtxt";
			this->Hashtxt->Size = System::Drawing::Size(100, 20);
			this->Hashtxt->TabIndex = 11;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(284, 269);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Hash";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(281, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Binario";
			// 
			// Binariotxt
			// 
			this->Binariotxt->Location = System::Drawing::Point(284, 148);
			this->Binariotxt->Name = L"Binariotxt";
			this->Binariotxt->Size = System::Drawing::Size(100, 20);
			this->Binariotxt->TabIndex = 8;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(284, 174);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Binario";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(284, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Secuencial";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(507, 433);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Hashtxt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->ListaDatos);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Secuencialtxt);
			this->Controls->Add(this->Binariotxt);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tamañotxt);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
#pragma region Ejercicio_1

		//Crear tabla hash
			//Hashtable^ Tabla = gcnew Hashtable();
		//Crerar arreglo
			int* vector;
		//Insertar datos a la tabla
		/*void insertarHash(int num, int tamaño) {
			char n = Convert::ToChar(num);
			int funcion = (n * 3) % tamaño;
			Tabla[funcion] = num;
		}*/
		//Ordenar
		void Burbuja(int n)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n - i - 1; j++)
				{
					if (vector[j] > vector[j + 1])
					{
						int aux = vector[j];
						vector[j] = vector[j + 1];
						vector[j + 1] = aux;
					}
				}
			}
		}
		//Buscar 
		int Secuencial(int busqueda, int tamaño)
		{
			for (int i = 0; i < tamaño; i++)
			{
				if (this->vector[i] == busqueda)
				{
					return i;
				}
			}
			return -1;
		}
		int Binario(int busqueda, int tamaño)
		{
			int inf=0, sup=tamaño,mitad,conteo=0;
			char band = 'F';
			while (inf <= sup)
			{
				mitad = (inf + sup) / 2;
				if (vector[mitad] == busqueda) {
					band = 'V';
					break;
				}
				if (vector[mitad] > busqueda) {
					sup = mitad;
					mitad = (inf + sup) / 2;
				}
				if (vector[mitad] < busqueda) {
					inf = mitad;
					mitad = (inf + sup) / 2;
				}
				if(conteo == tamaño) {
					break;
				}
				conteo++;
			}
			if (band == 'V')
			{
				return mitad;
			}
			else
			{
				return -1;
			}
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//Crear un arreglo con numeros aleatorios
		if (tamañotxt->Text != "")
		{ 
			ListaDatos->Items->Clear();
			int n=Convert::ToInt32(tamañotxt->Text);
			vector = new int[n];
			for (int i = 0; i < n; i++)
			{
				int num = rand() % (999 + (2 - i));
				vector[i] = num;
			}
			Burbuja(n);
			for (int i = 0; i < n; i++)
			{
				ListaDatos->Items->Add(i + " -- " + vector[i]);
				//insertarHash(vector[i], n);
			}
		}
		else
		{
			MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //Busqueda sencuencial
		if (Secuencialtxt->Text != "") {
			int BusquedaSecuencial = Convert::ToInt32(Secuencialtxt->Text);
			int tamaño = Convert::ToInt32(tamañotxt->Text);
			if (Secuencial(BusquedaSecuencial,tamaño)==-1)
			{
				MessageBox::Show("El número no existe");
			}
			else
			{
			MessageBox::Show("El numero que busca se encuentra en la posicion "+Secuencial(BusquedaSecuencial,tamaño));
			}
		}
		else
		{
			MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//Busqueda binaria
	if (Binariotxt->Text != "") {
		int BusquedaBinaria = Convert::ToInt32(Binariotxt->Text);
		int tamaño = Convert::ToInt32(tamañotxt->Text);
		if (Binario(BusquedaBinaria, tamaño) == -1)
		{
			MessageBox::Show("El número no existe");
		}
		else
		{
			MessageBox::Show("El numero que busca se encuentra en la posicion " + Secuencial(BusquedaBinaria, tamaño));
		}
	}
	else
	{
		MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//Busqueda Hash
	if (Hashtxt->Text != "") {
		
	}
	else
	{
		MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void Secuencialtxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

};
#pragma endregion

}
