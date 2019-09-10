#pragma once
#if !defined(harmonic_h)
#define harmonic_h

//#include <classlib/arrays.h>
#include <stdio.h>
#include <string.h>
//#include <owl/dc.h>
using namespace System;
using namespace System::Windows::Forms;

struct MY_DATE {
	unsigned int	 Year;
	unsigned int	 Month;
	unsigned int	 Day;
	unsigned int	 Hour;
	unsigned int	 Minute;
};

struct MY_COORD {
	int	 Degree;
	int	 Minute;
};

struct HARMONIC_DATA {
	char    Name[8];
	double  G;
	double  A;
};

struct OUTPUT_DATA {
	short int	 Year;
	short int	 Month;
	short int	 Day;
	short int	 Hour;
	short int	 Minute;
	double     Value;
};

class THarmonicData {
public:
	THarmonicData(String^ Filename);
	~THarmonicData();

	void Calculate();
	bool IsChanged() { return IsChanges; };
	bool Read(String^ filename);
	bool Write(String^)const;

	HARMONIC_DATA* InputArray;
	unsigned int   InputCount;

	OUTPUT_DATA* OutputArray;
	unsigned int   OutputCount;

	MY_DATE        BeginDate;
	MY_DATE        EndDate;

	MY_COORD       Latitude;
	MY_COORD       Longitude;

	unsigned int  Depth;

	int MeasurementTime;

	int            MinValue;
	int            MaxValue;

	char           OutputFile[256];
	char           ObservFile[256];
	char           AstroFile[256];
	char           TempFile[256];
	char           InitialPath[256];

	bool           IsChanges;
	bool           NeedCalc;

	void Draw();

	bool operator ==(const THarmonicData& other) const { return &other == this; }
};

#endif