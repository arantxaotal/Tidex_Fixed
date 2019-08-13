#pragma once
//#include"chartdir.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <msclr/marshal_cppstd.h>

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

			//TODO: agregar c�digo de constructor aqu�
		}

		ChartForm(String^u,String ^ f)
		{
			InitializeComponent();
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
	private:

		String^ filename;
	private: System::Windows::Forms::Panel^ leftPanel;
	private: System::Windows::Forms::Button^ savePB;
	private: System::Windows::Forms::Label^ separatorLine;
	private: System::Windows::Forms::RadioButton^ pointerPB;
	private: System::Windows::Forms::RadioButton^ zoomInPB;
	private: System::Windows::Forms::RadioButton^ zoomOutPB;
	private: System::Windows::Forms::Label^ topLabel;
	private: System::Windows::Forms::Button^ printPB;


	private: ChartDirector::WinViewPortControl^ viewPortControl1;
	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ChartForm()
		{
			if (components)
			{
				delete components;
			}
		}
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
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ChartForm::typeid));
			this->winChartViewer1 = (gcnew ChartDirector::WinChartViewer());
			this->leftPanel = (gcnew System::Windows::Forms::Panel());
			this->printPB = (gcnew System::Windows::Forms::Button());
			this->savePB = (gcnew System::Windows::Forms::Button());
			this->separatorLine = (gcnew System::Windows::Forms::Label());
			this->pointerPB = (gcnew System::Windows::Forms::RadioButton());
			this->zoomInPB = (gcnew System::Windows::Forms::RadioButton());
			this->zoomOutPB = (gcnew System::Windows::Forms::RadioButton());
			this->topLabel = (gcnew System::Windows::Forms::Label());
			this->viewPortControl1 = (gcnew ChartDirector::WinViewPortControl(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->winChartViewer1))->BeginInit();
			this->leftPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->viewPortControl1))->BeginInit();
			this->SuspendLayout();
			// 
			// winChartViewer1
			// 
			this->winChartViewer1->Location = System::Drawing::Point(126, 27);
			this->winChartViewer1->Name = L"winChartViewer1";
			this->winChartViewer1->Size = System::Drawing::Size(654, 405);
			this->winChartViewer1->TabIndex = 90;
			this->winChartViewer1->TabStop = false;
			this->winChartViewer1->MouseMovePlotArea += gcnew System::Windows::Forms::MouseEventHandler(this, &ChartForm::WinChartViewer1_MouseMovePlotArea);
			this->winChartViewer1->ViewPortChanged += gcnew ChartDirector::WinViewPortEventHandler(this, &ChartForm::winChartViewer1_ViewPortChanged);
			// 
			// leftPanel
			// 
			this->leftPanel->BackColor = System::Drawing::Color::White;
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
			this->leftPanel->Name = L"leftPanel";
			this->leftPanel->Size = System::Drawing::Size(120, 510);
			this->leftPanel->TabIndex = 91;
			// 
			// printPB
			// 
			this->printPB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->printPB->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.07563F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->printPB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"printPB.Image")));
			this->printPB->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->printPB->Location = System::Drawing::Point(0, 143);
			this->printPB->Name = L"printPB";
			this->printPB->Size = System::Drawing::Size(120, 28);
			this->printPB->TabIndex = 37;
			this->printPB->Text = L"      Print";
			this->printPB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->printPB->Click += gcnew System::EventHandler(this, &ChartForm::PrintPB_Click);
			// 
			// savePB
			// 
			this->savePB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->savePB->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.07563F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->savePB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"savePB.Image")));
			this->savePB->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->savePB->Location = System::Drawing::Point(0, 109);
			this->savePB->Name = L"savePB";
			this->savePB->Size = System::Drawing::Size(120, 28);
			this->savePB->TabIndex = 36;
			this->savePB->Text = L"      Save";
			this->savePB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->savePB->Click += gcnew System::EventHandler(this, &ChartForm::SavePB_Click_1);
			// 
			// separatorLine
			// 
			this->separatorLine->BackColor = System::Drawing::Color::Black;
			this->separatorLine->Dock = System::Windows::Forms::DockStyle::Right;
			this->separatorLine->Location = System::Drawing::Point(119, 0);
			this->separatorLine->Name = L"separatorLine";
			this->separatorLine->Size = System::Drawing::Size(1, 510);
			this->separatorLine->TabIndex = 31;
			// 
			// pointerPB
			// 
			this->pointerPB->Appearance = System::Windows::Forms::Appearance::Button;
			this->pointerPB->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->pointerPB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pointerPB->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.07563F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pointerPB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pointerPB.Image")));
			this->pointerPB->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pointerPB->Location = System::Drawing::Point(0, 0);
			this->pointerPB->Name = L"pointerPB";
			this->pointerPB->Size = System::Drawing::Size(120, 28);
			this->pointerPB->TabIndex = 0;
			this->pointerPB->Text = L"      Pointer";
			this->pointerPB->CheckedChanged += gcnew System::EventHandler(this, &ChartForm::PointerPB_CheckedChanged_1);
			// 
			// zoomInPB
			// 
			this->zoomInPB->Appearance = System::Windows::Forms::Appearance::Button;
			this->zoomInPB->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->zoomInPB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zoomInPB->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.07563F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zoomInPB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zoomInPB.Image")));
			this->zoomInPB->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->zoomInPB->Location = System::Drawing::Point(0, 27);
			this->zoomInPB->Name = L"zoomInPB";
			this->zoomInPB->Size = System::Drawing::Size(120, 28);
			this->zoomInPB->TabIndex = 1;
			this->zoomInPB->Text = L"      Zoom In";
			this->zoomInPB->CheckedChanged += gcnew System::EventHandler(this, &ChartForm::ZoomInPB_CheckedChanged);
			// 
			// zoomOutPB
			// 
			this->zoomOutPB->Appearance = System::Windows::Forms::Appearance::Button;
			this->zoomOutPB->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->zoomOutPB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zoomOutPB->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.07563F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zoomOutPB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zoomOutPB.Image")));
			this->zoomOutPB->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->zoomOutPB->Location = System::Drawing::Point(0, 54);
			this->zoomOutPB->Name = L"zoomOutPB";
			this->zoomOutPB->Size = System::Drawing::Size(120, 28);
			this->zoomOutPB->TabIndex = 2;
			this->zoomOutPB->Text = L"      Zoom Out";
			this->zoomOutPB->CheckedChanged += gcnew System::EventHandler(this, &ChartForm::ZoomOutPB_CheckedChanged);
			// 
			// topLabel
			// 
			this->topLabel->BackColor = System::Drawing::Color::DarkSlateGray;
			this->topLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->topLabel->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 10.28571F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->topLabel->ForeColor = System::Drawing::Color::PowderBlue;
			this->topLabel->Location = System::Drawing::Point(120, 0);
			this->topLabel->Name = L"topLabel";
			this->topLabel->Size = System::Drawing::Size(660, 24);
			this->topLabel->TabIndex = 92;
			this->topLabel->Text = L"Tidex prediction chart";
			this->topLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// viewPortControl1
			// 
			this->viewPortControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->viewPortControl1->Location = System::Drawing::Point(126, 438);
			this->viewPortControl1->Name = L"viewPortControl1";
			this->viewPortControl1->Size = System::Drawing::Size(654, 60);
			this->viewPortControl1->TabIndex = 93;
			this->viewPortControl1->TabStop = false;
			this->viewPortControl1->Viewer = this->winChartViewer1;
			// 
			// ChartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::PowderBlue;
			this->ClientSize = System::Drawing::Size(780, 510);
			this->Controls->Add(this->viewPortControl1);
			this->Controls->Add(this->topLabel);
			this->Controls->Add(this->leftPanel);
			this->Controls->Add(this->winChartViewer1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"ChartForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Chart view ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->winChartViewer1))->EndInit();
			this->leftPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->viewPortControl1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

//CHART DIRECTOR CONFIGURACI�N 
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
			winChartViewer1->ZoomInWidthLimit = 10 / lines;

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
					//Debugging
					//std::cout << "Actualizando grafica" << std::endl;
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
			ChartDirector::XYChart^ c = gcnew ChartDirector::XYChart(640, 400);
			c->setPlotArea(55, 55, c->getWidth() - 80, c->getHeight() - 90, c->linearGradientColor(0, 55, 0, c->getHeight() - 35, 0xf0f6ff, 0xa0c0ff), -1, ChartDirector::Chart::Transparent, 0xffffff, 0xffffff);
			c->setClipping();
			c->addTitle("Predicci�n de mareas", "arial.ttf", 20, 0x555555);
			c->getLegend()->setLineStyleKey();
			c->getLegend()->setFontSize(10);

			c->xAxis()->setColors(ChartDirector::Chart::Transparent, ChartDirector::Chart::TextColor, ChartDirector::Chart::TextColor, 0xaaaaaa);
			c->yAxis()->setColors(ChartDirector::Chart::Transparent);
			c->xAxis()->setLabelStyle("arial.ttf", 10);
			c->yAxis()->setLabelStyle("arial.ttf", 10);
			if (unit == "cm/s")
			{
				c->yAxis()->setTitle("Velocidad cm/s", "arial.ttf", 10);
			}
			else
			{
				if (unit == "m")
				{
					c->yAxis()->setTitle("Metros", "arial.ttf", 10);
				}
				else
				{
					c->yAxis()->setTitle("Velocidad m/s", "arial.ttf", 10);
				}
			}
			c->xAxis()->setTitle("Tiempo", "arial.ttf", 14, 0x555555);

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

			d->vline(plotArea->getTopY(), plotArea->getBottomY(), xCoor, 0xaaaaaa);

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
			legendText << "<*block,maxWidth=" << plotArea->getWidth() << "*><*block*><*font=arialbd.ttf*>[" << msclr::interop::marshal_as<std::string>(c->xAxis()->getFormattedLabel(xValue, "mm/dd/yyyy")) << "][" << " Valor: " << result2[actualValue] << "]<*/*>";

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
			// Create an XYChart object of size 640 x 60 pixels   
			XYChart^ c = gcnew XYChart(640, 60);

			// Set the plotarea with the same horizontal position as that in the main chart for alignment.
			c->setPlotArea(55, 0, c->getWidth() - 80, c->getHeight() - 1, 0xc0d8ff, -1, 0x888888,
				Chart::Transparent, 0xffffff);

			// Set the x axis stem to transparent and the label font to 10pt Arial
			c->xAxis()->setColors(Chart::Transparent);
			c->xAxis()->setLabelStyle("Arial", 10);

			// Put the x-axis labels inside the plot area by setting a negative label gap. Use
			// setLabelAlignment to put the label at the right side of the tick.
			c->xAxis()->setLabelGap(-1);
			c->xAxis()->setLabelAlignment(1);

			// Set the y axis stem and labels to transparent (that is, hide the labels)
			c->yAxis()->setColors(Chart::Transparent, Chart::Transparent);

			// Add a line layer for the lines with fast line mode enabled
			LineLayer^ layer = c->addLineLayer();
			layer->setFastLineMode();
			c->addLineLayer(result);
			c->xAxis()->setLabels(labels);
			// The x axis scales should reflect the full range of the view port
			c->xAxis()->setDateScale(winChartViewer1->getValueAtViewPort("x", 0), winChartViewer1->getValueAtViewPort("x", 1));

			// For the automatic x-axis labels, set the minimum spacing to 75 pixels.
			c->xAxis()->setTickDensity(75);

			// For the auto-scaled y-axis, as we hide the labels, we can disable axis rounding. This can
			// make the axis scale fit the data tighter.
			c->yAxis()->setRounding(false, false);

			// Output the chart
			viewPortControl1->Chart = c;
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

private: System::Void PrintPB_Click(System::Object^ sender, System::EventArgs^ e) {
	PrintDialog^ printDlg = gcnew PrintDialog();
	System::Drawing::Printing::PrintDocument^ documento=gcnew System::Drawing::Printing::PrintDocument();
	//documento = dynamic_cast<System::Drawing::Printing::PrintDocument^>(winChartViewer1->Chart->makeImage()->ToString());
	printDlg->Document = documento;
	documento->DocumentName = winChartViewer1->Name;
	printDlg->AllowSelection = true;
	printDlg->AllowSomePages = true;
	printDlg->ShowHelp = true;
	//Call ShowDialog
	if (printDlg->ShowDialog() != System::Windows::Forms::DialogResult::OK)
	{
		documento->Print();
	}
}

};
	
}
