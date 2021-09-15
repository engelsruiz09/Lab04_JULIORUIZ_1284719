#pragma once
#include "Lapista.h"
#include <stdlib.h>
#include <vector>
#include <time.h>

namespace Lab04JULIORUIZ1284719 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Test;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Tiempo;

	private: System::Windows::Forms::Button^ btnexit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btncalcular;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::RichTextBox^ rTextBoxLapista;
	private: System::Windows::Forms::Label^ label3;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Test = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Tiempo = (gcnew System::Windows::Forms::Label());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btncalcular = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->rTextBoxLapista = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Test
			// 
			this->Test->AutoSize = true;
			this->Test->Location = System::Drawing::Point(778, 243);
			this->Test->Name = L"Test";
			this->Test->Size = System::Drawing::Size(47, 13);
			this->Test->TabIndex = 20;
			this->Test->Text = L"randoms";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(286, 705);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"PULSO DE RELOJ:";
			// 
			// Tiempo
			// 
			this->Tiempo->AutoSize = true;
			this->Tiempo->BackColor = System::Drawing::Color::Peru;
			this->Tiempo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tiempo->ForeColor = System::Drawing::SystemColors::Control;
			this->Tiempo->Location = System::Drawing::Point(392, 696);
			this->Tiempo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Tiempo->Name = L"Tiempo";
			this->Tiempo->Size = System::Drawing::Size(99, 36);
			this->Tiempo->TabIndex = 18;
			this->Tiempo->Text = L"Times";
			// 
			// btnexit
			// 
			this->btnexit->BackColor = System::Drawing::Color::Red;
			this->btnexit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnexit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnexit->Location = System::Drawing::Point(711, 35);
			this->btnexit->Margin = System::Windows::Forms::Padding(2);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(114, 54);
			this->btnexit->TabIndex = 16;
			this->btnexit->Text = L"EXIT";
			this->btnexit->UseMnemonic = false;
			this->btnexit->UseVisualStyleBackColor = false;
			this->btnexit->Click += gcnew System::EventHandler(this, &MyForm::btnexit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::SandyBrown;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ravie", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(146, 32);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(531, 40);
			this->label1->TabIndex = 15;
			this->label1->Text = L"LA LIEBRE Y LA TORTUGA";
			// 
			// btncalcular
			// 
			this->btncalcular->BackColor = System::Drawing::Color::YellowGreen;
			this->btncalcular->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->btncalcular->Location = System::Drawing::Point(25, 32);
			this->btncalcular->Margin = System::Windows::Forms::Padding(2);
			this->btncalcular->Name = L"btncalcular";
			this->btncalcular->Size = System::Drawing::Size(106, 52);
			this->btncalcular->TabIndex = 14;
			this->btncalcular->Text = L"INICIO";
			this->btncalcular->UseVisualStyleBackColor = false;
			this->btncalcular->Click += gcnew System::EventHandler(this, &MyForm::btncalcular_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// rTextBoxLapista
			// 
			this->rTextBoxLapista->Location = System::Drawing::Point(260, 75);
			this->rTextBoxLapista->Name = L"rTextBoxLapista";
			this->rTextBoxLapista->Size = System::Drawing::Size(298, 609);
			this->rTextBoxLapista->TabIndex = 21;
			this->rTextBoxLapista->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(694, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 13);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Numeros Aleatorios:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(841, 741);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->rTextBoxLapista);
			this->Controls->Add(this->Test);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Tiempo);
			this->Controls->Add(this->btnexit);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btncalcular);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LA TORTUGA Y LA LIEBRE";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: int n = 0;//variable cualquiera
	public: Lapista* p = new Lapista();
		  String^ pist = "";
		  String^ pist2 = "";
		  String^ pistfin = "";


	public: void laspitas() {
		pist = "";
		pist2 = "";
		pistfin = "";
		for (int *i = &p->vechare[0]; *i != -1 ; i++)
		{
			if (*i == 1)
			{
				pist += "H";
			}
			else
			{
				pist += "-";
			}
		}

		if (p->positionhare == 70)
		{
			pist += "H";
		}
		else
		{
			pist += "M";
		}

		for (int *i = &p->vectortoise[0]; *i != -1; i++)
		{
			if (*i == 1)
			{
				pist2 += "T";

			}
			else
			{
				pist2 += "-";
			}

		}

		if (p->positiontortoise == 70)
		{
			pist2 += "T";
		}
		else
		{
			pist2 += "M";
		}


		for (int i = 0; i < 70; i++)
		{
			if (pist[i] == 'H' && pist2[i] == 'T')
			{
				pistfin += "O";//OUCH que si pongo toda la palabra se descuadra en el textbox
			}
			else if (pist2[i] == 'T')
			{
				pistfin += "T";

			}
			else if (pist[i] == 'H')
			{
				pistfin += "H";

			}
			else
			{
				pistfin += "-";
			}
		}
		rTextBoxLapista->Text += pistfin + "\n";
	}


	private: System::Void btnexit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btncalcular_Click(System::Object^ sender, System::EventArgs^ e) {

	//aqui sucede la magia xD
	
	p = new Lapista();
	p->createlapista();
	timer1->Enabled = true;
	rTextBoxLapista->Text = "¡BANG!\n" + "¡Y ARRANCAN!\n";
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		n++;
		Tiempo->Text = "" + n;
		Random^ numbers = gcnew Random();
		int num1 = numbers->Next(0, 10);
		Test->Text = "" + Convert::ToString(num1);
		int num2 = numbers->Next(0, 10);
		Test->Text = Test->Text + " , " + Convert::ToString(num2);
		if (p->positionhare < 70 && p->positiontortoise < 70)
		{
			p->imprimirpista(num1, num2);
			laspitas();
		}
		else
		{
			
			if (*p->punhare == 1  && *p->puntortoise == 1)
			{
				MessageBox::Show("ES UN EMPATE", "LA LIEBRE Y LA TORTUGA", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
			}
			else if (*p->puntortoise >= 1)
			{
				rTextBoxLapista->Text += "¡LA TORTUGA GANA! ¡BRAVO!";
			}
			else if (*p->punhare >= 1)
			{
				rTextBoxLapista->Text += "La liebre gana. Ni hablar";
			}
			timer1->Enabled = false;
		}
		
	}
	catch (Exception ^e)
	{
		MessageBox::Show("ERROR DETECTADO" + e->Message, "LA LIEBRE Y LA TORTUGA", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
