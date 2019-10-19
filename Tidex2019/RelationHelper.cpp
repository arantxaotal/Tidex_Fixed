#include "RelationHelper.h"
RelationHelper::RelationHelper(Form^ newf)
{
	newform = newf;
}

RelationHelper::~RelationHelper()
{
	delete newform;
}
