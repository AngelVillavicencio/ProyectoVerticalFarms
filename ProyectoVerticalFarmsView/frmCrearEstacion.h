#pragma once
#include <cctype>
#include "frmAgregarEncargadoAEstacion.h"
#include "frmUsuarios.h"
namespace ProyectoVerticalFarmsView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoVerticalFarmsController;
	using namespace ProyectoVerticalFarmsModel;
	using namespace std;
	/// <summary>
	/// Resumen de frmCrearEstacion
	/// </summary>
	public ref class frmCrearEstacion : public System::Windows::Forms::Form
	{
	public:
		
		frmCrearEstacion(GestorEstacion^ objGestorEstacion,int indiceUsuario)
		{
			InitializeComponent();
		
			this->objGestorEstacion = objGestorEstacion;
			this->objGestorUsuario1 = gcnew GestorUsuario();
			this->indiceUsuario = indiceUsuario;
		}
		//nuevo
		frmCrearEstacion(void)
		{
			InitializeComponent();

			this->objGestorEstacion = gcnew GestorEstacion();


			this->objGestorUsuario1 = gcnew GestorUsuario();
			
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmCrearEstacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: GestorEstacion^ objGestorEstacion;
	private: GestorUsuario^ objGestorUsuario1;
	private: Usuario^ objUsuario;
	private: int indiceUsuario;
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel1;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(209, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmCrearEstacion::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(66, 380);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmCrearEstacion::button2_Click);
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Descripción:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(133, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(177, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(133, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(177, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Estacion de ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(134, 152);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(177, 176);
			this->textBox4->TabIndex = 9;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(54, 38);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(375, 406);
			this->panel1->TabIndex = 10;
			// 
			// frmCrearEstacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(464, 483);
			this->Controls->Add(this->panel1);
			this->Name = L"frmCrearEstacion";
			this->Text = L"Crear Estacion";
			this->Load += gcnew System::EventHandler(this, &frmCrearEstacion::frmCrearEstacion_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: bool ValidarId(String^ id) {
		bool num=false;
		int i = 0;
		if (id == nullptr) {
			return false;
		}
		else {
			while (!num) {
				if (id[i] >= '0' && id[i] <= '9') {
					num= true;
					break;
				}
				else if (id[i] == ' ') {
					break;
				}else {
					num = false;
					break;
				}
				i++;
			}
			return num;
		}
		
		
	}
private: bool ValidarNombreEstacion(String^ nombre) {	
	if (nombre[0]=='E'&& nombre[1]=='s' && nombre[2] == 't'  &&nombre[3] == 'a'  &&nombre[4] == 'c'  &&nombre[5] == 'i' && nombre[6] == 'o' && nombre[7] == 'n' ) {
		return true;
	}
	else {
		return false;
	}
	}
		   
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ValidarId("0"))
	{
		int codigo = 0;
		if (ValidarNombreEstacion(this->textBox2->Text)) 
		{
			String^ nombre = this->textBox2->Text;
			String^ descripcion = this->textBox4->Text;
			Estacion^ objEstacionNuevo = gcnew Estacion(codigo, nombre, descripcion);
			this->objGestorEstacion->agregarEstacionBD(objEstacionNuevo);
			this->Close();
		}
		else {
			MessageBox::Show("Inicie los nombres de la estacion con 'Estacion' ");
		}
	}
	else
	{
		MessageBox::Show("Coloque un numero en el codigo");
	}
	
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void frmCrearEstacion_Load(System::Object^ sender, System::EventArgs^ e) {
	//this->objGestorUsuario->deserializar();
	
	/*bool noexiste_uno_igual = false;

	int codigo = this->objGestorEstacion->ObtenerCantidadDeEstaciones();

	if (codigo == 0) {
		noexiste_uno_igual = true;
	}
	while (!noexiste_uno_igual) {
		for (int i = 0; i < this->objGestorEstacion->ObtenerCantidadDeEstaciones(); i++) {

			if (codigo == this->objGestorEstacion->buscaEstacionXindice(i)->getId()) {
				noexiste_uno_igual = false;
				codigo++;

				break;
			}
			else {
				noexiste_uno_igual = true;

			}
		}
	}

	this->textBox1->Text = Convert::ToString(codigo);*/


}
};
}
