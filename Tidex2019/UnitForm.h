#include"ChartForm.h"
#include "ErrorForm.h"
#pragma once
namespace Tidex2019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de UnitForm
	/// </summary>
	public ref class UnitForm : public System::Windows::Forms::Form
	{
	public:
		UnitForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		UnitForm(OpenFileDialog^ filerout, Form^index)
		{
			InitializeComponent();
			fileroute = gcnew OpenFileDialog();
			fileroute = filerout;
			indexform = index;
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~UnitForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Form^ indexform;
	private: OpenFileDialog^ fileroute;
	private: System::Windows::Forms::Label^ label1;
	private: MaterialSkin::Controls::MaterialRaisedButton^ nextbutton;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UnitForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nextbutton = (gcnew MaterialSkin::Controls::MaterialRaisedButton());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 26);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(466, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"In what units is the amplitude of the harmonic file\?";
			// 
			// nextbutton
			// 
			this->nextbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->nextbutton->Depth = 0;
			this->nextbutton->Location = System::Drawing::Point(358, 121);
			this->nextbutton->MouseState = MaterialSkin::MouseState::HOVER;
			this->nextbutton->Name = L"nextbutton";
			this->nextbutton->Primary = true;
			this->nextbutton->Size = System::Drawing::Size(116, 36);
			this->nextbutton->TabIndex = 91;
			this->nextbutton->Text = L"Next";
			this->nextbutton->UseVisualStyleBackColor = true;
			this->nextbutton->Click += gcnew System::EventHandler(this, &UnitForm::Nextbutton_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"cm", L"m", L"cm/s", L"m/s" });
			this->comboBox1->Location = System::Drawing::Point(197, 66);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(72, 32);
			this->comboBox1->TabIndex = 92;
			this->comboBox1->Text = L"cm";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L" Archivos de datos (*.hdf)|*.hdf";
			// 
			// UnitForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::PowderBlue;
			this->ClientSize = System::Drawing::Size(484, 167);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->nextbutton);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"UnitForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Amplitude units";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//se elige la unidad del .hdf y sigue con la predicción
	private: System::Void Nextbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//se genera gráfica con .dat ruta pasada
			ChartForm^ chart = gcnew ChartForm(comboBox1->Text, fileroute->FileName,nullptr); //se le pasa constructor la ruta del .dat elegida y las unidades y se muestra gráfica;
			chart->MdiParent = indexform;
			chart->Show();
		}
		catch (System::ArgumentNullException^ e)
		{
			ErrorForm^ error = gcnew ErrorForm();
			error->Show();
		}
		this->Close();

	}
};
}
