#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

	public ref class RelationHelper 
	{
	public:
		Form^ newform;
		RelationHelper(Form^ newform);
		~RelationHelper();
	};
