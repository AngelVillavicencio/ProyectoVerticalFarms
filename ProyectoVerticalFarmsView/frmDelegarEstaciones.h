#pragma once

namespace ProyectoVerticalFarmsView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoVerticalFarmsController;
	using namespace ProyectoVerticalFarmsModel;
	/// <summary>
	/// Resumen de frmDelegarEstaciones
	/// </summary>
	public ref class frmDelegarEstaciones : public System::Windows::Forms::Form
	{
	public:
		frmDelegarEstaciones(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmDelegarEstaciones(GestorEstacion^ objGestorEstacion,GestorUsuario^ objGestorUsuario, int indiceUsuario, int id) 
		{
			InitializeComponent();
			this->objGestorEstacion = objGestorEstacion;
			this->objGestorUsuario = objGestorUsuario;
			this->indiceUsuario = indiceUsuario;
			this->id = id;
		}
		frmDelegarEstaciones(int codigoEncargado)
		{
			InitializeComponent();
			this->objGestorUsuario = gcnew GestorUsuario();
			this->codigoEncargado = codigoEncargado;
			this->objGestorEstacion = gcnew GestorEstacion();
			this->objGestorEstacion2 = gcnew GestorEstacion();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmDelegarEstaciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: GestorEstacion^ objGestorEstacion;
	private: GestorUsuario^ objGestorUsuario;
	private: int  indiceUsuario;
	private: int  id;
	private: int idCamara;
	private: int  codigoEncargado;


	private: int codigoEstacionSeleccionada;
	private: int codigoCamaraSeleccionada;
	private: GestorEstacion^ objGestorEstacion2;
	protected:





	private: System::Windows::Forms::DataGridView^ dataGridView2;






	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView3;





	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Camaras;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ encargado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Camaras = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->encargado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->codigo,
					this->Nombre, this->Camaras, this->encargado
			});
			this->dataGridView1->Location = System::Drawing::Point(20, 29);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(573, 286);
			this->dataGridView1->TabIndex = 18;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmDelegarEstaciones::dataGridView1_CellClick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->Column1, this->dataGridViewTextBoxColumn5
			});
			this->dataGridView2->Location = System::Drawing::Point(6, 19);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(512, 108);
			this->dataGridView2->TabIndex = 19;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->dataGridView3);
			this->groupBox1->Location = System::Drawing::Point(24, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(564, 408);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Estaciones Encargadas";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(225, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(199, 20);
			this->textBox1->TabIndex = 23;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 13);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Nombre del Encargado:";
			// 
			// dataGridView3
			// 
			this->dataGridView3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn10
			});
			this->dataGridView3->Location = System::Drawing::Point(6, 104);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(552, 298);
			this->dataGridView3->TabIndex = 21;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView2);
			this->groupBox2->Location = System::Drawing::Point(44, 326);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(524, 127);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Cámaras de Crecimiento";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->groupBox2);
			this->groupBox3->Controls->Add(this->dataGridView1);
			this->groupBox3->Location = System::Drawing::Point(594, 24);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(614, 459);
			this->groupBox3->TabIndex = 22;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Seleccione una estación";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(133, 452);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 41);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Agregar Estación";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmDelegarEstaciones::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(364, 452);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 41);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Eliminar Estación";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmDelegarEstaciones::button2_Click);
			// 
			// codigo
			// 
			this->codigo->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->codigo->HeaderText = L"Código";
			this->codigo->Name = L"codigo";
			// 
			// Nombre
			// 
			this->Nombre->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			// 
			// Camaras
			// 
			this->Camaras->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Camaras->HeaderText = L"Cantidad de Camaras de Crecimiento";
			this->Camaras->Name = L"Camaras";
			// 
			// encargado
			// 
			this->encargado->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->encargado->HeaderText = L"Descripción";
			this->encargado->Name = L"encargado";
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Código";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nro. Piso";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Planta";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn4->HeaderText = L"Fase Crecimiento";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Estado";
			this->Column1->Name = L"Column1";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn5->HeaderText = L"Descripción";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn6->HeaderText = L"Código";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn7->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn8->HeaderText = L"Cantidad de Camaras de Crecimiento";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn10->HeaderText = L"Descripción";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// frmDelegarEstaciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1237, 529);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmDelegarEstaciones";
			this->Text = L"Delegar Estaciones";
			this->Load += gcnew System::EventHandler(this, &frmDelegarEstaciones::frmDelegarEstaciones_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

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
				int codigoEstacionSeleccionado = Convert::ToInt32(this->dataGridView1->Rows[indice]->Cells[0]->Value);
				
				this->objGestorUsuario->EncargarEstacionAEncargadoBD(this->codigoEncargado, codigoEstacionSeleccionado);
				this->objGestorEstacion2->cargarEstacionesEncargadasXEncargadoBD(this->codigoEncargado);
				cargarGrillaDeEstacionesEncargadas();
				
			}
		}
	}
	private: void cargarGrillaDeEstacionesEncargadas()
	{

		this->dataGridView3->Rows->Clear();
		int count = this->objGestorEstacion2->listaEstaciones->Count;
		for (int i = 0; i < count; i++) {
			Estacion^ objEstacion = this->objGestorEstacion2->listaEstaciones[i];
			array<String^>^ fila = gcnew array<String^>(4);
			fila[0] = Convert::ToString(objEstacion->codigo);
			fila[1] = objEstacion->nombre;
			fila[2] = Convert::ToString(objEstacion->cantidadCamaras);
			fila[3] = objEstacion->descripcion;
			this->dataGridView3->Rows->Add(fila);
		}
	}
private: void cargarGrillaEstacion() {

	this->dataGridView1->Rows->Clear();
	int count = this->objGestorEstacion->ObtenerCantidadDeEstaciones();
	for (int i = 0; i < count; i++) {
		Estacion^ objEstacion = this->objGestorEstacion->buscaEstacionXindice(i);
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = Convert::ToString(objEstacion->codigo);
		fila[1] = objEstacion->nombre;
		fila[2] = Convert::ToString(objEstacion->cantidadCamaras);
		fila[3] = objEstacion->descripcion;
		this->dataGridView1->Rows->Add(fila);
	}

}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count == 0)
	{
		MessageBox::Show("Seleccione fila");
	}
	else
	{
		int indice = this->dataGridView1->SelectedRows[0]->Index;

		/**/

		int codigoDeEstacion = Convert::ToInt32(this->dataGridView1->Rows[indice]->Cells[0]->Value);

		/**/
		if (this->dataGridView1->Rows[indice]->Cells[0]->Value == nullptr)
		{
			MessageBox::Show("Seleccione fila VALIDA");
		}
		else
		{
			this->codigoEstacionSeleccionada = codigoDeEstacion;
			cargarGrillaCamaraCrecimiento(this->codigoEstacionSeleccionada);
		}
	}


}
private: void cargarGrillaCamaraCrecimiento(int codigoEstacionSeleccionada)
{
	
	this->dataGridView2->Rows->Clear();
	this->objGestorEstacion->verListaDeCamarasXEstacionBD(codigoEstacionSeleccionada);
	
	int count = this->objGestorEstacion->listaCamarasCrecimientos->Count;
	for (int i = 0; i < count; i++)
	{
		CamaraCrecimiento^ objCamaraCrecimiento = this->objGestorEstacion->listaCamarasCrecimientos[i];
		array<String^>^ fila = gcnew array<String^>(6);

		fila[0] = Convert::ToString(objCamaraCrecimiento->codigo);
		fila[1] = Convert::ToString(objCamaraCrecimiento->numerodePiso);
		fila[2] = objCamaraCrecimiento->tipoCultivo;
		fila[3] = objCamaraCrecimiento->fasedeCrecimiento;
		fila[4] = objCamaraCrecimiento->Estado;
		fila[5] = objCamaraCrecimiento->comentario;
		this->dataGridView2->Rows->Add(fila);
	}


}
private: System::Void frmDelegarEstaciones_Load(System::Object^ sender, System::EventArgs^ e) {

	
	this->objGestorUsuario->cargarEncargadosBD();
	this->textBox1->Text = this->objGestorUsuario->obtenerEncargadoXCodigoBD(this->codigoEncargado)->nombres;

	this->objGestorEstacion2->cargarEstacionesEncargadasXEncargadoBD(this->codigoEncargado);
	cargarGrillaDeEstacionesEncargadas();


	this->objGestorEstacion->cargarEstacionesBD();
	this->objGestorEstacion->cargarCamaraDeCrecimientoBD();
	
	cargarGrillaEstacion();
	

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->dataGridView3->SelectedRows->Count == 0)
		MessageBox::Show("Seleccione una fila");
	else
	{
		int indice = this->dataGridView3->SelectedRows[0]->Index;
		if (this->dataGridView3->Rows[indice]->Cells[0]->Value == nullptr)
		{
			MessageBox::Show("Seleccione una fila válida");
		}
		else
		{
			int codigoEstacionSeleccionado = Convert::ToInt32(this->dataGridView3->Rows[indice]->Cells[0]->Value);
			this->objGestorUsuario->DesEncargarEstacionAEncargadoBD(this->codigoEncargado, codigoEstacionSeleccionado);
			this->objGestorEstacion2->cargarEstacionesEncargadasXEncargadoBD(this->codigoEncargado);
			cargarGrillaDeEstacionesEncargadas();

		}
	}
	
}
};
}
