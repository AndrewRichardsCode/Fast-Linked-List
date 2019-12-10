#ifndef SLOWNODE_H
#define SLOWNODE_H

//FOR COMPARISON PURPOSES IN MAIN()
class SlowNode
{
public:
	SlowNode();
	SlowNode(const SlowNode&) = default;
	SlowNode& operator = (const SlowNode&) = default;
	~SlowNode() = default;

	//Data:
	SlowNode* pNext;
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
	SlowNode* pPrev;
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
	unsigned int key;
};

#endif