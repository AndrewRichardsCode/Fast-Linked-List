#include "ColdNode.h"
#include <stdlib.h>

ColdNode::ColdNode() 
	:pHot(0)
{
	this->x = rand();
	this->y = rand();
	this->z = rand();
}
