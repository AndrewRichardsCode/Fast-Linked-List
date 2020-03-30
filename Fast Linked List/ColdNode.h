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
	int		d;
	int		e;
	int		f;
	int		g;
	int		h;
	int		i;
	int		j;
	int		k;
	int		l;
	int		m;
	int		n;
	int		o;
	int		p;
	
	
};

#endif