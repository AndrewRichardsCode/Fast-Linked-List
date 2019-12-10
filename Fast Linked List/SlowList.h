//FOR COMPARISON PURPOSES IN MAIN()
#ifndef SLOWLIST_H
#define SLOWLST_H

#include "SlowNode.h"

class SlowList
{
public:
	SlowList();
	~SlowList();
	SlowList(const SlowList&) = delete;
	SlowList& operator = (const SlowList&) = delete;

	bool FindKey(unsigned int key);
	void push_back(SlowNode* node);
	void printList();

private:
	SlowNode* pHead;
	SlowNode* pEnd;
};

#endif
