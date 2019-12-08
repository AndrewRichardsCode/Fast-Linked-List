#ifndef FASTLIST_H
#define FASTLIST_H

#include "HotNode.h"
#include "ColdNode.h"

class FastList
{
	FastList() = delete;
	FastList(const unsigned int maxNumNodes);
	~FastList();
	FastList(const FastList&) = delete;
	FastList& operator = (const FastList&) = delete;

	bool FindKey(unsigned int key);
	HotNode* GetHotHead() const;
	HotNode* push_back();
	void printList();

private:
	HotNode* pHotHead;
	ColdNode* pColdHead;
	HotNode* pFreeHotNode;
	ColdNode* pFreeColdNode;

};

#endif

