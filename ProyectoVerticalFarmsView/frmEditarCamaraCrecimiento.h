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
	/// Resumen de frmEditarCamaraCrecimiento
	/// </summary>
	public ref class frmEditarCamaraCrecimiento : public System::Windows::Forms::Form
	{
	public:
		frmEditarCamaraCrecimiento(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		
		frmEditarCamaraCrecimiento(GestorEstacion^ objGestorEstacion, CamaraCrecimiento^ objCamaraCrecimiento,int codigoEstacion,int codigoCamara)
		{
			InitializeComponent();
			/*this->objCamaraCrecimiento = objCamaraCrecimiento;*/
			this->objGestorEstacion = objGestorEstacion;
			/*this->codigoEstacion = codigoEstacion;
			this->codigoCamara = codigoCamara;*/
		}

		frmEditarCamaraCrecimiento(int codigoEstacionSeleccionada, int codigoDeCamara)
		{
			InitializeComponent();
			this->objGestorEstacion = gcnew GestorEstacion();
			this->codigoEstacionSeleccionada = codigoEstacionSeleccionada;
			this->codigoDeCamara = codigoDeCamara;
			
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarCamaraCrecimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int codigoEstacionSeleccionada;
	private: int codigoDeCamara;
	private: GestorEstacion^ objGestorEstacion;
	private: CamaraCrecimiento^ objCamaraCrecimiento;
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(45, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(335, 442);
			this->panel1->TabIndex = 12;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Germinación", L"Crecimiento", L"Maduración" });
			this->comboBox1->Location = System::Drawing::Point(135, 209);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(176, 21);
			this->comboBox1->TabIndex = 17;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Apagado", L"Encendido" });
			this->comboBox2->Location = System::Drawing::Point(135, 268);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(176, 21);
			this->comboBox2->TabIndex = 16;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(133, 325);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(177, 48);
			this->textBox6->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 209);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Fase de Crecimiento:";
			this->label6->Click += gcnew System::EventHandler(this, &frmEditarCamaraCrecimiento::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 325);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Comentario:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(134, 153);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(177, 20);
			this->textBox3->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(133, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(177, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(133, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(177, 20);
			this->textBox1->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Planta:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 271);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Estado:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nro Piso:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Código:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(25, 403);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarCamaraCrecimiento::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(236, 403);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarCamaraCrecimiento::button1_Click);
			// 
			// frmEditarCamaraCrecimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(436, 466);
			this->Controls->Add(this->panel1);
			this->Name = L"frmEditarCamaraCrecimiento";
			this->Text = L"Editar Camara Crecimiento";
			this->Load += gcnew System::EventHandler(this, &frmEditarCamaraCrecimiento::frmEditarCamaraCrecimiento_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: bool ValidarId(String^ id) {
		bool bandera = false;
		int i = 0;
		if (id == nullptr) {
			return false;
		}
		else {
			while (!bandera) {
				if (id[i] >= '0' && id[i] <= '9') {
					bandera = true;
					break;
				}
				else if (id[i] == ' ') {
					break;
				}
				else {
					bandera = false;
					break;
				}
				i++;
			}
			return bandera;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//cod
		if (ValidarId(this->textBox1->Text))
		{
			

			String^ fase = this->comboBox1->Text;
			String^ estado = this->comboBox2->Text;
			String^ descripcion = this->textBox6->Text;

			this->objCamaraCrecimiento->fasedeCrecimiento = fase;
			this->objCamaraCrecimiento->Estado = estado;
			this->objCamaraCrecimiento->comentario= descripcion;
			
			this->objGestorEstacion->editarCamaraCrecimientoBD(this->codigoEstacionSeleccionada, this->objCamaraCrecimiento);			
			this->Close();
		}
		else
		{
			MessageBox::Show("Coloque un numero en el codigo");
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void frmEditarCamaraCrecimiento_Load(System::Object^ sender, System::EventArgs^ e) {
		//cod

		this->objCamaraCrecimiento = this->objGestorEstacion->obtenerCamaraCrecimientoXCodigoBD(this->codigoDeCamara);

		this->textBox1->Text = Convert::ToString(this->objCamaraCrecimiento->codigo);
		this->textBox2->Text = Convert::ToString(this->objCamaraCrecimiento->numerodePiso);
		this->textBox3->Text = this->objCamaraCrecimiento->tipoCultivo;
		this->comboBox1->Text = this->objCamaraCrecimiento->fasedeCrecimiento;
		this->comboBox2->Text = this->objCamaraCrecimiento->Estado;
		this->textBox6->Text = this->objCamaraCrecimiento->comentario;
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}