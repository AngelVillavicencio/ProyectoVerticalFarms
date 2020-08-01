#pragma once
#include <cctype>
namespace ProyectoVerticalFarmsView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoVerticalFarmsController;
	using namespace ProyectoVerticalFarmsModel;
	using namespace std;

	/// <summary>
	/// Resumen de frmCrearCamaraCrecimiento
	/// </summary>
	public ref class frmNuevoCamaraCrecimiento : public System::Windows::Forms::Form
	{
	public:
		frmNuevoCamaraCrecimiento(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		
		frmNuevoCamaraCrecimiento(GestorEstacion^ objGestorEstacion,int codigo,GestorWiki^ ObjGestorWiki)
		{
			InitializeComponent();
			
			this->objGestorEstacion = objGestorEstacion;
			//this->codigo=codigo;
			this->objGestorWiki = ObjGestorWiki;
		}
		frmNuevoCamaraCrecimiento(int codigoEstacionSeleccionada)
		{
			InitializeComponent();
			this->codigoEstacionSeleccionada = codigoEstacionSeleccionada;

			this->objGestorEstacion = gcnew GestorEstacion();
			this->objGestorWiki = gcnew GestorWiki();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmNuevoCamaraCrecimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: GestorEstacion^ objGestorEstacion;
	private: GestorWiki^ objGestorWiki;
	private: int codigoEstacionSeleccionada;
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Label^ label5;


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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;

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
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->comboBox3);
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(59, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(327, 469);
			this->panel1->TabIndex = 11;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmNuevoCamaraCrecimiento::panel1_Paint);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Apagado", L"Encendido" });
			this->comboBox2->Location = System::Drawing::Point(133, 235);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(176, 21);
			this->comboBox2->TabIndex = 15;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(132, 147);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(176, 21);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmNuevoCamaraCrecimiento::comboBox1_SelectedIndexChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(133, 283);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(177, 71);
			this->textBox6->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 195);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Fase Crecimiento:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 283);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Descripción:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(133, 95);
			this->textBox2->Name = L"textBox2";
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
			this->label4->Location = System::Drawing::Point(25, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Planta:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 235);
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
			this->button2->Location = System::Drawing::Point(25, 390);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoCamaraCrecimiento::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(236, 390);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoCamaraCrecimiento::button1_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Germinación", L"Crecimiento", L"Maduración" });
			this->comboBox3->Location = System::Drawing::Point(132, 192);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(176, 21);
			this->comboBox3->TabIndex = 16;
			// 
			// frmNuevoCamaraCrecimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 481);
			this->Controls->Add(this->panel1);
			this->Name = L"frmNuevoCamaraCrecimiento";
			this->Text = L"Crear Camara Crecimiento";
			this->Load += gcnew System::EventHandler(this, &frmNuevoCamaraCrecimiento::frmCrearCamaraCrecimiento_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmCrearCamaraCrecimiento_Load(System::Object^ sender, System::EventArgs^ e) {

		this->objGestorWiki->cargarWikisBD();
		this->objGestorEstacion->cargarEstacionesBD();
		this->objGestorEstacion->cargarCamaraDeCrecimientoBD();

		List<String^>^ nombresPlantas = gcnew List<String^>();
		int cantPlantas = this->objGestorWiki->ObtenerCantidad();
		for (int i = 0; i < cantPlantas; i++) {
			Wiki^ wiki = this->objGestorWiki->ObtenerWikiXindice(i);
			nombresPlantas->Add(wiki->nombrePlanta);
		}
		for (int i = 0; i < nombresPlantas->Count; i++) {
			this->comboBox1->Items->Add(nombresPlantas[i]);
		}


	}
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
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
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


		
			int codigo = 0;

			if (ValidarSiesNumero(this->textBox2->Text) ){
				
				int numPiso = Convert::ToInt32(this->textBox2->Text);
				String^ planta = this->comboBox1->Text;
				String^ fase = this->comboBox3->Text;
				String^ estado = this->comboBox2->Text;
				String^ descripcion = this->textBox6->Text;
				int codigoWiki = this->objGestorWiki->obtenerWikiXPlantaBD(planta)->codigo;

				CamaraCrecimiento^ objCamaraCrecimientoNuevo = gcnew CamaraCrecimiento(codigo,this->codigoEstacionSeleccionada,numPiso,planta,fase,estado,descripcion,codigoWiki,this->objGestorWiki->obtenerWikiXPlantaBD(planta));
				this->objGestorEstacion->agregarCamaraCrecimientoBD(this->codigoEstacionSeleccionada,objCamaraCrecimientoNuevo);
				Estacion^ objEstacion = gcnew Estacion();
				objEstacion=this->objGestorEstacion->obtenerEstacionXCodigoBD(this->codigoEstacionSeleccionada);
				GestorEstacion^ objGestor = gcnew GestorEstacion();
				objGestor->verListaDeCamarasXEstacionBD(this->codigoEstacionSeleccionada);
				objEstacion->cantidadCamaras = objGestor->listaCamarasCrecimientos->Count;
				this->objGestorEstacion->editarEstacionBD(this->codigoEstacionSeleccionada, objEstacion);




				this->Close();
			}
			else {
				MessageBox::Show("Coloque un numero en el Numero de piso");

			}
		
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}