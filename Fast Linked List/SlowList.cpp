#include "SlowList.h"
#include <stdio.h>
#include <assert.h>

SlowList::SlowList() {
	this->pHead = nullptr;
	this->pEnd = nullptr;
}

SlowList::~SlowList() {
	SlowNode* current = this->pHead;
	SlowNode* dead;
	while (current != 0) {
		dead = current;
		current = current->pNext;
		delete dead;
	}
}

bool SlowList::FindKey(unsigned int key) {
	SlowNode* tmp = this->pHead;
	while (tmp != nullptr) {
		if (tmp->key == key) {
			return true;
		}
		tmp = tmp->pNext;
	}
	return false;
}


void SlowList::push_back(SlowNode* node) {
	assert(node != nullptr);
	if (this->pHead == 0) {
		this->pHead = node;
		this->pEnd = node;
	}
	else {
		node->pPrev = this->pEnd;
		this->pEnd->pNext = node;
		this->pEnd = node;
	}
}

void SlowList::printList() {
	unsigned int i = 1;
	SlowNode* tmp = this->pHead;
	while (tmp != nullptr) {
		printf("Node: %d Key:%d\n", i, tmp->key);
		tmp = tmp->pNext;
		i++;
	}
}
