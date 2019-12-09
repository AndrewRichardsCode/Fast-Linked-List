#include "SlowNode.h"
#include <stdlib.h>

SlowNode::SlowNode() 
{
	this->pNext = nullptr;
	this->pPrev = nullptr;
	this->x = rand();
	this->y = rand();
	this->z = rand();
	this->key = rand();


}

