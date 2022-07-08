#include "../DataStructuresProject.h"
#pragma warning( push )
#pragma warning( disable : 6011 )
#pragma warning( push )
#pragma warning( disable : 28182 )

extern struct Node* first;
struct Node* second;
struct Node* third;

void create2(int A[], int n)
{
	int i = 0;
	struct Node* t, * last;
	second = (struct Node*)malloc(sizeof(struct Node));
	second->data = A[0];
	second->next = NULL;
	last = second;

	for (int i = 1; i < n; i++)
	{
		t = (struct Node*)malloc(sizeof(struct Node));
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

void Concatentate(struct Node* p, struct Node* q)
{
	third = p;
	while (p->next != NULL)
		p = p->next;
	p->next = q;
}

void Merge(struct Node* p, struct Node* q)
{
	struct Node* last;
	if (p->data < q->data)
	{
		third = last = p;
		p=p->next;
		third->next = NULL;
	}
	else
	{
		third = last = q;
		q=q->next;
		third->next = NULL;
	}
	while (p && q)
	{
		if (p->data < q->data)
		{
			last->next = p;
			last = p;
			p = p->next;
			last->next = NULL;
		}
		else
		{
			last->next = q;
			last = q;
			q = q->next;
			last->next = NULL;
		}
	}
	if (p) last->next = p;
	if (q) last->next = q;
}

//extern struct Node* first;
//extern struct Node* second;
//
//int main()
//{
//
//	int A[] = { 10,20,30,40,50 };
//	int B[] = { 5,152,252,352,452 };
//	create(A, 5);
//	create2(B, 5);
//
//	Merge(first, second);
//	Display(third);
//	return 0;
//}
#pragma warning( pop )