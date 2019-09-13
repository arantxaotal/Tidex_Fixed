#pragma once
#include <process.h>
#include <fstream>
#include <string>
#include <iostream>
#include <process.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class Helper
{
public:
	char* buf;
	Helper(char *directory);
	~Helper();
};

