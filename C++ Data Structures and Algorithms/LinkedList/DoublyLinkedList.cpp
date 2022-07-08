#include "../DataStructuresProject.h"
#pragma warning( push )
#pragma warning( disable : 6011 )
#pragma warning( push )
#pragma warning( disable : 28182 )

struct DoublyLinkedNode* firstNode;

void DoublyLinkedListCreate(int A[], int n)
{
	struct DoublyLinkedNode* t, * last;
	int i;

	firstNode = (struct DoublyLinkedNode*)malloc(sizeof(struct DoublyLinkedNode));
	firstNode->data = A[0];
	firstNode->prev = firstNode->next = NULL;
	last = firstNode;

	for (i = 1; i < n; i++)
	{
		t = (struct DoublyLinkedNode*)malloc(sizeof(struct DoublyLinkedNode));
		t->data = A[i];
		t->next = last->next;
		t->prev = last;
		last->next = t;
		last = t;
	}
}

void DoublyLinkedListDisplay(struct DoublyLinkedNode* p)
{
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

int DoublyLinkedListLength(struct DoublyLinkedNode* p)
{
	int len = 0;
	while (p)
	{
		len++;
		p = p->next;
	}
	return len;
}

//extern struct DoublyLinkedNode* firstNode;
//
//int main()
//{
//	int A[] = { 10,20,30,40,50 };
//	DoublyLinkedListCreate(A, 5);
//	printf("\nLength is : % d\n", DoublyLinkedListLength(firstNode));
//	DoublyLinkedListDisplay(firstNode);
//	return 0;
//}

void DoublyLinkedListInsert(struct DoublyLinkedNode* p, int index, int x)
{
	struct DoublyLinkedNode* t;
	int i;
	if (index < 0 || index > DoublyLinkedListLength(p))
		return;
	if (index == 0)
	{
		t = (struct DoublyLinkedNode*)malloc(sizeof(struct DoublyLinkedNode));
		t->data = x;
		t->prev = NULL;
		t->next = firstNode;
		firstNode->prev = t;
		firstNode = t;
	}
	else
	{
		for (i = 0; i < index - 1; i++) p = p->next;
		t = (struct DoublyLinkedNode*)malloc(sizeof(struct DoublyLinkedNode));
		t->data = x;
		t->prev = p;
		t->next = p->next;
		if (p->next) p->next->prev = t;
		p->next = t;

	}
}

//extern struct DoublyLinkedNode* firstNode;
//
//int main()
//{
//	int A[] = { 10,20,30,40,50 };
//	DoublyLinkedListCreate(A, 5);
//	DoublyLinkedListInsert(firstNode, 2, 25);
//	DoublyLinkedListDisplay(firstNode);
//	return 0;
//}

int DoublyLinkedListDelete(struct DoublyLinkedNode* p, int index)
{
	int x = -1, i;
	if (index<1 || index>DoublyLinkedListLength(p))
		return x;
	if (index == 1)
	{
		firstNode = firstNode->next;
		if (firstNode)firstNode->prev = NULL;
		x = p->data;
		free(p);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
			p = p->next;
		p->prev->next = p->next;
		if (p->next)
			p->next->prev = p->prev;
		x = p->data;
		free(p);
	}
	return x;
}

//extern struct DoublyLinkedNode* firstNode;
//
//int main()
//{
//	int A[] = { 10,20,30,40,50 };
//	DoublyLinkedListCreate(A, 5);
//	DoublyLinkedListDelete(firstNode, 1);
//	DoublyLinkedListDisplay(firstNode);
//	return 0;
//}

void DoublyLinkedListReverse(struct DoublyLinkedNode* p)
{
	struct DoublyLinkedNode* temp;
	while (p != NULL)
	{
		temp = p->next;
		p->next = p->prev;
		p->prev = temp;
		p = p->prev;
		if (p!=NULL && p->next == NULL)
			firstNode = p;
	}
}

//extern struct DoublyLinkedNode* firstNode;
//
//int main()
//{
//	int A[] = { 10,20,30,40,50 };
//	DoublyLinkedListCreate(A, 5);
//	DoublyLinkedListReverse(firstNode);
//	DoublyLinkedListDisplay(firstNode);
//	return 0;
//}
#pragma warning( pop )