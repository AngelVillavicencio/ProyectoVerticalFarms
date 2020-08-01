#pragma once

namespace ProyectoVerticalFarmsView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoVerticalFarmsModel;
	using namespace ProyectoVerticalFarmsController;

	/// <summary>

	/// </summary>
	public ref class frmAgregarEncargadoAEstacion : public System::Windows::Forms::Form
	{
	public:
		frmAgregarEncargadoAEstacion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí

			//
		}
		frmAgregarEncargadoAEstacion(GestorUsuario^ objGestorUsuario1)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			this->objGestorUsuario = gcnew GestorUsuario();
			this->objGestorUsuario1 = objGestorUsuario1;
			this->objUsuario = objUsuario;
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmAgregarEncargadoAEstacion()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: GestorUsuario^ objGestorUsuario;
	private: GestorUsuario^ objGestorUsuario1;
	private: int indice;
	private: Usuario^ objUsuario;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(215, 54);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(588, 111);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Búsqueda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(465, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 22);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAgregarEncargadoAEstacion::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(215, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column8,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(32, 203);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(913, 209);
			this->dataGridView1->TabIndex = 5;
			// 
			// Column8
			// 
			this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column8->HeaderText = L"ID";
			this->Column8->Name = L"Column8";
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Nombres";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"Apellido Paterno";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column3->HeaderText = L"Apellido Materno";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column4->HeaderText = L"DNI";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Correo";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"N° de celular";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Fecha de Ingreso";
			this->Column7->Name = L"Column7";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(430, 444);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 35);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Seleccionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAgregarEncargadoAEstacion::button2_Click_1);
			// 
			// frmAgregarEncargadoAEstacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 534);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmAgregarEncargadoAEstacion";
			this->Text = L"Agrega un encargado a tu cargo";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmAgregarEncargadoAEstacion::CerrarVentana);
			this->Load += gcnew System::EventHandler(this, &frmAgregarEncargadoAEstacion::CargarInfo);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: void CargarGrilla()
	{
		/*this->dataGridView1->Rows->Clear();*/
		

		/*int count = this->objGestorUsuario->cantidadUsuarios();
		for (int i = 0; i < count; i++)
		{
			Usuario^ objUsuario = this->objGestorUsuario->ObtenerUsuarioXindice(i);
			if (this->objGestorUsuario->ObtenerUsuarioXindice(this->indice)->getId() != objUsuario->getId())
			{
				array<String^>^ fila = gcnew array<String^>(8);
				fila[0] = Convert::ToString(objUsuario->getId());
				fila[1] = objUsuario->getNombres();
				fila[2] = objUsuario->getApellidoPaterno();
				fila[3] = objUsuario->getApellidoMaterno();
				fila[4] = objUsuario->getDni();
				fila[5] = objUsuario->getCorreo();
				fila[6] = objUsuario->getNumCelular();
				fila[7] = objUsuario->getFechaIngreso();
				this->dataGridView1->Rows->Add(fila);
			}

		}*/
	}
	private:void CargarGrillaConUsuariosEncontrados(GestorUsuario^ objGestorUsuario)
	{
		/*this->dataGridView1->Rows->Clear();
		int count = objGestorUsuario->cantidadUsuarios();
		for (int i = 0; i < count; i++)
		{
			Usuario^ objUsuario = objGestorUsuario->ObtenerUsuarioXindice(i);
			if (this->objGestorUsuario->ObtenerUsuarioXindice(this->indice)->getId() != objUsuario->getId())
			{
				array<String^>^ fila = gcnew array<String^>(8);
				fila[0] = Convert::ToString(objUsuario->getId());
				fila[1] = objUsuario->getNombres();
				fila[2] = objUsuario->getApellidoPaterno();
				fila[3] = objUsuario->getApellidoMaterno();
				fila[4] = objUsuario->getDni();
				fila[5] = objUsuario->getCorreo();
				fila[6] = objUsuario->getNumCelular();
				fila[7] = objUsuario->getFechaIngreso();
				this->dataGridView1->Rows->Add(fila);
			}
		}
		*/

	}
	private: System::Void CargarInfo(System::Object^ sender, System::EventArgs^ e) {
		/*this->objGestorUsuario->deserializar();
		this->CargarGrilla();*/
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void CerrarVentana(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {

		//this->objGestorUsuario->serializar();

	}
	private: bool ValidarSiesNumero(String^ numero) {
		bool num = false;
		int i = 0;
		if (numero == nullptr) {
			return false;
		}
		else {

			for (int i = 0; i < numero->Length; i++)
			{
				if (Convert::ToChar(numero[i]) >= '0' && Convert::ToChar(numero[i]) <= '9' || '.' == Convert::ToChar(numero[i]))
				{
					num = true;
				}
				else if (Convert::ToChar(numero[i]) == ' ')
				{
					if (i < numero->Length)
					{
						num = false;
						break;
					}
					else
					{
						num = true;

					}

				}
				else if (Convert::ToChar(numero[i]) <= '0' || Convert::ToChar(numero[i]) >= '9') {
					num = false;
					break;
				}
				else
				{
					num = false;
					break;
				}
			}
			return num;
		}


	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		/*GestorUsuario^ UsuariosEncontrados = gcnew GestorUsuario();
		if (this->textBox1->Text == "")
		{
			MessageBox::Show("No ha buscado nada...Se verán todas los encargados");
			CargarGrilla();
		}
		else
		{
			if (ValidarSiesNumero(this->textBox1->Text))
			{
				MessageBox::Show("Debe colocar un NOMBRE, no un numero");

			}
			else {

				String^ nombre = this->textBox1->Text;
				for (int i = 0; i < this->objGestorUsuario->cantidadUsuarios(); i++)
				{
					if (this->objGestorUsuario->ObtenerUsuarioXindice(i)->getNombres() == nombre) {
						UsuariosEncontrados->AgregarUsuario(this->objGestorUsuario->ObtenerUsuarioXindice(i));
					}
				}
				if (UsuariosEncontrados->cantidadUsuarios() > 0) {
					this->CargarGrillaConUsuariosEncontrados(UsuariosEncontrados);
				}
				else
				{
					MessageBox::Show("No se ha encontrado ningún usuario con ese nombre");
					this->CargarGrilla();
				}
			}
		}*/




	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

		/*if (this->dataGridView1->SelectedRows->Count == 0)
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
				int id = Convert::ToInt32(this->dataGridView1->Rows[indice]->Cells[0]->Value);
				this->objGestorUsuario1->AgregarUsuario(this->objGestorUsuario->ObtenerUsuarioXID(id));
				this->Close();
			}
		}*/
	}
	};
}