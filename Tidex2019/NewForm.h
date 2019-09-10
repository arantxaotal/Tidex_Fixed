#pragma once
#include"PredictionDoneForm.h"
#include <fstream>
#include <string>
#include <iostream>
#include <process.h>


namespace Tidex2019 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Resumen de NewForm
	/// </summary>
	public ref class NewForm : public System::Windows::Forms::Form
	{

	public:
		NewForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~NewForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ ewbox;
	private: System::Windows::Forms::NumericUpDown^ coordinatesdeg2;
	private: System::Windows::Forms::NumericUpDown^ coordinatesdeg1;
	private: System::Windows::Forms::ComboBox^ namebox;
	private: System::Windows::Forms::NumericUpDown^ depth;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::NumericUpDown^ coordinatesmin2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::DateTimePicker^ begindate;
	private: System::Windows::Forms::DateTimePicker^ enddate;
	private: System::Windows::Forms::NumericUpDown^ coordinatesmin1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ amplitudebox;
	private: System::Windows::Forms::NumericUpDown^ argumentbox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Amplitude;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Argument;
	private: System::Windows::Forms::ComboBox^ nsbox;
	private:
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: MaterialSkin::Controls::MaterialFlatButton^ updatebutton;
	private: MaterialSkin::Controls::MaterialFlatButton^ addbutton;
	private: MaterialSkin::Controls::MaterialFlatButton^ erasebutton;
	private: MaterialSkin::Controls::MaterialRaisedButton^ choosebutton;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::NumericUpDown^ measuretime;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::DateTimePicker^ begintime;
	private: System::Windows::Forms::DateTimePicker^ endtime;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private: MaterialSkin::Controls::MaterialRaisedButton^ acceptbutton;
	private: MaterialSkin::Controls::MaterialRaisedButton^ cancelbutton;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::ComboBox^ unitbox;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::ComponentModel::IContainer^ components;


			 /// <summary>

		/// Variable del dise�ador necesaria.
		/// </summary>

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// M�todo necesario para admitir el Dise�ador. No se puede modificar
			 /// el contenido de este m�todo con el editor de c�digo.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				 System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				 System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NewForm::typeid));
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->ewbox = (gcnew System::Windows::Forms::ComboBox());
				 this->coordinatesdeg2 = (gcnew System::Windows::Forms::NumericUpDown());
				 this->coordinatesdeg1 = (gcnew System::Windows::Forms::NumericUpDown());
				 this->namebox = (gcnew System::Windows::Forms::ComboBox());
				 this->depth = (gcnew System::Windows::Forms::NumericUpDown());
				 this->label8 = (gcnew System::Windows::Forms::Label());
				 this->label10 = (gcnew System::Windows::Forms::Label());
				 this->label11 = (gcnew System::Windows::Forms::Label());
				 this->label12 = (gcnew System::Windows::Forms::Label());
				 this->coordinatesmin2 = (gcnew System::Windows::Forms::NumericUpDown());
				 this->label13 = (gcnew System::Windows::Forms::Label());
				 this->label17 = (gcnew System::Windows::Forms::Label());
				 this->label18 = (gcnew System::Windows::Forms::Label());
				 this->begindate = (gcnew System::Windows::Forms::DateTimePicker());
				 this->enddate = (gcnew System::Windows::Forms::DateTimePicker());
				 this->coordinatesmin1 = (gcnew System::Windows::Forms::NumericUpDown());
				 this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
				 this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->Amplitude = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->Argument = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->label6 = (gcnew System::Windows::Forms::Label());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->amplitudebox = (gcnew System::Windows::Forms::NumericUpDown());
				 this->argumentbox = (gcnew System::Windows::Forms::NumericUpDown());
				 this->nsbox = (gcnew System::Windows::Forms::ComboBox());
				 this->label14 = (gcnew System::Windows::Forms::Label());
				 this->label15 = (gcnew System::Windows::Forms::Label());
				 this->updatebutton = (gcnew MaterialSkin::Controls::MaterialFlatButton());
				 this->addbutton = (gcnew MaterialSkin::Controls::MaterialFlatButton());
				 this->erasebutton = (gcnew MaterialSkin::Controls::MaterialFlatButton());
				 this->choosebutton = (gcnew MaterialSkin::Controls::MaterialRaisedButton());
				 this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->measuretime = (gcnew System::Windows::Forms::NumericUpDown());
				 this->label16 = (gcnew System::Windows::Forms::Label());
				 this->label19 = (gcnew System::Windows::Forms::Label());
				 this->begintime = (gcnew System::Windows::Forms::DateTimePicker());
				 this->endtime = (gcnew System::Windows::Forms::DateTimePicker());
				 this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
				 this->acceptbutton = (gcnew MaterialSkin::Controls::MaterialRaisedButton());
				 this->cancelbutton = (gcnew MaterialSkin::Controls::MaterialRaisedButton());
				 this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
				 this->unitbox = (gcnew System::Windows::Forms::ComboBox());
				 this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
				 this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coordinatesdeg2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coordinatesdeg1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->depth))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coordinatesmin2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coordinatesmin1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->amplitudebox))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->argumentbox))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->measuretime))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->BackColor = System::Drawing::Color::Transparent;
				 this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label1->ForeColor = System::Drawing::Color::Black;
				 this->label1->Location = System::Drawing::Point(41, 57);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(196, 20);
				 this->label1->TabIndex = 0;
				 this->label1->Text = L"Begin time for prediction";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->BackColor = System::Drawing::Color::Transparent;
				 this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label2->ForeColor = System::Drawing::Color::Black;
				 this->label2->Location = System::Drawing::Point(40, 92);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(182, 20);
				 this->label2->TabIndex = 1;
				 this->label2->Text = L"End time for prediction";
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->BackColor = System::Drawing::Color::Transparent;
				 this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label3->ForeColor = System::Drawing::Color::Black;
				 this->label3->Location = System::Drawing::Point(41, 163);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(101, 20);
				 this->label3->TabIndex = 2;
				 this->label3->Text = L"Coordinates";
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->BackColor = System::Drawing::Color::Transparent;
				 this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label4->ForeColor = System::Drawing::Color::Black;
				 this->label4->Location = System::Drawing::Point(41, 210);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(56, 20);
				 this->label4->TabIndex = 3;
				 this->label4->Text = L"Depth";
				 // 
				 // ewbox
				 // 
				 this->ewbox->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->ewbox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"E", L"W" });
				 this->ewbox->Location = System::Drawing::Point(733, 154);
				 this->ewbox->Name = L"ewbox";
				 this->ewbox->Size = System::Drawing::Size(58, 28);
				 this->ewbox->TabIndex = 18;
				 this->ewbox->Text = L"E";
				 // 
				 // coordinatesdeg2
				 // 
				 this->coordinatesdeg2->DecimalPlaces = 3;
				 this->coordinatesdeg2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->coordinatesdeg2->Location = System::Drawing::Point(583, 154);
				 this->coordinatesdeg2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 180, 0, 0, 0 });
				 this->coordinatesdeg2->Name = L"coordinatesdeg2";
				 this->coordinatesdeg2->Size = System::Drawing::Size(82, 29);
				 this->coordinatesdeg2->TabIndex = 35;
				 // 
				 // coordinatesdeg1
				 // 
				 this->coordinatesdeg1->DecimalPlaces = 3;
				 this->coordinatesdeg1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->coordinatesdeg1->Location = System::Drawing::Point(297, 153);
				 this->coordinatesdeg1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 90, 0, 0, 0 });
				 this->coordinatesdeg1->Name = L"coordinatesdeg1";
				 this->coordinatesdeg1->Size = System::Drawing::Size(82, 29);
				 this->coordinatesdeg1->TabIndex = 31;
				 // 
				 // namebox
				 // 
				 this->namebox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				 this->namebox->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->namebox->FormattingEnabled = true;
				 this->namebox->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
					 L"Z0", L"SSA", L"MM", L"MSF", L"MF", L"ALP1", L"2Q1",
						 L"SIG1", L"Q1", L"RH01", L"01", L"TAU1", L"BET1", L"N01", L"CHI1", L"P1", L"K1", L"PHI1", L"THE1", L"J1", L"S01", L"001", L"UPS1",
						 L"OQ2", L"EPS2", L"2N2", L"MU2", L"N2", L"NU2", L"M2", L"MKS2", L"LDA2", L"L2", L"S2", L"K2", L"MSN2", L"ETA2", L"M03", L"M3",
						 L"S03", L"MK3", L"SK3", L"MN4", L"M4", L"SN4", L"MS4", L"MK4", L"S4", L"SK4", L"2MK5", L"2SK5", L"2MN6", L"M6", L"2MS6", L"2MK6",
						 L"2SM6", L"MSK6", L"3MK7", L"M8", L"M10"
				 });
				 this->namebox->Location = System::Drawing::Point(548, 223);
				 this->namebox->Name = L"namebox";
				 this->namebox->Size = System::Drawing::Size(71, 28);
				 this->namebox->TabIndex = 36;
				 this->namebox->Text = L"Z0";
				 // 
				 // depth
				 // 
				 this->depth->DecimalPlaces = 4;
				 this->depth->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->depth->Location = System::Drawing::Point(103, 201);
				 this->depth->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 11022, 0, 0, 0 });
				 this->depth->Name = L"depth";
				 this->depth->Size = System::Drawing::Size(184, 29);
				 this->depth->TabIndex = 37;
				 // 
				 // label8
				 // 
				 this->label8->AutoSize = true;
				 this->label8->BackColor = System::Drawing::Color::Transparent;
				 this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label8->ForeColor = System::Drawing::Color::Black;
				 this->label8->Location = System::Drawing::Point(704, 21);
				 this->label8->Name = L"label8";
				 this->label8->Size = System::Drawing::Size(47, 20);
				 this->label8->TabIndex = 41;
				 this->label8->Text = L"Hour";
				 // 
				 // label10
				 // 
				 this->label10->AutoSize = true;
				 this->label10->BackColor = System::Drawing::Color::Transparent;
				 this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label10->ForeColor = System::Drawing::Color::Black;
				 this->label10->Location = System::Drawing::Point(293, 132);
				 this->label10->Name = L"label10";
				 this->label10->Size = System::Drawing::Size(71, 20);
				 this->label10->TabIndex = 43;
				 this->label10->Text = L"Degrees";
				 // 
				 // label11
				 // 
				 this->label11->AutoSize = true;
				 this->label11->BackColor = System::Drawing::Color::Transparent;
				 this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label11->ForeColor = System::Drawing::Color::Black;
				 this->label11->Location = System::Drawing::Point(385, 132);
				 this->label11->Name = L"label11";
				 this->label11->Size = System::Drawing::Size(38, 20);
				 this->label11->TabIndex = 44;
				 this->label11->Text = L"Min";
				 // 
				 // label12
				 // 
				 this->label12->AutoSize = true;
				 this->label12->BackColor = System::Drawing::Color::Transparent;
				 this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label12->ForeColor = System::Drawing::Color::Black;
				 this->label12->Location = System::Drawing::Point(579, 132);
				 this->label12->Name = L"label12";
				 this->label12->Size = System::Drawing::Size(71, 20);
				 this->label12->TabIndex = 45;
				 this->label12->Text = L"Degrees";
				 // 
				 // coordinatesmin2
				 // 
				 this->coordinatesmin2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->coordinatesmin2->Location = System::Drawing::Point(671, 154);
				 this->coordinatesmin2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
				 this->coordinatesmin2->Name = L"coordinatesmin2";
				 this->coordinatesmin2->Size = System::Drawing::Size(57, 29);
				 this->coordinatesmin2->TabIndex = 46;
				 // 
				 // label13
				 // 
				 this->label13->AutoSize = true;
				 this->label13->BackColor = System::Drawing::Color::Transparent;
				 this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label13->ForeColor = System::Drawing::Color::Black;
				 this->label13->Location = System::Drawing::Point(667, 132);
				 this->label13->Name = L"label13";
				 this->label13->Size = System::Drawing::Size(38, 20);
				 this->label13->TabIndex = 47;
				 this->label13->Text = L"Min";
				 // 
				 // label17
				 // 
				 this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				 this->label17->AutoSize = true;
				 this->label17->BackColor = System::Drawing::Color::PowderBlue;
				 this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label17->ForeColor = System::Drawing::Color::Black;
				 this->label17->Location = System::Drawing::Point(52, 696);
				 this->label17->Name = L"label17";
				 this->label17->Size = System::Drawing::Size(194, 20);
				 this->label17->TabIndex = 53;
				 this->label17->Text = L"Data File for Assimilation";
				 // 
				 // label18
				 // 
				 this->label18->AutoSize = true;
				 this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label18->Location = System::Drawing::Point(292, 210);
				 this->label18->Name = L"label18";
				 this->label18->Size = System::Drawing::Size(24, 20);
				 this->label18->TabIndex = 58;
				 this->label18->Text = L"m";
				 // 
				 // begindate
				 // 
				 this->begindate->CalendarTitleBackColor = System::Drawing::Color::SteelBlue;
				 this->begindate->CustomFormat = L"";
				 this->begindate->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->begindate->Location = System::Drawing::Point(296, 51);
				 this->begindate->Name = L"begindate";
				 this->begindate->Size = System::Drawing::Size(402, 29);
				 this->begindate->TabIndex = 59;
				 // 
				 // enddate
				 // 
				 this->enddate->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->enddate->Location = System::Drawing::Point(296, 86);
				 this->enddate->Name = L"enddate";
				 this->enddate->Size = System::Drawing::Size(402, 29);
				 this->enddate->TabIndex = 60;
				 // 
				 // coordinatesmin1
				 // 
				 this->coordinatesmin1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->coordinatesmin1->Location = System::Drawing::Point(385, 153);
				 this->coordinatesmin1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
				 this->coordinatesmin1->Name = L"coordinatesmin1";
				 this->coordinatesmin1->Size = System::Drawing::Size(57, 29);
				 this->coordinatesmin1->TabIndex = 61;
				 // 
				 // dataGridView1
				 // 
				 this->dataGridView1->AllowUserToAddRows = false;
				 this->dataGridView1->AllowUserToDeleteRows = false;
				 this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					 | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
				 this->dataGridView1->BackgroundColor = System::Drawing::Color::DarkSlateGray;
				 this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				 this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
					 this->Nombre,
						 this->Amplitude, this->Argument
				 });
				 this->dataGridView1->Location = System::Drawing::Point(45, 260);
				 this->dataGridView1->Name = L"dataGridView1";
				 this->dataGridView1->RowHeadersWidth = 51;
				 this->dataGridView1->Size = System::Drawing::Size(1016, 172);
				 this->dataGridView1->TabIndex = 62;
				 this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &NewForm::dataGridView1_CellContentClick);
				 // 
				 // Nombre
				 // 
				 this->Nombre->HeaderText = L"Name";
				 this->Nombre->MinimumWidth = 6;
				 this->Nombre->Name = L"Nombre";
				 this->Nombre->ReadOnly = true;
				 this->Nombre->Resizable = System::Windows::Forms::DataGridViewTriState::True;
				 // 
				 // Amplitude
				 // 
				 dataGridViewCellStyle1->NullValue = nullptr;
				 this->Amplitude->DefaultCellStyle = dataGridViewCellStyle1;
				 this->Amplitude->HeaderText = L"Amplitude";
				 this->Amplitude->MinimumWidth = 6;
				 this->Amplitude->Name = L"Amplitude";
				 this->Amplitude->ReadOnly = true;
				 // 
				 // Argument
				 // 
				 dataGridViewCellStyle2->NullValue = nullptr;
				 this->Argument->DefaultCellStyle = dataGridViewCellStyle2;
				 this->Argument->HeaderText = L"Argument";
				 this->Argument->MinimumWidth = 6;
				 this->Argument->Name = L"Argument";
				 this->Argument->ReadOnly = true;
				 // 
				 // label5
				 // 
				 this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				 this->label5->AutoSize = true;
				 this->label5->BackColor = System::Drawing::Color::Transparent;
				 this->label5->Cursor = System::Windows::Forms::Cursors::Default;
				 this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label5->ForeColor = System::Drawing::Color::Black;
				 this->label5->Location = System::Drawing::Point(544, 198);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(55, 20);
				 this->label5->TabIndex = 63;
				 this->label5->Text = L"Name";
				 // 
				 // label6
				 // 
				 this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				 this->label6->AutoSize = true;
				 this->label6->BackColor = System::Drawing::Color::Transparent;
				 this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label6->ForeColor = System::Drawing::Color::Black;
				 this->label6->Location = System::Drawing::Point(620, 201);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(88, 20);
				 this->label6->TabIndex = 64;
				 this->label6->Text = L"Amplitude";
				 // 
				 // label7
				 // 
				 this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				 this->label7->AutoSize = true;
				 this->label7->BackColor = System::Drawing::Color::Transparent;
				 this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label7->ForeColor = System::Drawing::Color::Black;
				 this->label7->Location = System::Drawing::Point(828, 198);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(86, 20);
				 this->label7->TabIndex = 65;
				 this->label7->Text = L"Argument";
				 // 
				 // amplitudebox
				 // 
				 this->amplitudebox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				 this->amplitudebox->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->amplitudebox->Location = System::Drawing::Point(624, 222);
				 this->amplitudebox->Name = L"amplitudebox";
				 this->amplitudebox->Size = System::Drawing::Size(120, 29);
				 this->amplitudebox->TabIndex = 93;
				 // 
				 // argumentbox
				 // 
				 this->argumentbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				 this->argumentbox->DecimalPlaces = 2;
				 this->argumentbox->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->argumentbox->Location = System::Drawing::Point(830, 221);
				 this->argumentbox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 360, 0, 0, 0 });
				 this->argumentbox->Name = L"argumentbox";
				 this->argumentbox->Size = System::Drawing::Size(137, 29);
				 this->argumentbox->TabIndex = 67;
				 // 
				 // nsbox
				 // 
				 this->nsbox->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->nsbox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"N", L"S" });
				 this->nsbox->Location = System::Drawing::Point(448, 154);
				 this->nsbox->Name = L"nsbox";
				 this->nsbox->Size = System::Drawing::Size(58, 28);
				 this->nsbox->TabIndex = 70;
				 this->nsbox->Text = L"N";
				 // 
				 // label14
				 // 
				 this->label14->AutoSize = true;
				 this->label14->BackColor = System::Drawing::Color::Transparent;
				 this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label14->ForeColor = System::Drawing::Color::Black;
				 this->label14->Location = System::Drawing::Point(220, 163);
				 this->label14->Name = L"label14";
				 this->label14->Size = System::Drawing::Size(71, 20);
				 this->label14->TabIndex = 71;
				 this->label14->Text = L"Latitude";
				 // 
				 // label15
				 // 
				 this->label15->AutoSize = true;
				 this->label15->BackColor = System::Drawing::Color::Transparent;
				 this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label15->ForeColor = System::Drawing::Color::Black;
				 this->label15->Location = System::Drawing::Point(521, 163);
				 this->label15->Name = L"label15";
				 this->label15->Size = System::Drawing::Size(62, 20);
				 this->label15->TabIndex = 72;
				 this->label15->Text = L"Length";
				 // 
				 // updatebutton
				 // 
				 this->updatebutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
				 this->updatebutton->AutoSize = true;
				 this->updatebutton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
				 this->updatebutton->BackColor = System::Drawing::Color::DeepSkyBlue;
				 this->updatebutton->Depth = 0;
				 this->updatebutton->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->updatebutton->Location = System::Drawing::Point(946, 434);
				 this->updatebutton->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
				 this->updatebutton->MouseState = MaterialSkin::MouseState::HOVER;
				 this->updatebutton->Name = L"updatebutton";
				 this->updatebutton->Primary = false;
				 this->updatebutton->Size = System::Drawing::Size(121, 36);
				 this->updatebutton->TabIndex = 76;
				 this->updatebutton->Text = L"Apply Changes";
				 this->updatebutton->UseVisualStyleBackColor = false;
				 this->updatebutton->Click += gcnew System::EventHandler(this, &NewForm::updatebutton_Click);
				 // 
				 // addbutton
				 // 
				 this->addbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				 this->addbutton->AutoSize = true;
				 this->addbutton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
				 this->addbutton->Depth = 0;
				 this->addbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->addbutton->Location = System::Drawing::Point(973, 219);
				 this->addbutton->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
				 this->addbutton->MouseState = MaterialSkin::MouseState::HOVER;
				 this->addbutton->Name = L"addbutton";
				 this->addbutton->Primary = false;
				 this->addbutton->Size = System::Drawing::Size(20, 36);
				 this->addbutton->TabIndex = 78;
				 this->addbutton->Text = L"+";
				 this->addbutton->UseVisualStyleBackColor = true;
				 this->addbutton->Click += gcnew System::EventHandler(this, &NewForm::addbutton_Click);
				 // 
				 // erasebutton
				 // 
				 this->erasebutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				 this->erasebutton->AutoSize = true;
				 this->erasebutton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
				 this->erasebutton->Depth = 0;
				 this->erasebutton->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->erasebutton->Location = System::Drawing::Point(1012, 219);
				 this->erasebutton->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
				 this->erasebutton->MouseState = MaterialSkin::MouseState::HOVER;
				 this->erasebutton->Name = L"erasebutton";
				 this->erasebutton->Primary = false;
				 this->erasebutton->Size = System::Drawing::Size(53, 36);
				 this->erasebutton->TabIndex = 79;
				 this->erasebutton->Text = L"erase";
				 this->erasebutton->UseVisualStyleBackColor = true;
				 this->erasebutton->Click += gcnew System::EventHandler(this, &NewForm::erasebutton_Click);
				 // 
				 // choosebutton
				 // 
				 this->choosebutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				 this->choosebutton->Depth = 0;
				 this->choosebutton->Location = System::Drawing::Point(594, 681);
				 this->choosebutton->MouseState = MaterialSkin::MouseState::HOVER;
				 this->choosebutton->Name = L"choosebutton";
				 this->choosebutton->Primary = true;
				 this->choosebutton->Size = System::Drawing::Size(116, 36);
				 this->choosebutton->TabIndex = 80;
				 this->choosebutton->Text = L"Choose";
				 this->choosebutton->UseVisualStyleBackColor = true;
				 this->choosebutton->Click += gcnew System::EventHandler(this, &NewForm::choosebutton_Click);
				 // 
				 // openFileDialog1
				 // 
				 this->openFileDialog1->DefaultExt = L"odf";
				 this->openFileDialog1->FileName = L"untitled";
				 this->openFileDialog1->Filter = L"Archivos de datos (*.odf)|*.odf";
				 this->openFileDialog1->InitialDirectory = L"C:\\Users\\...\\Documents";
				 this->openFileDialog1->Multiselect = true;
				 this->openFileDialog1->RestoreDirectory = true;
				 // 
				 // measuretime
				 // 
				 this->measuretime->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->measuretime->Location = System::Drawing::Point(296, 16);
				 this->measuretime->Name = L"measuretime";
				 this->measuretime->Size = System::Drawing::Size(75, 29);
				 this->measuretime->TabIndex = 81;
				 this->measuretime->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
				 // 
				 // label16
				 // 
				 this->label16->AutoSize = true;
				 this->label16->BackColor = System::Drawing::Color::Transparent;
				 this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label16->ForeColor = System::Drawing::Color::Black;
				 this->label16->Location = System::Drawing::Point(377, 25);
				 this->label16->Name = L"label16";
				 this->label16->Size = System::Drawing::Size(38, 20);
				 this->label16->TabIndex = 82;
				 this->label16->Text = L"Min";
				 // 
				 // label19
				 // 
				 this->label19->AutoSize = true;
				 this->label19->BackColor = System::Drawing::Color::Transparent;
				 this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label19->ForeColor = System::Drawing::Color::Black;
				 this->label19->Location = System::Drawing::Point(40, 25);
				 this->label19->Name = L"label19";
				 this->label19->Size = System::Drawing::Size(159, 20);
				 this->label19->TabIndex = 83;
				 this->label19->Text = L"Measurement Time ";
				 // 
				 // begintime
				 // 
				 this->begintime->CalendarTitleBackColor = System::Drawing::Color::SteelBlue;
				 this->begintime->CustomFormat = L"";
				 this->begintime->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->begintime->Format = System::Windows::Forms::DateTimePickerFormat::Time;
				 this->begintime->Location = System::Drawing::Point(709, 50);
				 this->begintime->Name = L"begintime";
				 this->begintime->ShowUpDown = true;
				 this->begintime->Size = System::Drawing::Size(98, 29);
				 this->begintime->TabIndex = 84;
				 // 
				 // endtime
				 // 
				 this->endtime->CalendarTitleBackColor = System::Drawing::Color::SteelBlue;
				 this->endtime->CustomFormat = L"";
				 this->endtime->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->endtime->Format = System::Windows::Forms::DateTimePickerFormat::Time;
				 this->endtime->Location = System::Drawing::Point(709, 86);
				 this->endtime->Name = L"endtime";
				 this->endtime->ShowUpDown = true;
				 this->endtime->Size = System::Drawing::Size(98, 29);
				 this->endtime->TabIndex = 85;
				 // 
				 // saveFileDialog1
				 // 
				 this->saveFileDialog1->DefaultExt = L"hdf";
				 this->saveFileDialog1->FileName = L"untitled";
				 this->saveFileDialog1->Filter = L"Archivos de datos (*.hdf)|*.hdf";
				 this->saveFileDialog1->InitialDirectory = L"C:\\Users\\...\\Documents";
				 this->saveFileDialog1->Title = L"Save harmonic file";
				 // 
				 // acceptbutton
				 // 
				 this->acceptbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
				 this->acceptbutton->Depth = 0;
				 this->acceptbutton->Location = System::Drawing::Point(919, 681);
				 this->acceptbutton->MouseState = MaterialSkin::MouseState::HOVER;
				 this->acceptbutton->Name = L"acceptbutton";
				 this->acceptbutton->Primary = true;
				 this->acceptbutton->Size = System::Drawing::Size(116, 36);
				 this->acceptbutton->TabIndex = 87;
				 this->acceptbutton->Text = L"SAVE PREDICTION";
				 this->acceptbutton->UseVisualStyleBackColor = true;
				 this->acceptbutton->Click += gcnew System::EventHandler(this, &NewForm::acceptbutton_Click);
				 // 
				 // cancelbutton
				 // 
				 this->cancelbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
				 this->cancelbutton->Depth = 0;
				 this->cancelbutton->Location = System::Drawing::Point(1041, 681);
				 this->cancelbutton->MouseState = MaterialSkin::MouseState::HOVER;
				 this->cancelbutton->Name = L"cancelbutton";
				 this->cancelbutton->Primary = true;
				 this->cancelbutton->Size = System::Drawing::Size(116, 36);
				 this->cancelbutton->TabIndex = 88;
				 this->cancelbutton->Text = L"Cancel";
				 this->cancelbutton->UseVisualStyleBackColor = true;
				 this->cancelbutton->Click += gcnew System::EventHandler(this, &NewForm::cancelbutton_Click_1);
				 // 
				 // richTextBox2
				 // 
				 this->richTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				 this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->richTextBox2->Location = System::Drawing::Point(252, 689);
				 this->richTextBox2->Name = L"richTextBox2";
				 this->richTextBox2->Size = System::Drawing::Size(338, 27);
				 this->richTextBox2->TabIndex = 90;
				 this->richTextBox2->Text = L"";
				 // 
				 // unitbox
				 // 
				 this->unitbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				 this->unitbox->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->unitbox->FormattingEnabled = true;
				 this->unitbox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"cm/s", L"m", L"m/s" });
				 this->unitbox->Location = System::Drawing::Point(767, 222);
				 this->unitbox->Name = L"unitbox";
				 this->unitbox->Size = System::Drawing::Size(58, 28);
				 this->unitbox->TabIndex = 91;
				 this->unitbox->Text = L"m/s";
				 // 
				 // saveFileDialog2
				 // 
				 this->saveFileDialog2->DefaultExt = L"dat";
				 this->saveFileDialog2->Filter = L"Archivos de datos (*.dat)|*.dat";
				 this->saveFileDialog2->Title = L"Save data file";
				 // 
				 // richTextBox1
				 // 
				 this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				 this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->richTextBox1->Location = System::Drawing::Point(44, 443);
				 this->richTextBox1->Name = L"richTextBox1";
				 this->richTextBox1->ReadOnly = true;
				 this->richTextBox1->Size = System::Drawing::Size(870, 232);
				 this->richTextBox1->TabIndex = 92;
				 this->richTextBox1->Text = L"";
				 // 
				 // NewForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::PowderBlue;
				 this->ClientSize = System::Drawing::Size(1171, 729);
				 this->Controls->Add(this->unitbox);
				 this->Controls->Add(this->richTextBox2);
				 this->Controls->Add(this->cancelbutton);
				 this->Controls->Add(this->acceptbutton);
				 this->Controls->Add(this->richTextBox1);
				 this->Controls->Add(this->endtime);
				 this->Controls->Add(this->begintime);
				 this->Controls->Add(this->label19);
				 this->Controls->Add(this->label16);
				 this->Controls->Add(this->measuretime);
				 this->Controls->Add(this->choosebutton);
				 this->Controls->Add(this->erasebutton);
				 this->Controls->Add(this->addbutton);
				 this->Controls->Add(this->updatebutton);
				 this->Controls->Add(this->label15);
				 this->Controls->Add(this->label14);
				 this->Controls->Add(this->nsbox);
				 this->Controls->Add(this->argumentbox);
				 this->Controls->Add(this->amplitudebox);
				 this->Controls->Add(this->label7);
				 this->Controls->Add(this->label6);
				 this->Controls->Add(this->label5);
				 this->Controls->Add(this->dataGridView1);
				 this->Controls->Add(this->coordinatesmin1);
				 this->Controls->Add(this->enddate);
				 this->Controls->Add(this->begindate);
				 this->Controls->Add(this->label18);
				 this->Controls->Add(this->label17);
				 this->Controls->Add(this->label13);
				 this->Controls->Add(this->coordinatesmin2);
				 this->Controls->Add(this->label12);
				 this->Controls->Add(this->label11);
				 this->Controls->Add(this->label10);
				 this->Controls->Add(this->label8);
				 this->Controls->Add(this->depth);
				 this->Controls->Add(this->namebox);
				 this->Controls->Add(this->coordinatesdeg2);
				 this->Controls->Add(this->coordinatesdeg1);
				 this->Controls->Add(this->ewbox);
				 this->Controls->Add(this->label4);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->label1);
				 this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
				 this->MinimumSize = System::Drawing::Size(1187, 768);
				 this->Name = L"NewForm";
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"Data for prediction";
				 this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coordinatesdeg2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coordinatesdeg1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->depth))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coordinatesmin2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coordinatesmin1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->amplitudebox))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->argumentbox))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->measuretime))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int n = e->RowIndex;

	}
	 //M�todo que aplica los datos a�adidos al cuadro de texto
	private: System::Void updatebutton_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Clear();
		//ChartForm^ chart = gcnew ChartForm();
		//saveFileDialog1->ShowDialog();

		//chart->Show(this);

		//richTextBox1->AppendText(label19->Text + " : " + measuretime->Value+" min.\n");
		//richTextBox1->AppendText(label1->Text + " : " + begindate->Value+" "+begintime->Value+"\n");
		//richTextBox1->AppendText(label2->Text + " : " + enddate->Value+" "+endtime->Value+"\n");
		richTextBox1->AppendText(coordinatesdeg1->Value + " " + coordinatesmin1->Value +
			"\n" + coordinatesdeg2->Value + " " + coordinatesmin2->Value + "\n");

		System::DateTime beginDate = begindate->Value;
		System::DateTime beginTime = begintime->Value;
		System::DateTime endDate = enddate->Value;
		System::DateTime endTime = endtime->Value;

		//helper.GetDay(msclr::interop::marshal_as<std::string>(begindate->Text), msclr::interop::marshal_as<std::string>(begintime->Text));
		richTextBox1->AppendText(beginTime.Hour + " " + beginTime.Minute + " " + beginDate.Day + " " + beginDate.Month + " " + beginDate.Year + "\n");
		richTextBox1->AppendText(endTime.Hour + " " + endTime.Minute + " " + endDate.Day + " " + endDate.Month + " " + endDate.Year + "\n");

		//std::cout << dia.Day << " - " << dia.Month << " - " << dia.Year << std::endl;
		//std::cout << msclr::interop::marshal_as<std::string>(begintime->Text) << std::endl;

		//richTextBox1->AppendText(depth->Value+"\n");

		for (int i = 0; i < dataGridView1->RowCount; ++i)
		{
			richTextBox1->AppendText(dataGridView1->Rows[i]->Cells[0]->Value + " ");
			richTextBox1->AppendText(dataGridView1->Rows[i]->Cells[1]->Value + " ");
			richTextBox1->AppendText(dataGridView1->Rows[i]->Cells[2]->Value + "\n");
		}


	}
	//Metodo de cerrar ventana
	private: System::Void cancelbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	//M�todo de a�adir nueva fila a la tabla
	private: System::Void addbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		//add nueva fila
		int x = dataGridView1->Rows->Add();
		//colocamos info
		dataGridView1->Rows[x]->Cells[0]->Value = namebox->Text;
		int i = 0;

		std::string amplitude = msclr::interop::marshal_as<std::string>(amplitudebox->Text);
		std::string argument = msclr::interop::marshal_as<std::string>(argumentbox->Text);

		while (i < amplitude.size())
		{
			if (amplitude[i] == ',')
			{
				amplitude[i] = '.';
			}
			i++;
		}
		i = 0;
		while (i < argument.size())
		{
			if (argument[i] == ',')
			{
				argument[i] = '.';
			}
			i++;
		}

		dataGridView1->Rows[x]->Cells[1]->Value = msclr::interop::marshal_as<String^>(amplitude);
		dataGridView1->Rows[x]->Cells[2]->Value = msclr::interop::marshal_as<String^>(argument);
		namebox->Text = "";
		amplitudebox->Text = "";
		argumentbox->Text = "";

	}
	//M�todo de borrar una fila de la tabla
	private: System::Void erasebutton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dataGridView1->Rows->Count > 0 && dataGridView1->Rows != nullptr)
		{
			int n = dataGridView1->CurrentRow->Index;
			if (n != -1 && dataGridView1->Rows != nullptr && dataGridView1->Rows->Count != 0)
			{
				dataGridView1->Rows->RemoveAt(n);
			}
		}


	}
	//M�todo de elegir archivo y guardar ruta en cuadro de texto
	private: System::Void choosebutton_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->ShowDialog();
		richTextBox2->AppendText(openFileDialog1->FileName);
	}
	//M�todo de bot�n de aceptar que abre ventana para guardar fichero predicci�n, lo guarda en .dat y muestra gr�fica
	private: System::Void acceptbutton_Click(System::Object^ sender, System::EventArgs^ e)
	{

		char buf[256];
		GetCurrentDirectoryA(256, buf);
		saveFileDialog1->ShowDialog();
		richTextBox1->SaveFile(saveFileDialog1->FileName, System::Windows::Forms::RichTextBoxStreamType::PlainText);
		std::stringstream ssExec, ssAstroFile, ssOutputFile, ssDateFile, ssFinalFile;
		ssExec << buf << "\\TIDEX\\Tidex2019\\long2000.exe";
		ssAstroFile << buf << "\\TIDEX\\Tidex2019\\Astro.dat";
		ssOutputFile << buf << "\\TIDEX\\Tidex2019\\Output.dat";
		ssDateFile << buf << "\\TIDEX\\Tidex2019\\calc.tmp";
		//ssFinalFile << buf << "\\finalData.dat";
		std::string execPath = ssExec.str();
		std::string astroPath = ssAstroFile.str();
		std::string outputPath = ssOutputFile.str();
		std::string datePath = msclr::interop::marshal_as<std::string>(saveFileDialog1->FileName);

		spawnl(P_WAIT, execPath.c_str(), execPath.c_str(), astroPath.c_str(), outputPath.c_str(), datePath.c_str(), NULL);

		std::filebuf finalFile, outputFile;

		saveFileDialog2->ShowDialog();
		if (!outputFile.open(outputPath.c_str(), std::ios::in) || !finalFile.open(msclr::interop::marshal_as<std::string>(saveFileDialog2->FileName), std::ios::out))
		{
			std::cout << "Error!" << std::endl;
			exit(-1);
		}
		std::istream* outputFileStream = new std::istream(&outputFile);
		std::ostream* finalFileStream = new std::ostream(&finalFile);
		int lines;
		*outputFileStream >> lines;
		int i = 0;
		while (i < lines)
		{
			std::string hour, minute, day, month, year, value;
			int hourInt, minInt, dayInt, monthInt;
			std::stringstream hourStream, minuteStream, dayStream, monthStream;

			*outputFileStream >> hour >> minute >> day >> month >> year >> value;

			hourInt = std::stoi(hour);
			minInt = std::stoi(minute);
			dayInt = std::stoi(day);
			monthInt = std::stoi(month);

			if (hourInt < 10)
			{
				hourStream << "0" << hour;
				hour = hourStream.str();
			}
			if (minInt < 10)
			{
				minuteStream << "0" << minInt;
				minute = minuteStream.str();
			}
			if (dayInt < 10)
			{
				dayStream << "0" << dayInt;
				day = dayStream.str();
			}
			if (monthInt < 10)
			{
				monthStream << "0" << monthInt;
				month = monthStream.str();
			}

			*finalFileStream << hour << ":" << minute<< " " << day << " " << month << " " << year << "  " << value << "\n";
			i++;
		}
		delete outputFileStream;
		delete finalFileStream;
		finalFile.close();
		outputFile.close();
		ChartForm^ chart = gcnew ChartForm(unitbox->Text, saveFileDialog2->FileName);
		chart->Show();
		this->Close();
	}
	//M�todo de bot�n de cerrar ventana
	private: System::Void cancelbutton_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

};
}

