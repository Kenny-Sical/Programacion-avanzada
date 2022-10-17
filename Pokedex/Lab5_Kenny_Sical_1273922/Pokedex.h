#pragma once
#include "Pokemon.h"

namespace Lab5KennySical1273922 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de Pokedex
	/// </summary>
	public ref class Pokedex : public System::Windows::Forms::Form
	{
	public:
		Pokedex(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			misPokemon = gcnew array<Pokemon^>(Array_Size);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Pokedex()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^ LectorTXT;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listPokemon;

	private: System::Windows::Forms::TextBox^ Descripcion;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pokedex::typeid));
			this->LectorTXT = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listPokemon = (gcnew System::Windows::Forms::ListBox());
			this->Descripcion = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// LectorTXT
			// 
			this->LectorTXT->FileName = L"LectorTXT";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(510, 520);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 54);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Actualizar datos";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Pokedex::button1_Click);
			// 
			// listPokemon
			// 
			this->listPokemon->Font = (gcnew System::Drawing::Font(L"Unispace", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listPokemon->FormattingEnabled = true;
			this->listPokemon->ItemHeight = 15;
			this->listPokemon->Location = System::Drawing::Point(76, 188);
			this->listPokemon->Name = L"listPokemon";
			this->listPokemon->Size = System::Drawing::Size(266, 169);
			this->listPokemon->TabIndex = 1;
			this->listPokemon->SelectedIndexChanged += gcnew System::EventHandler(this, &Pokedex::listPokemon_SelectedIndexChanged);
			// 
			// Descripcion
			// 
			this->Descripcion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Descripcion->Font = (gcnew System::Drawing::Font(L"Unispace", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Descripcion->Location = System::Drawing::Point(510, 198);
			this->Descripcion->Multiline = true;
			this->Descripcion->Name = L"Descripcion";
			this->Descripcion->Size = System::Drawing::Size(264, 114);
			this->Descripcion->TabIndex = 2;
			// 
			// Pokedex
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(845, 619);
			this->Controls->Add(this->Descripcion);
			this->Controls->Add(this->listPokemon);
			this->Controls->Add(this->button1);
			this->Name = L"Pokedex";
			this->Text = L"Pokedex";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<Pokemon^>^ misPokemon;
		int Array_Size = 10;
		int IndexPokemon = 0;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (System::Windows::Forms::DialogResult::OK == LectorTXT->ShowDialog()) {
			StreamReader ^ InputStream = gcnew StreamReader(LectorTXT->FileName);
			if ( InputStream != nullptr)
			{
				String^ lineOfText = InputStream->ReadLine();
				while (lineOfText && (IndexPokemon<Array_Size)) 
				{

					char separador = ',';
					array<String^>^ palabras = lineOfText->Split(separador);
					Pokemon^ miPokemon = gcnew Pokemon();
					
					miPokemon->setNationalNumber(palabras[0]);
					miPokemon->setName(palabras[1]);
					miPokemon->setGeneracion(palabras[2]);
					misPokemon[IndexPokemon] = miPokemon;
					lineOfText = InputStream->ReadLine();
					IndexPokemon++;
				}
				
			}
				InputStream->Close();
				for (int i = 0; i < IndexPokemon; i++)
				{
					listPokemon->Items->Add(misPokemon[i]->getName());
				}
		}

	}
	private: System::Void listPokemon_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (listPokemon->SelectedIndex >= 0) {
			String^ info = "Número nacional: " + misPokemon[listPokemon->SelectedIndex]->getNationalNumber() + "\r\n"
				+ "Nombre: " + misPokemon[listPokemon->SelectedIndex]->getName() + "\r\n"
				+ "Generación: " + misPokemon[listPokemon->SelectedIndex]->getGeneracion() + "\r\n";
			Descripcion->Text = info;
		}
	}
};
}
