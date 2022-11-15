#pragma once
#include "MiColor.h"
#include  <stdlib.h>
namespace ProyectoColormania {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MododeDioses
	/// </summary>
	public ref class MododeDioses : public System::Windows::Forms::Form
	{
	public:
		MododeDioses(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			MisColores = gcnew array<MiColor^>(Convert::ToInt32(NDatos->Text));
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MododeDioses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ NDatos;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MododeDioses::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->NDatos = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MidnightBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(485, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 87);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Cargar y mostrar archivo";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MododeDioses::button1_Click);
			// 
			// NDatos
			// 
			this->NDatos->Location = System::Drawing::Point(26, 78);
			this->NDatos->Name = L"NDatos";
			this->NDatos->Size = System::Drawing::Size(100, 20);
			this->NDatos->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(157, 24);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(298, 605);
			this->dataGridView1->TabIndex = 3;
			// 
			// MododeDioses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(609, 652);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->NDatos);
			this->Controls->Add(this->button1);
			this->Name = L"MododeDioses";
			this->Text = L"MododeDioses";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<MiColor^>^ MisColores;
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	};

}
