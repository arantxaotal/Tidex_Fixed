#pragma once
#include"ChartForm.h"
#include <fstream>
#include <iostream>
#include <process.h>
#include <string>
namespace Tidex2019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de PredictionDoneForm
	/// </summary>
	public ref class PredictionDoneForm : public System::Windows::Forms::Form
	{
	public:
		PredictionDoneForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		PredictionDoneForm(String^ u, OpenFileDialog^ name)
		{
			InitializeComponent();
			unit = gcnew String(u);
			filename = gcnew OpenFileDialog();
			filename = name;
			filename->FileName = name->FileName;

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PredictionDoneForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::String^ unit;
	private: OpenFileDialog^ filename;
	private: System::Windows::Forms::Label^ label1;
	private: MaterialSkin::Controls::MaterialRaisedButton^ yesbutton;

	private: MaterialSkin::Controls::MaterialRaisedButton^ nobutton;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;






	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PredictionDoneForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->yesbutton = (gcnew MaterialSkin::Controls::MaterialRaisedButton());
			this->nobutton = (gcnew MaterialSkin::Controls::MaterialRaisedButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 15.73109F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(94, 50);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Prediction done!";
			// 
			// yesbutton
			// 
			this->yesbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->yesbutton->Depth = 0;
			this->yesbutton->Location = System::Drawing::Point(60, 160);
			this->yesbutton->MouseState = MaterialSkin::MouseState::HOVER;
			this->yesbutton->Name = L"yesbutton";
			this->yesbutton->Primary = true;
			this->yesbutton->Size = System::Drawing::Size(116, 36);
			this->yesbutton->TabIndex = 89;
			this->yesbutton->Text = L"save";
			this->yesbutton->UseVisualStyleBackColor = true;
			this->yesbutton->Click += gcnew System::EventHandler(this, &PredictionDoneForm::YesButton_Click);
			// 
			// nobutton
			// 
			this->nobutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->nobutton->Depth = 0;
			this->nobutton->Location = System::Drawing::Point(182, 160);
			this->nobutton->MouseState = MaterialSkin::MouseState::HOVER;
			this->nobutton->Name = L"nobutton";
			this->nobutton->Primary = true;
			this->nobutton->Size = System::Drawing::Size(116, 36);
			this->nobutton->TabIndex = 90;
			this->nobutton->Text = L"cancel";
			this->nobutton->UseVisualStyleBackColor = true;
			this->nobutton->Click += gcnew System::EventHandler(this, &PredictionDoneForm::NoButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12.10084F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(68, 101);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(237, 22);
			this->label2->TabIndex = 91;
			this->label2->Text = L"Do you want to save the file\?";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"dat";
			this->saveFileDialog1->Filter = L" Archivos de datos (*.dat)|*.dat";
			this->saveFileDialog1->Title = L"Save data file";
			// 
			// PredictionDoneForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::PowderBlue;
			this->ClientSize = System::Drawing::Size(362, 206);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->nobutton);
			this->Controls->Add(this->yesbutton);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"PredictionDoneForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Prediction";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Guarda predicción .dat y muestra gráfica
	private: System::Void YesButton_Click(System::Object^ sender, System::EventArgs^ e) {
		char buf[256];
		GetCurrentDirectoryA(256, buf);
		std::stringstream ssExec, ssAstroFile, ssOutputFile, ssDateFile, ssFinalFile;
		ssExec << buf << "\\TIDEX\\Tidex2019\\long2000.exe";
		ssAstroFile << buf << "\\TIDEX\\Tidex2019\\Astro.dat";
		ssOutputFile << buf << "\\TIDEX\\Tidex2019\\Output.dat";
		ssDateFile << buf << "\\TIDEX\\Tidex2019\\calc.tmp";
		//ssFinalFile << buf << "\\finalData.dat";
		
		std::string execPath = ssExec.str();
		std::string astroPath = ssAstroFile.str();
		std::string outputPath = ssOutputFile.str();
		cout << execPath << endl;
		cout << astroPath << endl;
		cout << outputPath << endl;
		std::string datePath = msclr::interop::marshal_as<std::string>(filename->FileName);

		spawnl(P_WAIT, execPath.c_str(), execPath.c_str(), astroPath.c_str(), outputPath.c_str(), datePath.c_str(), NULL);

		std::filebuf finalFile, outputFile;

		saveFileDialog1->ShowDialog();
		cout << outputPath.c_str() << endl;
		if (!outputFile.open(outputPath.c_str(), std::ios::in) || !finalFile.open(msclr::interop::marshal_as<std::string>(saveFileDialog1->FileName), std::ios::out))
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

			*finalFileStream << hour << ":" << minute << " " << day << " " << month << " " << year << "  " << value << "\n";
			i++;
		}
		delete outputFileStream;
		delete finalFileStream;
		finalFile.close();
		outputFile.close();
		ChartForm^ chart = gcnew ChartForm(unit, saveFileDialog1->FileName);
		chart->Show();
		this->Close();
	}
	private: System::Void NoButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


	};
}
