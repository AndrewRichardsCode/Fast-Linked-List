#include "FastList.h"
#include "HotNode.h"

int main()
{
	const unsigned int totalNodes = 100;
	FastList* list = new FastList(totalNodes);

	for (unsigned int i = 1; i < totalNodes; i++) {
		HotNode* newNode = list->push_back();
	}

	list->printList();
	delete list;
}

