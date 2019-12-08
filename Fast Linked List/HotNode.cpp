#include "HotNode.h"
#include <stdlib.h>

HotNode::HotNode()
	:pNext(0), pPrev(0), pCold(0)
{
	this->key = rand();
}



