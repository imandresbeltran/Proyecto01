#pragma once
#include "FigurasGeometricas.h"
#include "Figuras.h"
#include "Figura1.h"
#include "Figura2.h"
#include "Figura3.h"

namespace Lab2AndresBeltran1001122 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LblTituloGeneral;
	protected:

	private: System::Windows::Forms::GroupBox^ GbxInformacion;
	protected:

	private: System::Windows::Forms::TextBox^ TxbBase;
	private: System::Windows::Forms::TextBox^ TxbLado;
	private: System::Windows::Forms::TextBox^ TxbAltura;
	private: System::Windows::Forms::TextBox^ TxbApotema;
	private: System::Windows::Forms::Label^ LblApotema;
	private: System::Windows::Forms::Label^ LblLado;
	private: System::Windows::Forms::Label^ LblBase;



	private: System::Windows::Forms::Label^ LblAltura;

	private: System::Windows::Forms::GroupBox^ GbxStruct;
	private: System::Windows::Forms::Button^ BtnCalcular;
	private: System::Windows::Forms::ComboBox^ CbxStruct;
	private: System::Windows::Forms::Label^ LblError;
	private: System::Windows::Forms::Label^ LblPerimetro;
	private: System::Windows::Forms::Label^ LblArea;
	private: System::Windows::Forms::GroupBox^ GbxClases;
	private: System::Windows::Forms::Label^ LblPerimetroo;
	private: System::Windows::Forms::Label^ LblAreaa;
	private: System::Windows::Forms::Button^ BtnCalcularClases;
	private: System::Windows::Forms::ComboBox^ CbxClases;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->LblTituloGeneral = (gcnew System::Windows::Forms::Label());
			this->GbxInformacion = (gcnew System::Windows::Forms::GroupBox());
			this->LblError = (gcnew System::Windows::Forms::Label());
			this->BtnCalcular = (gcnew System::Windows::Forms::Button());
			this->TxbBase = (gcnew System::Windows::Forms::TextBox());
			this->TxbLado = (gcnew System::Windows::Forms::TextBox());
			this->TxbAltura = (gcnew System::Windows::Forms::TextBox());
			this->TxbApotema = (gcnew System::Windows::Forms::TextBox());
			this->LblApotema = (gcnew System::Windows::Forms::Label());
			this->LblLado = (gcnew System::Windows::Forms::Label());
			this->LblBase = (gcnew System::Windows::Forms::Label());
			this->LblAltura = (gcnew System::Windows::Forms::Label());
			this->GbxStruct = (gcnew System::Windows::Forms::GroupBox());
			this->LblPerimetro = (gcnew System::Windows::Forms::Label());
			this->LblArea = (gcnew System::Windows::Forms::Label());
			this->CbxStruct = (gcnew System::Windows::Forms::ComboBox());
			this->GbxClases = (gcnew System::Windows::Forms::GroupBox());
			this->CbxClases = (gcnew System::Windows::Forms::ComboBox());
			this->BtnCalcularClases = (gcnew System::Windows::Forms::Button());
			this->LblPerimetroo = (gcnew System::Windows::Forms::Label());
			this->LblAreaa = (gcnew System::Windows::Forms::Label());
			this->GbxInformacion->SuspendLayout();
			this->GbxStruct->SuspendLayout();
			this->GbxClases->SuspendLayout();
			this->SuspendLayout();
			// 
			// LblTituloGeneral
			// 
			this->LblTituloGeneral->AutoSize = true;
			this->LblTituloGeneral->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblTituloGeneral->Location = System::Drawing::Point(185, 29);
			this->LblTituloGeneral->Name = L"LblTituloGeneral";
			this->LblTituloGeneral->Size = System::Drawing::Size(397, 22);
			this->LblTituloGeneral->TabIndex = 0;
			this->LblTituloGeneral->Text = L"FIGURAS GEOMÉTRICAS CON STRUCT Y CLASES";
			// 
			// GbxInformacion
			// 
			this->GbxInformacion->Controls->Add(this->LblError);
			this->GbxInformacion->Controls->Add(this->BtnCalcular);
			this->GbxInformacion->Controls->Add(this->TxbBase);
			this->GbxInformacion->Controls->Add(this->TxbLado);
			this->GbxInformacion->Controls->Add(this->TxbAltura);
			this->GbxInformacion->Controls->Add(this->TxbApotema);
			this->GbxInformacion->Controls->Add(this->LblApotema);
			this->GbxInformacion->Controls->Add(this->LblLado);
			this->GbxInformacion->Controls->Add(this->LblBase);
			this->GbxInformacion->Controls->Add(this->LblAltura);
			this->GbxInformacion->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GbxInformacion->Location = System::Drawing::Point(38, 187);
			this->GbxInformacion->Name = L"GbxInformacion";
			this->GbxInformacion->Size = System::Drawing::Size(299, 246);
			this->GbxInformacion->TabIndex = 1;
			this->GbxInformacion->TabStop = false;
			this->GbxInformacion->Text = L"INFORMACIÓN";
			// 
			// LblError
			// 
			this->LblError->AutoSize = true;
			this->LblError->Location = System::Drawing::Point(147, 192);
			this->LblError->Name = L"LblError";
			this->LblError->Size = System::Drawing::Size(0, 19);
			this->LblError->TabIndex = 9;
			// 
			// BtnCalcular
			// 
			this->BtnCalcular->Location = System::Drawing::Point(31, 184);
			this->BtnCalcular->Name = L"BtnCalcular";
			this->BtnCalcular->Size = System::Drawing::Size(97, 35);
			this->BtnCalcular->TabIndex = 8;
			this->BtnCalcular->Text = L"CALCULAR";
			this->BtnCalcular->UseVisualStyleBackColor = true;
			this->BtnCalcular->Click += gcnew System::EventHandler(this, &MyForm::BtnCalcular_Click);
			// 
			// TxbBase
			// 
			this->TxbBase->Location = System::Drawing::Point(122, 141);
			this->TxbBase->Name = L"TxbBase";
			this->TxbBase->Size = System::Drawing::Size(141, 25);
			this->TxbBase->TabIndex = 7;
			// 
			// TxbLado
			// 
			this->TxbLado->Location = System::Drawing::Point(122, 110);
			this->TxbLado->Name = L"TxbLado";
			this->TxbLado->Size = System::Drawing::Size(141, 25);
			this->TxbLado->TabIndex = 6;
			// 
			// TxbAltura
			// 
			this->TxbAltura->Location = System::Drawing::Point(122, 78);
			this->TxbAltura->Name = L"TxbAltura";
			this->TxbAltura->Size = System::Drawing::Size(141, 25);
			this->TxbAltura->TabIndex = 5;
			// 
			// TxbApotema
			// 
			this->TxbApotema->Location = System::Drawing::Point(122, 46);
			this->TxbApotema->Name = L"TxbApotema";
			this->TxbApotema->Size = System::Drawing::Size(141, 25);
			this->TxbApotema->TabIndex = 4;
			// 
			// LblApotema
			// 
			this->LblApotema->AutoSize = true;
			this->LblApotema->Location = System::Drawing::Point(27, 49);
			this->LblApotema->Name = L"LblApotema";
			this->LblApotema->Size = System::Drawing::Size(76, 19);
			this->LblApotema->TabIndex = 3;
			this->LblApotema->Text = L"APOTEMA:";
			// 
			// LblLado
			// 
			this->LblLado->AutoSize = true;
			this->LblLado->Location = System::Drawing::Point(27, 113);
			this->LblLado->Name = L"LblLado";
			this->LblLado->Size = System::Drawing::Size(49, 19);
			this->LblLado->TabIndex = 2;
			this->LblLado->Text = L"LADO:";
			// 
			// LblBase
			// 
			this->LblBase->AutoSize = true;
			this->LblBase->Location = System::Drawing::Point(27, 144);
			this->LblBase->Name = L"LblBase";
			this->LblBase->Size = System::Drawing::Size(44, 19);
			this->LblBase->TabIndex = 1;
			this->LblBase->Text = L"BASE:";
			// 
			// LblAltura
			// 
			this->LblAltura->AutoSize = true;
			this->LblAltura->Location = System::Drawing::Point(27, 84);
			this->LblAltura->Name = L"LblAltura";
			this->LblAltura->Size = System::Drawing::Size(62, 19);
			this->LblAltura->TabIndex = 0;
			this->LblAltura->Text = L"ALTURA:";
			// 
			// GbxStruct
			// 
			this->GbxStruct->Controls->Add(this->LblPerimetro);
			this->GbxStruct->Controls->Add(this->LblArea);
			this->GbxStruct->Controls->Add(this->CbxStruct);
			this->GbxStruct->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GbxStruct->Location = System::Drawing::Point(365, 63);
			this->GbxStruct->Name = L"GbxStruct";
			this->GbxStruct->Size = System::Drawing::Size(357, 192);
			this->GbxStruct->TabIndex = 2;
			this->GbxStruct->TabStop = false;
			this->GbxStruct->Text = L"APLICANDO STRUCT";
			// 
			// LblPerimetro
			// 
			this->LblPerimetro->AutoSize = true;
			this->LblPerimetro->Location = System::Drawing::Point(25, 133);
			this->LblPerimetro->Name = L"LblPerimetro";
			this->LblPerimetro->Size = System::Drawing::Size(0, 19);
			this->LblPerimetro->TabIndex = 2;
			// 
			// LblArea
			// 
			this->LblArea->AutoSize = true;
			this->LblArea->Location = System::Drawing::Point(61, 77);
			this->LblArea->Name = L"LblArea";
			this->LblArea->Size = System::Drawing::Size(0, 19);
			this->LblArea->TabIndex = 1;
			// 
			// CbxStruct
			// 
			this->CbxStruct->FormattingEnabled = true;
			this->CbxStruct->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"TRIÁNGULO", L"CUADRILÁTERO", L"PENTÁGONO", L"HEXÁGONO",
					L"HEPTÁGONO", L"OCTÁGONO", L"NONÁGONO", L"DECÁGONO"
			});
			this->CbxStruct->Location = System::Drawing::Point(31, 25);
			this->CbxStruct->Name = L"CbxStruct";
			this->CbxStruct->Size = System::Drawing::Size(290, 27);
			this->CbxStruct->TabIndex = 0;
			// 
			// GbxClases
			// 
			this->GbxClases->Controls->Add(this->CbxClases);
			this->GbxClases->Controls->Add(this->BtnCalcularClases);
			this->GbxClases->Controls->Add(this->LblPerimetroo);
			this->GbxClases->Controls->Add(this->LblAreaa);
			this->GbxClases->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GbxClases->Location = System::Drawing::Point(365, 297);
			this->GbxClases->Name = L"GbxClases";
			this->GbxClases->Size = System::Drawing::Size(357, 189);
			this->GbxClases->TabIndex = 3;
			this->GbxClases->TabStop = false;
			this->GbxClases->Text = L"APLICANDO CLASES";
			// 
			// CbxClases
			// 
			this->CbxClases->FormattingEnabled = true;
			this->CbxClases->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"CÍRCULO", L"TRIÁNGULO", L"RECTÁNGULO" });
			this->CbxClases->Location = System::Drawing::Point(31, 31);
			this->CbxClases->Name = L"CbxClases";
			this->CbxClases->Size = System::Drawing::Size(290, 27);
			this->CbxClases->TabIndex = 3;
			// 
			// BtnCalcularClases
			// 
			this->BtnCalcularClases->Location = System::Drawing::Point(184, 149);
			this->BtnCalcularClases->Name = L"BtnCalcularClases";
			this->BtnCalcularClases->Size = System::Drawing::Size(103, 28);
			this->BtnCalcularClases->TabIndex = 2;
			this->BtnCalcularClases->Text = L"CALCULAR";
			this->BtnCalcularClases->UseVisualStyleBackColor = true;
			this->BtnCalcularClases->Click += gcnew System::EventHandler(this, &MyForm::BtnCalcularClases_Click);
			// 
			// LblPerimetroo
			// 
			this->LblPerimetroo->AutoSize = true;
			this->LblPerimetroo->Location = System::Drawing::Point(61, 117);
			this->LblPerimetroo->Name = L"LblPerimetroo";
			this->LblPerimetroo->Size = System::Drawing::Size(0, 19);
			this->LblPerimetroo->TabIndex = 1;
			// 
			// LblAreaa
			// 
			this->LblAreaa->AutoSize = true;
			this->LblAreaa->Location = System::Drawing::Point(61, 90);
			this->LblAreaa->Name = L"LblAreaa";
			this->LblAreaa->Size = System::Drawing::Size(0, 19);
			this->LblAreaa->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(748, 621);
			this->Controls->Add(this->GbxClases);
			this->Controls->Add(this->GbxStruct);
			this->Controls->Add(this->GbxInformacion);
			this->Controls->Add(this->LblTituloGeneral);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->GbxInformacion->ResumeLayout(false);
			this->GbxInformacion->PerformLayout();
			this->GbxStruct->ResumeLayout(false);
			this->GbxStruct->PerformLayout();
			this->GbxClases->ResumeLayout(false);
			this->GbxClases->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnCalcular_Click(System::Object^ sender, System::EventArgs^ e) {

		//Declaramos variables que recojan la información de los TextBox
		int base = int::Parse(TxbBase->Text);
		int altura = int::Parse(TxbAltura->Text);
		int apotema = int::Parse(TxbApotema->Text);
		int lado = int::Parse(TxbLado->Text);

		int eleccion = CbxStruct->SelectedIndex;

		if (base == 0 || altura == 0 || apotema == 0 || lado == 0) {
			LblError->Text = "NO PUEDE SER 0";
			LimpiarCajas();
		}
		else {
			if (eleccion == 0) {
				Triangulo triangulo;

				triangulo.altura = altura;
				triangulo.base = base;
				triangulo.lado = lado;

				LblArea->Text = "El área del triángulo es: " + triangulo.CalcularArea();
				LblPerimetro->Text = "El perímetro del triángulo es: " + triangulo.CalcularPerimetro();
			}
			else if (eleccion == 1) {
				Cuadrilatero cuadrilatero;

				cuadrilatero.lado = lado;

				LblArea->Text = "El área del cuadrilátero es: " + cuadrilatero.CalcularAreaCuadrilatero();
				LblPerimetro->Text = "El perímetro del cuadrilátero es: " + cuadrilatero.CalcularPerimetroCuadrilatero();
			}
			else if (eleccion == 2) {
				Pentagono pentagono;

				pentagono.lado = lado;
				pentagono.apotema = apotema;

				LblArea->Text = "El área del pentágono es: " + pentagono.CalcularAreaPentagono();
				LblPerimetro->Text = "El perímetro del pentágono es: " + pentagono.CalcularPerimetroPentagono();
			}
			else if (eleccion == 3) {
				Hexagono hexagono;

				hexagono.lado = lado;
				hexagono.apotema = apotema;

				LblArea->Text = "El área del hexágono es: " + hexagono.CaclularAreaHexagono();
				LblPerimetro->Text = "El perímetro del hexágono es: " + hexagono.CalcularPerimetroHexagono();
			}
			else if (eleccion == 4) {
				Heptagono heptagono;

				heptagono.lado = lado;
				heptagono.apotema = apotema;

				LblArea->Text = "El área del heptágono es: " + heptagono.CalcularAreaHeptagono();
				LblPerimetro->Text = "El perímetro del heptágono es: " + heptagono.CalcularPerimetroHeptagono();
			}
			else if (eleccion == 5) {
				Octagono octagono;

				octagono.lado = lado;
				octagono.apotema = apotema;

				LblPerimetro->Text = "El perímetro del octágono es: " + octagono.CalcularPerimetroOctagono();
				LblArea->Text = "El área del octágono es: " + octagono.CalcularAreaOctagono();
			}
			else if (eleccion == 6) {
				Nonagono nonagono;

				nonagono.lado = lado;
				nonagono.apotema = apotema;

				LblArea->Text = "El área del nonágono es: " + nonagono.CalcularAreaNonagono();
				LblPerimetro->Text = "El perímetro del nonágono es: " + nonagono.CalcularPerimetroNonagono();
			}
			else {
				Decagono decagono;

				decagono.lado = lado;
				decagono.apotema = apotema;

				LblArea->Text = "El área del decágono es: " + decagono.CalcularAreaDecagono();
				LblPerimetro->Text = "El perímetro del decágono es: " + decagono.CalcularPerimetroDecagono();
			}
		}
	};
		   
     //MÉTODO PARA PODER BORRAR LOS DATOS QUE EL USUARIO INGRESO
	public: void LimpiarCajas() {
		TxbApotema->Clear();
		TxbAltura->Clear();
		TxbApotema->Clear();
		TxbLado->Clear();
		TxbBase->Focus();
								}

	private: System::Void BtnCalcularClases_Click(System::Object^ sender, System::EventArgs^ e) {
		Figura1* figura1 = new Figura1();
		Figuras* figuras = new Figuras();
		Figura2* figura2 = new Figura2();
		Figura3* figura3 = new Figura3();

		int base = int::Parse(TxbBase->Text);
		int altura = int::Parse(TxbAltura->Text);
		int lado = int::Parse(TxbLado->Text);

		int seleccion = CbxClases->SelectedIndex;

		figuras->base = base;
		figuras->altura = altura;
		figuras->lado = lado;

		if (base == 0 || altura == 0 || lado == 0) {
			LblError->Text = "NO PUEDE SER 0";
			LimpiarCajas();
		}
		else {
			if (seleccion == 0) {
				LblAreaa->Text = "El área del círculo es: " + figura1->AreaFigura1();
				LblPerimetroo->Text = "El perímetro del círculo es: " + figura1->PerimetroFigura1();
			}
			else if (seleccion == 2) {
				LblAreaa->Text = "El área del rectángulo es: " + figura2->AreaFigura2();
				LblPerimetroo->Text = "El perímetro del rectángulo es: " + figura2->PerimetroFigura2();
			}
			else {
				LblAreaa->Text = "El área del triángulo es: " + figura3->AreaFigura3();
				LblPerimetroo->Text = "El perímetro del triángulo es: " + figura3->PerimetroFigura3();
			}
		}
		
	}

	
};
}
