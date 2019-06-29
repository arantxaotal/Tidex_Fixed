#pragma once
#include"chartdir.h"
#include <string>
#include <iostream>
#include <fstream>

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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(492, 268);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 67);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Save chart";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChartForm::Button1_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"PDF(.pdf)|*.pdf|JPEG (.jpeg)|*.jpeg |PNG  (.png)|*.png";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// ChartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PowderBlue;
			this->ClientSize = System::Drawing::Size(1095, 638);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ChartForm";
			this->Text = L"ChartForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	//Botón que guarda gráfica 
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->ShowDialog();
		std::string linea, fecha, resultado;
		if (openFileDialog1->FileName != "")
		{
			
			std::ifstream fichero;
			fichero.open((const char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(openFileDialog1->FileName).ToPointer());
			if (!fichero.is_open())return;
			int cont = 0;
			while (getline(fichero, linea))
			{
				cont = 0;
				for (int i = 0; i < linea.size(); ++i)
				{
					if (cont<5)
					{
						if(linea[i]==' ')cont++;
						fecha+=linea[i];
					}else resultado += linea[i];
				}
			}
		}
		saveFileDialog1->ShowDialog();		
		if (saveFileDialog1->FileName != "")
		{
			
							// The data for the line chart
			double data[] = { stod(resultado) };
				
				// The labels for the bar chart
				const char* labels[] = { fecha.c_str() };

				// Create a XYChart object of size 250 x 250 pixels
				XYChart *c = new XYChart(900, 900);

				// Set the plotarea at (30, 20) and of size 200 x 200 pixels
				c->setPlotArea(30, 20, 200, 200);

				// Add a bar chart layer using the given data
				c->addLineLayer(DoubleArray(data, (int)(sizeof(data) / sizeof(data[0]))));

				// Set the labels on the x  axis.
				c->xAxis()->setLabels(StringArray(labels, (int)(sizeof(labels) / sizeof(labels[0]))));
				// Output the chart
		
				c->makeChart((const char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(saveFileDialog1->FileName).ToPointer());

				//free up resources
				delete c;
				
		}

	}
//Botón que elige datos para hacer la grafica
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->ShowDialog();
}
};
	
}
