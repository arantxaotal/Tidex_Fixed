#include "RelationHelper.h"
RelationHelper::RelationHelper(NewForm^ newf)
{
	newform = newf;
}

RelationHelper::~RelationHelper()
{
	delete newform;
}
