#ifndef COLDNODE_H
#define COLDNODE_H

#include "HotNode.h"

class HotNode;

class ColdNode
{
public:
	ColdNode();
	ColdNode(const ColdNode&) = default;
	ColdNode& operator = (const ColdNode&) = default;
	~ColdNode() = default;

	//example data
	HotNode* pHot;
	int		a;
	int		b;
	int		c;
	float	x;
	float	y;
	float	z;
	
};

#endif