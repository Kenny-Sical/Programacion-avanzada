#pragma once
#include <string>
#include "Lista.h"

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
		List<int>* Arreglo;
		array<List<int>*, 1>^ Hash = gcnew array<List<int>*, 1>(100);
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ Tama�oArreglo;
	private: System::Windows::Forms::Button^ GenArreglo;
	private: System::Windows::Forms::ListBox^ ListArreglo;


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Tama�oArreglo = (gcnew System::Windows::Forms::TextBox());
			this->GenArreglo = (gcnew System::Windows::Forms::Button());
			this->ListArreglo = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tama�o del arreglo";
			// 
			// Tama�oArreglo
			// 
			this->Tama�oArreglo->Location = System::Drawing::Point(163, 29);
			this->Tama�oArreglo->Name = L"Tama�oArreglo";
			this->Tama�oArreglo->Size = System::Drawing::Size(100, 20);
			this->Tama�oArreglo->TabIndex = 1;
			// 
			// GenArreglo
			// 
			this->GenArreglo->Location = System::Drawing::Point(16, 51);
			this->GenArreglo->Name = L"GenArreglo";
			this->GenArreglo->Size = System::Drawing::Size(75, 23);
			this->GenArreglo->TabIndex = 2;
			this->GenArreglo->Text = L"Crear";
			this->GenArreglo->UseVisualStyleBackColor = true;
			this->GenArreglo->Click += gcnew System::EventHandler(this, &MyForm::GenArreglo_Click);
			// 
			// ListArreglo
			// 
			this->ListArreglo->FormattingEnabled = true;
			this->ListArreglo->Location = System::Drawing::Point(13, 90);
			this->ListArreglo->Name = L"ListArreglo";
			this->ListArreglo->Size = System::Drawing::Size(166, 342);
			this->ListArreglo->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(869, 465);
			this->Controls->Add(this->ListArreglo);
			this->Controls->Add(this->GenArreglo);
			this->Controls->Add(this->Tama�oArreglo);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Variables generales
		int longitud = 0;
		int* arreglo;

		//Generar un numero random
		void NumRandom() {
			int tama�o = Convert::ToInt32(Tama�oArreglo->Text);
			arreglo = new int[tama�o];
			for (int i = 0; i < tama�o; i++) 
			{
				int num = rand() % (900 - (2 + 4)) - 1;
				arreglo[i] = num;
				insertarHash(&num);
			}
		}
		//Insertar Hash
		int insertarHash(int* valor)
		{
			int indice = *valor % 100;
			if (Hash[indice] == nullptr)
				Hash[indice] = new List<int>;
			Hash[indice]->add(valor);
			return indice;
		}
		//Llenar la lista
		void llenarLista(int n) {
			int contador = 0;
			for (int i = 0; i < n; i++) {
				ListArreglo->Items->Add(contador + " -- " + arreglo[i]);
				contador++;
			}
		}

	private: System::Void GenArreglo_Click(System::Object^ sender, System::EventArgs^ e) {
		ListArreglo->Items->Clear();
		if (Tama�oArreglo->Text != "")
		{
			longitud = Convert::ToInt32(Tama�oArreglo->Text);
			NumRandom();
			llenarLista(longitud);
		}

	}
	};
}
