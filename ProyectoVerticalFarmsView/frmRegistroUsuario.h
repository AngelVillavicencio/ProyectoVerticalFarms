#pragma once

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

	/// <summary>
	/// Resumen de frmRegistroUsuario
	/// </summary>
	public ref class frmRegistroUsuario : public System::Windows::Forms::Form
	{
	public:
		frmRegistroUsuario(void)
		{
			InitializeComponent();
			this->objGestorUsuario = gcnew GestorUsuario();
		}
		frmRegistroUsuario(GestorUsuario^ objGestorUsuario)
		{
			InitializeComponent();
			//
			this->objGestorUsuario = objGestorUsuario;

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmRegistroUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: GestorUsuario^ objGestorUsuario;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::GroupBox^ groupBox2;



	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;

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
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(67, 37);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(384, 100);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"¿Quién eres\?";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmRegistroUsuario::groupBox1_Enter);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(168, 54);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(179, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Soy Encargado de una Estación";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(168, 31);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(110, 17);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Soy Administrador";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Elige uno:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dateTimePicker2);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(68, 158);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(383, 341);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos Personales:";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &frmRegistroUsuario::groupBox2_Enter);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(167, 288);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 21;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Masculino", L"Femenino", L"Otro" });
			this->comboBox1->Location = System::Drawing::Point(167, 257);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(200, 21);
			this->comboBox1->TabIndex = 20;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(167, 215);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 19;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(167, 179);
			this->textBox5->MaxLength = 9;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(200, 20);
			this->textBox5->TabIndex = 15;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(167, 147);
			this->textBox4->MaxLength = 8;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(200, 20);
			this->textBox4->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(167, 111);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(200, 20);
			this->textBox3->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(167, 74);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 20);
			this->textBox2->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(42, 260);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 13);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Genero:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(167, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 20);
			this->textBox1->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(42, 294);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(111, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Fecha de Nacimiento:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(42, 221);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Fecha de ingreso:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(42, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Numero de celular:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(42, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"DNI:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Apellido Materno:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Apellido Paterno:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nombres:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox12);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Location = System::Drawing::Point(68, 505);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(383, 216);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Información de cuenta:";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(167, 166);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(165, 20);
			this->textBox12->TabIndex = 22;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(167, 98);
			this->textBox11->Name = L"textBox11";
			this->textBox11->PasswordChar = '*';
			this->textBox11->Size = System::Drawing::Size(165, 20);
			this->textBox11->TabIndex = 21;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(167, 65);
			this->textBox10->Name = L"textBox10";
			this->textBox10->PasswordChar = '*';
			this->textBox10->Size = System::Drawing::Size(165, 20);
			this->textBox10->TabIndex = 20;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(167, 31);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(165, 20);
			this->textBox9->TabIndex = 19;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(42, 137);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(202, 26);
			this->label13->TabIndex = 10;
			this->label13->Text = L"Pregunta si te olvidas tu contraseña...\r\n¿Cuál es el segundo nombre de tu Papá\?\r\n"
				L"";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(42, 101);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(105, 13);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Verificar Contraseña:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(42, 68);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(64, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Contraseña:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(42, 34);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Correo:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(305, 727);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 32);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Registrarme";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmRegistroUsuario::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(113, 727);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 32);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmRegistroUsuario::button2_Click);
			// 
			// frmRegistroUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(613, 549);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmRegistroUsuario";
			this->Text = L"Registro Usuario";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		this->objGestorUsuario->cargarAdministradoresBD();
		this->objGestorUsuario->cargarEncargadosBD();



		int codigo;
		String^ nombres = this->textBox1->Text;
		String^ apellidoPaterno = this->textBox2->Text;
		String^ apellidoMaterno = this->textBox3->Text;
		String^ dni = this->textBox4->Text;
		String^ numCelular = this->textBox5->Text;
		DateTime fecha = this->dateTimePicker1->Value;
		String^ fechaIngreso = Convert::ToString(fecha);
		String^ genero = this->comboBox1->Text;

		DateTime fecha2 = this->dateTimePicker2->Value;
		String^ fechadeNacimiento = Convert::ToString(fecha2);
		String^ correo = this->textBox9->Text;

		

		String^ contrasena = this->textBox10->Text;
		String^ contrasenaRepetida = this->textBox11->Text;
		String^ palabraClave = this->textBox12->Text;
		String^ admin;
		
		/**/

		bool SepuedeCrear = false;
		if (this->checkBox1->CheckState == CheckState::Checked) {
			admin = "True";
			if (this->checkBox2->CheckState == CheckState::Checked) {
				admin = "False";
				SepuedeCrear = false;
				MessageBox::Show("Debe solo marcar una casilla!!");
			}
			else {
				admin = "True";
				SepuedeCrear = true;
			}
		}
		else {
			if (this->checkBox2->CheckState == CheckState::Checked) {
				admin = "False";
				SepuedeCrear = true;
			}
			else {
				MessageBox::Show("Debe al menos marcar una casilla!!");
				SepuedeCrear = false;
			}
		}


		if (SepuedeCrear == true) {
			if (contrasena == contrasenaRepetida) {

				if (admin == "True") {
					administrador^ objAdmin = gcnew administrador(codigo, nombres, apellidoPaterno, apellidoMaterno, dni, correo, numCelular, fechaIngreso, genero, fechadeNacimiento, contrasena, palabraClave, admin);
					this->objGestorUsuario->agregarAdmistradorBD(objAdmin);
					MessageBox::Show("HA SIDO REGISTRADO EXITOSAMENTE");
					MessageBox::Show("HAS CREADO UN ADMIN");

					this->Close();
				}
				else if (admin == "False")
				{
					Encargado^ objEncargado = gcnew Encargado(codigo, nombres, apellidoPaterno, apellidoMaterno, dni, correo, numCelular, fechaIngreso, genero, fechadeNacimiento, contrasena, palabraClave, admin);
					this->objGestorUsuario->agregarEncargadoBD(objEncargado);
					MessageBox::Show("HAS CREADO UN ENCARGADO");

					MessageBox::Show("HA SIDO REGISTRADO EXITOSAMENTE");
					this->Close();
				}
				else {
					MessageBox::Show("Algo va muy mal ;V ");
				}
			}
			else
			{
				MessageBox::Show("No coinciden las contraseñas, vuelva a intentarlo");
			}
		}
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}