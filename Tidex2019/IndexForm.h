#include "NewForm.h"
#include "HelpForm.h"
#include "ChartForm.h"
#include "UnityForm.h"
#pragma once



namespace Tidex2019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de IndexForm
	/// </summary>
	public ref class IndexForm : public System::Windows::Forms::Form
	{
	public:
		IndexForm(void)
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
		~IndexForm()
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
	private: System::Windows::Forms::ToolStripMenuItem^  HELP;
	private: System::Windows::Forms::ToolStripMenuItem^  HELP_ABOUT;
	private: System::Windows::Forms::ToolStripMenuItem^  FILE_OPEN;
	private: System::Windows::Forms::ToolStripMenuItem^  EDIT_MODIFY;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  NewButton;
	private: System::Windows::Forms::ToolStripButton^  OpenButton;
	private: System::Windows::Forms::ToolStripButton^  TimerButton;
	private: System::Windows::Forms::ToolStripMenuItem^  FILE_EXIT;
    private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog2;
	private: System::Windows::Forms::PrintDialog^  printDialog2;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::ComponentModel::IContainer^  components;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(IndexForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->FILE = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FILE_NEW = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FILE_OPEN = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FILE_EXIT = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EDIT = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EDIT_MODIFY = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->HELP = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->HELP_ABOUT = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->NewButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->OpenButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->TimerButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->printDialog2 = (gcnew System::Windows::Forms::PrintDialog());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::DarkCyan;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->FILE, this->EDIT,
					this->HELP
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1803, 40);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// FILE
			// 
			this->FILE->BackColor = System::Drawing::Color::Transparent;
			this->FILE->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->FILE_NEW, this->FILE_OPEN,
					this->FILE_EXIT
			});
			this->FILE->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F));
			this->FILE->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FILE->Name = L"FILE";
			this->FILE->Size = System::Drawing::Size(66, 36);
			this->FILE->Text = L"File";
			// 
			// FILE_NEW
			// 
			this->FILE_NEW->BackColor = System::Drawing::Color::DarkCyan;
			this->FILE_NEW->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FILE_NEW->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FILE_NEW->Name = L"FILE_NEW";
			this->FILE_NEW->Size = System::Drawing::Size(223, 36);
			this->FILE_NEW->Text = L"New";
			this->FILE_NEW->Click += gcnew System::EventHandler(this, &IndexForm::FILE_NEW_Click);
			// 
			// FILE_OPEN
			// 
			this->FILE_OPEN->BackColor = System::Drawing::Color::DarkCyan;
			this->FILE_OPEN->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FILE_OPEN->Name = L"FILE_OPEN";
			this->FILE_OPEN->Size = System::Drawing::Size(223, 36);
			this->FILE_OPEN->Text = L"Open";
			this->FILE_OPEN->Click += gcnew System::EventHandler(this, &IndexForm::FILE_OPEN_Click);
			// 
			// FILE_EXIT
			// 
			this->FILE_EXIT->BackColor = System::Drawing::Color::DarkCyan;
			this->FILE_EXIT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FILE_EXIT->Name = L"FILE_EXIT";
			this->FILE_EXIT->Size = System::Drawing::Size(223, 36);
			this->FILE_EXIT->Text = L"Exit";
			this->FILE_EXIT->Click += gcnew System::EventHandler(this, &IndexForm::FILE_EXIT_Click);
			// 
			// EDIT
			// 
			this->EDIT->BackColor = System::Drawing::Color::Transparent;
			this->EDIT->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->EDIT_MODIFY });
			this->EDIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EDIT->Name = L"EDIT";
			this->EDIT->Size = System::Drawing::Size(69, 36);
			this->EDIT->Text = L"Edit";
			// 
			// EDIT_MODIFY
			// 
			this->EDIT_MODIFY->BackColor = System::Drawing::Color::DarkCyan;
			this->EDIT_MODIFY->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->EDIT_MODIFY->Name = L"EDIT_MODIFY";
			this->EDIT_MODIFY->Size = System::Drawing::Size(236, 36);
			this->EDIT_MODIFY->Text = L"Modify Data";
			this->EDIT_MODIFY->Click += gcnew System::EventHandler(this, &IndexForm::EDIT_MODIFY_Click);
			// 
			// HELP
			// 
			this->HELP->BackColor = System::Drawing::Color::Transparent;
			this->HELP->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->HELP_ABOUT });
			this->HELP->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HELP->Name = L"HELP";
			this->HELP->Size = System::Drawing::Size(79, 36);
			this->HELP->Text = L"Help";
			// 
			// HELP_ABOUT
			// 
			this->HELP_ABOUT->BackColor = System::Drawing::Color::DarkCyan;
			this->HELP_ABOUT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->HELP_ABOUT->Name = L"HELP_ABOUT";
			this->HELP_ABOUT->Size = System::Drawing::Size(223, 36);
			this->HELP_ABOUT->Text = L"About...";
			this->HELP_ABOUT->Click += gcnew System::EventHandler(this, &IndexForm::HELP_ABOUT_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->NewButton, this->OpenButton,
					this->TimerButton
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 40);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1803, 39);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &IndexForm::toolStrip1_ItemClicked);
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
			this->NewButton->Click += gcnew System::EventHandler(this, &IndexForm::NewButton_Click);
			// 
			// OpenButton
			// 
			this->OpenButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->OpenButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OpenButton.Image")));
			this->OpenButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->OpenButton->Name = L"OpenButton";
			this->OpenButton->Size = System::Drawing::Size(36, 36);
			this->OpenButton->Text = L"Open";
			this->OpenButton->Click += gcnew System::EventHandler(this, &IndexForm::OpenButton_Click);
			// 
			// TimerButton
			// 
			this->TimerButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->TimerButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TimerButton.Image")));
			this->TimerButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->TimerButton->Name = L"TimerButton";
			this->TimerButton->Size = System::Drawing::Size(36, 36);
			this->TimerButton->Text = L"Edit";
			this->TimerButton->Click += gcnew System::EventHandler(this, &IndexForm::TimerButton_Click);
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
			// IndexForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::PowderBlue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1803, 703);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"IndexForm";
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
	//abre otro dialogo preguntando en qué unidades de amplitud esta la gráfica
	UnityForm^ unityform = gcnew UnityForm(openFileDialog1->FileName);
	unityform->Show(this);

}
//Abre nuevo fichero de datos armónicos en botón
private: System::Void OpenButton_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->ShowDialog();
	//abre otro dialogo preguntando en qué unidades de amplitud esta la gráfica
	UnityForm^ unityform = gcnew UnityForm(openFileDialog1->FileName);
	unityform->Show(this);
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

//Boton de editar fichero armónico
private: System::Void TimerButton_Click(System::Object^  sender, System::EventArgs^  e) {
	NewForm^ newform = gcnew NewForm();
	newform->Show(this);
}

};
}
