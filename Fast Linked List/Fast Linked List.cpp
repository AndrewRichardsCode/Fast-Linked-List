#include "FastList.h"
#include "HotNode.h"
#include "Timer.h"
#include "SlowNode.h"
#include "SlowList.h"
#include <stdio.h>
#include <list>

//DEMO - walks the lists to find the key in the last Node and prints time
int main()
{
	Timer fastTimer;
	Timer slowTimer;
	const unsigned int totalNodes = 300000;

	//-------------------------------------------
	//Create SlowList and find key
	//-------------------------------------------
	SlowList* list = new SlowList();
	SlowNode* slowNode;
	for (unsigned int i = 0; i < totalNodes; i++) {
		slowNode = new SlowNode();
		slowNode->key = i;
		list->push_back(slowNode);
	}
	slowTimer.StartTimer();
	bool found = list->FindKey(slowNode->key);
	slowTimer.StopTimer();
	float slowTime = slowTimer.TimeInSeconds() * 1000.0f;
	delete list;
	//---------------------------------------------
	//Create FastList and find Key
	//-------------------------------------------
	HotNode* newNode;
	FastList* list2 = new FastList(totalNodes);
	for (unsigned int i = 0; i < totalNodes; i++) {
		newNode = list2->push_back();
		newNode->key = i;
	}
	fastTimer.StartTimer();
	bool found2 = list2->FindKey(newNode->key);
	fastTimer.StopTimer();
	float fastTime = fastTimer.TimeInSeconds() * 1000.0f;
	delete list2;
	//-------------------------------------------
	//Print Results
	//-------------------------------------------
	printf("Regular Linked List:	%.2fms\n\n", slowTime);
	printf("Fast Linked List:	%.2fms\n\n", fastTime);
	printf("%.2f times faster\n",  slowTime / fastTime);
}

