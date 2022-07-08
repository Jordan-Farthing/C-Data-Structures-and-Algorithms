#include "../DataStructuresProject.h"
#pragma warning( push )
#pragma warning( disable : 6011 )

extern struct Node* first;

void Insert(struct Node* p, int index, int x)
{
	struct Node* t;
	int i;

	if (index < 0 || index > count(p))
		return;
	t = (struct Node*)malloc(sizeof(struct Node));
	t->data = x;

	if (index == 0)
	{
		t->next = first;
		first = t;
	}
	else
	{
		for (i = 0; i < index - 1; i++)
			p = p->next;
		t->next = p->next;
		p->next = t;

	}
}

//extern struct Node* first;
// 
//int main()
//{
//
//	int A[] = { 10,20,30,40,50 };
//	create(A, 5);
//
//	Insert(first, 0, 5);
//	Display(first);
//	return 0;
//}

//Insert for Sorted List only
void SortedInsert(struct Node* p, int x)
{
	struct Node* t, * q = NULL;
	t = (struct Node*)malloc(sizeof(struct Node));
	t->data = x;
	t->next = NULL;

	if (first == NULL)
		first = t;
	else
	{
		while (p && p->data < x)
		{
			q = p;
			p = p->next;
		}
		if (p == first)
		{
			t->next = first;
			first = t;
		}
		else
		{
			t->next = q->next;
			q->next = t;
		}
	}
}

//extern struct Node* first;
//
//int main()
//{
//
//	int A[] = { 10,20,30,40,50 };
//	create(A, 5);
//	SortedInsert(first, 35);
//
//	Display(first);
//	printf("\n\n");
//	return 0;
//}

#pragma warning( pop )