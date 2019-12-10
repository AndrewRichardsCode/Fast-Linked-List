#include "SlowNode.h"
#include <stdlib.h>

SlowNode::SlowNode() 
{
	this->pNext = nullptr;
	this->pPrev = nullptr;
	this->a = rand();
	this->b = rand();
	this->c = rand();
	this->x = rand();
	this->y = rand();
	this->z = rand();
	this->key = 0;
}



