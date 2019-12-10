#include "FastList.h"
#include <stdio.h>

FastList::FastList(const unsigned int maxNumNodes) 

{
	this->pHotHead = new HotNode[maxNumNodes];
	this->pColdHead = new ColdNode[maxNumNodes];

	this->pFreeHotNode = this->pHotHead;
	this->pFreeColdNode = this->pColdHead;
}

FastList::~FastList() {
	delete[] this->pHotHead;
	delete[] this->pColdHead;
}

bool FastList::FindKey(unsigned int key)
{
	HotNode* tmp = this->pHotHead;
	while (tmp != nullptr) {
		if (tmp->key == key) {
			return true;
		}
		tmp = tmp->pNext;
	}
	return false;
}

HotNode* FastList::push_back() {
	HotNode* tmp = this->pFreeHotNode;
	tmp->pNext = ++this->pFreeHotNode;
	tmp->pNext->pPrev = tmp;

	tmp->pCold = this->pFreeColdNode;
	this->pFreeColdNode->pHot = tmp;
	this->pFreeColdNode++;
	return tmp;
}

void FastList::printList() {
	unsigned int i = 1;
	HotNode* tmp = this->pHotHead;
	while (tmp != nullptr) {
		printf("Node: %d HotKey:%d\n", i, tmp->key);
		tmp = tmp->pNext;
		i++;
	}
}
