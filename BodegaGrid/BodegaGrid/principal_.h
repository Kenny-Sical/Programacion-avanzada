#pragma once

namespace BodegaGrid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Principal_
	/// </summary>
	public ref class Principal_ : public System::Windows::Forms::Form
	{
	public:
		Principal_(void)
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
		~Principal_()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Bodega_DGV;
	protected:
	private: System::Windows::Forms::DataGridView^ Aux_DGV;
	private: System::Windows::Forms::Button^ DeleteProduct;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::TextBox^ ID_DeleteProduct;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ cant_deleteproduct;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::RadioButton^ D_product3;
	private: System::Windows::Forms::RadioButton^ D_product2;
	private: System::Windows::Forms::RadioButton^ D_product1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ WeightU_AP;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ QuantityP_AP;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ CostU_AP;
	private: System::Windows::Forms::RadioButton^ Producto_3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::RadioButton^ Product_2;
	private: System::Windows::Forms::RadioButton^ Product_1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ TProduct_3;
	private: System::Windows::Forms::CheckBox^ TProduct_2;
	private: System::Windows::Forms::CheckBox^ TProduct_1;
	private: System::Windows::Forms::TextBox^ MaxWeight_NB;
	private: System::Windows::Forms::TextBox^ Row_NB;
	private: System::Windows::Forms::TextBox^ Column_NB;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Name_responsable;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ AddProduct;
	private: System::Windows::Forms::Button^ NewBay;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ Ordenamientos;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ Row_DB;
	private: System::Windows::Forms::TextBox^ Column_DB;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ Kardex;
	private: System::Windows::Forms::Button^ Stock;
	private: System::Windows::Forms::Button^ DeleteBay;

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
			this->Bodega_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->Aux_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->DeleteProduct = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->ID_DeleteProduct = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cant_deleteproduct = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->D_product3 = (gcnew System::Windows::Forms::RadioButton());
			this->D_product2 = (gcnew System::Windows::Forms::RadioButton());
			this->D_product1 = (gcnew System::Windows::Forms::RadioButton());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->WeightU_AP = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->QuantityP_AP = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->CostU_AP = (gcnew System::Windows::Forms::TextBox());
			this->Producto_3 = (gcnew System::Windows::Forms::RadioButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Product_2 = (gcnew System::Windows::Forms::RadioButton());
			this->Product_1 = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->TProduct_3 = (gcnew System::Windows::Forms::CheckBox());
			this->TProduct_2 = (gcnew System::Windows::Forms::CheckBox());
			this->TProduct_1 = (gcnew System::Windows::Forms::CheckBox());
			this->MaxWeight_NB = (gcnew System::Windows::Forms::TextBox());
			this->Row_NB = (gcnew System::Windows::Forms::TextBox());
			this->Column_NB = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Name_responsable = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->AddProduct = (gcnew System::Windows::Forms::Button());
			this->NewBay = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Ordenamientos = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->Row_DB = (gcnew System::Windows::Forms::TextBox());
			this->Column_DB = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Kardex = (gcnew System::Windows::Forms::Button());
			this->Stock = (gcnew System::Windows::Forms::Button());
			this->DeleteBay = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bodega_DGV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Aux_DGV))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// Bodega_DGV
			// 
			this->Bodega_DGV->BackgroundColor = System::Drawing::Color::White;
			this->Bodega_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Bodega_DGV->Location = System::Drawing::Point(13, 13);
			this->Bodega_DGV->Name = L"Bodega_DGV";
			this->Bodega_DGV->Size = System::Drawing::Size(573, 315);
			this->Bodega_DGV->TabIndex = 0;
			// 
			// Aux_DGV
			// 
			this->Aux_DGV->BackgroundColor = System::Drawing::Color::White;
			this->Aux_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Aux_DGV->Location = System::Drawing::Point(12, 334);
			this->Aux_DGV->Name = L"Aux_DGV";
			this->Aux_DGV->Size = System::Drawing::Size(573, 286);
			this->Aux_DGV->TabIndex = 1;
			// 
			// DeleteProduct
			// 
			this->DeleteProduct->BackColor = System::Drawing::Color::Transparent;
			this->DeleteProduct->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteProduct->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteProduct->Location = System::Drawing::Point(879, 559);
			this->DeleteProduct->Name = L"DeleteProduct";
			this->DeleteProduct->Size = System::Drawing::Size(140, 36);
			this->DeleteProduct->TabIndex = 51;
			this->DeleteProduct->Text = L"Eliminar producto";
			this->DeleteProduct->UseVisualStyleBackColor = false;
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::Transparent;
			this->groupBox5->Controls->Add(this->ID_DeleteProduct);
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->cant_deleteproduct);
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Controls->Add(this->D_product3);
			this->groupBox5->Controls->Add(this->D_product2);
			this->groupBox5->Controls->Add(this->D_product1);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(634, 436);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(621, 117);
			this->groupBox5->TabIndex = 50;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Eliminar producto";
			// 
			// ID_DeleteProduct
			// 
			this->ID_DeleteProduct->Location = System::Drawing::Point(307, 55);
			this->ID_DeleteProduct->Name = L"ID_DeleteProduct";
			this->ID_DeleteProduct->Size = System::Drawing::Size(112, 26);
			this->ID_DeleteProduct->TabIndex = 40;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 58);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 19);
			this->label5->TabIndex = 39;
			this->label5->Text = L"ID Bahia a eliminar";
			// 
			// cant_deleteproduct
			// 
			this->cant_deleteproduct->Location = System::Drawing::Point(307, 19);
			this->cant_deleteproduct->Name = L"cant_deleteproduct";
			this->cant_deleteproduct->Size = System::Drawing::Size(112, 26);
			this->cant_deleteproduct->TabIndex = 24;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(10, 26);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(171, 19);
			this->label14->TabIndex = 23;
			this->label14->Text = L"Cantidad de unidades";
			// 
			// D_product3
			// 
			this->D_product3->AutoSize = true;
			this->D_product3->Location = System::Drawing::Point(418, 85);
			this->D_product3->Name = L"D_product3";
			this->D_product3->Size = System::Drawing::Size(123, 23);
			this->D_product3->TabIndex = 38;
			this->D_product3->TabStop = true;
			this->D_product3->Text = L"Construcción";
			this->D_product3->UseVisualStyleBackColor = false;
			// 
			// D_product2
			// 
			this->D_product2->AutoSize = true;
			this->D_product2->Location = System::Drawing::Point(326, 85);
			this->D_product2->Name = L"D_product2";
			this->D_product2->Size = System::Drawing::Size(65, 23);
			this->D_product2->TabIndex = 37;
			this->D_product2->TabStop = true;
			this->D_product2->Text = L"Ropa";
			this->D_product2->UseVisualStyleBackColor = true;
			// 
			// D_product1
			// 
			this->D_product1->AutoSize = true;
			this->D_product1->Location = System::Drawing::Point(217, 85);
			this->D_product1->Name = L"D_product1";
			this->D_product1->Size = System::Drawing::Size(102, 23);
			this->D_product1->TabIndex = 36;
			this->D_product1->TabStop = true;
			this->D_product1->Text = L"M. Oficina";
			this->D_product1->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(10, 85);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(135, 19);
			this->label16->TabIndex = 32;
			this->label16->Text = L"Tipo de producto\r\n";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->WeightU_AP);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->QuantityP_AP);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->CostU_AP);
			this->groupBox2->Controls->Add(this->Producto_3);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->Product_2);
			this->groupBox2->Controls->Add(this->Product_1);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox2->Location = System::Drawing::Point(633, 244);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(621, 144);
			this->groupBox2->TabIndex = 49;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Añadir productos";
			// 
			// WeightU_AP
			// 
			this->WeightU_AP->Location = System::Drawing::Point(308, 84);
			this->WeightU_AP->Name = L"WeightU_AP";
			this->WeightU_AP->Size = System::Drawing::Size(112, 26);
			this->WeightU_AP->TabIndex = 40;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 84);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(238, 19);
			this->label13->TabIndex = 39;
			this->label13->Text = L"Peso unitario del producto (lbs)";
			// 
			// QuantityP_AP
			// 
			this->QuantityP_AP->Location = System::Drawing::Point(308, 52);
			this->QuantityP_AP->Name = L"QuantityP_AP";
			this->QuantityP_AP->Size = System::Drawing::Size(112, 26);
			this->QuantityP_AP->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 56);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(171, 19);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Cantidad de unidades";
			// 
			// CostU_AP
			// 
			this->CostU_AP->Location = System::Drawing::Point(308, 19);
			this->CostU_AP->Name = L"CostU_AP";
			this->CostU_AP->Size = System::Drawing::Size(112, 26);
			this->CostU_AP->TabIndex = 22;
			// 
			// Producto_3
			// 
			this->Producto_3->AutoSize = true;
			this->Producto_3->Location = System::Drawing::Point(492, 113);
			this->Producto_3->Name = L"Producto_3";
			this->Producto_3->Size = System::Drawing::Size(123, 23);
			this->Producto_3->TabIndex = 38;
			this->Producto_3->TabStop = true;
			this->Producto_3->Text = L"Construcción";
			this->Producto_3->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 26);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(205, 19);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Costo unitario de producto";
			// 
			// Product_2
			// 
			this->Product_2->AutoSize = true;
			this->Product_2->Location = System::Drawing::Point(389, 116);
			this->Product_2->Name = L"Product_2";
			this->Product_2->Size = System::Drawing::Size(65, 23);
			this->Product_2->TabIndex = 37;
			this->Product_2->TabStop = true;
			this->Product_2->Text = L"Ropa";
			this->Product_2->UseVisualStyleBackColor = true;
			// 
			// Product_1
			// 
			this->Product_1->AutoSize = true;
			this->Product_1->Location = System::Drawing::Point(246, 115);
			this->Product_1->Name = L"Product_1";
			this->Product_1->Size = System::Drawing::Size(102, 23);
			this->Product_1->TabIndex = 36;
			this->Product_1->TabStop = true;
			this->Product_1->Text = L"M. Oficina";
			this->Product_1->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(11, 113);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(213, 19);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Tipo de producto a agregar";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->TProduct_3);
			this->groupBox1->Controls->Add(this->TProduct_2);
			this->groupBox1->Controls->Add(this->TProduct_1);
			this->groupBox1->Controls->Add(this->MaxWeight_NB);
			this->groupBox1->Controls->Add(this->Row_NB);
			this->groupBox1->Controls->Add(this->Column_NB);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Location = System::Drawing::Point(633, 44);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(622, 141);
			this->groupBox1->TabIndex = 48;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Añadir Bahía";
			// 
			// TProduct_3
			// 
			this->TProduct_3->AutoSize = true;
			this->TProduct_3->Location = System::Drawing::Point(418, 108);
			this->TProduct_3->Name = L"TProduct_3";
			this->TProduct_3->Size = System::Drawing::Size(124, 23);
			this->TProduct_3->TabIndex = 35;
			this->TProduct_3->Text = L"Construcción";
			this->TProduct_3->UseVisualStyleBackColor = true;
			// 
			// TProduct_2
			// 
			this->TProduct_2->AutoSize = true;
			this->TProduct_2->Location = System::Drawing::Point(327, 108);
			this->TProduct_2->Name = L"TProduct_2";
			this->TProduct_2->Size = System::Drawing::Size(66, 23);
			this->TProduct_2->TabIndex = 34;
			this->TProduct_2->Text = L"Ropa";
			this->TProduct_2->UseVisualStyleBackColor = true;
			// 
			// TProduct_1
			// 
			this->TProduct_1->AutoSize = true;
			this->TProduct_1->Location = System::Drawing::Point(217, 108);
			this->TProduct_1->Name = L"TProduct_1";
			this->TProduct_1->Size = System::Drawing::Size(103, 23);
			this->TProduct_1->TabIndex = 33;
			this->TProduct_1->Text = L"M. Oficina";
			this->TProduct_1->UseVisualStyleBackColor = true;
			// 
			// MaxWeight_NB
			// 
			this->MaxWeight_NB->Location = System::Drawing::Point(308, 80);
			this->MaxWeight_NB->Name = L"MaxWeight_NB";
			this->MaxWeight_NB->Size = System::Drawing::Size(112, 26);
			this->MaxWeight_NB->TabIndex = 8;
			// 
			// Row_NB
			// 
			this->Row_NB->Location = System::Drawing::Point(308, 49);
			this->Row_NB->Name = L"Row_NB";
			this->Row_NB->Size = System::Drawing::Size(112, 26);
			this->Row_NB->TabIndex = 7;
			// 
			// Column_NB
			// 
			this->Column_NB->Location = System::Drawing::Point(308, 17);
			this->Column_NB->Name = L"Column_NB";
			this->Column_NB->Size = System::Drawing::Size(112, 26);
			this->Column_NB->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 19);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Tipo de productos ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Peso máximo (lbs)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Fila de la nueva bahía ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Columna de la nueva bahía ";
			// 
			// Name_responsable
			// 
			this->Name_responsable->Location = System::Drawing::Point(925, 13);
			this->Name_responsable->Name = L"Name_responsable";
			this->Name_responsable->Size = System::Drawing::Size(231, 20);
			this->Name_responsable->TabIndex = 47;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->Location = System::Drawing::Point(680, 13);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(192, 19);
			this->label12->TabIndex = 46;
			this->label12->Text = L"Nombre de responsable:";
			// 
			// AddProduct
			// 
			this->AddProduct->BackColor = System::Drawing::Color::Transparent;
			this->AddProduct->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddProduct->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddProduct->Location = System::Drawing::Point(879, 394);
			this->AddProduct->Name = L"AddProduct";
			this->AddProduct->Size = System::Drawing::Size(140, 36);
			this->AddProduct->TabIndex = 45;
			this->AddProduct->Text = L"Añadir producto";
			this->AddProduct->UseVisualStyleBackColor = false;
			// 
			// NewBay
			// 
			this->NewBay->BackColor = System::Drawing::Color::Transparent;
			this->NewBay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NewBay->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewBay->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NewBay->Location = System::Drawing::Point(879, 191);
			this->NewBay->Name = L"NewBay";
			this->NewBay->Size = System::Drawing::Size(140, 38);
			this->NewBay->TabIndex = 44;
			this->NewBay->Text = L"Crear Bahía";
			this->NewBay->UseVisualStyleBackColor = false;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->Ordenamientos);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(632, 745);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(456, 73);
			this->groupBox4->TabIndex = 56;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Inventario";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 22);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(145, 38);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Ingrese opción de \r\nordenamiento";
			// 
			// Ordenamientos
			// 
			this->Ordenamientos->FormattingEnabled = true;
			this->Ordenamientos->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Producto", L"Cantidad de unidades", L"Costo total" });
			this->Ordenamientos->Location = System::Drawing::Point(218, 31);
			this->Ordenamientos->Name = L"Ordenamientos";
			this->Ordenamientos->Size = System::Drawing::Size(204, 27);
			this->Ordenamientos->TabIndex = 15;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->Row_DB);
			this->groupBox3->Controls->Add(this->Column_DB);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(634, 626);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(456, 98);
			this->groupBox3->TabIndex = 55;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Eliminar bahía";
			// 
			// Row_DB
			// 
			this->Row_DB->Location = System::Drawing::Point(308, 66);
			this->Row_DB->Name = L"Row_DB";
			this->Row_DB->Size = System::Drawing::Size(112, 26);
			this->Row_DB->TabIndex = 20;
			// 
			// Column_DB
			// 
			this->Column_DB->Location = System::Drawing::Point(308, 25);
			this->Column_DB->Name = L"Column_DB";
			this->Column_DB->Size = System::Drawing::Size(112, 26);
			this->Column_DB->TabIndex = 19;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 60);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(180, 19);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Fila de bahia a eliminar";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(11, 34);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(220, 19);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Columna de bahia a eliminar";
			// 
			// Kardex
			// 
			this->Kardex->BackColor = System::Drawing::Color::Transparent;
			this->Kardex->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Kardex->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Kardex->Location = System::Drawing::Point(1115, 751);
			this->Kardex->Name = L"Kardex";
			this->Kardex->Size = System::Drawing::Size(138, 29);
			this->Kardex->TabIndex = 54;
			this->Kardex->Text = L"Revisar Kardex";
			this->Kardex->UseVisualStyleBackColor = false;
			// 
			// Stock
			// 
			this->Stock->BackColor = System::Drawing::Color::Transparent;
			this->Stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Stock->Font = (gcnew System::Drawing::Font(L"Rockwell", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Stock->Location = System::Drawing::Point(1115, 786);
			this->Stock->Name = L"Stock";
			this->Stock->Size = System::Drawing::Size(138, 32);
			this->Stock->TabIndex = 53;
			this->Stock->Text = L"Revisar Inventario";
			this->Stock->UseVisualStyleBackColor = false;
			// 
			// DeleteBay
			// 
			this->DeleteBay->BackColor = System::Drawing::Color::Transparent;
			this->DeleteBay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteBay->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteBay->Location = System::Drawing::Point(1115, 660);
			this->DeleteBay->Name = L"DeleteBay";
			this->DeleteBay->Size = System::Drawing::Size(140, 39);
			this->DeleteBay->TabIndex = 52;
			this->DeleteBay->Text = L"Eliminar Bahía";
			this->DeleteBay->UseVisualStyleBackColor = false;
			// 
			// Principal_
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1312, 895);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->Kardex);
			this->Controls->Add(this->Stock);
			this->Controls->Add(this->DeleteBay);
			this->Controls->Add(this->DeleteProduct);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Name_responsable);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->AddProduct);
			this->Controls->Add(this->NewBay);
			this->Controls->Add(this->Aux_DGV);
			this->Controls->Add(this->Bodega_DGV);
			this->Name = L"Principal_";
			this->Text = L"Principal_";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bodega_DGV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Aux_DGV))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
