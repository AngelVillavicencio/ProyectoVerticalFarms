#pragma once
#include "frmPaginaPrincipal.h"
#include "frmCrearEstacion.h"
#include "frmEditarEstacion.h"
#include "frmMantCamaraCrecimiento.h"
#include "frmEditarCamaraCrecimiento.h"
#include "frmNuevoCamaraCrecimiento.h"
#include "frmUsuarios.h"
#include "frmDelegarEstaciones.h"
#include "frmMantWiki.h"
#include "frmMantEstacion.h"
#include "frmMantCamaraCrecimiento1.h"
#include "frmParametros.h"

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
	/*using namespace System::Runtime::InteropServices;*/
	/// <summary>
	/// Resumen de frmPaginaPrincipal
	/// </summary>
	public ref class frmPaginaPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPaginaPrincipal(void)
		{
			InitializeComponent();
			//
			this->objGestorEstacion = gcnew GestorEstacion();
			this->objGestorParametros = gcnew GestorParametros();
			//this->objGestorCamaraCrecimiento = gcnew GestorCamaraCrecimiento();
			//TODO: agregar código de constructor aquí
			//
		}
		frmPaginaPrincipal(GestorUsuario^ objGestorUsuario, int indice)
		{
			InitializeComponent();
			//
			this->objGestorEstacion = gcnew GestorEstacion();
			this->objGestorUsuario = objGestorUsuario;
			this->indiceUsuario = indice;
			//this->id = -1;
			this->objGestorParametros = gcnew GestorParametros();
			this->objGestorWiki = gcnew GestorWiki();
			//this->objGestorCamaraCrecimiento = gcnew GestorCamaraCrecimiento();
			//TODO: agregar código de constructor aquí
			//
		}
		frmPaginaPrincipal(String^ correo, bool Admin)
		{
			InitializeComponent();
			//
			//this->objGestorCamaraCrecimiento = gcnew GestorCamaraCrecimiento();
			//TODO: agregar código de constructor aquí
			//

			///NUEVOOOOO CODIGOOO DE BASE DE DATOS 
			this->ADMIN = Admin;
			this->objGestorEstacion = gcnew GestorEstacion();
			this->objGestorUsuario = gcnew GestorUsuario();
			this->correoDeUsuario = correo;
			this->codigoEstacionSeleccionada = -1;
			this->objGestorParametros = gcnew GestorParametros();
			this->objGestorWiki = gcnew GestorWiki();
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPaginaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: GestorEstacion^ objGestorEstacion;
	private: String^ correoDeUsuario;
	private: int codigoEstacionSeleccionada;
	private: int cuenta = 0;
	private:GestorUsuario^ objGestorUsuario;
	private:GestorParametros^ objGestorParametros;
	private: int  indiceUsuario;
	private: GestorWiki^ objGestorWiki;
	//private: GestorCamaraCrecimiento^ objGestorCamaraCrecimiento;
	private: bool ADMIN;

	//PARA ESTADISTICAS
	private: CamaraCrecimiento^ camaraSeleccionada;
	private: DateTime^ objDateTime = gcnew DateTime();
	private: System::Windows::Forms::Panel^ barraNavegacion;
	private: System::Windows::Forms::Panel^ contenidoNavegacion;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ resaltado_panel1;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ resaltado_panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ resaltado_panel3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ resaltado_panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ barraNavegacionIconos;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ Restaurar;
	private: System::Windows::Forms::PictureBox^ minimizar;
	private: System::Windows::Forms::PictureBox^ buttonSalir;
	private: System::Windows::Forms::LinkLabel^ linkLabel4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button18;

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
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Label^ label25;

private: System::Windows::Forms::Label^ label23;

private: System::Windows::Forms::Label^ label21;

private: System::ComponentModel::IContainer^ components;



	protected:


	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPaginaPrincipal::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->barraNavegacion = (gcnew System::Windows::Forms::Panel());
			this->barraNavegacionIconos = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->resaltado_panel3 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->resaltado_panel4 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->resaltado_panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->resaltado_panel1 = (gcnew System::Windows::Forms::Panel());
			this->contenidoNavegacion = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->Restaurar = (gcnew System::Windows::Forms::PictureBox());
			this->minimizar = (gcnew System::Windows::Forms::PictureBox());
			this->buttonSalir = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Camaras = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->encargado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->barraNavegacion->SuspendLayout();
			this->barraNavegacionIconos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->contenidoNavegacion->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Restaurar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimizar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buttonSalir))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel11->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel4->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// barraNavegacion
			// 
			this->barraNavegacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->barraNavegacion->Controls->Add(this->barraNavegacionIconos);
			this->barraNavegacion->Controls->Add(this->panel5);
			this->barraNavegacion->Controls->Add(this->panel7);
			this->barraNavegacion->Controls->Add(this->panel3);
			this->barraNavegacion->Controls->Add(this->panel1);
			this->barraNavegacion->Dock = System::Windows::Forms::DockStyle::Left;
			this->barraNavegacion->Location = System::Drawing::Point(0, 30);
			this->barraNavegacion->Name = L"barraNavegacion";
			this->barraNavegacion->Size = System::Drawing::Size(200, 2578);
			this->barraNavegacion->TabIndex = 0;
			// 
			// barraNavegacionIconos
			// 
			this->barraNavegacionIconos->Controls->Add(this->pictureBox3);
			this->barraNavegacionIconos->Controls->Add(this->pictureBox4);
			this->barraNavegacionIconos->Controls->Add(this->pictureBox1);
			this->barraNavegacionIconos->Controls->Add(this->pictureBox2);
			this->barraNavegacionIconos->Dock = System::Windows::Forms::DockStyle::Left;
			this->barraNavegacionIconos->Location = System::Drawing::Point(0, 0);
			this->barraNavegacionIconos->Name = L"barraNavegacionIconos";
			this->barraNavegacionIconos->Size = System::Drawing::Size(50, 2578);
			this->barraNavegacionIconos->TabIndex = 2;
			this->barraNavegacionIconos->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Lime;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 123);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox3_Click);
			this->pictureBox3->MouseEnter += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox3_MouseEnter);
			this->pictureBox3->MouseLeave += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox3_MouseLeave);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Lime;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(0, 173);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(50, 50);
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox4_Click);
			this->pictureBox4->MouseEnter += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox4_MouseEnter);
			this->pictureBox4->MouseLeave += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox4_MouseLeave);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Lime;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 23);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox1_Click);
			this->pictureBox1->MouseEnter += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox1_MouseEnter);
			this->pictureBox1->MouseLeave += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox1_MouseLeave);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Lime;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 73);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox2_Click);
			this->pictureBox2->MouseEnter += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox2_MouseEnter);
			this->pictureBox2->MouseLeave += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox2_MouseLeave);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel5->Controls->Add(this->resaltado_panel3);
			this->panel5->Controls->Add(this->button3);
			this->panel5->Location = System::Drawing::Point(0, 123);
			this->panel5->Margin = System::Windows::Forms::Padding(0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(200, 50);
			this->panel5->TabIndex = 3;
			// 
			// resaltado_panel3
			// 
			this->resaltado_panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->resaltado_panel3->Location = System::Drawing::Point(0, 0);
			this->resaltado_panel3->Margin = System::Windows::Forms::Padding(0);
			this->resaltado_panel3->Name = L"resaltado_panel3";
			this->resaltado_panel3->Size = System::Drawing::Size(15, 50);
			this->resaltado_panel3->TabIndex = 1;
			this->resaltado_panel3->Visible = false;
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(0, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Mis estadísticas";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button3_Click);
			this->button3->MouseEnter += gcnew System::EventHandler(this, &frmPaginaPrincipal::button3_MouseEnter);
			this->button3->MouseLeave += gcnew System::EventHandler(this, &frmPaginaPrincipal::button3_MouseLeave);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel7->Controls->Add(this->resaltado_panel4);
			this->panel7->Controls->Add(this->button4);
			this->panel7->Location = System::Drawing::Point(0, 173);
			this->panel7->Margin = System::Windows::Forms::Padding(0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(200, 50);
			this->panel7->TabIndex = 3;
			// 
			// resaltado_panel4
			// 
			this->resaltado_panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->resaltado_panel4->Location = System::Drawing::Point(0, 0);
			this->resaltado_panel4->Margin = System::Windows::Forms::Padding(0);
			this->resaltado_panel4->Name = L"resaltado_panel4";
			this->resaltado_panel4->Size = System::Drawing::Size(15, 50);
			this->resaltado_panel4->TabIndex = 1;
			this->resaltado_panel4->Visible = false;
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(0, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 50);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Encargados";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button4_Click);
			this->button4->MouseEnter += gcnew System::EventHandler(this, &frmPaginaPrincipal::button4_MouseEnter);
			this->button4->MouseLeave += gcnew System::EventHandler(this, &frmPaginaPrincipal::button4_MouseLeave);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel3->Controls->Add(this->resaltado_panel2);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Location = System::Drawing::Point(0, 73);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 50);
			this->panel3->TabIndex = 2;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmPaginaPrincipal::panel3_Paint);
			// 
			// resaltado_panel2
			// 
			this->resaltado_panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->resaltado_panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->resaltado_panel2->Location = System::Drawing::Point(0, 0);
			this->resaltado_panel2->Margin = System::Windows::Forms::Padding(0);
			this->resaltado_panel2->Name = L"resaltado_panel2";
			this->resaltado_panel2->Size = System::Drawing::Size(15, 50);
			this->resaltado_panel2->TabIndex = 1;
			this->resaltado_panel2->Visible = false;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 50);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Mis estaciones";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button2_Click);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &frmPaginaPrincipal::enterToEstaciones);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &frmPaginaPrincipal::button2_MouseLeave);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->resaltado_panel1);
			this->panel1->Location = System::Drawing::Point(0, 23);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 50);
			this->panel1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(12, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 50);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Mi Perfil";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &frmPaginaPrincipal::button1_MouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &frmPaginaPrincipal::button1_MouseLeave);
			// 
			// resaltado_panel1
			// 
			this->resaltado_panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->resaltado_panel1->Location = System::Drawing::Point(0, 0);
			this->resaltado_panel1->Margin = System::Windows::Forms::Padding(0);
			this->resaltado_panel1->Name = L"resaltado_panel1";
			this->resaltado_panel1->Size = System::Drawing::Size(15, 50);
			this->resaltado_panel1->TabIndex = 1;
			this->resaltado_panel1->Visible = false;
			// 
			// contenidoNavegacion
			// 
			this->contenidoNavegacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->contenidoNavegacion->Controls->Add(this->pictureBox5);
			this->contenidoNavegacion->Controls->Add(this->pictureBox6);
			this->contenidoNavegacion->Controls->Add(this->pictureBox7);
			this->contenidoNavegacion->Controls->Add(this->Restaurar);
			this->contenidoNavegacion->Controls->Add(this->minimizar);
			this->contenidoNavegacion->Controls->Add(this->buttonSalir);
			this->contenidoNavegacion->Controls->Add(this->button5);
			this->contenidoNavegacion->Dock = System::Windows::Forms::DockStyle::Top;
			this->contenidoNavegacion->Location = System::Drawing::Point(0, 0);
			this->contenidoNavegacion->Name = L"contenidoNavegacion";
			this->contenidoNavegacion->Size = System::Drawing::Size(1283, 30);
			this->contenidoNavegacion->TabIndex = 1;
			this->contenidoNavegacion->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmPaginaPrincipal::contenidoNavegacion_Paint);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1220, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(25, 25);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(1189, 2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(25, 25);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 13;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox7->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.ErrorImage")));
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.InitialImage")));
			this->pictureBox7->Location = System::Drawing::Point(1251, 2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(25, 25);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 12;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox7_Click);
			// 
			// Restaurar
			// 
			this->Restaurar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Restaurar->BackColor = System::Drawing::Color::Transparent;
			this->Restaurar->Cursor = System::Windows::Forms::Cursors::Default;
			this->Restaurar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Restaurar.Image")));
			this->Restaurar->Location = System::Drawing::Point(1318, 2);
			this->Restaurar->Name = L"Restaurar";
			this->Restaurar->Size = System::Drawing::Size(25, 25);
			this->Restaurar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Restaurar->TabIndex = 11;
			this->Restaurar->TabStop = false;
			this->Restaurar->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::Restaurar_Click);
			// 
			// minimizar
			// 
			this->minimizar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->minimizar->BackColor = System::Drawing::Color::Transparent;
			this->minimizar->Cursor = System::Windows::Forms::Cursors::Default;
			this->minimizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minimizar.Image")));
			this->minimizar->Location = System::Drawing::Point(1287, 2);
			this->minimizar->Name = L"minimizar";
			this->minimizar->Size = System::Drawing::Size(25, 25);
			this->minimizar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->minimizar->TabIndex = 10;
			this->minimizar->TabStop = false;
			this->minimizar->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::minimizar_Click);
			// 
			// buttonSalir
			// 
			this->buttonSalir->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonSalir->BackColor = System::Drawing::Color::Transparent;
			this->buttonSalir->Cursor = System::Windows::Forms::Cursors::Default;
			this->buttonSalir->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSalir.ErrorImage")));
			this->buttonSalir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSalir.Image")));
			this->buttonSalir->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSalir.InitialImage")));
			this->buttonSalir->Location = System::Drawing::Point(1349, 2);
			this->buttonSalir->Name = L"buttonSalir";
			this->buttonSalir->Size = System::Drawing::Size(25, 25);
			this->buttonSalir->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->buttonSalir->TabIndex = 9;
			this->buttonSalir->TabStop = false;
			this->buttonSalir->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::buttonSalir_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Lime;
			this->button5->Dock = System::Windows::Forms::DockStyle::Left;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(0, 0);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 30);
			this->button5->TabIndex = 2;
			this->button5->Text = L"MENÚ";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button5_Click);
			// 
			// linkLabel4
			// 
			this->linkLabel4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel4->Location = System::Drawing::Point(695, 526);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(207, 20);
			this->linkLabel4->TabIndex = 1;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Detalles de Camara de Crecimiento";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &frmPaginaPrincipal::linkLabel4_LinkClicked);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(530, 215);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 16);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Camaras de crecimiento:";
			this->label1->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::label1_Click);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button12->AutoSize = true;
			this->button12->Location = System::Drawing::Point(334, 562);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(106, 25);
			this->button12->TabIndex = 14;
			this->button12->Text = L"Eliminar";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button12_Click);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button11->AutoSize = true;
			this->button11->Location = System::Drawing::Point(195, 562);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(113, 25);
			this->button11->TabIndex = 13;
			this->button11->Text = L"Modificar";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button11_Click_1);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 68);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 20);
			this->label5->TabIndex = 17;
			this->label5->Text = L"MIS ESTACIONES";
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->AutoSize = true;
			this->button6->Location = System::Drawing::Point(47, 562);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 23);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Crear";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button6_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(101, 385);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 24);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Mis estaciones";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Código:";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->Location = System::Drawing::Point(113, 21);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(224, 20);
			this->textBox3->TabIndex = 4;
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->Location = System::Drawing::Point(391, 16);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(81, 29);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Buscar";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button10_Click);
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(16, 119);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(508, 54);
			this->panel2->TabIndex = 15;
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button13->AutoSize = true;
			this->button13->Location = System::Drawing::Point(588, 561);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(81, 24);
			this->button13->TabIndex = 12;
			this->button13->Text = L"Crear";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button13_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->codigo,
					this->Nombre, this->Camaras, this->encargado
			});
			this->dataGridView1->Location = System::Drawing::Point(16, 208);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(472, 338);
			this->dataGridView1->TabIndex = 17;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmPaginaPrincipal::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmPaginaPrincipal::dataGridView1_CellContentClick);
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
			// dataGridView2
			// 
			this->dataGridView2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->Column1, this->dataGridViewTextBoxColumn5
			});
			this->dataGridView2->Location = System::Drawing::Point(533, 242);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(529, 281);
			this->dataGridView2->TabIndex = 8;
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
			// button16
			// 
			this->button16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button16->AutoSize = true;
			this->button16->Location = System::Drawing::Point(756, 561);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(81, 24);
			this->button16->TabIndex = 15;
			this->button16->Text = L"Modificar";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button16_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(51, 37);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Mis encargados";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column9,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView3->Location = System::Drawing::Point(79, 105);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(843, 343);
			this->dataGridView3->TabIndex = 3;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmPaginaPrincipal::dataGridView3_CellContentClick);
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Código";
			this->Column9->Name = L"Column9";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombres";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Apellido Paterno";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Apellido Materno";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"DNI";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Correo";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"N° celular";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Fecha De Ingreso";
			this->Column8->Name = L"Column8";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(972, 128);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 46);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Agregar Encargado";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button8_Click_1);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(972, 298);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 44);
			this->button9->TabIndex = 5;
			this->button9->Text = L"Eliminar Encargado";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button9_Click_1);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(972, 215);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 44);
			this->button14->TabIndex = 6;
			this->button14->Text = L"Encargar Estaciones";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button14_Click);
			// 
			// panel11
			// 
			this->panel11->AutoScroll = true;
			this->panel11->Controls->Add(this->button14);
			this->panel11->Controls->Add(this->button9);
			this->panel11->Controls->Add(this->button8);
			this->panel11->Controls->Add(this->dataGridView3);
			this->panel11->Controls->Add(this->label8);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel11->Location = System::Drawing::Point(200, 30);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(1083, 628);
			this->panel11->TabIndex = 5;
			this->panel11->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmPaginaPrincipal::panel11_Paint);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Location = System::Drawing::Point(54, 50);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(386, 454);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de usuario";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(109, 227);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(156, 20);
			this->textBox8->TabIndex = 9;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(109, 179);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(156, 20);
			this->textBox7->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(109, 135);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(156, 20);
			this->textBox6->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(109, 94);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(156, 20);
			this->textBox5->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(109, 52);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(156, 20);
			this->textBox4->TabIndex = 5;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(23, 234);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(52, 13);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Telefono:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(25, 186);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Correo:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(26, 142);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(29, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"DNI:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(23, 97);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(47, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Apellido:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(25, 53);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Nombre:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button15);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Location = System::Drawing::Point(465, 50);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(372, 454);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos de cuenta";
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(82, 272);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(179, 38);
			this->button15->TabIndex = 8;
			this->button15->Text = L"Cambiar";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button15_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(176, 198);
			this->textBox12->Name = L"textBox12";
			this->textBox12->PasswordChar = '*';
			this->textBox12->Size = System::Drawing::Size(179, 20);
			this->textBox12->TabIndex = 7;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(176, 146);
			this->textBox11->Name = L"textBox11";
			this->textBox11->PasswordChar = '*';
			this->textBox11->Size = System::Drawing::Size(179, 20);
			this->textBox11->TabIndex = 6;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(176, 94);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(179, 20);
			this->textBox10->TabIndex = 5;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(176, 48);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(179, 20);
			this->textBox9->TabIndex = 4;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &frmPaginaPrincipal::textBox9_TextChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(32, 201);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(143, 13);
			this->label17->TabIndex = 3;
			this->label17->Text = L"Confirmar contraseña nueva:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(32, 149);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(104, 13);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Cambiar contraseña:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(32, 97);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(120, 13);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Confirmar correo nuevo:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(32, 51);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(82, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Cambiar Correo:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(51, 20);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Mi perfil";
			// 
			// panel9
			// 
			this->panel9->AutoScroll = true;
			this->panel9->Controls->Add(this->label6);
			this->panel9->Controls->Add(this->groupBox2);
			this->panel9->Controls->Add(this->groupBox1);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel9->Location = System::Drawing::Point(200, 658);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1083, 628);
			this->panel9->TabIndex = 3;
			// 
			// button17
			// 
			this->button17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button17->AutoSize = true;
			this->button17->Location = System::Drawing::Point(944, 561);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(81, 24);
			this->button17->TabIndex = 28;
			this->button17->Text = L"Eliminar";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button17_Click_1);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(588, 143);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(414, 30);
			this->textBox2->TabIndex = 32;
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->Location = System::Drawing::Point(221, 19);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(81, 24);
			this->button7->TabIndex = 31;
			this->button7->Text = L"Buscar";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button7_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(84, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 20);
			this->textBox1->TabIndex = 30;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Código:";
			// 
			// panel4
			// 
			this->panel4->AutoScroll = true;
			this->panel4->Controls->Add(this->button18);
			this->panel4->Controls->Add(this->groupBox4);
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Controls->Add(this->button17);
			this->panel4->Controls->Add(this->linkLabel4);
			this->panel4->Controls->Add(this->button16);
			this->panel4->Controls->Add(this->dataGridView2);
			this->panel4->Controls->Add(this->dataGridView1);
			this->panel4->Controls->Add(this->button13);
			this->panel4->Controls->Add(this->panel2);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->button6);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->button11);
			this->panel4->Controls->Add(this->button12);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(200, 1286);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1083, 628);
			this->panel4->TabIndex = 33;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(981, 46);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(81, 27);
			this->button18->TabIndex = 34;
			this->button18->Text = L"Wiki";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button18_Click_1);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->button7);
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Location = System::Drawing::Point(731, 184);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(314, 52);
			this->groupBox4->TabIndex = 33;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Búsqueda";
			// 
			// panel6
			// 
			this->panel6->AutoScroll = true;
			this->panel6->Controls->Add(this->groupBox3);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(200, 1914);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1083, 694);
			this->panel6->TabIndex = 34;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmPaginaPrincipal::panel6_Paint_2);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label25);
			this->groupBox3->Controls->Add(this->chart3);
			this->groupBox3->Controls->Add(this->label23);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->chart2);
			this->groupBox3->Controls->Add(this->chart1);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Location = System::Drawing::Point(6, 21);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1065, 1138);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"ESTADISTICAS";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(702, 952);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 13);
			this->label25->TabIndex = 13;
			// 
			// chart3
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart3->Legends->Add(legend1);
			this->chart3->Location = System::Drawing::Point(287, 809);
			this->chart3->Name = L"chart3";
			this->chart3->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Sensado";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Preferible";
			this->chart3->Series->Add(series1);
			this->chart3->Series->Add(series2);
			this->chart3->Size = System::Drawing::Size(527, 300);
			this->chart3->TabIndex = 4;
			this->chart3->Text = L"chart3";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(702, 587);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 13);
			this->label23->TabIndex = 11;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(702, 236);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 13);
			this->label21->TabIndex = 9;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(426, 783);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(255, 20);
			this->label19->TabIndex = 7;
			this->label19->Text = L"Intensidad luminosa(lux) vs Tiempo";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(465, 446);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(178, 20);
			this->label18->TabIndex = 6;
			this->label18->Text = L"Humedad(%) vs Tiempo";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(455, 85);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(201, 20);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Temperatura(C°) vs Tiempo";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(287, 469);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Sensado";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Preferible";
			this->chart2->Series->Add(series3);
			this->chart2->Series->Add(series4);
			this->chart2->Size = System::Drawing::Size(527, 300);
			this->chart2->TabIndex = 3;
			this->chart2->Text = L"chart2";
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(287, 108);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Legend1";
			series5->Name = L"Sensado";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Legend = L"Legend1";
			series6->Name = L"Preferible";
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Size = System::Drawing::Size(527, 300);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(170, 35);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &frmPaginaPrincipal::seleccionarCamara);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(21, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmPaginaPrincipal::seleccionarEstacion);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmPaginaPrincipal::actualizar);
			// 
			// frmPaginaPrincipal
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1300, 788);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->barraNavegacion);
			this->Controls->Add(this->contenidoNavegacion);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmPaginaPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"  ";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPaginaPrincipal::frmPaginaPrincipal_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmPaginaPrincipal::frmPaginaPrincipal_Load);
			this->barraNavegacion->ResumeLayout(false);
			this->barraNavegacionIconos->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->contenidoNavegacion->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Restaurar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimizar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buttonSalir))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void frmPaginaPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	


	// si el usuario es admin 
	if (this->ADMIN == true)
	{
		this->groupBox4->Visible = false;//OCULTANDO BUSQUEDA DE CAMARA DE CRECIMIENTO
		this->panel9->Visible = false;
		this->panel11->Visible = false;
		this->panel4->Visible = true;
		this->panel6->Visible = false;

		this->objGestorWiki->cargarWikisBD();
		this->objGestorEstacion->cargarEstacionesBD();
		this->objGestorEstacion->cargarCamaraDeCrecimientoBD();
		cargarGrillaEstacion();




	}else if(this->ADMIN == false)
	{
		this->panel2->Visible = false;//ocultando BUSQUEDA DE ESTACION
		this->groupBox4->Visible = false;//OCULTANDO BUSQUEDA DE CAMARA DE CRECIMIENTO
		this->panel9->Visible = false;
		this->panel11->Visible = false;
		this->panel4->Visible = true;
		this->panel6->Visible = false;
		this->panel7->Visible = false;

		this->button4->Visible = false;
		this->pictureBox4->Visible = false;

		this->button18->Visible = false;
		this->button13->Visible = false;
		this->button16->Visible = false;
		this->button17->Visible = false;
		this->button6->Visible = false;
		this->button11->Visible = false;
		this->button12->Visible = false;
		Encargado^ objEncargado = this->objGestorUsuario->obtenerEncargadoXcorreoBD(correoDeUsuario);
		this->objGestorEstacion->cargarEstacionesEncargadasXEncargadoBD(objEncargado->codigo);
		this->cargarGrillaEstacion();


		
	}
	else
	{
		MessageBox::Show("Algo va muy mal :/");
	}

	// si el usuario es encargado
	// apagar los botones de mantenimiento en estacion
	// apagar el panel de mis encargados con el boton de la izquierda de Mis encargados
	//
	//

	
	

	//ESTO CUANDO PRESIONEMOS LAS ESTADISTICAS
	/*this->objGestorParametros->LeerDesdeArchivo();
	List<String^>^ nombresEstaciones = gcnew List<String^>();
	List<String^>^ tiposCamaras = gcnew List<String^>();
	int cantEstaciones = this->objGestorEstacion->getlistaEstaciones()->Count;
	for (int i = 0; i < cantEstaciones; i++) {
		Estacion^ estacion = this->objGestorEstacion->getlistaEstaciones()[i];
		nombresEstaciones->Add(estacion->nombre);
	}
	for (int i = 0; i < nombresEstaciones->Count; i++) {
		this->comboBox1->Items->Add(nombresEstaciones[i]);
	}*/

	
}
 private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ correoNuevo = this->textBox9->Text;
	String^ correoNuevoConfir = this->textBox10->Text;
	String^ contrasenaNueva = this->textBox11->Text;
	String^ contrasenaNuevaConfir = this->textBox12->Text;


	if (correoNuevo == correoNuevoConfir)
	{
		if (correoNuevo == "" && correoNuevoConfir == "") {
						   if (contrasenaNueva == contrasenaNuevaConfir)
						   {
							   //Aqui uso esta funcion de los setters 

							   this->objGestorUsuario->cambiarContrasenaBD(this->ADMIN, this->correoDeUsuario, contrasenaNueva);
							   
							   MessageBox::Show("Tu contraseña a sido cambiada exitosamente");
						   }
						   else
						   {
							   MessageBox::Show("Las contraseñas no coinciden");
						   }
		}
		else {
						   if (contrasenaNueva == contrasenaNuevaConfir)
						   {
							   //Aqui uso esta funcion de los setters 
							   if (contrasenaNueva == "" && contrasenaNuevaConfir == "") {
								   this->objGestorUsuario->cambiarCorreoBD(this->ADMIN,this->correoDeUsuario, correoNuevo);
								   this->correoDeUsuario = correoNuevo;

								   MessageBox::Show("Tu correo ha sido cambiado exitósamente");
							   }
							   else
							   {
								   this->objGestorUsuario->cambiarCorreoBD(this->ADMIN, this->correoDeUsuario, correoNuevo);
								   this->objGestorUsuario->cambiarContrasenaBD(this->ADMIN, this->correoDeUsuario, contrasenaNueva);
								   this->correoDeUsuario = correoNuevo;
								   MessageBox::Show("Tu correo y contraseña han sido cambiados");
							   }

						   }
						   else
						   {
							   MessageBox::Show("Las contraseñas no coinciden");
						   }

		}
		this->textBox7->Text = this->correoDeUsuario;

	}
	else
	{
		if (contrasenaNueva == contrasenaNuevaConfir)
		{
			MessageBox::Show("Los correos ingresadas no  coinciden");
		}
		else
		{
			MessageBox::Show("Los correos y las contraseñas ingresados no coinciden");
		}

	}
			   
}
	private: System::Void barraNavegacion_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {

	this->resaltado_panel1->Visible = true;
}
private: System::Void button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->resaltado_panel1->Visible = false;
}
private: System::Void enterToEstaciones(System::Object^ sender, System::EventArgs^ e) {
	this->resaltado_panel2->Visible = true;

}
private: System::Void button2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->resaltado_panel2->Visible = false;
}
private: System::Void button3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->resaltado_panel3->Visible = true;
}
private: System::Void button3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->resaltado_panel3->Visible = false;
}
private: System::Void button4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->resaltado_panel4->Visible = true;
}
private: System::Void button4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->resaltado_panel4->Visible = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	


	if (barraNavegacion->Width == 200) {
		this->button5->Width = 50;
		this->pictureBox1->Visible = true;
		this->pictureBox2->Visible = true;
		this->pictureBox3->Visible = true;
		if (this->ADMIN) {
			this->pictureBox4->Visible = true;

		}
		else
		{
			this->pictureBox4->Visible = false;
			this->panel7->Visible = false;
		}


		this->barraNavegacionIconos->Visible = true;

		this->barraNavegacion->Width = 50;
		this->panel1->Visible = false;
		this->panel3->Visible = false;
		this->panel5->Visible = false;
		this->panel7->Visible = false;

	}
	else {
		this->button5->Width = 200;
		this->barraNavegacion->Width = 200;
		this->pictureBox1->Visible = false;
		this->pictureBox2->Visible = false;
		this->pictureBox3->Visible = false;
		this->pictureBox4->Visible = false;
		this->barraNavegacionIconos->Visible = false;
		this->panel1->Visible = true;
		this->panel3->Visible = true;
		this->panel5->Visible = true;
		if (this->ADMIN) {
			this->panel7->Visible = true;

		}
		else {
			this->panel7->Visible = false;

		}
		


		
	}
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->panel9->Visible = false;
	this->panel11->Visible = false;
	this->panel4->Visible = true;
	this->panel6->Visible = false;

}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->panel9->Visible = true;
	this->panel11->Visible = false;
	this->panel4->Visible = false;
	this->panel6->Visible = false;

	/**/
	//Aqui coloque todo lo que tiene perfil

	if (this->ADMIN == true)
	{
		this->objGestorUsuario->cargarAdministradoresBD();
		administrador^ objadmin = this->objGestorUsuario->obtenerAdministradorXcorreoBD(this->correoDeUsuario);
		this->textBox4->Text = objadmin->nombres;
		this->textBox5->Text = objadmin->apellidoPaterno;
		this->textBox6->Text = objadmin->dni;
		this->textBox7->Text = objadmin->correo;
		this->textBox8->Text = objadmin->numCelular;
	}
	else if (this->ADMIN == false)
	{

		this->objGestorUsuario->cargarEncargadosBD();
		Encargado^ objEncargado = this->objGestorUsuario->obtenerEncargadoXcorreoBD(this->correoDeUsuario);
		
		this->textBox4->Text = objEncargado->nombres;
		this->textBox5->Text = objEncargado->apellidoPaterno;
		this->textBox6->Text = objEncargado->dni;
		this->textBox7->Text = objEncargado->correo;
		this->textBox8->Text = objEncargado->numCelular;

	}
	else
	{
		MessageBox::Show("Algo va muy mal...");
	}

}
private: System::Void buttonSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Restaurar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState == FormWindowState::Maximized) {
		this->WindowState = FormWindowState::Normal;
	}
	else {
		this->WindowState = FormWindowState::Maximized;
	}

}
private: System::Void minimizar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}



private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	



}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

	   



private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	frmMantEstacion^ VentanaMantenimientoEstaciones = gcnew frmMantEstacion();
	//VentanaMantenimientoEstaciones->MdiParent = this;
	VentanaMantenimientoEstaciones->Show();

}

private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {


}
private: System::Void contenido_misEstaciones_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {



	this->panel9->Visible = true;
	this->panel11->Visible = false;
	this->panel4->Visible = false;
	this->panel6->Visible = false;

	/**/
	//Aqui coloque todo lo que tiene perfil

	if (this->ADMIN == true)
	{
		this->objGestorUsuario->cargarAdministradoresBD();
		administrador^ objadmin = this->objGestorUsuario->obtenerAdministradorXcorreoBD(this->correoDeUsuario);
		this->textBox4->Text = objadmin->nombres;
		this->textBox5->Text = objadmin->apellidoPaterno;
		this->textBox6->Text = objadmin->dni;
		this->textBox7->Text = objadmin->correo;
		this->textBox8->Text = objadmin->numCelular;
	}
	else if (this->ADMIN == false)
	{

		this->objGestorUsuario->cargarEncargadosBD();
		Encargado^ objEncargado = this->objGestorUsuario->obtenerEncargadoXcorreoBD(this->correoDeUsuario);
		this->textBox4->Text = objEncargado->nombres;
		this->textBox5->Text = objEncargado->apellidoPaterno;
		this->textBox6->Text = objEncargado->dni;
		this->textBox7->Text = objEncargado->correo;
		this->textBox8->Text = objEncargado->numCelular;

	}
	else
	{
		MessageBox::Show("Algo va muy mal...");
	}
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->panel9->Visible = false;
	this->panel11->Visible = false;
	this->panel4->Visible = false;
	this->panel6->Visible = true;
	this->objGestorParametros->LeerDesdeArchivo();
	List<String^>^ nombresEstaciones = gcnew List<String^>();
	List<String^>^ tiposCamaras = gcnew List<String^>();
	this->comboBox1->Items->Clear();

	if (this->ADMIN == true)
	{
		this->objGestorEstacion->cargarEstacionesBD();
		int cantEstaciones = this->objGestorEstacion->listaEstaciones->Count;
		for (int i = 0; i < cantEstaciones; i++) {
			Estacion^ estacion = this->objGestorEstacion->listaEstaciones[i];
			nombresEstaciones->Add(estacion->nombre);
		}
		for (int i = 0; i < nombresEstaciones->Count; i++) {
			this->comboBox1->Items->Add(nombresEstaciones[i]);
		}
	}
	else if (this->ADMIN == false)
	{
		this->objGestorEstacion->cargarEstacionesBD();
		Encargado^ objEncargado = this->objGestorUsuario->obtenerEncargadoXcorreoBD(this->correoDeUsuario);
		this->objGestorEstacion->cargarEstacionesEncargadasXEncargadoBD(objEncargado->codigo);
		//Cargarle estaciones al encargado
		int cantEstaciones = this->objGestorEstacion->listaEstaciones->Count;
		for (int i = 0; i < cantEstaciones; i++) {
			Estacion^ estacion = this->objGestorEstacion->listaEstaciones[i];
			nombresEstaciones->Add(estacion->nombre);
		}
		for (int i = 0; i < nombresEstaciones->Count; i++) {
			this->comboBox1->Items->Add(nombresEstaciones[i]);
		}
	}
	else
	{
		MessageBox::Show("Algo va muy mal");
	}

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->ADMIN == true)
	{
		this->panel9->Visible = false;
		this->panel11->Visible = true;
		this->panel4->Visible = false;
		this->panel6->Visible = false;
		this->objGestorUsuario->cargarListaDeEncargadosXAdminBD(this->correoDeUsuario);
		cargarGrillaDeEncargadosXAdminBD(this->correoDeUsuario);
		//this->objGestorUsuario->cargarEncargadosBD();

		//this->CargarGrillaEncargados();
	}
	else if (this->ADMIN == false)
	{
		MessageBox::Show("NO DISPONIBLE ");
	}
	else
	{
		MessageBox::Show("Algo va mal.. en presionar el boton encargados  ");

	}
	





}
private:void cargarGrillaDeEncargadosXAdminBD(String^ correoDeUsuario) {


	this->dataGridView3->Rows->Clear();
	this->objGestorUsuario->cargarListaDeEncargadosXAdminBD(correoDeUsuario);
	int count = this->objGestorUsuario->listaDeEncargados->Count;
	for (int i = 0; i < count; i++)
	{
		Encargado^ objEncargado = this->objGestorUsuario->listaDeEncargados[i];
		array<String^>^ fila = gcnew array<String^>(8);
		fila[0] = Convert::ToString(objEncargado->codigo);
		fila[1] = objEncargado->nombres;
		fila[2] = objEncargado->apellidoPaterno;
		fila[3] = objEncargado->apellidoMaterno;
		fila[4] = objEncargado->dni;
		fila[5] = objEncargado->correo;
		fila[6] = objEncargado->numCelular;
		fila[7] = objEncargado->fechadeIngreso;
		this->dataGridView3->Rows->Add(fila);
	}

}

private: void CargarGrillaEncargados() {

	this->dataGridView3->Rows->Clear();
	this->objGestorUsuario->cargarEncargadosBD();
	int count = this->objGestorUsuario->listaDeEncargados->Count;
	for (int i = 0; i < count; i++)
	{
		Encargado^ objEncargado = this->objGestorUsuario->listaDeEncargados[i];

		array<String^>^ fila = gcnew array<String^>(8);
		fila[0] = Convert::ToString(objEncargado->codigo);
		fila[1] = objEncargado->nombres;
		fila[2] = objEncargado->apellidoPaterno;
		fila[3] = objEncargado->apellidoMaterno;
		fila[4] = objEncargado->dni;
		fila[5] = objEncargado->correo;
		fila[6] = objEncargado->numCelular;
		fila[7] = objEncargado->fechadeIngreso;
		this->dataGridView3->Rows->Add(fila);
	}

}

private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	

	this->panel9->Visible = false;
	this->panel11->Visible = false;
	this->panel4->Visible = true;
	this->panel6->Visible = false;

	/*this->panel10->Visible = false;
	this->contenido_misEstaciones->Visible = true;
	this->panel8->Visible = false;
	this->panel2->Visible = false;*/



}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel9->Visible = false;
	this->panel11->Visible = false;
	this->panel4->Visible = false;
	this->panel6->Visible = true;
	this->objGestorParametros->LeerDesdeArchivo();
	List<String^>^ nombresEstaciones = gcnew List<String^>();
	List<String^>^ tiposCamaras = gcnew List<String^>();
	this->comboBox1->Items->Clear();

	if (this->ADMIN == true)
	{
		this->objGestorEstacion->cargarEstacionesBD();
		int cantEstaciones = this->objGestorEstacion->listaEstaciones->Count;
		for (int i = 0; i < cantEstaciones; i++) {
			Estacion^ estacion = this->objGestorEstacion->listaEstaciones[i];
			nombresEstaciones->Add(estacion->nombre);
		}
		for (int i = 0; i < nombresEstaciones->Count; i++) {
			this->comboBox1->Items->Add(nombresEstaciones[i]);
		}
	}
	else if (this->ADMIN == false)
	{
		this->objGestorEstacion->cargarEstacionesBD();
		Encargado^ objEncargado = this->objGestorUsuario->obtenerEncargadoXcorreoBD(this->correoDeUsuario);
		this->objGestorEstacion->cargarEstacionesEncargadasXEncargadoBD(objEncargado->codigo);
		//Cargarle estaciones al encargado
		int cantEstaciones = this->objGestorEstacion->listaEstaciones->Count;
		for (int i = 0; i < cantEstaciones; i++) {
			Estacion^ estacion = this->objGestorEstacion->listaEstaciones[i];
			nombresEstaciones->Add(estacion->nombre);
		}
		for (int i = 0; i < nombresEstaciones->Count; i++) {
			this->comboBox1->Items->Add(nombresEstaciones[i]);
		}
	}
	else
	{
		MessageBox::Show("Algo va muy mal");
	}

}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (this->ADMIN == true)
	{
		this->panel9->Visible = false;
		this->panel11->Visible = true;
		this->panel4->Visible = false;
		this->panel6->Visible = false;
		this->objGestorUsuario->cargarListaDeEncargadosXAdminBD(this->correoDeUsuario);
		cargarGrillaDeEncargadosXAdminBD(this->correoDeUsuario);
		//this->objGestorUsuario->cargarEncargadosBD();

		//this->CargarGrillaEncargados();
	}
	else if (this->ADMIN == false)
	{
		MessageBox::Show("NO DISPONIBLE ");
	}
	else
	{
		MessageBox::Show("Algo va mal.. en presionar el boton encargados  ");

	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	frmMantCamaraCrecimiento^ VentanaMantenimientoEstaciones = gcnew frmMantCamaraCrecimiento();
	VentanaMantenimientoEstaciones->Show();

}
private: System::Void linkLabel4_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	if (this->dataGridView2->SelectedRows->Count == 0)
	{
		MessageBox::Show("Seleccione fila");
	}
	else
	{
		int indice = this->dataGridView2->SelectedRows[0]->Index;
		int codigoDeCamara = Convert::ToInt32(this->dataGridView2->Rows[indice]->Cells[0]->Value);

		if (this->dataGridView2->Rows[indice]->Cells[0]->Value == nullptr)
		{
			MessageBox::Show("Seleccione fila VALIDA");
		}
		else
		{
			frmParametros^ VentanaParametros = gcnew frmParametros(codigoDeCamara);
			VentanaParametros->Show();
		}

	}
	


}
private: System::Void frmPaginaPrincipal_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	//this->objGestorEstacion->serializar();
	//this->objGestorEstacion->GuardarDatosEstacion();
	Application::Exit();
}
private: System::Void pictureBox17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
   	frmCrearEstacion^ VentanaCrearEstacion = gcnew frmCrearEstacion();
	VentanaCrearEstacion->ShowDialog();
	this->objGestorEstacion->cargarEstacionesBD();
	cargarGrillaEstacion();
	
	
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




private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
			frmEditarEstacion^ VentanaEditarEstacion = gcnew frmEditarEstacion(codigo,this->objGestorEstacion);
			VentanaEditarEstacion->ShowDialog();
			this->objGestorEstacion->cargarEstacionesBD();
			cargarGrillaEstacion();
			
		}
	}
}


private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
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
			MessageBox::Show("Se eliminó Estación");
			//MessageBox::Show(Convert::ToString(codigo));
			this->objGestorEstacion->eliminarEstacionBD(codigo);
			this->objGestorEstacion->cargarEstacionesBD();
			cargarGrillaEstacion();
		}
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacion^>^ listaEstacionesBuscadas = gcnew List<Estacion^>();

	if (ValidarId(this->textBox3->Text) || this->textBox3->Text == "") {




		if (this->textBox3->Text == "") {
			this->objGestorEstacion->cargarEstacionesBD();
			cargarGrillaEstacion();
		}
		else
		{
			int  codigoEstacion = Convert::ToInt32(this->textBox3->Text);
			//this->CargarGrilla(this->objGestorEstacion->BuscarEstacionXCodigoBD(codigo));
			listaEstacionesBuscadas = this->objGestorEstacion->BusquedaListaEstacionesBD(codigoEstacion);
			cargarGrillaEstacion();

		}
	}
}
private: void CargarGrilla(Estacion^ objEstacion)
{
	/*this->dataGridView1->Rows->Clear();
		
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = Convert::ToString(objEstacion->codigo);
		fila[1] = objEstacion->nombre;
		fila[2] = Convert::ToString(objEstacion->cantidadCamaras);
		fila[3] = objEstacion->descripcion;

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

private:void cargarGrillaConEstacionEncontradas(GestorEstacion^ listaEncontrada)
{
	this->dataGridView1->Rows->Clear();
	Estacion^ objEstacion = listaEncontrada->buscaEstacionXindice(0);
	array<String^>^ fila = gcnew array<String^>(4);
	fila[0] = Convert::ToString(objEstacion->codigo);
	fila[1] = objEstacion->nombre;
	fila[2] = Convert::ToString(objEstacion->cantidadCamaras);
	fila[3] = objEstacion->descripcion;
	this->dataGridView1->Rows->Add(fila);
}



					 /////////////////CAMAARAAAAA DE CRECIMIENTO  
					 /*
					 
					 SA
					 AS
				     */
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (this->codigoEstacionSeleccionada != -1) {
		frmNuevoCamaraCrecimiento^ VentanaCrearCamaraCrecimiento = gcnew frmNuevoCamaraCrecimiento(this->codigoEstacionSeleccionada);
		VentanaCrearCamaraCrecimiento->ShowDialog();
		this->objGestorEstacion->cargarEstacionesBD();
		this->objGestorEstacion->cargarCamaraDeCrecimientoBD();
		cargarGrillaEstacion();
		cargarGrillaCamaraCrecimiento(this->codigoEstacionSeleccionada);
		
	}
	
	
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->dataGridView2->SelectedRows->Count == 0)
	{
		MessageBox::Show("Seleccione fila");
	}
	else
	{
		int indice = this->dataGridView2->SelectedRows[0]->Index;
		int codigodeCamara = Convert::ToInt32(this->dataGridView2->Rows[indice]->Cells[0]->Value);

		if (this->dataGridView2->Rows[indice]->Cells[0]->Value == nullptr)
		{
			MessageBox::Show("Seleccione fila VALIDA");
		}
		else
		{
			frmEditarCamaraCrecimiento^ VentanaEditarCamaraCrecimiento = gcnew frmEditarCamaraCrecimiento(this->codigoEstacionSeleccionada, codigodeCamara);
			VentanaEditarCamaraCrecimiento->ShowDialog();
			this->objGestorEstacion->cargarEstacionesBD();
			this->objGestorEstacion->cargarCamaraDeCrecimientoBD();
			cargarGrillaEstacion();
			cargarGrillaCamaraCrecimiento(this->codigoEstacionSeleccionada);
		}

	}
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {

	/*if (this->dataGridView2->SelectedRows->Count == 0)
	{
		MessageBox::Show("Seleccione fila");
	}
	else
	{
		int indice = this->dataGridView2->SelectedRows[0]->Index;

		/*

		int codigo = Convert::ToInt32(this->dataGridView2->Rows[indice]->Cells[0]->Value);

		/*
		if (this->dataGridView2->Rows[indice]->Cells[0]->Value == nullptr)
		{
			MessageBox::Show("Seleccione fila VALIDA");
		}
		else
		{
			this->objGestorEstacion->buscaEstacionXCodigo(this->id)->eliminarCamaraXcodigo(codigo);
			this->objGestorEstacion->eliminarCamaraCrecimiento(codigo);
			MessageBox::Show("se eliminó");
			cargarGrillaCamaraCrecimiento(this->id);
			/*CARGAR GRILLA
			this->objGestorEstacion->serializar();
			cargarGrillaEstacion();

		}
	}*/
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {

	List<CamaraCrecimiento^>^ listaCamaraCrecimiento = gcnew List<CamaraCrecimiento^>();

	if (ValidarId(this->textBox1->Text) || this->textBox1->Text == "") {




		if (this->textBox1->Text == "") {
			this->objGestorEstacion->verListaDeCamarasXEstacionBD(this->codigoEstacionSeleccionada);
			cargarGrillaCamaraCrecimiento(this->codigoEstacionSeleccionada);
			
		}
		else
		{
			int  codigoCamara = Convert::ToInt32(this->textBox1->Text);
			//this->CargarGrilla(this->objGestorEstacion->BuscarEstacionXCodigoBD(codigo));
			listaCamaraCrecimiento = this->objGestorEstacion->BusquedaListaCamarasCrecimientoBD(this->codigoEstacionSeleccionada, codigoCamara);
			CargarGrilladeCamarasEncontradas(this->codigoEstacionSeleccionada);


		}
	}
	

	
}



private: void CargarGrilladeCamarasEncontradas(int codigoEstacion) {
	this->dataGridView2->Rows->Clear();
	this->textBox2->Text = this->objGestorEstacion->buscaEstacionXCodigo(codigoEstacion)->nombre;
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

private:void cargarGrillaConCamarasEncontradas(GestorCamaraCrecimiento^ listaEncontrada,int indice)
{
	/*this->dataGridView2->Rows->Clear();
	CamaraCrecimiento^ objCamaraCrecimiento = listaEncontrada->buscaCamaraCrecimientoXindice(indice);
	array<String^>^ fila = gcnew array<String^>(6);
	fila[0] = Convert::ToString(objCamaraCrecimiento->codigo);
	fila[1] = Convert::ToString(objCamaraCrecimiento->numerodePiso);
	fila[2] = objCamaraCrecimiento->tipoCultivo;
	fila[3] = objCamaraCrecimiento->fasedeCrecimiento;
	fila[4] = objCamaraCrecimiento->Estado;
	fila[5] = objCamaraCrecimiento->comentario;
	this->dataGridView2->Rows->Add(fila);*/

}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: void cargarGrillaCamaraCrecimiento(int codigoEstacionSeleccionada)
{
	this->dataGridView2->Rows->Clear();
	this->objGestorEstacion->verListaDeCamarasXEstacionBD(codigoEstacionSeleccionada);
	this->textBox2->Text = this->objGestorEstacion->buscaEstacionXCodigo(this->codigoEstacionSeleccionada)->nombre;
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
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
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
			this->codigoEstacionSeleccionada = codigo;

			cargarGrillaCamaraCrecimiento(this->codigoEstacionSeleccionada);
		}
	}
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//EVALUAR CON MIS COMPAÑEROS PARA VER SI LO PODEMOS ELIMINAR
	/*GestorUsuario^ objgestorUsuarioAux = gcnew GestorUsuario();
	frmUsuarios^ VentanaAgregarUsuario = gcnew frmUsuarios(objgestorUsuarioAux, this->indiceUsuario);
	
	VentanaAgregarUsuario->ShowDialog();
	if (objgestorUsuarioAux->cantidadUsuarios() > 0) {
		this->objGestorUsuario->ObtenerUsuarioXindice(this->indiceUsuario)->AgregarAListaEncargados(objgestorUsuarioAux->ObtenerUsuarioXindice(0));
	}
	this->objGestorUsuario->serializar();
	this->CargarGrillaEncargados();*/
	
	frmUsuarios^ VentanaAgregarUsuario = gcnew frmUsuarios(this->correoDeUsuario,this->objGestorUsuario);
	VentanaAgregarUsuario->ShowDialog();
	this->objGestorUsuario->cargarListaDeEncargadosXAdminBD(this->correoDeUsuario);
	cargarGrillaDeEncargadosXAdminBD(this->correoDeUsuario);




}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {


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
			int codigoEncargado = Convert::ToInt32(this->dataGridView3->Rows[indice]->Cells[0]->Value);
			
			frmDelegarEstaciones^ VentanaEncargarEstaciones = gcnew frmDelegarEstaciones(codigoEncargado);
			VentanaEncargarEstaciones->ShowDialog();
			

		}
	}


	
	  
}


private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) {

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
			int codigoEncargado = Convert::ToInt32(this->dataGridView3->Rows[indice]->Cells[0]->Value);
			int codigoUsuario = this->objGestorUsuario->obtenerAdministradorXcorreoBD(this->correoDeUsuario)->codigo;
			this->objGestorUsuario->EliminarEncargadoDeListaDeEncargadosXCodigoBD(codigoUsuario,codigoEncargado);
			this->objGestorUsuario->cargarListaDeEncargadosXAdminBD(this->correoDeUsuario);
			cargarGrillaDeEncargadosXAdminBD(this->correoDeUsuario);
		}
	}


}
private: System::Void panel6_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void panel6_Paint_2(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button17_Click_1(System::Object^ sender, System::EventArgs^ e) {


	if (this->dataGridView2->SelectedRows->Count == 0)
	{
		MessageBox::Show("Seleccione fila");
	}
	else
	{
		int indice = this->dataGridView2->SelectedRows[0]->Index;
		int codigodeCamara = Convert::ToInt32(this->dataGridView2->Rows[indice]->Cells[0]->Value);

		if (this->dataGridView2->Rows[indice]->Cells[0]->Value == nullptr)
		{
			MessageBox::Show("Seleccione fila VALIDA");
		}
		else
		{
			this->objGestorEstacion->eliminarCamaraCrecimientoBD(this->codigoEstacionSeleccionada, codigodeCamara);
			//this->objGestorEstacion->editarEstacionBD(this->codigoEstacionSeleccionada,this->objGestorEstacion->obtenerEstacionXCodigoBD(this->codigoEstacionSeleccionada));
			this->objGestorEstacion->cargarEstacionesBD();
			cargarGrillaEstacion();
			cargarGrillaCamaraCrecimiento(this->codigoEstacionSeleccionada);

		}

	}



}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;

}
private: System::Void contenidoNavegacion_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel11_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void seleccionarEstacion(System::Object^ sender, System::EventArgs^ e) {
	
	int indice = this->comboBox1->SelectedIndex;
	this->comboBox2->Items->Clear();

	if (this->ADMIN == true)
	{
		Estacion^ estacionSeleccionada = this->objGestorEstacion->listaEstaciones[indice];
		this->objGestorEstacion->verListaDeCamarasXEstacionBD(estacionSeleccionada->codigo);
		List<CamaraCrecimiento^>^ listaCamaras = this->objGestorEstacion->listaCamarasCrecimientos;
		for (int i = 0; i < listaCamaras->Count; i++) {
			this->comboBox2->Items->Add(listaCamaras[i]->tipoCultivo);
		}
		this->timer1->Enabled = false;
		MessageBox::Show("Ahora selecciona una camara de crecimiento");
	}
	else if (this->ADMIN == false)
	{
		Encargado^ objEncargado = this->objGestorUsuario->obtenerEncargadoXcorreoBD(this->correoDeUsuario);
		Estacion^ estacionSeleccionada = objGestorEstacion->listaEstaciones[indice];
		this->objGestorEstacion->verListaDeCamarasXEstacionBD(estacionSeleccionada->codigo);
		List<CamaraCrecimiento^>^ listaCamaras = this->objGestorEstacion->listaCamarasCrecimientos;
		for (int i = 0; i < listaCamaras->Count; i++) {
			this->comboBox2->Items->Add(listaCamaras[i]->tipoCultivo);
		}
		this->timer1->Enabled = false;
		MessageBox::Show("Ahora selecciona una camara de crecimiento");
	}
	else
	{
		MessageBox::Show("Algo va muy mal");
	}
}

private: System::Void seleccionarCamara(System::Object^ sender, System::EventArgs^ e) {
	
	int indice = this->comboBox2->SelectedIndex;
	List<CamaraCrecimiento^>^ listaCamaras = this->objGestorEstacion->listaCamarasCrecimientos;
	this->camaraSeleccionada = listaCamaras[indice];
	int cantidadDeParametros = this->objGestorParametros->listaParametros->Count;
	Parametros^ parametro = this->objGestorParametros->listaParametros[cuenta];
	DateTime^ now = this->objDateTime->Now;
	int hora = now->Hour;
	int minuto = now->Minute;
	int segundo = now->Second;
	String^ segundoStr = "";
	String^ minutoStr = "";
	String^ horaStr = "";
	String^ periodo = "AM";
	int delay = 75;
	int segundoTemp = segundo;
	int minutoTemp = minuto;
	int horaTemp = hora;
	for (int i = 0; i < 6; i++) {
		segundoTemp = segundo - delay;
		minutoTemp = minuto;
		horaTemp = hora;
		if (segundoTemp < 0) {
			segundoTemp += 60;
			minutoTemp--;
		}
		if (minutoTemp < 0) {
			minutoTemp += 60;
			horaTemp--;
		}
		if (horaTemp == 12) {
			horaStr = horaTemp.ToString();
			periodo = "PM";
		}
		else if (horaTemp > 12) {
			horaTemp = horaTemp - 12;
			horaStr = "0" + horaTemp.ToString();
			periodo = "PM";
		}
		if (minutoTemp < 10) {
			minutoStr = "0" + minutoTemp.ToString();
		}
		else {
			minutoStr = minutoTemp.ToString();
		}
		if (segundoTemp < 10) {
			segundoStr = "0" + segundoTemp.ToString();
		}
		else {
			segundoStr = segundoTemp.ToString();
		}
		String^ tiempo = horaStr + ":" + minutoStr + ":" + segundoStr + "\n" + periodo;
		parametro = objGestorParametros->listaParametros[cuenta];
		verificarEstadoCamara();
		//cargarDatosWiki();
		//Wiki^ wiki = this->objGestorWiki->ObtenerWikiXCodigo(1);
		this->chart1->Series["Sensado"]->Points->AddXY(tiempo, parametro->temperatura);
		this->chart2->Series["Sensado"]->Points->AddXY(tiempo, parametro->humedad);
		this->chart3->Series["Sensado"]->Points->AddXY(tiempo, parametro->intensidadLuminosa);
		this->chart1->Series["Preferible"]->Points->AddXY(tiempo, this->camaraSeleccionada->objWiki->temperaturaIdeal);
		this->chart2->Series["Preferible"]->Points->AddXY(tiempo, this->camaraSeleccionada->objWiki->humedadIdeal);
		this->chart3->Series["Preferible"]->Points->AddXY(tiempo, this->camaraSeleccionada->objWiki->IluminacionIdeal);
		delay -= 15;
		cuenta++;
	}
	cuenta = 1;
	this->timer1->Enabled = true;
}

private: System::Void actualizar(System::Object^ sender, System::EventArgs^ e) {

	DateTime^ now = this->objDateTime->Now;
	int segundo = now->Second;
	if (cuenta == 15) {
		cuenta = 0;
		String^ periodo = "AM";
		String^ horaStr = "";
		String^ minutoStr = "";
		int hora = now->Hour;
		int minuto = now->Minute;
		if (hora > 12) {
			hora = hora - 12;
			periodo = "PM";
		}
		horaStr = "0" + hora.ToString();

		if (minuto < 10) {
			minutoStr = "0" + minuto.ToString();
		}
		else {
			minutoStr = minuto.ToString();
		}
		String^ segundoStr = "";
		if (segundo < 10) {
			segundoStr = "0" + segundo.ToString();
		}
		else {
			segundoStr = segundo.ToString();
		}
		String^ tiempo = horaStr + ":" + minutoStr + ":" + segundoStr + "\n" + periodo;
		Parametros^ parametro = objGestorParametros->listaParametros[cuenta];
		verificarEstadoCamara();
		this->chart1->Series["Sensado"]->Points->RemoveAt(0);
		this->chart2->Series["Sensado"]->Points->RemoveAt(0);
		this->chart3->Series["Sensado"]->Points->RemoveAt(0);
		this->chart1->Series["Preferible"]->Points->RemoveAt(0);
		this->chart2->Series["Preferible"]->Points->RemoveAt(0);
		this->chart3->Series["Preferible"]->Points->RemoveAt(0);
		this->chart1->Series["Sensado"]->Points->AddXY(tiempo, parametro->temperatura);
		this->chart2->Series["Sensado"]->Points->AddXY(tiempo, parametro->humedad);
		this->chart3->Series["Sensado"]->Points->AddXY(tiempo, parametro->intensidadLuminosa);
		this->chart1->Series["Preferible"]->Points->AddXY(tiempo, this->camaraSeleccionada->objWiki->temperaturaIdeal);
		this->chart2->Series["Preferible"]->Points->AddXY(tiempo, this->camaraSeleccionada->objWiki->humedadIdeal);
		this->chart3->Series["Preferible"]->Points->AddXY(tiempo, this->camaraSeleccionada->objWiki->IluminacionIdeal);
	}
	cuenta++;
}
	   private: void verificarEstadoCamara() {
		   Wiki^ objWiki = this->camaraSeleccionada->objWiki;
		   Parametros^ parametro = objGestorParametros->listaParametros[cuenta];
		   if (parametro->temperatura < objWiki->temperaturaMin) {
			   this->label21->Text = "Temperatura muy baja";
		   }
		   else if (parametro->temperatura > objWiki->temperaturaMax) {
			   this->label21->Text = "Temperatura muy alta";
		   }
		   else {
			   this->label21->Text = "Temperatura adecuada";
		   }
		   if (parametro->humedad < objWiki->humedadMin) {
			   this->label23->Text = "Humedad muy baja";
		   }
		   else if (parametro->humedad > objWiki->humedadMax) {
			   this->label23->Text = "Humedad muy alta";
		   }
		   else {
			   this->label23->Text = "Humedad adecuada";
		   }
		   if (parametro->intensidadLuminosa < objWiki->IluminacionMin) {
			   this->label25->Text = "Iluminacion muy baja";
		   }
		   else if (parametro->intensidadLuminosa > objWiki->IluminacionMax) {
			   this->label25->Text = "Iluminacion muy alta";
		   }
		   else {
			   this->label25->Text = "Iluminacion adecuada";
		   }
	   }
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {

	if (FormWindowState::Maximized == this->WindowState) {
		this->WindowState = FormWindowState::Normal;
	}
	else {
		this->WindowState = FormWindowState::Maximized;
	}
	


}








private: System::Void button7_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button18_Click_1(System::Object^ sender, System::EventArgs^ e) {

	frmMantWiki^ VentanaWiki = gcnew frmMantWiki();
	VentanaWiki->ShowDialog();
	this->objGestorWiki->cargarWikisBD();
	
	this->objGestorEstacion->cargarCamaraDeCrecimientoBD();
	this->objGestorEstacion->cargarEstacionesBD();
	cargarGrillaEstacion();
	if (this->codigoEstacionSeleccionada != -1) {
		cargarGrillaCamaraCrecimiento(this->codigoEstacionSeleccionada);

	}


}
private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void pictureBox1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox1->BackColor = Color::LimeGreen;
}
private: System::Void pictureBox1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox1->BackColor = Color::Lime;

}
private: System::Void pictureBox2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox2->BackColor = Color::LimeGreen;

}
private: System::Void pictureBox2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox2->BackColor = Color::Lime;

}
private: System::Void pictureBox3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox3->BackColor = Color::LimeGreen;

}
private: System::Void pictureBox3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox3->BackColor = Color::Lime;

}
private: System::Void pictureBox4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox4->BackColor = Color::LimeGreen;

}
private: System::Void pictureBox4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox4->BackColor = Color::Lime;

}
};
}
