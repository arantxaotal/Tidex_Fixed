#include "NewForm.h"
#include "HelpForm.h"
#pragma once



namespace Tidex2019 {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  FILE;
	protected:

	private: System::Windows::Forms::ToolStripMenuItem^  FILE_NEW;
	private: System::Windows::Forms::ToolStripMenuItem^  EDIT;
	private: System::Windows::Forms::ToolStripMenuItem^  WINDOW;
	private: System::Windows::Forms::ToolStripMenuItem^  HELP;






	private: System::Windows::Forms::ToolStripMenuItem^  HELP_ABOUT;

	private: System::Windows::Forms::ToolStripMenuItem^  FILE_OPEN;
	private: System::Windows::Forms::ToolStripMenuItem^  FILE_CLOSE;
	private: System::Windows::Forms::ToolStripMenuItem^  FILE_SAVE;

	private: System::Windows::Forms::ToolStripMenuItem^  FILE_SAVEPREDICTION;
	private: System::Windows::Forms::ToolStripMenuItem^  FILE_PRINTPREVIEW;
	private: System::Windows::Forms::ToolStripMenuItem^  FILE_PRINT;
	private: System::Windows::Forms::ToolStripMenuItem^  FILE_PRINTSETUP;

	private: System::Windows::Forms::ToolStripMenuItem^  EDIT_MODIFY;
	private: System::Windows::Forms::ToolStripMenuItem^  WINDOW_ZOOMIN;











	private: System::Windows::Forms::ToolStripMenuItem^  WINDOW_ZOOMOUT;
	private: System::Windows::Forms::ToolStripMenuItem^  WINDOW_NORMALIZE;






	private: System::Windows::Forms::ToolStripMenuItem^  WINDOW_CASCADE;
	private: System::Windows::Forms::ToolStripMenuItem^  WINDOW_TILE;
	private: System::Windows::Forms::ToolStripMenuItem^  WINDOW_ARRANGEICONS;
	private: System::Windows::Forms::ToolStripMenuItem^  WINDOW_CLOSEALL;




	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  NewButton;
	private: System::Windows::Forms::ToolStripButton^  OpenButton;
	private: System::Windows::Forms::ToolStripButton^  SaveButton;
	private: System::Windows::Forms::ToolStripButton^  PrintPreviewButton;
	private: System::Windows::Forms::ToolStripButton^  PrintButton;
	private: System::Windows::Forms::ToolStripButton^  ZoomInButton;
	private: System::Windows::Forms::ToolStripButton^  ZoomOutButton;
	private: System::Windows::Forms::ToolStripButton^  TimerButton;


















	private: System::Windows::Forms::ToolStripMenuItem^  FILE_EXIT;
private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
private: System::Windows::Forms::PrintDialog^  printDialog1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::SaveFileDialog^  saveFileDialog2;
private: System::Windows::Forms::PrintDialog^  printDialog2;

private: System::Windows::Forms::ToolStripMenuItem^  recientes2ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  recientes3ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  recientes4ToolStripMenuItem;
private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
private: System::Windows::Forms::ToolStripMenuItem^  recientes1ToolStripMenuItem;




















	protected:

	protected:

	protected:


	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->FILE = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FILE_NEW = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FILE_OPEN = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FILE_CLOSE = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FILE_SAVE = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FILE_SAVEPREDICTION = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FILE_PRINTPREVIEW = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FILE_PRINT = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FILE_PRINTSETUP = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recientes2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recientes3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recientes4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FILE_EXIT = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EDIT = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EDIT_MODIFY = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->WINDOW = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->WINDOW_ZOOMIN = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->WINDOW_ZOOMOUT = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->WINDOW_NORMALIZE = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->WINDOW_CASCADE = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->WINDOW_TILE = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->WINDOW_ARRANGEICONS = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->WINDOW_CLOSEALL = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->HELP = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->HELP_ABOUT = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->NewButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->OpenButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->TimerButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->SaveButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->PrintPreviewButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->PrintButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ZoomInButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ZoomOutButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->printDialog2 = (gcnew System::Windows::Forms::PrintDialog());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->recientes1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::DarkCyan;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->FILE, this->EDIT,
					this->WINDOW, this->HELP
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1352, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// FILE
			// 
			this->FILE->BackColor = System::Drawing::Color::Transparent;
			this->FILE->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {
				this->FILE_NEW, this->FILE_OPEN,
					this->FILE_CLOSE, this->FILE_SAVE, this->FILE_SAVEPREDICTION, this->FILE_PRINTPREVIEW, this->FILE_PRINT, this->FILE_PRINTSETUP,
					this->recientes1ToolStripMenuItem, this->recientes2ToolStripMenuItem, this->recientes3ToolStripMenuItem, this->recientes4ToolStripMenuItem,
					this->FILE_EXIT
			});
			this->FILE->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F));
			this->FILE->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FILE->Name = L"FILE";
			this->FILE->Size = System::Drawing::Size(53, 29);
			this->FILE->Text = L"File";
			// 
			// FILE_NEW
			// 
			this->FILE_NEW->BackColor = System::Drawing::Color::DarkCyan;
			this->FILE_NEW->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FILE_NEW->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FILE_NEW->Name = L"FILE_NEW";
			this->FILE_NEW->Size = System::Drawing::Size(226, 30);
			this->FILE_NEW->Text = L"New";
			this->FILE_NEW->Click += gcnew System::EventHandler(this, &MyForm::FILE_NEW_Click);
			// 
			// FILE_OPEN
			// 
			this->FILE_OPEN->BackColor = System::Drawing::Color::DarkCyan;
			this->FILE_OPEN->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FILE_OPEN->Name = L"FILE_OPEN";
			this->FILE_OPEN->Size = System::Drawing::Size(226, 30);
			this->FILE_OPEN->Text = L"Open";
			this->FILE_OPEN->Click += gcnew System::EventHandler(this, &MyForm::FILE_OPEN_Click);
			// 
			// FILE_CLOSE
			// 
			this->FILE_CLOSE->BackColor = System::Drawing::Color::DarkCyan;
			this->FILE_CLOSE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FILE_CLOSE->Name = L"FILE_CLOSE";
			this->FILE_CLOSE->Size = System::Drawing::Size(226, 30);
			this->FILE_CLOSE->Text = L"Close";
			// 
			// FILE_SAVE
			// 
			this->FILE_SAVE->BackColor = System::Drawing::Color::DarkSlateGray;
			this->FILE_SAVE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FILE_SAVE->Name = L"FILE_SAVE";
			this->FILE_SAVE->Size = System::Drawing::Size(226, 30);
			this->FILE_SAVE->Text = L"Save Chart";
			this->FILE_SAVE->Click += gcnew System::EventHandler(this, &MyForm::FILE_SAVE_Click);
			// 
			// FILE_SAVEPREDICTION
			// 
			this->FILE_SAVEPREDICTION->BackColor = System::Drawing::Color::DarkSlateGray;
			this->FILE_SAVEPREDICTION->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FILE_SAVEPREDICTION->Name = L"FILE_SAVEPREDICTION";
			this->FILE_SAVEPREDICTION->Size = System::Drawing::Size(226, 30);
			this->FILE_SAVEPREDICTION->Text = L"Save Prediction...";
			this->FILE_SAVEPREDICTION->Click += gcnew System::EventHandler(this, &MyForm::FILE_SAVEPREDICTION_Click);
			// 
			// FILE_PRINTPREVIEW
			// 
			this->FILE_PRINTPREVIEW->BackColor = System::Drawing::Color::DarkCyan;
			this->FILE_PRINTPREVIEW->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FILE_PRINTPREVIEW->Name = L"FILE_PRINTPREVIEW";
			this->FILE_PRINTPREVIEW->Size = System::Drawing::Size(226, 30);
			this->FILE_PRINTPREVIEW->Text = L"Print Preview";
			this->FILE_PRINTPREVIEW->Click += gcnew System::EventHandler(this, &MyForm::FILE_PRINTPREVIEW_Click);
			// 
			// FILE_PRINT
			// 
			this->FILE_PRINT->BackColor = System::Drawing::Color::DarkCyan;
			this->FILE_PRINT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FILE_PRINT->Name = L"FILE_PRINT";
			this->FILE_PRINT->Size = System::Drawing::Size(226, 30);
			this->FILE_PRINT->Text = L"Print";
			this->FILE_PRINT->Click += gcnew System::EventHandler(this, &MyForm::FILE_PRINT_Click);
			// 
			// FILE_PRINTSETUP
			// 
			this->FILE_PRINTSETUP->BackColor = System::Drawing::Color::DarkCyan;
			this->FILE_PRINTSETUP->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FILE_PRINTSETUP->Name = L"FILE_PRINTSETUP";
			this->FILE_PRINTSETUP->Size = System::Drawing::Size(226, 30);
			this->FILE_PRINTSETUP->Text = L"Print Setup...";
			// 
			// recientes2ToolStripMenuItem
			// 
			this->recientes2ToolStripMenuItem->BackColor = System::Drawing::Color::DarkSlateGray;
			this->recientes2ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->recientes2ToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->recientes2ToolStripMenuItem->Name = L"recientes2ToolStripMenuItem";
			this->recientes2ToolStripMenuItem->Size = System::Drawing::Size(226, 30);
			this->recientes2ToolStripMenuItem->Text = L"recientes 2";
			this->recientes2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::recientes2ToolStripMenuItem_Click);
			// 
			// recientes3ToolStripMenuItem
			// 
			this->recientes3ToolStripMenuItem->BackColor = System::Drawing::Color::DarkSlateGray;
			this->recientes3ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->recientes3ToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->recientes3ToolStripMenuItem->Name = L"recientes3ToolStripMenuItem";
			this->recientes3ToolStripMenuItem->Size = System::Drawing::Size(226, 30);
			this->recientes3ToolStripMenuItem->Text = L"recientes 3";
			// 
			// recientes4ToolStripMenuItem
			// 
			this->recientes4ToolStripMenuItem->BackColor = System::Drawing::Color::DarkSlateGray;
			this->recientes4ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->recientes4ToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->recientes4ToolStripMenuItem->Name = L"recientes4ToolStripMenuItem";
			this->recientes4ToolStripMenuItem->Size = System::Drawing::Size(226, 30);
			this->recientes4ToolStripMenuItem->Text = L"recientes 4";
			// 
			// FILE_EXIT
			// 
			this->FILE_EXIT->BackColor = System::Drawing::Color::DarkCyan;
			this->FILE_EXIT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FILE_EXIT->Name = L"FILE_EXIT";
			this->FILE_EXIT->Size = System::Drawing::Size(226, 30);
			this->FILE_EXIT->Text = L"Exit";
			this->FILE_EXIT->Click += gcnew System::EventHandler(this, &MyForm::FILE_EXIT_Click);
			// 
			// EDIT
			// 
			this->EDIT->BackColor = System::Drawing::Color::Transparent;
			this->EDIT->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->EDIT_MODIFY });
			this->EDIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EDIT->Name = L"EDIT";
			this->EDIT->Size = System::Drawing::Size(56, 29);
			this->EDIT->Text = L"Edit";
			// 
			// EDIT_MODIFY
			// 
			this->EDIT_MODIFY->BackColor = System::Drawing::Color::DarkCyan;
			this->EDIT_MODIFY->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->EDIT_MODIFY->Name = L"EDIT_MODIFY";
			this->EDIT_MODIFY->Size = System::Drawing::Size(187, 30);
			this->EDIT_MODIFY->Text = L"Modify Data";
			this->EDIT_MODIFY->Click += gcnew System::EventHandler(this, &MyForm::EDIT_MODIFY_Click);
			// 
			// WINDOW
			// 
			this->WINDOW->BackColor = System::Drawing::Color::Transparent;
			this->WINDOW->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->WINDOW_ZOOMIN,
					this->WINDOW_ZOOMOUT, this->WINDOW_NORMALIZE, this->WINDOW_CASCADE, this->WINDOW_TILE, this->WINDOW_ARRANGEICONS, this->WINDOW_CLOSEALL
			});
			this->WINDOW->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WINDOW->Name = L"WINDOW";
			this->WINDOW->Size = System::Drawing::Size(94, 29);
			this->WINDOW->Text = L"Window";
			// 
			// WINDOW_ZOOMIN
			// 
			this->WINDOW_ZOOMIN->BackColor = System::Drawing::Color::DarkCyan;
			this->WINDOW_ZOOMIN->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->WINDOW_ZOOMIN->Name = L"WINDOW_ZOOMIN";
			this->WINDOW_ZOOMIN->Size = System::Drawing::Size(201, 30);
			this->WINDOW_ZOOMIN->Text = L"Zoom In +";
			// 
			// WINDOW_ZOOMOUT
			// 
			this->WINDOW_ZOOMOUT->BackColor = System::Drawing::Color::DarkCyan;
			this->WINDOW_ZOOMOUT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->WINDOW_ZOOMOUT->Name = L"WINDOW_ZOOMOUT";
			this->WINDOW_ZOOMOUT->Size = System::Drawing::Size(201, 30);
			this->WINDOW_ZOOMOUT->Text = L"Zoom Out -";
			// 
			// WINDOW_NORMALIZE
			// 
			this->WINDOW_NORMALIZE->BackColor = System::Drawing::Color::DarkSlateGray;
			this->WINDOW_NORMALIZE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->WINDOW_NORMALIZE->Name = L"WINDOW_NORMALIZE";
			this->WINDOW_NORMALIZE->Size = System::Drawing::Size(201, 30);
			this->WINDOW_NORMALIZE->Text = L"Normalize";
			// 
			// WINDOW_CASCADE
			// 
			this->WINDOW_CASCADE->BackColor = System::Drawing::Color::DarkSlateGray;
			this->WINDOW_CASCADE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->WINDOW_CASCADE->Name = L"WINDOW_CASCADE";
			this->WINDOW_CASCADE->Size = System::Drawing::Size(201, 30);
			this->WINDOW_CASCADE->Text = L"Cascade";
			// 
			// WINDOW_TILE
			// 
			this->WINDOW_TILE->BackColor = System::Drawing::Color::DarkSlateGray;
			this->WINDOW_TILE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->WINDOW_TILE->Name = L"WINDOW_TILE";
			this->WINDOW_TILE->Size = System::Drawing::Size(201, 30);
			this->WINDOW_TILE->Text = L"Tile";
			// 
			// WINDOW_ARRANGEICONS
			// 
			this->WINDOW_ARRANGEICONS->BackColor = System::Drawing::Color::DarkSlateGray;
			this->WINDOW_ARRANGEICONS->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->WINDOW_ARRANGEICONS->Name = L"WINDOW_ARRANGEICONS";
			this->WINDOW_ARRANGEICONS->Size = System::Drawing::Size(201, 30);
			this->WINDOW_ARRANGEICONS->Text = L"Arrange Icons";
			// 
			// WINDOW_CLOSEALL
			// 
			this->WINDOW_CLOSEALL->BackColor = System::Drawing::Color::DarkCyan;
			this->WINDOW_CLOSEALL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->WINDOW_CLOSEALL->Name = L"WINDOW_CLOSEALL";
			this->WINDOW_CLOSEALL->Size = System::Drawing::Size(201, 30);
			this->WINDOW_CLOSEALL->Text = L"Close All";
			// 
			// HELP
			// 
			this->HELP->BackColor = System::Drawing::Color::Transparent;
			this->HELP->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->HELP_ABOUT });
			this->HELP->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HELP->Name = L"HELP";
			this->HELP->Size = System::Drawing::Size(63, 29);
			this->HELP->Text = L"Help";
			// 
			// HELP_ABOUT
			// 
			this->HELP_ABOUT->BackColor = System::Drawing::Color::DarkCyan;
			this->HELP_ABOUT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->HELP_ABOUT->Name = L"HELP_ABOUT";
			this->HELP_ABOUT->Size = System::Drawing::Size(147, 30);
			this->HELP_ABOUT->Text = L"About...";
			this->HELP_ABOUT->Click += gcnew System::EventHandler(this, &MyForm::HELP_ABOUT_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->NewButton, this->OpenButton,
					this->TimerButton, this->SaveButton, this->PrintPreviewButton, this->PrintButton, this->ZoomInButton, this->ZoomOutButton
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 33);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1352, 39);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::toolStrip1_ItemClicked);
			// 
			// NewButton
			// 
			this->NewButton->BackColor = System::Drawing::Color::Transparent;
			this->NewButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->NewButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NewButton.Image")));
			this->NewButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->NewButton->Name = L"NewButton";
			this->NewButton->Size = System::Drawing::Size(36, 36);
			this->NewButton->Text = L"New";
			this->NewButton->Click += gcnew System::EventHandler(this, &MyForm::NewButton_Click);
			// 
			// OpenButton
			// 
			this->OpenButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->OpenButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OpenButton.Image")));
			this->OpenButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->OpenButton->Name = L"OpenButton";
			this->OpenButton->Size = System::Drawing::Size(36, 36);
			this->OpenButton->Text = L"Open";
			this->OpenButton->Click += gcnew System::EventHandler(this, &MyForm::OpenButton_Click);
			// 
			// TimerButton
			// 
			this->TimerButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->TimerButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TimerButton.Image")));
			this->TimerButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->TimerButton->Name = L"TimerButton";
			this->TimerButton->Size = System::Drawing::Size(36, 36);
			this->TimerButton->Text = L"Edit";
			this->TimerButton->Click += gcnew System::EventHandler(this, &MyForm::TimerButton_Click);
			// 
			// SaveButton
			// 
			this->SaveButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->SaveButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SaveButton.Image")));
			this->SaveButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(36, 36);
			this->SaveButton->Text = L"Save";
			this->SaveButton->Click += gcnew System::EventHandler(this, &MyForm::SaveButton_Click);
			// 
			// PrintPreviewButton
			// 
			this->PrintPreviewButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->PrintPreviewButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PrintPreviewButton.Image")));
			this->PrintPreviewButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->PrintPreviewButton->Name = L"PrintPreviewButton";
			this->PrintPreviewButton->Size = System::Drawing::Size(36, 36);
			this->PrintPreviewButton->Text = L"Printpreview";
			this->PrintPreviewButton->Click += gcnew System::EventHandler(this, &MyForm::PrintPreviewButton_Click);
			// 
			// PrintButton
			// 
			this->PrintButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->PrintButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PrintButton.Image")));
			this->PrintButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->PrintButton->Name = L"PrintButton";
			this->PrintButton->Size = System::Drawing::Size(36, 36);
			this->PrintButton->Text = L"Print";
			this->PrintButton->Click += gcnew System::EventHandler(this, &MyForm::PrintButton_Click);
			// 
			// ZoomInButton
			// 
			this->ZoomInButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ZoomInButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ZoomInButton.Image")));
			this->ZoomInButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ZoomInButton->Name = L"ZoomInButton";
			this->ZoomInButton->Size = System::Drawing::Size(36, 36);
			this->ZoomInButton->Text = L"zoomin";
			// 
			// ZoomOutButton
			// 
			this->ZoomOutButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ZoomOutButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ZoomOutButton.Image")));
			this->ZoomOutButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ZoomOutButton->Name = L"ZoomOutButton";
			this->ZoomOutButton->Size = System::Drawing::Size(36, 36);
			this->ZoomOutButton->Text = L"zoomout";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"dat";
			this->openFileDialog1->FileName = L"openfile";
			this->openFileDialog1->Filter = L" \"Archivos de datos (*.hdf)|*.hdf|Todos los archivos (*.*)|*.*\"";
			this->openFileDialog1->InitialDirectory = L"C:\\Users";
			this->openFileDialog1->Multiselect = true;
			this->openFileDialog1->ShowHelp = true;
			this->openFileDialog1->SupportMultiDottedExtensions = true;
			this->openFileDialog1->Title = L"Open file";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"dat";
			this->saveFileDialog1->FileName = L"untitled";
			this->saveFileDialog1->Filter = L" \"Archivos de datos (*.dat)|*.dat|Todos los archivos (*.*)|*.*\"";
			this->saveFileDialog1->InitialDirectory = L"C:\\Users";
			this->saveFileDialog1->Title = L"Save Chart";
			// 
			// printDialog1
			// 
			this->printDialog1->AllowCurrentPage = true;
			this->printDialog1->AllowSelection = true;
			this->printDialog1->AllowSomePages = true;
			this->printDialog1->PrintToFile = true;
			this->printDialog1->ShowHelp = true;
			this->printDialog1->UseEXDialog = true;
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->ShowIcon = false;
			this->printPreviewDialog1->Visible = false;
			// 
			// saveFileDialog2
			// 
			this->saveFileDialog2->FileName = L"untitled";
			this->saveFileDialog2->Filter = L"\"Archivos de datos (*.pdf)|*.pdf|Todos los archivos (*.*)|*.*\"";
			this->saveFileDialog2->InitialDirectory = L"C:\\Users";
			// 
			// printDialog2
			// 
			this->printDialog2->UseEXDialog = true;
			// 
			// recientes1ToolStripMenuItem
			// 
			this->recientes1ToolStripMenuItem->BackColor = System::Drawing::Color::DarkSlateGray;
			this->recientes1ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->recientes1ToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->recientes1ToolStripMenuItem->Name = L"recientes1ToolStripMenuItem";
			this->recientes1ToolStripMenuItem->Size = System::Drawing::Size(226, 30);
			this->recientes1ToolStripMenuItem->Text = L"...";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::PowderBlue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1352, 571);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tidex 2019";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Se abre dialogo para crear nuevo fichero de datos armónicos en menú
	private: System::Void FILE_NEW_Click(System::Object^  sender, System::EventArgs^  e) {

		NewForm^ newForm = gcnew NewForm();
		newForm->Show(this);


	}
private: System::Void toolStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
//Se cierra progama tidex en menú
private: System::Void FILE_EXIT_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
//Crea nuevo fichero de datos armónicos en menú
private: System::Void NewButton_Click(System::Object^  sender, System::EventArgs^  e) {
	NewForm^ newForm = gcnew NewForm();
	newForm->Show(this);
}
//Abre nuevo fichero de datos armónicos en menú
private: System::Void FILE_OPEN_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->ShowDialog();
}
//Abre nuevo fichero de datos armónicos en botón
private: System::Void OpenButton_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->ShowDialog();
}
//Método que guarda la gráfica pero le asigna un nombre nuevo en menú
private: System::Void FILE_SAVEAS_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog2->ShowDialog();
}
//Método que guarda gráfica imagen pdf o similar en botón 
private: System::Void SaveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog1->ShowDialog();
}
//Método que abre dialogo para imprimir en menú
private: System::Void FILE_PRINT_Click(System::Object^  sender, System::EventArgs^  e) {
	printDialog1->ShowDialog();
}
//Método que abre dialogo para imprimir en botón
private: System::Void PrintButton_Click(System::Object^  sender, System::EventArgs^  e) {
	printDialog1->ShowDialog();
}
//Método que muesta vista previa para imprimir la gráfica en menú
private: System::Void FILE_PRINTPREVIEW_Click(System::Object^  sender, System::EventArgs^  e) {
	printPreviewDialog1->ShowDialog();
}
//Método que muesta vista previa para imprimir la gráfica en botón
private: System::Void PrintPreviewButton_Click(System::Object^  sender, System::EventArgs^  e) {
	printPreviewDialog1->ShowDialog();
}
//Método que abre dialogo para editar fichero armónico en menú
private: System::Void EDIT_MODIFY_Click(System::Object^  sender, System::EventArgs^  e) {
	NewForm^ newForm = gcnew NewForm();
	newForm->Show(this);
}
//Método que muestra la ventana Help en menú
private: System::Void HELP_ABOUT_Click(System::Object^  sender, System::EventArgs^  e) {
	HelpForm^ help = gcnew HelpForm();
	help->Show(this);
}
//Método que guarda fichero armónico en menú
private: System::Void FILE_SAVE_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog2->ShowDialog();
}
//Metodo que guarda predicción
private: System::Void FILE_SAVEPREDICTION_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog1->ShowDialog();
}
//Boton de editar fichero armónico
private: System::Void TimerButton_Click(System::Object^  sender, System::EventArgs^  e) {
	NewForm^ newform = gcnew NewForm();
	newform->Show(this);
}
private: System::Void recientes2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("C:/Users/Arantxa/Documents/UNIVERSIDAD/PRACTICAS TFG/Tidex2019/recents.txt"); //open the file for writing.
	recientes2ToolStripMenuItem->Text=reader->ReadLine();
	
	this->Close();
}
};
}
