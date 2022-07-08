#include "../DataStructuresProject.h"
#pragma warning( push )
#pragma warning( disable : 6011 )

struct Node* Head;

void CircularLinkedListCreate(int A[], int n)
{
	int i;
	struct Node* t, *last;
	Head = (struct Node*)malloc(sizeof(struct Node));
	Head->data = A[0];
	Head->next = Head;
	last = Head;
	for (i = 1; i < n; i++)
	{
		t = (struct Node*)malloc(sizeof(struct Node));
		t->data = A[i];
		t->next = last->next; 
		last->next = t;
		last = t;
	}
}

void CircularLinkedListDisplay(struct Node* h)
{
	do
	{
		printf("%d ", h->data);
		h = h->next;
	} while (h != Head);
	printf("\n");

}

void RecursiveCircularLinkedListDisplay(struct Node* h)
{
	static int flag = 0;
	if (h != Head || flag == 0)
	{
		flag = 1;
		printf("%d ", h->data);
		RecursiveCircularLinkedListDisplay(h->next);
	}
	flag = 0;
}

//int main()
//{
//	int A[] = { 2,3,4,5,6 };
//	CircularLinkedListCreate(A, 5);
//	RecursiveCircularLinkedListDisplay(Head);
//	return 0;
//}

int CircularLinkedListLength(struct Node* p)
{
	int len = 0;
	do
	{
		len++;
		p = p->next;
	} while (p != Head);
	return len;
}
void CircularLinkedListInsert(struct Node* p, int index, int x)
{
	struct Node* t;
	int i;
	if (index<0 || index > CircularLinkedListLength(p))
		return;

	if (index == 0)
	{
		t = (struct Node*)malloc(sizeof(struct Node));
		t->data = x;
		if (Head == NULL)
		{
			Head = t;
			Head->next = Head;
		}
		else
		{
			while (p->next != Head) p = p->next;
			p->next = t;
			t->next = Head;
			Head = t;
		}
	}
	else
	{
		for (i = 0; i < index - 1; i++)p = p->next;
		t = (struct Node*)malloc(sizeof(struct Node));
		t->data = x;
		t->next = p->next;
		p->next = t;
	}
}

//int main()
//{
//	int A[] = { 2,3,4,5,6 };
//	CircularLinkedListCreate(A, 5);
//	CircularLinkedListInsert(Head, 2, 10);
//	RecursiveCircularLinkedListDisplay(Head);
//	return 0;
//}

int CircularLinkedListDelete(struct Node* p, int index)
{
	struct Node* q;
	int i, x= -1;
	if (index<0 || index > CircularLinkedListLength(Head))
		return x;
	if (index == 1)
	{
		while (p->next != Head) p = p->next;
		x = Head->data;
		if (Head == p)
		{
			free(Head);
			Head = NULL;
		}
		else
		{
			p->next = Head->next;
			free(Head);
			Head = p->next;
		}
	}
	else
	{
		for (i = 0; i < index - 2; i++)
			p = p->next;
		q = p->next;
		p->next = q->next;
	}
	return x;
}

//int main()
//{
//	int A[] = { 2,3,4,5,6 };
//	CircularLinkedListCreate(A, 5);
//	CircularLinkedListDelete(Head, 2);
//	RecursiveCircularLinkedListDisplay(Head);
//	return 0;
//}
#pragma warning( pop )