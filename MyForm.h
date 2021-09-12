#pragma once

namespace Lab04JULIORUIZ1284719 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnexit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btncalcular;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Test = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Tiempo = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btncalcular = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Test
			// 
			this->Test->AutoSize = true;
			this->Test->Location = System::Drawing::Point(1109, 116);
			this->Test->Name = L"Test";
			this->Test->Size = System::Drawing::Size(47, 13);
			this->Test->TabIndex = 20;
			this->Test->Text = L"randoms";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(646, 285);
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
			this->Tiempo->Location = System::Drawing::Point(767, 267);
			this->Tiempo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Tiempo->Name = L"Tiempo";
			this->Tiempo->Size = System::Drawing::Size(99, 36);
			this->Tiempo->TabIndex = 18;
			this->Tiempo->Text = L"Times";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 150);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullColumnSelect;
			this->dataGridView1->Size = System::Drawing::Size(1517, 79);
			this->dataGridView1->TabIndex = 17;
			// 
			// btnexit
			// 
			this->btnexit->BackColor = System::Drawing::Color::Red;
			this->btnexit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnexit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnexit->Location = System::Drawing::Point(1094, 33);
			this->btnexit->Margin = System::Windows::Forms::Padding(2);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(114, 54);
			this->btnexit->TabIndex = 16;
			this->btnexit->Text = L"EXIT";
			this->btnexit->UseMnemonic = false;
			this->btnexit->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::SandyBrown;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ravie", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(546, 34);
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
			this->btncalcular->Location = System::Drawing::Point(418, 37);
			this->btncalcular->Margin = System::Windows::Forms::Padding(2);
			this->btncalcular->Name = L"btncalcular";
			this->btncalcular->Size = System::Drawing::Size(106, 52);
			this->btncalcular->TabIndex = 14;
			this->btncalcular->Text = L"INICIO";
			this->btncalcular->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1541, 337);
			this->Controls->Add(this->Test);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Tiempo);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnexit);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btncalcular);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LA TORTUGA Y LA LIEBRE";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
