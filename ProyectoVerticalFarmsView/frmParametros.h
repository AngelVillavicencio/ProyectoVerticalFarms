#pragma once

namespace ProyectoVerticalFarmsView {

	using namespace ProyectoVerticalFarmsController;
	using namespace ProyectoVerticalFarmsModel;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmParametros
	/// </summary>
	public ref class frmParametros : public System::Windows::Forms::Form
	{
	public:
		frmParametros(void)
		{
			InitializeComponent();
			this->objGestorTarea = gcnew GestorTareasRelizadas();
			this->objGestorParametros = gcnew GestorParametros();
			//
			//TODO: agregar código de constructor aquí
			//
			/*this->temperaturaIdeal = 23;
			this->humedadIdeal = 50;
			this->iluminacionIdeal = 68;
			this->errorhumedad = 5;
			this->erroriluminacion = 4;
			this->errortemperatura = 3;*/
			

		}
		frmParametros(int codigoDeCamara)
		{
			InitializeComponent();
			this->objGestorTarea = gcnew GestorTareasRelizadas();
			this->objGestorParametros = gcnew GestorParametros();
			this->objGestorWiki = gcnew GestorWiki();
			this->codigoDeCamara = codigoDeCamara;
			this->objGestorEstacion = gcnew GestorEstacion();
			this->indicesensor = 1;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmParametros()
		{
			if (components)
			{
				delete components;
			}
		}
	private: GestorTareasRelizadas^ objGestorTarea;
	private:GestorParametros^ objGestorParametros;
	private:GestorWiki^ objGestorWiki;
	private: Wiki^ objWiki ;
	private: GestorEstacion^ objGestorEstacion;
	private: System::Windows::Forms::Label^ label1;
		   //Esto agregue 

	private:int indicesensor;
	private: int codigoDeCamara;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;









	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::ComponentModel::IContainer^ components;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(226, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Fase de Crecimiento:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(15, 57);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(420, 261);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmParametros::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Tiempo de Activación(seg)";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"Fecha y Hora";
			this->Column2->Name = L"Column2";
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column4->HeaderText = L"Valvula de Agua";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column5->HeaderText = L"Ilumación";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column6->HeaderText = L"Ventilación";
			this->Column6->Name = L"Column6";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(150, 22);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(194, 20);
			this->dateTimePicker1->TabIndex = 3;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &frmParametros::dateTimePicker1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Hora actual:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column3,
					this->Column7, this->Column8, this->Column9
			});
			this->dataGridView2->Location = System::Drawing::Point(0, 56);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(475, 186);
			this->dataGridView2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(338, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(145, 20);
			this->textBox1->TabIndex = 7;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(48, 63);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(463, 340);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tareas Realizadas";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->dataGridView2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Location = System::Drawing::Point(582, 64);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(481, 339);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Parametros Obtenidos";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(130, 261);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(315, 56);
			this->textBox3->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(43, 280);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"REPORTE:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(109, 21);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 25);
			this->button3->TabIndex = 10;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmParametros::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Estado:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(628, 24);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(145, 20);
			this->textBox2->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(516, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Tipo de Iuminación:";
			// 
			// timer1
			// 
			this->timer1->Interval = 15000;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmParametros::timer1_Tick);
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Fecha y Hora";
			this->Column3->Name = L"Column3";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Humedad                       (%)";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 132;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Iluminacion                (Lux)";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Temperatura                ( C° )";
			this->Column9->Name = L"Column9";
			// 
			// frmParametros
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1081, 433);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmParametros";
			this->Text = L"Detalles de Camara de Crecimiento";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmParametros::CerrarVentana);
			this->Load += gcnew System::EventHandler(this, &frmParametros::CargarVentana);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: void CargarGrilla(List<TareaRealizada^>^ listaTareas) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaTareas->Count; i++) {
			TareaRealizada^ objTarea = listaTareas[i];
			array<String^>^ fila = gcnew array<String^>(5);

			fila[0] = Convert::ToString(objTarea->temporizador);
			fila[1] = Convert::ToString(objTarea->fecha);
			fila[2] = objTarea->regado;
			fila[3] = objTarea->Iluminacion;
			fila[4] = objTarea->Ventilador;

			this->dataGridView1->Rows->Add(fila);
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: void CargarGrilla()
	{
		//Limpiar todas las grillas
		this->dataGridView1->Rows->Clear();
		//Necesito saber cuantos elemnetos tiene 
		int count = this->objGestorTarea->listaTareasRealizadas->Count;
		for (int i = 0; i < count; i++)
		{
			TareaRealizada^ objTarea = this->objGestorTarea->listaTareasRealizadas[i];
			//Voy a tener un arreglo de 4 elementos , por eso es estatico,pueden ser mas
			array<String^>^ fila = gcnew array<String^>(5);
			fila[0] = Convert::ToString(objTarea->temporizador);
			fila[1] = Convert::ToString(objTarea->fecha);
			fila[2] = objTarea->regado;
			fila[3] = objTarea->Iluminacion;
			fila[4] = objTarea->Ventilador;

			//Esta fila se le pasa a la data del DataGridView
			this->dataGridView1->Rows->Add(fila);

		}
	}
	private: System::Void CargarVentana(System::Object^ sender, System::EventArgs^ e) {
		
		




		this->objGestorEstacion->cargarCamaraDeCrecimientoBD();
		CamaraCrecimiento^ objCamaraCrecimiento = this->objGestorEstacion->obtenerCamaraCrecimientoXCodigoBD(this->codigoDeCamara);
		this->button3->Text = objCamaraCrecimiento->Estado;
		this->textBox1->Text = objCamaraCrecimiento->fasedeCrecimiento;

		if (objCamaraCrecimiento->Estado == "Apagado")
		{
			this->timer1->Enabled = false;
		}
		else {
			this->timer1->Enabled = true;
		}

		this->textBox2->Text= this->objGestorWiki->obtenerWikiXCodigoBD(objCamaraCrecimiento->codigoWiki)->tipoDeIluminacion;


		/*if (objCamaraCrecimiento->Estado == "Encendido")
		{
			this->button2->Visible = true;
		}
		else {
			
			this->button2->Visible = false;
		}*/


		this->objWiki = this->objGestorWiki->obtenerWikiXCodigoBD(this->objGestorEstacion->obtenerCamaraCrecimientoXCodigoBD(this->codigoDeCamara)->codigoWiki);

		this->objGestorTarea->cargarTareasRealizadasBDXcamara(this->codigoDeCamara);

		CargarGrilla();
		//this->objGestorTarea->Deserializar();
		this->dataGridView2->Rows->Clear();
		this->objGestorParametros->LeerDesdeArchivo();


	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	this->Close();


}
	
private: System::Void CerrarVentana(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	//this->objGestorTarea->Serializar();
	this->objGestorTarea->EscribirEnArchivo();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	CamaraCrecimiento^ objCamaraCrecimiento = this->objGestorEstacion->obtenerCamaraCrecimientoXCodigoBD(this->codigoDeCamara);
	if (objCamaraCrecimiento->Estado == "Encendido")
	{
		this->button3->Text = "Apagado";
		this->objGestorEstacion->editarFaseYEstadoDeCamaraDeCrecimiento(this->codigoDeCamara, objCamaraCrecimiento->fasedeCrecimiento, "Apagado");
		/*this->button2->Visible = false;*/
		this->timer1->Enabled = false;

	}
	else {
		this->button3->Text = "Encendido";
		this->objGestorEstacion->editarFaseYEstadoDeCamaraDeCrecimiento(this->codigoDeCamara, objCamaraCrecimiento->fasedeCrecimiento, "Encendido");
		this->timer1->Enabled = true;

		/*this->button2->Visible = true;*/

	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	int tiempo = 0;
	//Pertenecen a la carga de ventana de sensores 
	DateTime^ objDateTime = gcnew DateTime();
	DateTime^ now = objDateTime->Now;
	String^ Agua;
	String^ Iluminacion;
	String^ Ventilador;
	this->objGestorParametros->LeerDesdeArchivo();

	for (int i = this->indicesensor; i < this->indicesensor + 1; i++)
	{
		Parametros^ objParametros = this->objGestorParametros->listaParametros[i];
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = Convert::ToString(objDateTime->Now);
		fila[1] = Convert::ToString(objParametros->humedad);
		fila[2] = Convert::ToString(objParametros->intensidadLuminosa);
		fila[3] = Convert::ToString(objParametros->temperatura);
		//Esta fila se le pasa a la data del DataGridView
		this->dataGridView2->Rows->Add(fila);
	}
	if (this->indicesensor % 3 == 0)
	{
		float sumahumedad = 0;
		float sumatemperatura = 0;
		float sumaintensidad = 0;
		float promediohumedad;
		float promediotemperatura;
		float promediointensidad;
		for (int i = this->indicesensor; i >= (this->indicesensor - 2); i--)
		{
			Parametros^ objParametros = this->objGestorParametros->listaParametros[i];
			float humedad = objParametros->humedad;
			sumahumedad = sumahumedad + humedad;
			float intensidadluminosa = objParametros->intensidadLuminosa;
			sumaintensidad = sumaintensidad + intensidadluminosa;
			float temperatura = objParametros->temperatura;
			sumatemperatura = sumatemperatura + temperatura;

		}
		promediohumedad = sumahumedad / 3;
		promediointensidad = sumaintensidad / 3;
		promediotemperatura = sumatemperatura / 3;
		//Aqui tengo que comparar con los parametros ideales
		if (promediohumedad <= this->objWiki->humedadMin)
		{
			Agua = "ON";
		}
		else if (promediohumedad >= this->objWiki->humedadMax)
		{
			Agua = "OFF";
		}
		else
		{
			Agua = "OFF";
		}
		if (this->objWiki->tipoDeIluminacion == "Luz Azul")
		{
			if (promediointensidad <= this->objWiki->IluminacionMin)
			{
				Iluminacion = "ON";
			}
			else if (promediohumedad >= this->objWiki->IluminacionMax)
			{
				Iluminacion = "OFF";
			}
			else
			{
				Iluminacion = "OFF";
			}
		}
		else if (this->objWiki->tipoDeIluminacion == "Luz Blanca")
		{
			if (promediointensidad <= this->objWiki->IluminacionMin)
			{
				Iluminacion = "ON";
			}
			else if (promediohumedad >= this->objWiki->IluminacionMax)
			{
				Iluminacion = "OFF";
			}
			else
			{
				Iluminacion = "OFF";
			}
		}
		else
		{
			if (promediointensidad <= this->objWiki->IluminacionMin)
			{
				Iluminacion = "ON";
			}
			else if (promediohumedad >= this->objWiki->IluminacionMax)
			{
				Iluminacion = "OFF";
			}
			else
			{
				Iluminacion = "OFF";
			}
		}


		if (promediotemperatura >= this->objWiki->temperaturaMax)
		{
			Ventilador = "ON";
		}
		else if (promediotemperatura <= this->objWiki->temperaturaMin)
		{
			Ventilador = "OFF";
		}
		else
		{
			Ventilador = "OFF";
		}

		if (Agua == "ON" && Iluminacion == "ON" && Ventilador == "OFF")
		{
			tiempo = 20;
		}
		else if (Agua == "ON" && Iluminacion == "ON" && Ventilador == "ON")
		{
			tiempo = 10;
		}
		else if (Agua == "OFF" && Iluminacion == "ON" && Ventilador == "OFF")
		{
			tiempo = 60;
		}
		else
		{
			tiempo = 15;
		}



		TareaRealizada^ objTarea = gcnew TareaRealizada(tiempo, this->codigoDeCamara, objDateTime->Now, Agua, Iluminacion, Ventilador);
		this->objGestorTarea->agregarTareaRealizadaBD(objTarea);

		//load:

		this->objGestorTarea->cargarTareasRealizadasBDXcamara(this->codigoDeCamara);

		for (int i = 0; i < this->objGestorTarea->listaTareasRealizadas->Count; i++)
		{
			tiempo += this->objGestorTarea->listaTareasRealizadas[i]->temporizador;
		}


		///AUMENTO DEL TIEMPOS DE TAREA REALIZADA
		this->objGestorEstacion->cargarCamaraDeCrecimientoBD();	
		CamaraCrecimiento^ objCamaraCrecimiento = this->objGestorEstacion->obtenerCamaraCrecimientoXCodigoBD(this->codigoDeCamara);
		if (tiempo < 100)
		{
			//MessageBox::Show("La camara de crecimiento ahora está en fase de germinación");
			this->textBox3->Text = "La camara de crecimiento ahora está en fase de germinación.";
			objCamaraCrecimiento->fasedeCrecimiento = "germinación";
			this->objGestorEstacion->editarFaseYEstadoDeCamaraDeCrecimiento(this->codigoDeCamara, "germinación", objCamaraCrecimiento->Estado);
		}
		else if (tiempo < 400) {
			//MessageBox::Show("La camara de crecimiento ahora está en fase de crecimiento");
			this->textBox3->Text = "La camara de crecimiento ahora está en fase de crecimiento.";

			objCamaraCrecimiento->fasedeCrecimiento = "crecimiento";

			this->objGestorEstacion->editarFaseYEstadoDeCamaraDeCrecimiento(this->codigoDeCamara, "crecimiento", objCamaraCrecimiento->Estado);

		}
		else
		{
			objCamaraCrecimiento->fasedeCrecimiento = "maduración";
			objCamaraCrecimiento->Estado = "Apagado";
			this->textBox3->Text = "La camara de crecimiento ahora está en fase de maduración.";

			//MessageBox::Show("La camara de crecimiento ahora está en fase de maduración");
			this->objGestorEstacion->editarFaseYEstadoDeCamaraDeCrecimiento(this->codigoDeCamara, "maduración", "Apagado");

		}

		this->textBox1->Text = objCamaraCrecimiento->fasedeCrecimiento;
		this->textBox2->Text = this->objGestorWiki->obtenerWikiXCodigoBD(objCamaraCrecimiento->codigoWiki)->tipoDeIluminacion;
		this->button3->Text = objCamaraCrecimiento->Estado;

		CargarGrilla();
	}
	this->indicesensor = this->indicesensor + 1;





}
};
}
