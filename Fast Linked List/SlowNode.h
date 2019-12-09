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
	float	x;
	float	y;
	SlowNode* pPrev;
	float	z;
	unsigned int key;
};

#endif