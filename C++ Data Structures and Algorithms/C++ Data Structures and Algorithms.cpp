#include "DataStructuresProject.h"

extern struct DoublyLinkedNode* firstNode;

int main()
{
	int A[] = { 10,20,30,40,50};
	DoublyLinkedListCreate(A, 5);
	DoublyLinkedListReverse(firstNode);
	DoublyLinkedListDisplay(firstNode);
	return 0;
}