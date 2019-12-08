#include "FastList.h"
#include <stdio.h>

FastList::FastList(const unsigned int maxNumNodes) 

{
	this->pHotHead = new HotNode[maxNumNodes];
	this->pColdHead = new ColdNode[maxNumNodes];

	//this->pHotHead->pCold = this->pColdHead;
	//this->pColdHead->pHot = this->pHotHead;
	this->pFreeHotNode = this->pHotHead;
	this->pFreeColdNode = this->pColdHead;
}

FastList::~FastList() {
	delete[] this->pHotHead;
	delete[] this->pColdHead;
}


HotNode* FastList::GetHotHead() const {
	return this->pHotHead;
}

bool FastList::FindKey(unsigned int key)
{
	HotNode* tmp = this->GetHotHead();
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
	HotNode* tmp = this->GetHotHead();
	while (tmp != nullptr) {
		printf("%d\n", tmp->key);
		tmp = tmp->pNext;
	}
}
