#pragma once

namespace ProyectoVerticalFarmsView {

	using namespace ProyectoVerticalFarmsController;			// Los incluimos debido al manejo de datos
	using namespace ProyectoVerticalFarmsModel;				//  en las Ventanas Hijas.
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmEditarWiki
	/// </summary>
	public ref class frmEditarWiki : public System::Windows::Forms::Form
	{
	public:
		frmEditarWiki(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEditarWiki(GestorWiki^ objGestorWiki, int codigo)
		{
			InitializeComponent();
			this->objGestorWiki = objGestorWiki;
			this->codigo = codigo;
			this->objWiki = objGestorWiki->ObtenerWikiXCodigo(codigo);
			
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarWiki()
		{
			if (components)
			{
				delete components;
			}
		}

	private: GestorWiki^ objGestorWiki;							 //Agregamos atributo (Objeto) de la Ventana
	private: Wiki^ objWiki;
	private:  int codigo;

	protected:















	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(75, 501);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarWiki::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(273, 501);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarWiki::button2_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(233, 94);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(172, 20);
			this->textBox9->TabIndex = 30;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(51, 94);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 13);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Nombre del Vegetal";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->textBox12);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Location = System::Drawing::Point(42, 366);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(367, 113);
			this->groupBox3->TabIndex = 27;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Humedad ( % )";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(189, 27);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(174, 20);
			this->textBox10->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(29, 81);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Máxima:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(28, 30);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(45, 13);
			this->label14->TabIndex = 15;
			this->label14->Text = L"Mínima:";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(189, 78);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(174, 20);
			this->textBox12->TabIndex = 15;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(189, 52);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(174, 20);
			this->textBox11->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(29, 56);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(33, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Ideal:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(42, 232);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(367, 128);
			this->groupBox2->TabIndex = 28;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Intensidad Luminosa ( Lux )";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Luz Roja", L"Luz Azul", L"Luz Blanca" });
			this->comboBox1->Location = System::Drawing::Point(189, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(174, 21);
			this->comboBox1->TabIndex = 19;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(26, 22);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(102, 13);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Tipo de Iluminación:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(27, 98);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Máxima:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(26, 53);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(45, 13);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Mínima:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(189, 96);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(174, 20);
			this->textBox8->TabIndex = 10;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(189, 70);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(174, 20);
			this->textBox7->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(189, 46);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(174, 20);
			this->textBox6->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(27, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Ideal:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(42, 120);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(367, 106);
			this->groupBox1->TabIndex = 26;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Temperatura ( C° )";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(28, 76);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Máxima:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(191, 43);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(172, 20);
			this->textBox4->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(191, 19);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(172, 20);
			this->textBox3->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Mínima:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(191, 69);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(172, 20);
			this->textBox5->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ideal:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(233, 63);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(172, 20);
			this->textBox2->TabIndex = 25;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(233, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(171, 20);
			this->textBox1->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Tipo de Vegetal";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Código";
			// 
			// frmEditarWiki
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(472, 536);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmEditarWiki";
			this->Text = L"Editar Wiki";
			this->Load += gcnew System::EventHandler(this, &frmEditarWiki::CargarVentana);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CargarVentana(System::Object^ sender, System::EventArgs^ e) {

		this->textBox1->Text = Convert::ToString(this->objWiki->codigo);
		this->textBox2->Text = this->objWiki->tipoVegetal;
		this->textBox9->Text = this->objWiki->nombrePlanta;
		this->textBox3->Text = Convert::ToString(this->objWiki->temperaturaMin);
		this->textBox4->Text = Convert::ToString(this->objWiki->temperaturaIdeal);
		this->textBox5->Text = Convert::ToString(this->objWiki->temperaturaMax);
		this->comboBox1->Text = this->objWiki->tipoDeIluminacion;
		this->textBox6->Text = Convert::ToString(this->objWiki->IluminacionMin);
		this->textBox7->Text = Convert::ToString(this->objWiki->IluminacionIdeal);
		this->textBox8->Text = Convert::ToString(this->objWiki->IluminacionMax);
		this->textBox10->Text = Convert::ToString(this->objWiki->humedadMin);
		this->textBox11->Text = Convert::ToString(this->objWiki->humedadIdeal);
		this->textBox12->Text = Convert::ToString(this->objWiki->humedadMax);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigo = Convert::ToInt32(this->textBox1->Text);

		if (ValidarSiesNumero(this->textBox3->Text) && ValidarSiesNumero(this->textBox4->Text) && ValidarSiesNumero(this->textBox5->Text) && ValidarSiesNumero(this->textBox6->Text) && ValidarSiesNumero(this->textBox7->Text) && ValidarSiesNumero(this->textBox8->Text) && ValidarSiesNumero(this->textBox10->Text) && ValidarSiesNumero(this->textBox11->Text) && ValidarSiesNumero(this->textBox12->Text))
		{
			String^ tipoVegetal = this->textBox2->Text;
			String^ nombrePlanta = this->textBox9->Text;

			float temperaturaMin = Convert::ToDouble(this->textBox3->Text);
			float temperaturaIdeal = Convert::ToDouble(this->textBox4->Text);
			float temperaturaMax = Convert::ToDouble(this->textBox5->Text);
			String^ tipoDeIluminacion = this->comboBox1->Text;
			float iluminacionMin = Convert::ToDouble(this->textBox6->Text);
			float iluminacionIdeal = Convert::ToDouble(this->textBox7->Text);
			float iluminacionMax = Convert::ToDouble(this->textBox8->Text);
			float HumedadMin = Convert::ToDouble(this->textBox10->Text);
			float HumedadIdeal = Convert::ToDouble(this->textBox11->Text);
			float HumedadMax = Convert::ToDouble(this->textBox12->Text);



			Wiki^ objWiki = gcnew Wiki(codigo, tipoVegetal, nombrePlanta, tipoDeIluminacion, temperaturaIdeal, temperaturaMin, temperaturaMax, HumedadIdeal, HumedadMin, HumedadMax, iluminacionIdeal, iluminacionMin, iluminacionMax);

			this->objGestorWiki->editarWikiBD(this->objWiki->codigo, objWiki);
			MessageBox::Show("Se está editando...");
			this->Close();
		}
		else {
			MessageBox::Show("Debes llenar todo los campos");
		}
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
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
