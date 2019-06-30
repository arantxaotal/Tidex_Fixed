#pragma once
#include"chartdir.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 7.865546F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(23, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Save Chart";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ChartForm::Button1_Click);
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
			this->pictureBox1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->pictureBox1->Location = System::Drawing::Point(142, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(900, 700);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// ChartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PowderBlue;
			this->ClientSize = System::Drawing::Size(1095, 750);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ChartForm";
			this->Text = L"ChartForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	//Botón que crea y guarda gráfica xy de lineas con datos de los .dat
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->ShowDialog();
		std::string* fecha, * finalDate;
		std::stringstream*  hora;
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
					
					hora[ssCounter] << fecha[dateCounter]<<"\n"<< fecha[dateCounter + 1] << "/" << fecha[dateCounter + 2] << "/" << fecha[dateCounter + 3];
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
			c->setRoundedFrame();
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
			c->yAxis()->setTitle("Velocidad m/s", "arial.ttf", 14, 0x555555);
			// Add a title to the x axis
			c->xAxis()->setTitle("Tiempo", "arial.ttf", 14, 0x555555);
			// Add a line layer to the chart 
			double x[] = {resultado[0],resultado[1],resultado[2],resultado[3],resultado[4],resultado[5],resultado[6]};
			const char* y[] = { fechafinal[0],fechafinal[1],fechafinal[2],fechafinal[3],fechafinal[4],fechafinal[5],fechafinal[6] };
			c->addLineLayer(DoubleArray(x, (int)(sizeof(x) / sizeof(x[0]))), 0x5588cc, "Corriente");
			c->xAxis()->setLabels(StringArray(y, (int)(sizeof(y) / sizeof(y[0]))));
			// Output the chart
			c->makeChart((const char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(saveFileDialog1->FileName).ToPointer());

			//free up resources
			delete c;
			delete[] fechafinal;
			delete[] fecha;
			delete[] resultado;
			delete[] finalDate;
		}
		pictureBox1->ImageLocation= saveFileDialog1->FileName;

	}
//Botón que elige datos para hacer la grafica
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->ShowDialog();
}
};
	
}
