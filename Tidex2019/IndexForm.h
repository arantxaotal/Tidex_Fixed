
#include "HelpForm.h"
#include "ChartForm.h"
#include "UnitForm.h"
#include "Helper.h"
#include "ErrorForm.h"
#include "ErrorFormatForm.h"
#include "NewForm.h"
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
			char *buf = new char[256];
			GetCurrentDirectoryA(256, buf);
			helper = gcnew Helper(buf);
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
	private: NewForm^ newForm;
	private: Helper ^helper;
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

	private: System::Windows::Forms::ToolStripMenuItem^  FILE_EXIT;
    private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;





	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::ToolStripMenuItem^ openPredictionToolStripMenuItem;

	private: System::Windows::Forms::ToolStripButton^ predictionbutton;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ SavehdftoolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ SavedattoolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveCharttoolStripMenuItem;
	public: System::Windows::Forms::ToolStripButton^ ClockButton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(IndexForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->FILE = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FILE_NEW = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FILE_OPEN = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openPredictionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SavehdftoolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SavedattoolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveCharttoolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FILE_EXIT = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EDIT = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EDIT_MODIFY = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->HELP = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->HELP_ABOUT = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->NewButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->OpenButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->predictionbutton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ClockButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
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
			this->menuStrip1->Size = System::Drawing::Size(1352, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// FILE
			// 
			this->FILE->BackColor = System::Drawing::Color::Transparent;
			this->FILE->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->FILE_NEW, this->FILE_OPEN,
					this->openPredictionToolStripMenuItem, this->SavehdftoolStripMenuItem, this->SavedattoolStripMenuItem, this->SaveCharttoolStripMenuItem,
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
			this->FILE_NEW->Size = System::Drawing::Size(251, 30);
			this->FILE_NEW->Text = L"New";
			this->FILE_NEW->Click += gcnew System::EventHandler(this, &IndexForm::FILE_NEW_Click);
			// 
			// FILE_OPEN
			// 
			this->FILE_OPEN->BackColor = System::Drawing::Color::DarkCyan;
			this->FILE_OPEN->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FILE_OPEN->Name = L"FILE_OPEN";
			this->FILE_OPEN->Size = System::Drawing::Size(251, 30);
			this->FILE_OPEN->Text = L"Open Harmonic File";
			this->FILE_OPEN->Click += gcnew System::EventHandler(this, &IndexForm::FILE_OPEN_Click);
			// 
			// openPredictionToolStripMenuItem
			// 
			this->openPredictionToolStripMenuItem->BackColor = System::Drawing::Color::DarkCyan;
			this->openPredictionToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->openPredictionToolStripMenuItem->Name = L"openPredictionToolStripMenuItem";
			this->openPredictionToolStripMenuItem->Size = System::Drawing::Size(251, 30);
			this->openPredictionToolStripMenuItem->Text = L"Open Prediction";
			this->openPredictionToolStripMenuItem->Click += gcnew System::EventHandler(this, &IndexForm::OpenPredictionToolStripMenuItem_Click);
			// 
			// SavehdftoolStripMenuItem
			// 
			this->SavehdftoolStripMenuItem->BackColor = System::Drawing::Color::DarkCyan;
			this->SavehdftoolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->SavehdftoolStripMenuItem->Name = L"SavehdftoolStripMenuItem";
			this->SavehdftoolStripMenuItem->Size = System::Drawing::Size(251, 30);
			this->SavehdftoolStripMenuItem->Text = L"Save Harmonic File";
			this->SavehdftoolStripMenuItem->Click += gcnew System::EventHandler(this, &IndexForm::SavehdftoolStripMenuItem_Click);
			// 
			// SavedattoolStripMenuItem
			// 
			this->SavedattoolStripMenuItem->BackColor = System::Drawing::Color::DarkCyan;
			this->SavedattoolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->SavedattoolStripMenuItem->Name = L"SavedattoolStripMenuItem";
			this->SavedattoolStripMenuItem->Size = System::Drawing::Size(251, 30);
			this->SavedattoolStripMenuItem->Text = L"Save Prediction";
			this->SavedattoolStripMenuItem->Click += gcnew System::EventHandler(this, &IndexForm::SavedattoolStripMenuItem_Click);
			// 
			// SaveCharttoolStripMenuItem
			// 
			this->SaveCharttoolStripMenuItem->BackColor = System::Drawing::Color::DarkCyan;
			this->SaveCharttoolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->SaveCharttoolStripMenuItem->Name = L"SaveCharttoolStripMenuItem";
			this->SaveCharttoolStripMenuItem->Size = System::Drawing::Size(251, 30);
			this->SaveCharttoolStripMenuItem->Text = L"Save Chart";
			this->SaveCharttoolStripMenuItem->Click += gcnew System::EventHandler(this, &IndexForm::SaveCharttoolStripMenuItem_Click);
			// 
			// FILE_EXIT
			// 
			this->FILE_EXIT->BackColor = System::Drawing::Color::DarkCyan;
			this->FILE_EXIT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FILE_EXIT->Name = L"FILE_EXIT";
			this->FILE_EXIT->Size = System::Drawing::Size(251, 30);
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
			this->EDIT_MODIFY->Click += gcnew System::EventHandler(this, &IndexForm::EDIT_MODIFY_Click);
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
			this->HELP_ABOUT->Click += gcnew System::EventHandler(this, &IndexForm::HELP_ABOUT_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->NewButton, this->OpenButton,
					this->predictionbutton, this->ClockButton
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 33);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1352, 39);
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
			this->OpenButton->Text = L"Open harmonic file";
			this->OpenButton->Click += gcnew System::EventHandler(this, &IndexForm::OpenButton_Click);
			// 
			// predictionbutton
			// 
			this->predictionbutton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->predictionbutton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"predictionbutton.Image")));
			this->predictionbutton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->predictionbutton->Name = L"predictionbutton";
			this->predictionbutton->Size = System::Drawing::Size(36, 36);
			this->predictionbutton->Text = L"Open prediction";
			this->predictionbutton->Click += gcnew System::EventHandler(this, &IndexForm::Predictionbutton_Click);
			// 
			// ClockButton
			// 
			this->ClockButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ClockButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ClockButton.Image")));
			this->ClockButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ClockButton->Name = L"ClockButton";
			this->ClockButton->Size = System::Drawing::Size(36, 36);
			this->ClockButton->Text = L"modify";
			this->ClockButton->ToolTipText = L"Modify hdf";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"dat";
			this->openFileDialog1->Filter = L" Archivos de datos (*.hdf)|*.hdf";
			this->openFileDialog1->InitialDirectory = L"C:\\Users\\...\\Documents";
			this->openFileDialog1->Multiselect = true;
			this->openFileDialog1->ShowHelp = true;
			this->openFileDialog1->SupportMultiDottedExtensions = true;
			this->openFileDialog1->Title = L"Open harmonic file";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->DefaultExt = L"dat";
			this->openFileDialog2->Filter = L"Archivos de datos (*.dat)|*.dat";
			this->openFileDialog2->InitialDirectory = L"C:\\Users\\...\\Documents";
			this->openFileDialog2->Title = L"Open prediction";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L" Archivos de datos (*.dat)|*.dat";
			// 
			// IndexForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::PowderBlue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1352, 571);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
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

			
			NewForm^ newForm = gcnew NewForm(helper->buf, this);
			newForm->MdiParent = this;
			newForm->Show();

	}
		   // FormClosed event

	/*void newForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
	{
		newForm = nullptr;
	}*/
private: System::Void toolStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
//Se cierra progama tidex en menú
private: System::Void FILE_EXIT_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
//Crea nuevo fichero de datos armónicos en menú
private: System::Void NewButton_Click(System::Object^  sender, System::EventArgs^  e) {
	FILE_NEW_Click(sender, e);
}
//Abre nuevo fichero de datos armónicos en menú
private: System::Void FILE_OPEN_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->ShowDialog();
	if (openFileDialog1->FileName != "")
	{
		try {
			try {
				try {
					
						NewForm^ newForm = gcnew NewForm(openFileDialog1->FileName, helper->buf, this);
						newForm->MdiParent = this;
						newForm->Show();


				}
				catch (System::FormatException^ e)
				{
					ErrorFormatForm^ error = gcnew ErrorFormatForm();
					error->MdiParent = this;
					error->Show();
				}
			}
			catch (System::Runtime::InteropServices::SEHException^ e)
			{
				ErrorForm^ error = gcnew ErrorForm();
				error->MdiParent = this;
				error->Show();
			}
		}
		catch (System::ArgumentOutOfRangeException^ e)
		{
			ErrorFormatForm^ error = gcnew ErrorFormatForm();
			error->MdiParent = this;
			error->Show();
		}
	}

}
//Abre nuevo fichero de datos armónicos en botón
private: System::Void OpenButton_Click(System::Object^  sender, System::EventArgs^  e) {
	FILE_OPEN_Click(sender, e);
}
//Método que abre dialogo para editar fichero armónico en menú
private: System::Void EDIT_MODIFY_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->ShowDialog();
	if (openFileDialog1->FileName != "")
	{
			
			NewForm^newForm = gcnew NewForm(openFileDialog1->FileName, helper->buf, this);
			newForm->MdiParent = this;
			newForm->Show();

	}
}
//Método que muestra la ventana Help en menú
private: System::Void HELP_ABOUT_Click(System::Object^  sender, System::EventArgs^  e) {
	HelpForm^ help = gcnew HelpForm();
	help->MdiParent = this;
	help->Show();
}

//Boton de editar fichero armónico
private: System::Void TimerButton_Click(System::Object^  sender, System::EventArgs^  e) {
	EDIT_MODIFY_Click(sender, e);
}
//Opción Abrir predicción .dat en menú
private: System::Void OpenPredictionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog2->ShowDialog();
	//abre otro dialogo preguntando en qué unidades de amplitud esta la gráfica
	if (openFileDialog2->FileName != "")
	{
		UnitForm^ unitform = gcnew UnitForm(openFileDialog2, this);
		unitform->MdiParent = this;
		unitform->Show();
	}

}
private: System::Void Predictionbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenPredictionToolStripMenuItem_Click(sender, e);
}
private: System::Void SavehdftoolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void SavedattoolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void SaveCharttoolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
