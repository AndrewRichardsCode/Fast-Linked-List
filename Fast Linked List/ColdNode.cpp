#include "ColdNode.h"
#include <stdlib.h>

ColdNode::ColdNode() 
	:pHot(0)
{
	this->a = rand();
	this->b = rand();
	this->c = rand();
	this->x = rand();
	this->y = rand();
	this->z = rand();
}
