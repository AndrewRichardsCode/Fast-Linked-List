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
	int		q;
	int		r;
	int		s;
	int		t;
	int		u;
	int		v;
	int		w;
	int		x;
	int		y;
	int		z;
	float	ex1;
	float	ex2;
	float	ex3;
	float	ex4;
	float	ex5;
	float	ex6;
	float	ex7;
	float	ex8;
	float	ex9;
	float	ex10;
	
};

#endif