#pragma once
#include "PredictionDoneForm.h"
#include "ChartForm.h"
namespace Tidex2019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de UnityForm
	/// </summary>
	public ref class UnitForm : public System::Windows::Forms::Form
	{
	public:
		UnitForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		UnitForm(String^ filerout, const char* ext)
		{
			InitializeComponent();
			fileroute = filerout;
			extension = ext;
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~UnitForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ fileroute;
	private: const char* extension;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ unitybox;
	private: MaterialSkin::Controls::MaterialRaisedButton^ acceptbutton;
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UnitForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->unitybox = (gcnew System::Windows::Forms::ComboBox());
			this->acceptbutton = (gcnew MaterialSkin::Controls::MaterialRaisedButton());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12.10084F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(483, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"In which unit is the amplitude of the harmonic file\?";
			this->label1->UseWaitCursor = true;
			// 
			// unitybox
			// 
			this->unitybox->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 15.73109F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->unitybox->FormattingEnabled = true;
			this->unitybox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"m/s", L"cm/s", L"m" });
			this->unitybox->Location = System::Drawing::Point(226, 121);
			this->unitybox->Name = L"unitybox";
			this->unitybox->Size = System::Drawing::Size(101, 41);
			this->unitybox->TabIndex = 1;
			this->unitybox->Text = L"m/s";
			this->unitybox->UseWaitCursor = true;
			// 
			// acceptbutton
			// 
			this->acceptbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->acceptbutton->Depth = 0;
			this->acceptbutton->Location = System::Drawing::Point(398, 214);
			this->acceptbutton->Margin = System::Windows::Forms::Padding(4);
			this->acceptbutton->MouseState = MaterialSkin::MouseState::HOVER;
			this->acceptbutton->Name = L"acceptbutton";
			this->acceptbutton->Primary = true;
			this->acceptbutton->Size = System::Drawing::Size(155, 44);
			this->acceptbutton->TabIndex = 88;
			this->acceptbutton->Text = L"NEXT";
			this->acceptbutton->UseVisualStyleBackColor = true;
			this->acceptbutton->UseWaitCursor = true;
			this->acceptbutton->Click += gcnew System::EventHandler(this, &UnitForm::Acceptbutton_Click);
			// 
			// UnitForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PowderBlue;
			this->ClientSize = System::Drawing::Size(566, 271);
			this->Controls->Add(this->acceptbutton);
			this->Controls->Add(this->unitybox);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"UnitForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Unities";
			this->UseWaitCursor = true;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Acceptbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (extension == "hdf")
		{
			//se hacen los calculos aqu� con el .hdf route solicitado y se genera .dat temporal
			//prediccion generada desea guardar?
			//se abre dialogo save para guardar el .dat , donde desea guardarlo?
			PredictionDoneForm^ predictiondoneform = gcnew PredictionDoneForm(/*pasar por aqui la ruta .dat*/unitybox->Text); //se le pasa constructor la ruta del .dat generado y las unidades y se muestra gr�fica;
			predictiondoneform->Show();
			this->Close();
		}
		else
		{
			//se genera gr�fica con .dat ruta pasada
			ChartForm^ predictiondoneform = gcnew ChartForm(/*pasar por aqui la ruta .dat*/unitybox->Text); //se le pasa constructor la ruta del .dat elegida y las unidades y se muestra gr�fica;
			predictiondoneform->Show();
			this->Close();

		}

	}
	};
}
