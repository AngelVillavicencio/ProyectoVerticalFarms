#pragma once
#include "frmNuevoCamaraCrecimiento.h"
#include "frmEditarCamaraCrecimiento.h"

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
	/// Resumen de frmMantCamaraCrecimiento
	/// </summary>
	public ref class frmMantCamaraCrecimiento1 : public System::Windows::Forms::Form
	{
	public:
		frmMantCamaraCrecimiento1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->objGestorCamaraCrecimiento = gcnew GestorCamaraCrecimiento();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantCamaraCrecimiento1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: GestorCamaraCrecimiento^ objGestorCamaraCrecimiento;
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Camaras;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ descripcion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ encargado;



























	protected:

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Camaras = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->descripcion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->encargado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
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
			this->panel1->Size = System::Drawing::Size(917, 380);
			this->panel1->TabIndex = 14;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(195, 30);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(541, 49);
			this->panel3->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(433, 11);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 24);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantCamaraCrecimiento1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox1->Location = System::Drawing::Point(142, 11);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(224, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id:";
			this->label1->Click += gcnew System::EventHandler(this, &frmMantCamaraCrecimiento1::label1_Click);
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(142, 303);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(670, 74);
			this->panel2->TabIndex = 13;
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
			this->button4->Click += gcnew System::EventHandler(this, &frmMantCamaraCrecimiento1::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button3->AutoSize = true;
			this->button3->Location = System::Drawing::Point(276, 22);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 24);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Modificar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantCamaraCrecimiento1::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button2->AutoSize = true;
			this->button2->Location = System::Drawing::Point(548, 22);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 24);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantCamaraCrecimiento1::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->codigo,
					this->Nombre, this->Camaras, this->descripcion, this->Column1, this->encargado
			});
			this->dataGridView1->Location = System::Drawing::Point(69, 107);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(793, 181);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMantCamaraCrecimiento1::dataGridView1_CellContentClick);
			// 
			// codigo
			// 
			this->codigo->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->codigo->HeaderText = L"Id";
			this->codigo->Name = L"codigo";
			// 
			// Nombre
			// 
			this->Nombre->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Nombre->HeaderText = L"Nro. Piso";
			this->Nombre->Name = L"Nombre";
			// 
			// Camaras
			// 
			this->Camaras->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Camaras->HeaderText = L"Planta";
			this->Camaras->Name = L"Camaras";
			// 
			// descripcion
			// 
			this->descripcion->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->descripcion->HeaderText = L"Fase Crecimiento";
			this->descripcion->Name = L"descripcion";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Encendido";
			this->Column1->Name = L"Column1";
			// 
			// encargado
			// 
			this->encargado->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->encargado->HeaderText = L"Descripción";
			this->encargado->Name = L"encargado";
			// 
			// frmMantCamaraCrecimiento1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(917, 380);
			this->Controls->Add(this->panel1);
			this->Name = L"frmMantCamaraCrecimiento1";
			this->Text = L"Mantenimiento de la CamaraCrecimiento";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMantCamaraCrecimiento1::frmMantCamaraCrecimiento_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmMantCamaraCrecimiento1::frmMantCamaraCrecimiento_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmMantCamaraCrecimiento_Load(System::Object^ sender, System::EventArgs^ e) {
		//cod
		this->objGestorCamaraCrecimiento->cargarDatosCamaraCrecimiento();
		cargarGrilla();
		if (this->objGestorCamaraCrecimiento->cantidad() > 0) {
			this->button3->Visible = true;
			this->button2->Visible = true;
		}
		else {
			this->button3->Visible = false;
			this->button2->Visible = false;
		}
	}
	private: void cargarGrilla() {
		/*this->dataGridView1->Rows->Clear();
		int count = this->objGestorCamaraCrecimiento->cantidad();
		for (int i = 0; i < count; i++) {
			CamaraCrecimiento^ objCamaraCrecimiento = this->objGestorCamaraCrecimiento->buscaCamaraCrecimientoXindice(i);
			array<String^>^ fila = gcnew array<String^>(6);
			fila[0] = Convert::ToString(objCamaraCrecimiento->getId());
			fila[1] = Convert::ToString(objCamaraCrecimiento->getNumeroPiso());
			fila[2] = objCamaraCrecimiento->getTipoCultivo();
			fila[3] = objCamaraCrecimiento->getFaseCrecimiento();
			fila[4] = objCamaraCrecimiento->getEstadoEncendido();
			fila[5] = objCamaraCrecimiento->getComentario();
			this->dataGridView1->Rows->Add(fila);
		}*/
	}
	private: System::Void frmMantCamaraCrecimiento_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//cod
		//this->objGestorCamaraCrecimiento->guardarDatosCamaraCrecimiento();
	}
	private:void cargarVentana() {
		if (this->objGestorCamaraCrecimiento->cantidad() > 0) {
			this->button3->Visible = true;
			this->button2->Visible = true;
		}
		else {
			this->button3->Visible = false;
			this->button2->Visible = false;
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//crear nuevo
		/*
		frmNuevoCamaraCrecimiento^ VentanaCrearCamaraCrecimiento = gcnew frmNuevoCamaraCrecimiento(this->objGestorCamaraCrecimiento);
		VentanaCrearCamaraCrecimiento->ShowDialog();*/
		cargarGrilla();
		cargarVentana();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//editar
		if (this->dataGridView1->SelectedRows->Count == 0)
		{
			MessageBox::Show("Seleccione fila");
		}
		else
		{
			int indice = this->dataGridView1->SelectedRows[0]->Index;

			/* --------------------------*/
			int codigo = Convert::ToInt32(this->dataGridView1->Rows[indice]->Cells[0]->Value);

			/*---------------------------*/

			if (this->dataGridView1->Rows[indice]->Cells[0]->Value == nullptr)
			{
				MessageBox::Show("Seleccione fila VALIDA");
			}
			else
			{
				/*
				frmEditarCamaraCrecimiento^ VentanaEditarCamaraCrecimiento = gcnew frmEditarCamaraCrecimiento(this->objGestorCamaraCrecimiento, this->objGestorCamaraCrecimiento->buscaIndiceCamaraCrecimientoXid(codigo),this->id, codigoCamara);
				VentanaEditarCamaraCrecimiento->ShowDialog();*/
				cargarGrilla();
				cargarVentana();
			}

		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//eliminar

		if (this->dataGridView1->SelectedRows->Count == 0)
		{
			MessageBox::Show("Seleccione fila");
		}
		else
		{
			int indice = this->dataGridView1->SelectedRows[0]->Index;

			/**/

			int codigo = Convert::ToInt32(this->dataGridView1->Rows[indice]->Cells[0]->Value);

			/**/
			if (this->dataGridView1->Rows[indice]->Cells[0]->Value == nullptr)
			{
				MessageBox::Show("Seleccione fila VALIDA");
			}
			else
			{
				this->objGestorCamaraCrecimiento->eliminarCamaraCrecimiento(codigo);
				cargarGrilla();
				cargarVentana();
			}
		}
	}
	private:void cargarGrillaConEstacionEncontradas(GestorEstacion^ listaEncontrada)
	{
		/*this->dataGridView1->Rows->Clear();
		CamaraCrecimiento^ objCamaraCrecimiento = this->objGestorCamaraCrecimiento->buscaCamaraCrecimientoXindice(0);
		array<String^>^ fila = gcnew array<String^>(6);
		fila[0] = Convert::ToString(objCamaraCrecimiento->getId());
		fila[1] = Convert::ToString(objCamaraCrecimiento->getNumeroPiso());
		fila[2] = objCamaraCrecimiento->getTipoCultivo();
		fila[3] = objCamaraCrecimiento->getFaseCrecimiento();
		fila[4] = objCamaraCrecimiento->getEstadoEncendido();
		fila[5] = objCamaraCrecimiento->getComentario();
		this->dataGridView1->Rows->Add(fila);*/
	}
	private: bool ValidarId(String^ id) {

		//MessageBox::Show(id);
		bool num = false;
		int i = 0;
		if (id == " ") {
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
	private:void cargarGrillaConEstacionEncontradas(GestorCamaraCrecimiento^ listaEncontrada)
	{
		/*this->dataGridView1->Rows->Clear();
		CamaraCrecimiento^ objCamaraCrecimiento = listaEncontrada->buscaCamaraCrecimientoXindice(0);
		array<String^>^ fila = gcnew array<String^>(6);
		fila[0] = Convert::ToString(objCamaraCrecimiento->getId());
		fila[1] = Convert::ToString(objCamaraCrecimiento->getNumeroPiso());
		fila[2] = objCamaraCrecimiento->getTipoCultivo();
		fila[3] = objCamaraCrecimiento->getFaseCrecimiento();
		fila[4] = objCamaraCrecimiento->getEstadoEncendido();
		fila[5] = objCamaraCrecimiento->getComentario();
		this->dataGridView1->Rows->Add(fila);*/

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*CamaraCrecimiento^ objCamaraAevaluar = gcnew CamaraCrecimiento();
		bool encontre = false;
		if (this->textBox1->Text =="" ) {
			cargarGrilla();
			MessageBox::Show("Escribe algún codigo");
		}
		else
		{
			if (ValidarId(this->textBox1->Text)) {
				int  codigo = Convert::ToInt32(this->textBox1->Text);
				
				for (int i = 0; i < this->objGestorCamaraCrecimiento->cantidad(); i++)
				{
					objCamaraAevaluar = this->objGestorCamaraCrecimiento->buscaCamaraCrecimientoXindice(i);
					if (codigo == objCamaraAevaluar->getId()) {
						encontre = true;
						break;
					}
					else {
						encontre = false;
					}
				}
				if (encontre ==true) {
					GestorCamaraCrecimiento^ listaEncontrada = gcnew GestorCamaraCrecimiento();
					listaEncontrada->agregarCamaraCrecimiento(objCamaraAevaluar);
					cargarGrillaConEstacionEncontradas(listaEncontrada);
				}
				else
				{
					MessageBox::Show("No se encontró la Camara");
					cargarGrilla();
				}
			}
			else
			{
				MessageBox::Show("Escribe un numero!!!!");
			}
		}*/
	}
	};
}
