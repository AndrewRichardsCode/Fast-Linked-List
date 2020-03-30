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
	
	SlowNode* pPrev;
	
	unsigned int key;
};

#endif