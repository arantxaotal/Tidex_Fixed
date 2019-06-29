#include"THarmonicData.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
//#include <boost/algorithm/string.hpp>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
//using namespace boost;

THarmonicData::THarmonicData(String^ Filename)
{
	InputCount = 0; //inicializa tamano lineas fichero de entrada
	OutputCount = 0; //inicializa tamano lineas fichero de salida
	InputArray = 0;  //inicializa array  entrada
	OutputArray = 0; //inicializa array salida
	IsChanges = false; //inicializa boolean
	NeedCalc = false;

	/*
	char drive[MAXDRIVE],
		dir[MAXDIR],
		name[MAXFILE],
		ext[MAXEXT],
		path[MAXPATH];

	if (strcpy(path, _argv[0])) {
		fnsplit(path, drive, dir, name, ext);
		sprintf(InitialPath, "%s%s", drive, dir);
	}
	*/

	string drive;
	string filename;
	string ext;
	string path;
	string InitialPath;

	string rawPath = (const char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(Filename).ToPointer();
	string rawFilename;

	vector<string> resultPath;
	vector<string> resultFilename;

	//Separamos mediante el algoritmo de Rub
	//split(resultPath, rawPath, is_any_of("\\"));
	rawFilename = resultPath[resultPath.size() - 1];
	//split(resultFilename, rawFilename, is_any_of("."));

	//Definimos las variables separadas
	drive = resultPath[0];
	filename = resultFilename[0];
	ext = resultFilename[1];

	path = "\\";
	for (int i = 1; i < resultPath.size() - 1; i++)
	{
		path += resultPath[i] + "\\";
	}

	InitialPath = drive + path;
	//OutputFile = InitialPath + "output.dat";

	cout << "Drive: " << drive << endl;
	cout << "Path: " << path << endl;
	cout << "Filename: " << filename << endl;
	cout << "Extension: " << ext << endl;

	sprintf_s(ObservFile, "");
	sprintf_s(OutputFile, "%s%s", InitialPath, "output.dat"); //fichero de salida datos prediccion generado
	sprintf_s(AstroFile, "%s%s", InitialPath, "astro.dat"); //fichero de datos astronomicos generado
	sprintf_s(TempFile, "%s%s", InitialPath, "calc.tmp"); //fichero generado con la fecha y demas datos
	cout << "TempFile: " << TempFile << endl;
}


//Destructor datos harmonicos
THarmonicData::~THarmonicData()
{
	if (InputArray) delete InputArray;
	if (OutputArray) delete OutputArray;
}
//Funcion que calcula predicción de datos armónicos
void THarmonicData::Calculate()
{
	/*char str[MAXPATH];
	char buffer[128];

	filebuf file_buf;
	file_buf.open(TempFile, ios::out | ios::trunc); //Abre fichero de datos armónicos
	ostream * outStream = new ostream(&file_buf); //Asigna espacio a fichero nuevo

	//lee datos fichero latitud,longitud, fecha inicio y fecha fin de fichero tempfile
	*outStream << Latitude.Degree << " " << Latitude.Minute << '\n';
	*outStream << Longitude.Degree << " " << Longitude.Minute << '\n';
	*outStream << BeginDate.Hour << " " << BeginDate.Minute << " " << BeginDate.Day
		<< " " << BeginDate.Month << " " << BeginDate.Year << '\n';
	*outStream << EndDate.Hour << " " << EndDate.Minute << " " << EndDate.Day
		<< " " << EndDate.Month << " " << EndDate.Year << '\n';
	//lee datos de variables armónicas con su nombre, A y G de fichero input
	for (int i = 0; i < InputCount; i++) {
		sprintf(buffer, "%7.4s   %7.4f %6.2f\n",
			InputArray[i].Name, InputArray[i].A, InputArray[i].G);
		if (InputArray[i].A != 0) * outStream << buffer;
	}//innecesario tambien porque es para almacenar espacio en un fichero

	file_buf.close(); //cierra buffer innecesario porque ya hemos guardado la fecha
	if (outStream) delete outStream;

	int result;

	//SOLO HACE FALTA ESTO
	//si no se ha introducido fichero de datos observado se crea ejecutable long2000 con los datos de fichero armónico y del astronomico
	if (!strlen(ObservFile)) { //si no le pasas el fichero de datos observados
		sprintf(str, "%s%s", InitialPath, "long2000.exe");
		//tempfile se sustituye por fichero .hdf
		result = spawnl(P_WAIT, str, str, AstroFile, OutputFile, TempFile, NULL); //almacena entero
		if (result == -1) exit(1);
	}
	else { //si se ha introducido fichero de datos observado se crea ejecutable long2000 con los datos de fichero armónico, del astronomico y el observado
		sprintf(str, "%s%s", InitialPath, "shrt2000.exe");
		result = spawnl(P_WAIT, str, str, AstroFile, OutputFile, TempFile, ObservFile, NULL); //almacena entero
		if (result == -1) exit(1);
	}
	file_buf.open(OutputFile, ios::in | ios::nocreate); //abre fichero output generado con spawl en el .exe
	istream * inStream = new istream(&file_buf);

	if (OutputArray) delete OutputArray;
	*inStream >> OutputCount;
	OutputArray = new OUTPUT_DATA[OutputCount]; //Introduce todas las hora, dia, mes, año y valor de fichero de salida
	for (int i = 0; i < OutputCount; i++)
		* inStream >> OutputArray[i].Hour >> OutputArray[i].Minute
		>> OutputArray[i].Day >> OutputArray[i].Month
		>> OutputArray[i].Year >> OutputArray[i].Value;

	file_buf.close(); //cierra fichero
	if (inStream) delete inStream;

	MinValue = int(OutputArray[1].Value * 1000);
	MaxValue = int(OutputArray[1].Value * 1000);
	for (int i = 0; i < OutputCount; i++) {
		if (MaxValue < int(OutputArray[i].Value * 1000))
			MaxValue = int(OutputArray[i].Value * 1000);
		if (MinValue > int(OutputArray[i].Value * 1000))
			MinValue = int(OutputArray[i].Value * 1000);
	}
	*/
}

//Hacer grafica?
void THarmonicData::Draw()
{
	//return true;
}

using namespace System::Runtime::InteropServices;
//introduce datos armonicos de un objeto de THarmonicData
bool THarmonicData::Read(String^ Filename)
{
	string filename = (const char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(Filename).ToPointer();

	HARMONIC_DATA /*Harmonic*/Input; // se crea 2 objetos el armonico y el de entrada, Harmonic parece que no se usa
	filebuf file_buf; //buffer
	istream* inStream; //se va a leer fichero
	//char buff[26]; //esteblemos tamaño de un buffer

	char str[256/*MAXPATH*/]; //establecemos tamaño maximo de otro buffer

	sprintf_s(str, "%s%s", InitialPath, "ARRAY.INI"); //fichero ARRAY.INI con los datos inicializados a 0

	if (!file_buf.open(str, ios::in /*| ios::nocreate*/)) return false;//3; //si fichero no se abre devuelve 3, abre fichero str
	inStream = new istream(&file_buf); //se reserva espacio para leer

	InputCount = 0; //contador inicial
	*inStream >> Latitude.Degree >> Latitude.Minute; //lee primera linea e introduce latitud: grados y minutos iniciales a 0
	*inStream >> Longitude.Degree >> Longitude.Minute; //lee segunda linea e introduce longitud: grados y minutos iniciales a 0
	*inStream >> Depth; // lee tercera linea e introduce datos iniciales a 0
	while (true) { //lee todos los datos armónios
		*inStream >> Input.Name; //introduce nombre
		if (inStream->eof()) break;
		*inStream >> Input.A; //introduce A inicial a 0
		*inStream >> Input.G; //introduce G inicial a 0
		if (inStream->eof()) break;
		InputCount++; //incremento contador
	}
	file_buf.close(); //cierra fichero str
	if (inStream) delete inStream; //borra buffer de lectura

	if (!file_buf.open(str, ios::in /*| ios::nocreate*/)) return false; //abre fichero str
	inStream = new istream(&file_buf); //reserva espacio para leer
	if (InputArray) delete InputArray; //elimina array de entrada si hay
	InputArray = new HARMONIC_DATA[InputCount]; //se crea nuevo array de entrada de datos
	*inStream >> Latitude.Degree >> Latitude.Minute;
	*inStream >> Longitude.Degree >> Longitude.Minute;
	*inStream >> Depth;
	for (unsigned int i = 0; i < InputCount; i++) {
		*inStream >> InputArray[i].Name;
		if (inStream->eof()) break;
		*inStream >> InputArray[i].A;
		*inStream >> InputArray[i].G;
		if (inStream->eof()) break;
	}

	file_buf.close(); //cierra fichero str
	if (inStream) delete inStream;
	if (!file_buf.open(filename, ios::in)) return false; //abre fichero filename
	inStream = new istream(&file_buf); //reserva espacio para leer
	*inStream >> Latitude.Degree >> Latitude.Minute; //lee de fichero de entrada la primera linea y almacena los valores de latitud
	*inStream >> Longitude.Degree >> Longitude.Minute;//lee de fichero de entrada la segunda linea y almacena los valores de longitud
	*inStream >> Depth;//lee de fichero de entrada la segunda linea y almacena el valor de profundidad
	while (!inStream->eof())
	{
		*inStream >> (" %.4s", Input.Name);//lee de fichero de entrada la linea y almacena el valor de nombre armónico
		if (inStream->eof()) {
			if (inStream) delete inStream;
			return true;
		}
		*inStream >> Input.A; //lee de fichero de entrada la linea y almacena el valor de A
		*inStream >> Input.G;//lee de fichero de entrada la linea y almacena el valor de G
		if (!inStream->eof() && inStream->bad()) {
			if (inStream) delete inStream;
			return false;
		}

		//-------------------------------------------------------------------
		unsigned int j = -1;
		do { j++; } while (j < InputCount && _stricmp(InputArray[j].Name, Input.Name));
		if (j != InputCount) {
			InputArray[j] = Input;
		}
		else {
			if (inStream) delete inStream;
			return false;
		}
		//-------------------------------------------------------------------
	}
	file_buf.close(); //cierra fichero filename
	if (inStream) delete inStream;
	return true;
}
//ver datos armonicos
bool THarmonicData::Write(String^ Filename)const
{
	string filename = (const char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(Filename).ToPointer();
	filebuf file_buf;
	file_buf.open(filename, ios::out | ios::trunc); //abre fichero de datos
	if (!file_buf.is_open()) return false;
	ostream outStream(&file_buf); //reserva espacio para escribir
	char buffer[128];

	sprintf_s(buffer, "%3i %2i\n", Latitude.Degree, Latitude.Minute);//formato
	outStream << buffer; //escribe datos de entrada grados y minutos de latitud
	sprintf_s(buffer, "%3i %2i\n", Longitude.Degree, Longitude.Minute);//formato
	outStream << buffer; //escribe datos de entrada grados y minutos de longitud
	sprintf_s(buffer, "%5i\n", Depth);//formato
	outStream << buffer;//escribe datos de entrada de profundidad
	for (unsigned int i = 0; i < InputCount; i++)
		if (InputArray[i].A != 0.0) {
			sprintf_s(buffer, "%7.4s   %7.4f %6.2f\n\n",
				InputArray[i].Name, InputArray[i].A, InputArray[i].G); //formato de los datos
			outStream << buffer;;//escribe datos de entrada de nombre, A y G de los datos armonicos
		}
	IsChanges == false;
	return outStream.good();


}

