#pragma once
#include"chartdir.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
//#include "ChartViewer.h"
namespace Tidex2019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Resumen de ChartForm
	/// </summary>
	public ref class ChartForm : public System::Windows::Forms::Form
	{
	public:
		ChartForm(void)
		{
			InitializeComponent();

			//TODO: agregar código de constructor aquí
		}

		ChartForm(String^u)
		{
			InitializeComponent();
			unit = u;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ChartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ unit;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: MaterialSkin::Controls::MaterialRaisedButton^ savechartbutton;
	private: MaterialSkin::Controls::MaterialRaisedButton^ printchartbutton;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;





	protected:


	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ChartForm::typeid));
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->savechartbutton = (gcnew MaterialSkin::Controls::MaterialRaisedButton());
			this->printchartbutton = (gcnew MaterialSkin::Controls::MaterialRaisedButton());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"PDF(.pdf)|*.pdf|JPEG (.jpeg)|*.jpeg |PNG  (.png)|*.png";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"DAT  (.dat)|*.dat";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->pictureBox1->Location = System::Drawing::Point(142, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(900, 700);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// savechartbutton
			// 
			this->savechartbutton->Depth = 0;
			this->savechartbutton->Location = System::Drawing::Point(29, 12);
			this->savechartbutton->Margin = System::Windows::Forms::Padding(4);
			this->savechartbutton->MouseState = MaterialSkin::MouseState::HOVER;
			this->savechartbutton->Name = L"savechartbutton";
			this->savechartbutton->Primary = true;
			this->savechartbutton->Size = System::Drawing::Size(106, 44);
			this->savechartbutton->TabIndex = 88;
			this->savechartbutton->Text = L"Save Chart";
			this->savechartbutton->UseVisualStyleBackColor = true;
			this->savechartbutton->Click += gcnew System::EventHandler(this, &ChartForm::Savechartbutton_Click);
			// 
			// printchartbutton
			// 
			this->printchartbutton->Depth = 0;
			this->printchartbutton->Location = System::Drawing::Point(29, 64);
			this->printchartbutton->Margin = System::Windows::Forms::Padding(4);
			this->printchartbutton->MouseState = MaterialSkin::MouseState::HOVER;
			this->printchartbutton->Name = L"printchartbutton";
			this->printchartbutton->Primary = true;
			this->printchartbutton->Size = System::Drawing::Size(106, 44);
			this->printchartbutton->TabIndex = 89;
			this->printchartbutton->Text = L"Print Chart";
			this->printchartbutton->UseVisualStyleBackColor = true;
			this->printchartbutton->Click += gcnew System::EventHandler(this, &ChartForm::Printchartbutton_Click);
			// 
			// printDialog1
			// 
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
			this->printPreviewDialog1->Visible = false;
			// 
			// ChartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::PowderBlue;
			this->ClientSize = System::Drawing::Size(1095, 750);
			this->Controls->Add(this->printchartbutton);
			this->Controls->Add(this->savechartbutton);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"ChartForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tidal Chart ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void Savechartbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->ShowDialog();
	std::string* fecha, * finalDate;
	std::stringstream* hora;
	double* resultado;
	const char** fechafinal;
	int lines;

	if (openFileDialog1->FileName != "")
	{
		std::filebuf fichero;
		std::ifstream tempFilestream;
		tempFilestream.open((const char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(openFileDialog1->FileName).ToPointer(), std::ios::in);

		if (!fichero.open((const char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(openFileDialog1->FileName).ToPointer(), std::ios::in) || !tempFilestream.is_open())
		{
			std::cout << "Error!" << std::endl;
			exit(-1);
		}

		std::istream* filestream = new std::istream(&fichero);

		lines = 0;

		std::string tempString;
		while (std::getline(tempFilestream, tempString))
		{
			lines++;
		}

		tempFilestream.close();
		hora = new std::stringstream[lines];
		fecha = new std::string[lines * 4];
		resultado = new double[lines];
		finalDate = new std::string[lines];
		int dateCounter = 0, valueCounter = 0, ssCounter = 0;

		while (!filestream->eof())
		{
			*filestream >> fecha[dateCounter] >> fecha[dateCounter + 1] >> fecha[dateCounter + 2] >> fecha[dateCounter + 3] >> resultado[valueCounter];
			if (filestream->good())
			{
				//Con byte nulo

				hora[ssCounter] << fecha[dateCounter] << "\n" << fecha[dateCounter + 1] << "/" << fecha[dateCounter + 2] << "/" << fecha[dateCounter + 3];
				finalDate[ssCounter] = hora[ssCounter].str();//ss[ssCounter].str();

			}
			dateCounter += 4;
			valueCounter++;
			ssCounter++;
		}

		fechafinal = new const char* [lines];

		for (int i = 0; i < lines; i++)
		{
			fechafinal[i] = finalDate[i].c_str();
		}
		delete filestream;
		fichero.close();

	}
	saveFileDialog1->ShowDialog();
	if (saveFileDialog1->FileName != "")
	{

		// Create a XYChart object of size 250 x 250 pixels
		XYChart* c = new XYChart(900, 700);
		c->setBackground(c->linearGradientColor(0, 0, 0, 100, 0x99ccff, 0xffffff), 0x888888);	
		c->setDropShadow();
		// Add a title box using grey(0x555555) 20pt Arial font
		c->addTitle("Predicción de mareas", "arial.ttf", 20, 0x555555);
		// Set the plotarea at (30, 20) and of size 200 x 200 pixels
		c->setPlotArea(70, 70, 700, 500, Chart::Transparent, -1, Chart::Transparent, 0xcccccc);
		// Set axis label font to 12pt Arial
		c->xAxis()->setLabelStyle("arial.ttf", 10);
		c->yAxis()->setLabelStyle("arial.ttf", 10);

		// Set the x and y axis stems to transparent, and the x-axis tick color to grey (0xaaaaaa)
		c->xAxis()->setColors(Chart::Transparent, Chart::TextColor, Chart::TextColor, 0xaaaaaa);
		c->yAxis()->setColors(Chart::Transparent);

		// Set the major/minor tick lengths for the x-axis to 10 and 0.
		c->xAxis()->setTickLength(10, 0);

		// For the automatic axis labels, set the minimum spacing to 80/40 pixels for the x/y axis.
		c->xAxis()->setTickDensity(80);
		c->yAxis()->setTickDensity(40);
		//Sets the margins at the two ends of the axis during auto-scaling, and whether to start the axis from zero.
		c->xAxis()->setAutoScale();
		c->yAxis()->setAutoScale();
		// Add a title to the y axis using dark grey (0x555555) 14pt Arial font
		if (unit == "cm/s")
		{
			c->yAxis()->setTitle("Velocidad cm/s", "arial.ttf", 14, 0x555555);
		}
		else
		{
			if (unit == "m")
			{
				c->yAxis()->setTitle("Metros", "arial.ttf", 14, 0x555555);
			}else
			{
				c->yAxis()->setTitle("Velocidad m/s", "arial.ttf", 14, 0x555555);
			}
		}
		
		// Add a title to the x axis
		c->xAxis()->setTitle("Tiempo", "arial.ttf", 14, 0x555555);
		// Add a line layer to the chart 
		LineLayer* layer = c->addLineLayer();
		layer->addDataSet(DoubleArray(resultado, static_cast<int>(lines)), 0x5588cc, "Velocidad");
		c->xAxis()->setLabels(StringArray(fechafinal, static_cast<int>(lines)));
		// Output the chart
		c->makeChart((const char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(saveFileDialog1->FileName).ToPointer());
		//free up resources
		delete c;
		delete[] fechafinal;
		delete[] fecha;
		delete[] resultado;
		delete[] finalDate;
	}
	pictureBox1->ImageLocation = saveFileDialog1->FileName;
}
private: System::Void Printchartbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog1->FileName != "")
	{
		System::Drawing::Printing::PrintDocument ^docToPrint =gcnew System::Drawing::Printing::PrintDocument();
		docToPrint->DocumentName = pictureBox1->ImageLocation;
		printDialog1->Document = docToPrint;
		printDialog1->AllowSomePages = true;
		printDialog1->ShowHelp = true;
		// If the result is OK then print the document.
		if (printDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{

				docToPrint->Print();
		}
		
	}
	
}

};
	
}
