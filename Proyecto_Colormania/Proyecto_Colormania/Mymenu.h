#pragma once
#include "Niveles.h"
namespace ProyectoColormania {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de Mymenu
	/// </summary>
	public ref class Mymenu : public System::Windows::Forms::Form
	{
		
			static int Second = 59;
			static int Minute = 0;
			String^ sec;
	private: System::Windows::Forms::Button^ button1;
		   String^ Min;

	public:
		Mymenu(void)
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
		~Mymenu()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ Mostrar_Tiempo;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Mymenu::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Mostrar_Tiempo = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Mymenu::timer1_Tick);
			// 
			// Mostrar_Tiempo
			// 
			this->Mostrar_Tiempo->AutoSize = true;
			this->Mostrar_Tiempo->BackColor = System::Drawing::Color::Olive;
			this->Mostrar_Tiempo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mostrar_Tiempo->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Mostrar_Tiempo->Location = System::Drawing::Point(124, 137);
			this->Mostrar_Tiempo->Name = L"Mostrar_Tiempo";
			this->Mostrar_Tiempo->Size = System::Drawing::Size(38, 24);
			this->Mostrar_Tiempo->TabIndex = 2;
			this->Mostrar_Tiempo->Text = L"5:0";
			this->Mostrar_Tiempo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkOrchid;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(124, 385);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Mymenu::button1_Click);
			// 
			// Mymenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(637, 535);
			this->Controls->Add(this->Mostrar_Tiempo);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"Mymenu";
			this->Text = L"Mymenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (Minute != 0 && Second != 0)
		{
			Mostrar_Tiempo->Text = "0:0";
		}
		else
		{
			Second--;
			if (Second == 0)
			{
				Second = 59;
				Minute--;
			}
			sec = Convert::ToString(Second);
			Min = Convert::ToString(Minute);
			Mostrar_Tiempo->Text = Min + ":" + sec;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ProyectoColormania::Niveles^ segundoForm = gcnew ProyectoColormania::Niveles();
		this->Visible = false;
		segundoForm->ShowDialog();
		this->Visible = true;
	}
};
}
