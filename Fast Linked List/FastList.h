#ifndef FASTLIST_H
#define FASTLIST_H

#include "HotNode.h"
#include "ColdNode.h"

class FastList
{
	FastList();
	~FastList();
	FastList(const FastList&) = delete;
	FastList& operator = (const FastList&) = delete;

	bool FindKey(unsigned int key);
	HotNode* GetHotHead() const;

private:
	HotNode* pHotHead;
	ColdNode* pColdNode;
	HotNode* pFreeNode;

};

#endif

