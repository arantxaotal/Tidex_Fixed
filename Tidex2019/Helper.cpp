#include "Helper.h"

Helper::Helper(char* directory)
{
	buf = new char[256];
	buf = directory;
}

Helper::~Helper()
{
	delete[] buf;
}
