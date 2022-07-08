#include "../DataStructuresProject.h"
#pragma warning( push )
#pragma warning( disable : 6011 )
#pragma warning( push )
#pragma warning( disable : 6385 )
#pragma warning( push )
#pragma warning( disable : 6386 )
extern struct Node* first;

void Reverse1(struct Node* p)
{
	int* A, i = 0;
	struct Node* q = p;

	A = (int*)malloc(sizeof(int) * count(p));

	while (q != NULL)
	{
		A[i] = q->data;
		q = q->next;
		i++;
	}
	q = p;
	i--;
	while (q != NULL)
	{
		q->data = A[i];
		q = q->next;
		i--;
	}
}
void Reverse2(struct Node* p)
{
	struct Node* q = NULL, * r = NULL;

	while (p != NULL)
	{
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	first = q;
}
void Reverse3(struct Node* q, struct Node* p)
{
	if (p)
	{
		Reverse3(p, p->next);
		p->next = q;
	}
	else
		first = q;
}

//int main()
//{
//
//	int A[] = { 10,20,40,50,60 };
//	create(A, 5);
//
//
//	Reverse1(first);
//	Display(first);
//
//	return 0;
//}

#pragma warning( pop )