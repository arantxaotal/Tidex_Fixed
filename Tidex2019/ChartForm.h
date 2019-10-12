#pragma once
//#include"chartdir.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <msclr/marshal_cppstd.h>
#include <filesystem>
namespace Tidex2019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ChartDirector;

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

		ChartForm(String^u,String ^ f, char* buf)
		{
			InitializeComponent();
			if (buf == nullptr)
			{
				savedatabutton->Visible = false;
			}
			this->buf = buf;
			unit = u;
			filename = f;
			loadData();
			initChartViewer();
			winChartViewer1->updateViewPort(true, true);
			drawFullChart();
			viewPortControl1->Viewer = winChartViewer1;
		}
		//
	// Load the data
	//
	private: char* buf;
	private:	String^ filename;
	private: System::Windows::Forms::Panel^ leftPanel;
	private: System::Windows::Forms::Button^ savePB;
	private: System::Windows::Forms::Label^ separatorLine;
	private: System::Windows::Forms::RadioButton^ pointerPB;
	private: System::Windows::Forms::RadioButton^ zoomInPB;
	private: System::Windows::Forms::RadioButton^ zoomOutPB;
	private: System::Windows::Forms::Label^ topLabel;
	private: System::Windows::Forms::Button^ printPB;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Windows::Forms::Button^ savedatabutton;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;




	private: ChartDirector::WinViewPortControl^ viewPortControl1;
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
	private: ChartDirector::XYChart^ c;
	private: String^ unit;
	private: int lines;
	private: array<double>^ result,^result2;
	private: array<System::String^, 1>^ labels,^labels2;
	private: ChartDirector::WinChartViewer^ winChartViewer1;
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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ChartForm::typeid));
			this->winChartViewer1 = (gcnew ChartDirector::WinChartViewer());
			this->leftPanel = (gcnew System::Windows::Forms::Panel());
			this->savedatabutton = (gcnew System::Windows::Forms::Button());
			this->printPB = (gcnew System::Windows::Forms::Button());
			this->savePB = (gcnew System::Windows::Forms::Button());
			this->separatorLine = (gcnew System::Windows::Forms::Label());
			this->pointerPB = (gcnew System::Windows::Forms::RadioButton());
			this->zoomInPB = (gcnew System::Windows::Forms::RadioButton());
			this->zoomOutPB = (gcnew System::Windows::Forms::RadioButton());
			this->topLabel = (gcnew System::Windows::Forms::Label());
			this->viewPortControl1 = (gcnew ChartDirector::WinViewPortControl(this->components));
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->winChartViewer1))->BeginInit();
			this->leftPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->viewPortControl1))->BeginInit();
			this->SuspendLayout();
			// 
			// winChartViewer1
			// 
			this->winChartViewer1->Location = System::Drawing::Point(121, 22);
			this->winChartViewer1->Margin = System::Windows::Forms::Padding(2);
			this->winChartViewer1->Name = L"winChartViewer1";
			this->winChartViewer1->Size = System::Drawing::Size(900, 600);
			this->winChartViewer1->TabIndex = 90;
			this->winChartViewer1->TabStop = false;
			this->winChartViewer1->MouseMovePlotArea += gcnew System::Windows::Forms::MouseEventHandler(this, &ChartForm::WinChartViewer1_MouseMovePlotArea);
			this->winChartViewer1->ViewPortChanged += gcnew ChartDirector::WinViewPortEventHandler(this, &ChartForm::winChartViewer1_ViewPortChanged);
			// 
			// leftPanel
			// 
			this->leftPanel->BackColor = System::Drawing::Color::PaleTurquoise;
			this->leftPanel->Controls->Add(this->savedatabutton);
			this->leftPanel->Controls->Add(this->printPB);
			this->leftPanel->Controls->Add(this->savePB);
			this->leftPanel->Controls->Add(this->separatorLine);
			this->leftPanel->Controls->Add(this->pointerPB);
			this->leftPanel->Controls->Add(this->zoomInPB);
			this->leftPanel->Controls->Add(this->zoomOutPB);
			this->leftPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->leftPanel->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leftPanel->Location = System::Drawing::Point(0, 0);
			this->leftPanel->Margin = System::Windows::Forms::Padding(2);
			this->leftPanel->Name = L"leftPanel";
			this->leftPanel->Size = System::Drawing::Size(90, 717);
			this->leftPanel->TabIndex = 91;
			// 
			// savedatabutton
			// 
			this->savedatabutton->BackColor = System::Drawing::Color::Azure;
			this->savedatabutton->Cursor = System::Windows::Forms::Cursors::Default;
			this->savedatabutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->savedatabutton->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.07563F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->savedatabutton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"savedatabutton.Image")));
			this->savedatabutton->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->savedatabutton->Location = System::Drawing::Point(0, 135);
			this->savedatabutton->Margin = System::Windows::Forms::Padding(2);
			this->savedatabutton->Name = L"savedatabutton";
			this->savedatabutton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->savedatabutton->Size = System::Drawing::Size(90, 51);
			this->savedatabutton->TabIndex = 39;
			this->savedatabutton->Text = L"Save  \r\nPrediction";
			this->savedatabutton->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->savedatabutton->UseMnemonic = false;
			this->savedatabutton->UseVisualStyleBackColor = false;
			this->savedatabutton->Click += gcnew System::EventHandler(this, &ChartForm::Savedatabutton_Click);
			// 
			// printPB
			// 
			this->printPB->BackColor = System::Drawing::Color::Azure;
			this->printPB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->printPB->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.07563F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->printPB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"printPB.Image")));
			this->printPB->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->printPB->Location = System::Drawing::Point(0, 201);
			this->printPB->Margin = System::Windows::Forms::Padding(2);
			this->printPB->Name = L"printPB";
			this->printPB->Size = System::Drawing::Size(90, 23);
			this->printPB->TabIndex = 37;
			this->printPB->Text = L"        Print";
			this->printPB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->printPB->UseVisualStyleBackColor = false;
			this->printPB->Click += gcnew System::EventHandler(this, &ChartForm::PrintPB_Click);
			// 
			// savePB
			// 
			this->savePB->BackColor = System::Drawing::Color::Azure;
			this->savePB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->savePB->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.07563F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->savePB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"savePB.Image")));
			this->savePB->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->savePB->Location = System::Drawing::Point(0, 80);
			this->savePB->Margin = System::Windows::Forms::Padding(2);
			this->savePB->Name = L"savePB";
			this->savePB->Size = System::Drawing::Size(90, 51);
			this->savePB->TabIndex = 36;
			this->savePB->Text = L"        Save Chart";
			this->savePB->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->savePB->UseMnemonic = false;
			this->savePB->UseVisualStyleBackColor = false;
			this->savePB->Click += gcnew System::EventHandler(this, &ChartForm::SavePB_Click_1);
			// 
			// separatorLine
			// 
			this->separatorLine->BackColor = System::Drawing::Color::Black;
			this->separatorLine->Dock = System::Windows::Forms::DockStyle::Right;
			this->separatorLine->Location = System::Drawing::Point(89, 0);
			this->separatorLine->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->separatorLine->Name = L"separatorLine";
			this->separatorLine->Size = System::Drawing::Size(1, 717);
			this->separatorLine->TabIndex = 31;
			// 
			// pointerPB
			// 
			this->pointerPB->Appearance = System::Windows::Forms::Appearance::Button;
			this->pointerPB->BackColor = System::Drawing::Color::Azure;
			this->pointerPB->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->pointerPB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pointerPB->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.07563F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pointerPB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pointerPB.Image")));
			this->pointerPB->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pointerPB->Location = System::Drawing::Point(0, 0);
			this->pointerPB->Margin = System::Windows::Forms::Padding(2);
			this->pointerPB->Name = L"pointerPB";
			this->pointerPB->Size = System::Drawing::Size(90, 23);
			this->pointerPB->TabIndex = 0;
			this->pointerPB->Text = L"       Pointer";
			this->pointerPB->UseVisualStyleBackColor = false;
			this->pointerPB->CheckedChanged += gcnew System::EventHandler(this, &ChartForm::PointerPB_CheckedChanged_1);
			// 
			// zoomInPB
			// 
			this->zoomInPB->Appearance = System::Windows::Forms::Appearance::Button;
			this->zoomInPB->BackColor = System::Drawing::Color::Azure;
			this->zoomInPB->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->zoomInPB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zoomInPB->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zoomInPB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zoomInPB.Image")));
			this->zoomInPB->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->zoomInPB->Location = System::Drawing::Point(0, 22);
			this->zoomInPB->Margin = System::Windows::Forms::Padding(2);
			this->zoomInPB->Name = L"zoomInPB";
			this->zoomInPB->Size = System::Drawing::Size(90, 23);
			this->zoomInPB->TabIndex = 1;
			this->zoomInPB->Text = L"       Zoom In";
			this->zoomInPB->UseVisualStyleBackColor = false;
			this->zoomInPB->CheckedChanged += gcnew System::EventHandler(this, &ChartForm::ZoomInPB_CheckedChanged);
			// 
			// zoomOutPB
			// 
			this->zoomOutPB->Appearance = System::Windows::Forms::Appearance::Button;
			this->zoomOutPB->BackColor = System::Drawing::Color::Azure;
			this->zoomOutPB->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->zoomOutPB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zoomOutPB->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zoomOutPB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zoomOutPB.Image")));
			this->zoomOutPB->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->zoomOutPB->Location = System::Drawing::Point(0, 44);
			this->zoomOutPB->Margin = System::Windows::Forms::Padding(2);
			this->zoomOutPB->Name = L"zoomOutPB";
			this->zoomOutPB->Size = System::Drawing::Size(90, 23);
			this->zoomOutPB->TabIndex = 2;
			this->zoomOutPB->Text = L"      Zoom Out";
			this->zoomOutPB->UseVisualStyleBackColor = false;
			this->zoomOutPB->CheckedChanged += gcnew System::EventHandler(this, &ChartForm::ZoomOutPB_CheckedChanged);
			// 
			// topLabel
			// 
			this->topLabel->BackColor = System::Drawing::Color::DarkSlateGray;
			this->topLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->topLabel->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 10.28571F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->topLabel->ForeColor = System::Drawing::Color::PowderBlue;
			this->topLabel->Location = System::Drawing::Point(90, 0);
			this->topLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->topLabel->Name = L"topLabel";
			this->topLabel->Size = System::Drawing::Size(935, 20);
			this->topLabel->TabIndex = 92;
			this->topLabel->Text = L"Tidex prediction chart";
			this->topLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// viewPortControl1
			// 
			this->viewPortControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->viewPortControl1->Location = System::Drawing::Point(121, 625);
			this->viewPortControl1->Margin = System::Windows::Forms::Padding(2);
			this->viewPortControl1->Name = L"viewPortControl1";
			this->viewPortControl1->Size = System::Drawing::Size(900, 92);
			this->viewPortControl1->TabIndex = 93;
			this->viewPortControl1->TabStop = false;
			this->viewPortControl1->Viewer = this->winChartViewer1;
			this->viewPortControl1->Visible = false;
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// saveFileDialog2
			// 
			this->saveFileDialog2->DefaultExt = L"dat";
			this->saveFileDialog2->Filter = L"Archivos de datos (*.dat)|*.dat";
			this->saveFileDialog2->InitialDirectory = L"C:\\Users\\...\\Documents";
			this->saveFileDialog2->Title = L"Save data file";
			// 
			// ChartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1025, 717);
			this->Controls->Add(this->viewPortControl1);
			this->Controls->Add(this->topLabel);
			this->Controls->Add(this->leftPanel);
			this->Controls->Add(this->winChartViewer1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1041, 756);
			this->MinimumSize = System::Drawing::Size(1041, 756);
			this->Name = L"ChartForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Chart view ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->winChartViewer1))->EndInit();
			this->leftPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->viewPortControl1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

//CHART DIRECTOR CONFIGURACIÓN 
	private:
		//cargar datos fichero .dat
		System::Void loadData()
		{
			std::string* fecha, * finalDate;
			std::stringstream* hora;
			double* resultado;
			const char* fechafinal;

			if (filename != "")
			{
				std::filebuf fichero;
				std::ifstream tempFilestream;
				tempFilestream.open((const char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(filename).ToPointer(), std::ios::in);

				if (!fichero.open((const char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(filename).ToPointer(), std::ios::in) || !tempFilestream.is_open())
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
						hora[ssCounter] << fecha[dateCounter] << " " << fecha[dateCounter + 1] << "/" << fecha[dateCounter + 2] << "/" << fecha[dateCounter + 3];
						finalDate[ssCounter] = hora[ssCounter].str();

					}
					dateCounter += 4;
					valueCounter++;
					ssCounter++;
				}
				fechafinal = new const char[lines];

				for (int i = 0; i < lines; i++)
				{
					fechafinal = (const char*)finalDate[i].c_str();
				}
				delete filestream;
				fichero.close();

				labels = gcnew array<System::String^, 1>(lines);
				result = gcnew array<double>(lines);

				for (int i = 0; i < lines; i++)
				{
					labels[i] = msclr::interop::marshal_as<String^>(finalDate[i]);
					result[i] = resultado[i];
				}

			}
		}
	//
	// Initialize the WinChartViewer
	// 
		System::Void initChartViewer()
		{
			
			winChartViewer1->setFullRange("x", 0, 1);
			winChartViewer1->ViewPortWidth = 0.2;
			winChartViewer1->ViewPortLeft = 1 - winChartViewer1->ViewPortWidth;
			if (lines != 0)
			{
				winChartViewer1->ZoomInWidthLimit = 10 / lines;
			}
			winChartViewer1->MouseUsage = ChartDirector::WinChartMouseUsage::ScrollOnDrag;
			winChartViewer1->MouseWheelZoomRatio = 1.1;
		}

 // The ViewPortChanged event handler. This event occurs if the user scrolls or zooms in
 // or out the chart by dragging or clicking on the chart. It can also be triggered by
 // calling WinChartViewer.updateViewPort.
 //
		System::Void winChartViewer1_ViewPortChanged(System::Object^ sender, WinViewPortEventArgs^ e)
		{
				if (e->NeedUpdateChart)
				{
					drawChart();
				}	
		}
		System::Void drawChart()
		{
			double viewPortStartDate = winChartViewer1->getValueAtViewPort("x", winChartViewer1->ViewPortLeft);
			double viewPortEndDate = winChartViewer1->getValueAtViewPort("x", winChartViewer1->ViewPortLeft +
				winChartViewer1->ViewPortWidth);

			int startPoint = (int)floor(viewPortStartDate * lines);
			int endPoint = (int)ceil(viewPortEndDate * lines);
			int totalPoints = endPoint - startPoint;

			labels2 = gcnew array<System::String^, 1>(totalPoints);
			result2 = gcnew array<double>(totalPoints);

			for (int i = 0; i < totalPoints; i++)
			{
				labels2[i] = labels[i + startPoint];
				result2[i] = result[i + startPoint];
			}
			//Chart size
			c = gcnew ChartDirector::XYChart(900,600);
			c->setPlotArea(55, 55, c->getWidth() - 80, c->getHeight() - 90, c->linearGradientColor(0, 55, 0, c->getHeight() - 35, 0xf0f6ff, 0x99F3DF), -1, ChartDirector::Chart::Transparent, 0xffffff, 0xffffff);
			c->setClipping();
			c->addTitle("Tide Prediction", "msjh.ttc", 20, 0x555555);
			c->getLegend()->setLineStyleKey();
			c->getLegend()->setFontSize(10);
			c->xAxis()->setColors(ChartDirector::Chart::Transparent, ChartDirector::Chart::TextColor, ChartDirector::Chart::TextColor, 0xaaaaaa);
			c->yAxis()->setColors(ChartDirector::Chart::Transparent);
			c->xAxis()->setLabelStyle("msjh.ttc", 10);
			c->yAxis()->setLabelStyle("msjh.ttc", 10);
			if (unit == "cm/s")
			{
				c->yAxis()->setTitle("Velocity (cm/s)", "msjh.ttc", 10);
			}
			else
			{
				if (unit == "m")
				{
					c->yAxis()->setTitle("Sea Level (m)", "msjh.ttc", 10);
				}
				else
				{
					if (unit == "cm")
					{
						c->yAxis()->setTitle("Sea Level (cm)", "msjh.ttc", 10);
					}else c->yAxis()->setTitle("Velocity (m/s)", "msjh.ttc", 10);
				}
			}
			c->xAxis()->setTitle("Time", "msjh.ttc", 14, 0x555555);

			c->addLineLayer(result2);
			c->xAxis()->setLabels(labels2);

			c->yAxis()->setTickDensity(30);


			if (!winChartViewer1->IsInMouseMoveEvent)
			{
				trackLegend(c, (nullptr == winChartViewer1->Chart) ? c->getPlotArea()->getRightX() :
					winChartViewer1->PlotAreaMouseX);
			}
			delete winChartViewer1->Chart;

			winChartViewer1->Chart = c;
		}
		System::Void trackLegend(ChartDirector::XYChart^ c, int mouseX)
		{
			ChartDirector::DrawArea^ d = c->initDynamicLayer();
			ChartDirector::PlotArea^ plotArea = c->getPlotArea();

			double xValue = c->getNearestXValue(mouseX);
			int xCoor = c->getXCoor(xValue);

			d->vline(plotArea->getTopY(), plotArea->getBottomY(), xCoor, 0x0C1AF0);

			std::vector<std::string> legendEntries;

			for (int i = 0; i < c->getLayerCount(); ++i)
			{
				ChartDirector::Layer^ layer = c->getLayerByZ(i);
				int xIndex = layer->getXIndexOf(xValue);

				for (int j = 0; j < layer->getDataSetCount(); ++j)
				{
					ChartDirector::DataSet^ dataSet = layer->getDataSetByZ(j);
					const char* dataName = msclr::interop::marshal_as<std::string>(dataSet->getDataName()).c_str();
					int color = dataSet->getDataColor();
					if (dataName && *dataName && (color != ChartDirector::Chart::Transparent)) {
						double dataValue = dataSet->getValue(xIndex);
						std::ostringstream legendEntry;
						legendEntry << "<*block*>" << msclr::interop::marshal_as<std::string>(dataSet->getLegendIcon()) << " " << dataName << ": " << ((dataValue == ChartDirector::Chart::NoValue) ? "N/A" : msclr::interop::marshal_as<std::string>(c->formatValue(dataValue, "{value|P4}"))) << "<*/*>";
						legendEntries.push_back(legendEntry.str());

						int yCoor = c->getYCoor(dataSet->getPosition(xIndex), dataSet->getUseYAxis());
						if ((yCoor >= plotArea->getTopY()) && (yCoor <= plotArea->getBottomY())) {
							d->circle(xCoor, yCoor, 5, 5, color, color);
						}
					}
				}
			}

			std::ostringstream legendText;
			int actualValue = (int)floor(xValue);
			legendText << "<*block,maxWidth=" << plotArea->getWidth() << "*><*block*><*font=arialbd.ttf*>[" << msclr::interop::marshal_as<std::string>(c->xAxis()->getFormattedLabel(xValue, "mm/dd/yyyy")) << "][" << " Value: " << result2[actualValue] << "]<*/*>";

			for (int i = ((int)legendEntries.size()) - 1; i >= 0; --i)
				legendText << "        " << legendEntries[i];

			String^ bo = msclr::interop::marshal_as<String^>(legendText.str());
			ChartDirector::TTFText^ t = d->text(bo, "arialbd.ttf", 10);
			t->draw(plotArea->getLeftX() + 5, plotArea->getTopY() - 3, 0x333333, ChartDirector::Chart::BottomLeft);
		}
		System::Void WinChartViewer1_MouseMovePlotArea(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		{

			trackLegend((ChartDirector::XYChart^)winChartViewer1->Chart, winChartViewer1->PlotAreaMouseX);
			winChartViewer1->updateDisplay();
		}
		System::Void drawFullChart()
		{
			// Create an XYChart object of viewport size 640 x 60 pixels   
			XYChart^ chart = gcnew ChartDirector::XYChart(900, 92);
			chart->setPlotArea(55, 0, chart->getWidth() - 80, chart->getHeight() - 1, 0xc0d8ff, -1, 0x888888, ChartDirector::Chart::Transparent, 0xffffff);

			chart->xAxis()->setColors(ChartDirector::Chart::Transparent);
			chart->xAxis()->setLabelStyle("Arial", 10);

			chart->xAxis()->setLabelGap(-1);
			chart->xAxis()->setLabelAlignment(1);

			chart->yAxis()->setColors(ChartDirector::Chart::Transparent, ChartDirector::Chart::Transparent);

			chart->addLineLayer(result);
			chart->xAxis()->setLabels(labels);

			chart->xAxis()->setTickDensity(75);
			chart->yAxis()->setRounding(false, false);

			viewPortControl1->Chart = chart;
		}
		//
		// Draw track cursor when mouse is moving over plotarea
		//
		System::Void winChartViewer1_MouseMovePlotArea(System::Object^ sender, System::EventArgs^ e)
		{
			WinChartViewer^ viewer = (WinChartViewer^)sender;
			trackLineLegend((XYChart^)viewer->Chart, viewer->PlotAreaMouseX);
			viewer->updateDisplay();
		}

		System::Void trackLineLegend(XYChart^ c, int mouseX)
		{
			// Clear the current dynamic layer and get the DrawArea object to draw on it.
			DrawArea^ d = c->initDynamicLayer();

			// The plot area object
			PlotArea^ plotArea = c->getPlotArea();

			// Get the data x-value that is nearest to the mouse, and find its pixel coordinate.
			double xValue = c->getNearestXValue(mouseX);
			int xCoor = c->getXCoor(xValue);

			// Draw a vertical track line at the x-position
			d->vline(plotArea->getTopY(), plotArea->getBottomY(), xCoor, 0xaaaaaa);

			// Container to hold the legend entries
			ArrayList^ legendEntries = gcnew ArrayList();

			// Iterate through all layers to build the legend array
			for (int i = 0; i < c->getLayerCount(); ++i) {
				Layer^ layer = c->getLayerByZ(i);

				// The data array index of the x-value
				int xIndex = layer->getXIndexOf(xValue);

				// Iterate through all the data sets in the layer
				for (int j = 0; j < layer->getDataSetCount(); ++j) {
					ChartDirector::DataSet^ dataSet = layer->getDataSetByZ(j);

					// We are only interested in visible data sets with names
					String^ dataName = dataSet->getDataName();
					int color = dataSet->getDataColor();
					if ((!String::IsNullOrEmpty(dataName)) && (color != Chart::Transparent)) {
						// Build the legend entry, consist of the legend icon, name and data value.
						double dataValue = dataSet->getValue(xIndex);
						legendEntries->Add("<*block*>" + dataSet->getLegendIcon() + " " + dataName + ": " + ((
							dataValue == Chart::NoValue) ? "N/A" : c->formatValue(dataValue, "{value|P4}")) +
							"<*/*>");

						// Draw a track dot for data points within the plot area
						int yCoor = c->getYCoor(dataSet->getPosition(xIndex), dataSet->getUseYAxis());
						if ((yCoor >= plotArea->getTopY()) && (yCoor <= plotArea->getBottomY())) {
							d->circle(xCoor, yCoor, 4, 4, color, color);
						}
					}
				}
			}

			// Create the legend by joining the legend entries
			legendEntries->Reverse();
			String^ legendText = "<*block,maxWidth=" + plotArea->getWidth() + "*><*block*><*font=Arial Bold*>["
				+ c->xAxis()->getFormattedLabel(xValue, "mmm dd, yyyy") + "]<*/*>        " + String::Join(
					"        ", (String^)legendEntries->ToString()) + "<*/*>";

			// Display the legend on the top of the plot area
			TTFText ^t = d->text(legendText, "Arial Bold", 10);
			t->draw(plotArea->getLeftX() + 5, plotArea->getTopY() - 3, 0x000000, Chart::BottomLeft);
		}
//
// Save button event handler
//
private: System::Void SavePB_Click_1(System::Object^ sender, System::EventArgs^ e) {
	// The standard Save File dialog
	SaveFileDialog^ fileDlg = gcnew SaveFileDialog();
	fileDlg->Filter = "PNG (*.png)|*.png|JPG (*.jpg)|*.jpg|GIF (*.gif)|*.gif|BMP (*.bmp)|*.bmp|" +
		"SVG (*.svg)|*.svg|PDF (*.pdf)|*.pdf";
	fileDlg->FileName = "chartname";
	if (fileDlg->ShowDialog() != System::Windows::Forms::DialogResult::OK)
		return;
	ChartDirector::DrawArea^ d = c->initDynamicLayer();
	ChartDirector::PlotArea^ plotArea = c->getPlotArea();
	String^ b = " ";
	ChartDirector::TTFText^ t = d->text(b, "arialbd.ttf", 10);
	// Save the chart
	if (nullptr != winChartViewer1->Chart)
		winChartViewer1->Chart->makeChart(fileDlg->FileName);
}
//
 // Zoom out button event handler
 //
private: System::Void ZoomOutPB_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (zoomOutPB->Checked)
		winChartViewer1->MouseUsage = WinChartMouseUsage::ZoomOut;
}
//
// Zoom in button event handler
//
private: System::Void ZoomInPB_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (zoomInPB->Checked)
		winChartViewer1->MouseUsage = WinChartMouseUsage::ZoomIn;
}
//
// Pointer (Drag to Scroll) button event handler
//
private: System::Void PointerPB_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (pointerPB->Checked)
		winChartViewer1->MouseUsage = WinChartMouseUsage::ScrollOnDrag;
}
//Boton para imprimir el trozo de grafica que se muestra por pantalla
private: System::Void PrintPB_Click(System::Object^ sender, System::EventArgs^ e)
{
	printDialog1->Document = printDocument1;
	//Call ShowDialog
	if (printDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &ChartForm::PrintDocument1_PrintPage);
		printDocument1->Print();
	}
}
//Metodo que imprime gráfica
private: System::Void PrintDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e)
{

	System::Drawing::Point* point1 = new System::Drawing::Point(0, 0);
	System::Drawing::Point* point2 = new System::Drawing::Point(700, 0);
	System::Drawing::Point* point3 = new System::Drawing::Point(0, 600);
	array<System::Drawing::Point>^ points = gcnew array<System::Drawing::Point>{*point1, * point2, * point3};
	ChartDirector::DrawArea^ d = c->initDynamicLayer();
	ChartDirector::PlotArea^ plotArea = c->getPlotArea();
	String^ b = " ";
	ChartDirector::TTFText^ t = d->text(b, "arialbd.ttf", 10);
	t->draw(plotArea->getLeftX() + 5, plotArea->getTopY() - 3, 0x333333, ChartDirector::Chart::BottomLeft);
	e->Graphics->DrawImage(winChartViewer1->Chart->makeImage(), points);
	e->HasMorePages = false;

}

public: System::Void Savedatabutton_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog2->ShowDialog();
	if (saveFileDialog2->FileName != "")
	{
		std::stringstream sTempPredicction;
		sTempPredicction << buf << "\\TempPredicction.dat";
		std::string TempPredicctionPath=sTempPredicction.str();
		const std::filesystem::path pd = msclr::interop::marshal_as<std::string>(saveFileDialog2->FileName).c_str();
		std::cout << pd <<std:: endl;
		std::filesystem::copy_file(TempPredicctionPath.c_str(),pd, std::filesystem::copy_options::overwrite_existing);

	}
}
};
	
}
