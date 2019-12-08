#ifndef HOTNODE_H
#define HOTNODE_H

#include "ColdNode.h"

class ColdNode;

class HotNode
{
public:
	HotNode();
	HotNode(const HotNode&) = default;
	HotNode& operator = (const HotNode&) = default;
	~HotNode() = default;

	//Data:
	HotNode* pNext;
	unsigned int key;
	//pad?
	HotNode* pPrev;
	ColdNode* pCold;
};

#endif
