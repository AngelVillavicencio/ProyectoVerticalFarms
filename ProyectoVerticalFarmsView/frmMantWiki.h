#pragma once
#include "frmNuevoWiki.h"								// Incluimos la Ventana Hija
#include "frmEditarWiki.h"								// Incluimos la Ventana Hija

namespace ProyectoVerticalFarmsView {

	using namespace ProyectoVerticalFarmsController;			// Los incluimos debido al manejo de datos
	using namespace ProyectoVerticalFarmsModel;				//  en las Ventanas Hijas.	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;			// Para usar las Listas
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMantWiki
	/// </summary>
	public ref class frmMantWiki : public System::Windows::Forms::Form
	{
	public:
		frmMantWiki(void)
		{
			InitializeComponent();
			this->objGestorWiki = gcnew GestorWiki();					// Inicializamos el objeto de la Ventana,
																				// tambien le damos espacio de memoria
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmMantWiki(GestorWiki^ objGestorWiki)
		{
			InitializeComponent();				// Inicializamos el objeto de la Ventana,
			this->objGestorWiki = objGestorWiki;					// Inicializamos el objeto de la Ventana,
																				// tambien le damos espacio de memoria
			//
			//TODO: agregar código de constructor aquí
			//
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantWiki()
		{
			if (components)
			{
				delete components;
			}
		}

	private: GestorWiki^ objGestorWiki;								//Agregamos atributo (Objeto) de la Ventana
	protected:



	private: System::Windows::Forms::DataGridView^ dataGridView1;








	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;








	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;














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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(13) {
				this->Column1,
					this->Column2, this->Column5, this->Column15, this->Column9, this->Column3, this->Column10, this->Column11, this->Column6, this->Column12,
					this->Column13, this->Column4, this->Column14
			});
			this->dataGridView1->Location = System::Drawing::Point(37, 81);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1032, 293);
			this->dataGridView1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(262, 413);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantWiki::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(559, 413);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Modificar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantWiki::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(843, 413);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantWiki::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(32, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Mis Vegetales";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Tipo Vegetal";
			this->Column2->Name = L"Column2";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Nombre Vegetal";
			this->Column5->Name = L"Column5";
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Tipo de Iluminación";
			this->Column15->Name = L"Column15";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Temperatura Min. ( C° )";
			this->Column9->Name = L"Column9";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Temperatura Ideal  ( C° )";
			this->Column3->Name = L"Column3";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Temperatura Max.  ( C° )";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Humedad Min. ( % )";
			this->Column11->Name = L"Column11";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Humedad Ideal ( % )";
			this->Column6->Name = L"Column6";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Humedad Max. ( % )";
			this->Column12->Name = L"Column12";
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Iluminacion Min. ( Lux )";
			this->Column13->Name = L"Column13";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Iluminación Ideal ( Lux )";
			this->Column4->Name = L"Column4";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Iluminacion Max ( Lux )";
			this->Column14->Name = L"Column14";
			// 
			// frmMantWiki
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1113, 496);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmMantWiki";
			this->Text = L"Nuestra wiki";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMantWiki::CerrarVentana);
			this->Load += gcnew System::EventHandler(this, &frmMantWiki::CargarVentana);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		frmNuevoWiki^ ventanaNuevoWiki = gcnew frmNuevoWiki();			// Paso el gestor de la ventana a la ventana del boton para que obtenga datos a modificar
		ventanaNuevoWiki->ShowDialog();																	// Muestra una ventana modal, osea bloquea las ventanas traceras
		this->objGestorWiki->cargarWikisBD();
		this->CargarGrilla();
	}
private: void CargarGrilla()																			// Código estandar para cargar grilla
{
		this->dataGridView1->Rows->Clear();																	//Limpiar Grillas
		int count = this->objGestorWiki->ObtenerCantidad();
		for (int i = 0; i < count; i++)
		{
			Wiki^ objWiki = this->objGestorWiki->ObtenerWikiXindice(i);
			array<String^>^ fila = gcnew array<String^>(13);			                    //Hacemos una fila
			fila[0] = Convert::ToString(objWiki->codigo);
			fila[1] = objWiki->tipoVegetal;
			fila[2] = objWiki->nombrePlanta;
			fila[3] = objWiki->tipoDeIluminacion;
			fila[4] = Convert::ToString(objWiki->temperaturaMin);
			fila[5] = Convert::ToString(objWiki->temperaturaIdeal);
			fila[6] = Convert::ToString(objWiki->temperaturaMax);
			fila[7] = Convert::ToString(objWiki->humedadMin);
			fila[8] = Convert::ToString(objWiki->humedadIdeal);
			fila[9] = Convert::ToString(objWiki->humedadMax); 
			fila[10] = Convert::ToString(objWiki->IluminacionMin);
			fila[11] = Convert::ToString(objWiki->IluminacionIdeal);
			fila[12] = Convert::ToString(objWiki->IluminacionMax);
			this->dataGridView1->Rows->Add(fila);
		}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


	if (this->dataGridView1->SelectedRows->Count == 0)
		MessageBox::Show("Seleccione una fila");
	else
	{
		int indice = this->dataGridView1->SelectedRows[0]->Index;
		if (this->dataGridView1->Rows[indice]->Cells[0]->Value == nullptr)
		{
			MessageBox::Show("Seleccione una fila válida");
		}
		else
		{
			int codigo = Convert::ToInt32(this->dataGridView1->Rows[indice]->Cells[0]->Value);

			frmEditarWiki^ ventanaEditarWiki = gcnew frmEditarWiki(this->objGestorWiki, codigo);
			ventanaEditarWiki->ShowDialog();
			this->objGestorWiki->cargarWikisBD();
			this->CargarGrilla();
				

		}
	}

		
		
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count == 0)
			MessageBox::Show("Seleccione una fila");
	else
	{
		int indice = this->dataGridView1->SelectedRows[0]->Index;
		if (this->dataGridView1->Rows[indice]->Cells[0]->Value == nullptr)
		{
				MessageBox::Show("Seleccione una fila válida");
		}
		else
		{
				int codigowiki = Convert::ToInt32(this->dataGridView1->Rows[indice]->Cells[0]->Value);

				this->objGestorWiki->EliminarWikiBD(codigowiki);
				this->objGestorWiki->cargarWikisBD();
				this->CargarGrilla();

				this->objGestorWiki->eliminarCamarasXCodigoWiki(codigowiki);
		}
	}
}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: void CargarGrillaEncontrados(List<Wiki^>^ listaEncontrados)												// Cargamos la grilla con los valores encontrados
	{
		
	}

	private: System::Void CargarVentana(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorWiki->cargarWikisBD();											//Llena los datos en la grilla
		CargarGrilla();
	}
	private: System::Void CerrarVentana(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	}
	};
}
