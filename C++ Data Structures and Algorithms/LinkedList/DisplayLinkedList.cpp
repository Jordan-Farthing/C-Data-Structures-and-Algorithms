#include "../DataStructuresProject.h"
#pragma warning( push )
#pragma warning( disable : 6011 )
#pragma warning( push )
#pragma warning( disable : 6385 )
#pragma warning( push )
#pragma warning( disable : 6386 )
#pragma warning( push )
#pragma warning( disable : 6031 )

struct Node* first;

void create(int A[], int n)
{
	int i =0;
	struct Node* t, * last;
	first = (struct Node*)malloc(sizeof(struct Node));
	first->data = A[0];
	first->next = NULL;
	last = first;

	for (int i = 1; i < n; i++)
	{
		t = (struct Node*)malloc(sizeof(struct Node));
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

void Display(struct Node* p)
{
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
}

void RecursiveDisplay(struct Node* p)
{
	if (p != NULL)
	{
		printf("%d ", p->data);
		RecursiveDisplay(p->next);
	}
}

//extern struct Node* first;
//
//int main()
//{
//	int A[] = { 3,5,7,10,15 };
//
//	create(A, 5);
//
//	RecursiveDisplay(first);
//
//	return 0;
//}

#pragma warning( pop )