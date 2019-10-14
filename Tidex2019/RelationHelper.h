#pragma once

#include "NewForm.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Tidex2019;

	public ref class RelationHelper 
	{
	public:
		NewForm^ newform;
		RelationHelper(NewForm^ newform);
		~RelationHelper();
	};
