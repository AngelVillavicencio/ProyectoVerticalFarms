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
	public ref class frmUsuarios : public System::Windows::Forms::Form
	{
	public:
		frmUsuarios(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			
			//
		}
		frmUsuarios(GestorUsuario^ objGestorUsuario1,int indice)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			this->objGestorUsuario2 = gcnew GestorUsuario();
			this->objGestorUsuario1 = objGestorUsuario1;
			//this->indiceUsuario = indice;
			//
		}
		///NUEVOOO
		frmUsuarios(String^ correoUsuario, GestorUsuario^ objGestorUsuario)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			this->objGestorUsuario1 = gcnew GestorUsuario();
			this->objGestorUsuario = objGestorUsuario;
			this->correoUsuario = correoUsuario;
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	

	protected:



	private: GestorUsuario^ objGestorUsuario2;//NO SIRVEN :v
	private: GestorUsuario^ objGestorUsuario;//
	private: String^ correoUsuario;
	private: GestorUsuario^ objGestorUsuario1;

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
	private: System::Windows::Forms::Label^ label1;









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
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column8,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(32, 58);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(913, 374);
			this->dataGridView1->TabIndex = 5;
			// 
			// Column8
			// 
			this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column8->HeaderText = L"Codigo";
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
			this->button2->Location = System::Drawing::Point(433, 462);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 35);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Seleccionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmUsuarios::button2_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Selecciona un encargado:";
			// 
			// frmUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 534);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmUsuarios";
			this->Text = L"Selecciona un encargado";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmUsuarios::CerrarVentana);
			this->Load += gcnew System::EventHandler(this, &frmUsuarios::CargarInfo);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: void CargarGrilla()
	{
		/*this->dataGridView1->Rows->Clear();
		int count = this->objGestorUsuario2->cantidadUsuarios();
		for (int i = 0; i < count; i++)
		{
			Usuario^ objUsuario = this->objGestorUsuario2->ObtenerUsuarioXindice(i);
			if (this->objGestorUsuario2->ObtenerUsuarioXindice(this->indiceUsuario)->getId() != objUsuario->getId())
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
			if (this->objGestorUsuario2->ObtenerUsuarioXindice(this->indiceUsuario)->getId() != objUsuario->getId())
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
	private: System::Void CargarInfo(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorUsuario1->cargarEncargadosBD();
		CargarGrillaConEncargadosNuevos();
	}
	private:void CargarGrillaConEncargadosNuevos() {
		bool existe = false;
		//objGestorUsuario1 tiene la lista de todos los encargados
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < this->objGestorUsuario1->listaDeEncargados->Count; i++)
		{
			for (int j = 0; j < this->objGestorUsuario->listaDeEncargados->Count; j++)
			{
				if (this->objGestorUsuario1->listaDeEncargados[i]->codigo == this->objGestorUsuario->listaDeEncargados[j]->codigo) {
					existe = true;
					break;
				}
				else
				{
					existe = false;
				}
			}
			if (existe) {
			}
			else {
				Encargado^ objEncargado = this->objGestorUsuario1->listaDeEncargados[i];
				array<String^>^ fila = gcnew array<String^>(8);
				fila[0] = Convert::ToString(objEncargado->codigo);
				fila[1] = objEncargado->nombres;
				fila[2] = objEncargado->apellidoPaterno;
				fila[3] = objEncargado->apellidoMaterno;
				fila[4] = objEncargado->dni;
				fila[5] = objEncargado->correo;
				fila[6] = objEncargado->numCelular;
				fila[7] = objEncargado->fechadeIngreso;
				this->dataGridView1->Rows->Add(fila);
			}
			existe = false;
		}
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
				for (int i = 0; i < this->objGestorUsuario2->cantidadUsuarios(); i++)
				{
					if (this->objGestorUsuario2->ObtenerUsuarioXindice(i)->getNombres() == nombre) {
						UsuariosEncontrados->AgregarUsuario(this->objGestorUsuario2->ObtenerUsuarioXindice(i));
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

				this->objGestorUsuario->AgregarEncargadoAListaDeEncargadoDeAdministrador(this->objGestorUsuario1->obtenerEncargadoXCodigoBD(codigo), this->correoUsuario);
				this->Close();
			}
		}
	}
};
}