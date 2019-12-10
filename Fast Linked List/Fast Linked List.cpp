#include "FastList.h"
#include "HotNode.h"
#include "Timer.h"
#include "SlowNode.h"
#include "SlowList.h"
#include <stdio.h>

//DEMO - walks the lists to find the key in the last Node and prints time
int main()
{
	Timer fastTimer;
	Timer slowTimer;
	const unsigned int totalNodes = 300000;

	//-------------------------------------------
	//Create SlowList
	//-------------------------------------------
	slowTimer.StartTimer();
	SlowList* list = new SlowList();
	SlowNode* slowNode;
	for (unsigned int i = 1; i < totalNodes; i++) {
		slowNode = new SlowNode();
		list->push_back(slowNode);
	}
	bool found = list->FindKey(slowNode->key);
	delete list;
	slowTimer.StopTimer();
	float slowTime = slowTimer.TimeInSeconds() * 1000.0f;

	//---------------------------------------------
	//Create FastList
	//-------------------------------------------
	fastTimer.StartTimer();
	HotNode* newNode;
	FastList* list2 = new FastList(totalNodes);
	for (unsigned int i = 1; i < totalNodes; i++) {
		newNode = list2->push_back();
	}
	bool found2 = list2->FindKey(newNode->key);
	delete list2;
	fastTimer.StopTimer();
	float fastTime = fastTimer.TimeInSeconds() * 1000.0f;

	//-------------------------------------------
	//Print Results
	//-------------------------------------------
	printf("Regular Linked List:	%.2fms\n\n", slowTime);
	printf("Fast Linked List:	%.2fms\n\n", fastTime);
	printf("%.2f times faster\n",  slowTime / fastTime);
}

