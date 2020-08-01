#pragma once
#include "frmCrearEstacion.h"
#include "frmEditarEstacion.h"
namespace ProyectoVerticalFarmsView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoVerticalFarmsController;
	/// <summary>
	/// Resumen de frmMantEstacion
	/// </summary>
	public ref class frmMantEstacion : public System::Windows::Forms::Form
	{
	public:
		frmMantEstacion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			this->objGestorEstacion = gcnew GestorEstacion();
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantEstacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: GestorEstacion^ objGestorEstacion;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Camaras;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ descripcion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ encargado;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;





















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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Camaras = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->descripcion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->encargado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox1->Location = System::Drawing::Point(126, 11);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(224, 20);
			this->textBox1->TabIndex = 4;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->codigo,
					this->Nombre, this->Camaras, this->descripcion, this->encargado
			});
			this->dataGridView1->Location = System::Drawing::Point(60, 107);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(688, 257);
			this->dataGridView1->TabIndex = 8;
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
			// descripcion
			// 
			this->descripcion->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->descripcion->HeaderText = L"Encargado";
			this->descripcion->Name = L"descripcion";
			// 
			// encargado
			// 
			this->encargado->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->encargado->HeaderText = L"Descripción";
			this->encargado->Name = L"encargado";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(400, 11);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 24);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantEstacion::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button2->AutoSize = true;
			this->button2->Location = System::Drawing::Point(515, 22);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 24);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantEstacion::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button3->AutoSize = true;
			this->button3->Location = System::Drawing::Point(259, 22);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 24);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Modificar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantEstacion::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button4->AutoSize = true;
			this->button4->Location = System::Drawing::Point(41, 22);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 24);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Crear";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantEstacion::button4_Click);
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(884, 520);
			this->panel1->TabIndex = 13;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(117, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(508, 49);
			this->panel3->TabIndex = 14;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(76, 389);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(637, 74);
			this->panel2->TabIndex = 13;
			// 
			// frmMantEstacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(884, 520);
			this->Controls->Add(this->panel1);
			this->Name = L"frmMantEstacion";
			this->Text = L"Mantenimiento de Estación";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMantEstacion::frmMantEstacion_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmMantEstacion::frmMantEstacion_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmMantEstacion_Load(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorEstacion->CargarDatosEstacion();
		cargarGrilla();
		if (this->objGestorEstacion->ObtenerCantidadDeEstaciones() > 0) {
			this->button3->Visible = true;
			this->button2->Visible = true;

		}
		else {
			this->button3->Visible = false;
			this->button2->Visible = false;

		}


	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {


		//frmCrearEstacion^ VentanaCrearEstacion = gcnew frmCrearEstacion( this->objGestorEstacion);
		//VentanaCrearEstacion->MdiParent = this;
		//VentanaCrearEstacion->ShowDialog();
		cargarGrilla();
		cargarVentana();
		
	}
	private: void cargarGrilla() {
		/*this->dataGridView1->Rows->Clear();
		int count = this->objGestorEstacion->ObtenerCantidadDeEstaciones();
		for (int i = 0; i < count; i++) {
			Estacion^ objEstacion = this->objGestorEstacion->buscaEstacionXindice(i);
			array<String^>^ fila = gcnew array<String^>(5);
			fila[0] = Convert::ToString(objEstacion->getId());
			fila[1] = objEstacion->getNombre();
			fila[2] = Convert::ToString(objEstacion->getCantidadCamaras());
			fila[3] = objEstacion->getEncargado();
			fila[4] = objEstacion->getDescripcion();
			this->dataGridView1->Rows->Add(fila);

		}*/

	}
private:void cargarVentana() {
			   if (this->objGestorEstacion->ObtenerCantidadDeEstaciones() >0) {
				   this->button3->Visible = true;
				   this->button2->Visible = true;

			   }
			   else {
				   this->button3->Visible = false;
				   this->button2->Visible = false;

			   }
		   }
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


		if( this->dataGridView1->SelectedRows->Count == 0)
		{
			MessageBox::Show("Seleccione fila");
		
		}
		else
		{
			
			int indice = this->dataGridView1->SelectedRows[0]->Index;
			
			/*    */
			int codigo = Convert::ToInt32(this->dataGridView1->Rows[indice]->Cells[0]->Value);



			if (this->dataGridView1->Rows[indice]->Cells[0]->Value == nullptr)
			{
				MessageBox::Show("Seleccione fila VALIDA");
			}
			else
			{

				frmEditarEstacion^ VentanaEditarEstacion = gcnew frmEditarEstacion(this->objGestorEstacion, this->objGestorEstacion->buscaIndiceCamaraCrecimientoXid(codigo));
				VentanaEditarEstacion->ShowDialog();
				cargarGrilla();
				cargarVentana();
			}
			
		}
		
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	///if (this->objGestorEstacion->ObtenerCantidadDeEstaciones() > 0) {


		/**/

		if (this->dataGridView1->SelectedRows->Count == 0)
		{
			MessageBox::Show("Seleccione fila");

		}
		else
		{

			int indice = this->dataGridView1->SelectedRows[0]->Index;
			int codigo = Convert::ToInt32(this->dataGridView1->Rows[indice]->Cells[0]->Value);

			if (this->dataGridView1->Rows[indice]->Cells[0]->Value == nullptr)
			{
				MessageBox::Show("Seleccione fila VALIDA");
			}
			else
			{
				this->objGestorEstacion->eliminarEstacionXcodigo(codigo);
				cargarGrilla();
				cargarVentana();
			}

		}


	
	
}
private:void cargarGrillaConEstacionEncontradas(GestorEstacion^ listaEncontrada)
{
	/*this->dataGridView1->Rows->Clear();
	Estacion^ objEstacion = listaEncontrada->buscaEstacionXindice(0);
	array<String^>^ fila = gcnew array<String^>(5);
	fila[0] = Convert::ToString(objEstacion->getId());
	fila[1] = objEstacion->getNombre();
	fila[2] = Convert::ToString(objEstacion->getCantidadCamaras());
	fila[3] = objEstacion->getEncargado();
	fila[4] = objEstacion->getDescripcion();
	this->dataGridView1->Rows->Add(fila);*/

}
	   private: bool ValidarId(String^ id) {
		   bool num = false;
		   int i = 0;
		   if (id == "") {
			   return false;
		   }
		   else {
			   while (!num) {
				   if (id[i] >= '0' && id[i] <= '9') {
					   num = true;
					   break;
				   }
				   else if (id[i] == ' ') {
					   break;
				   }
				   else {
					   num = false;
					   break;
				   }
				   i++;
			   }
			   return num;
		   }


	   }
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	/*Estacion^ objestacionAevaluar = gcnew Estacion();
	bool encontre = false;
	if (this->textBox1->Text == "") {

		cargarGrilla();
		MessageBox::Show("Escribe el codigo");

	}
	else
	{
		if (ValidarId(this->textBox1->Text)) {

			int  codigo = Convert::ToInt32(this->textBox1->Text);
			for (int i = 0; i < this->objGestorEstacion->ObtenerCantidadDeEstaciones(); i++)
			{

				objestacionAevaluar = this->objGestorEstacion->buscaEstacionXindice(i);
				if (codigo == objestacionAevaluar->getId()) {
					encontre = true;
					break;
				}
				else {
					encontre = false;
				}

			}
			if (encontre == true) {
				GestorEstacion^ listaEncontrada = gcnew GestorEstacion();
				listaEncontrada->agregarEstacion(objestacionAevaluar);
				cargarGrillaConEstacionEncontradas(listaEncontrada);
			}
			else
			{
				MessageBox::Show("No se encontró la estación");
				cargarGrilla();
			}


		}
		else
		{
			MessageBox::Show("Escribe un numero!!!!");
		}
		
	}*/
	

}
private: System::Void frmMantEstacion_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorEstacion->GuardarDatosEstacion();
}
};
}
