#include "../DataStructuresProject.h"

extern struct Node* first;

int isLoop(struct Node* f)
{
	struct Node* p, * q;
	p = q = f;
	do
	{
		p = p->next;
		q = q->next;
		q = q ? q->next : q;
	} while (p && q && p != q);
	if (p == q)
		return 1;
	else return 0;
}

//extern struct Node* first;
//
//int main()
//{
//	struct Node* t1, * t2;
//	int A[] = { 10,20,30,40,50 };
//	create(A, 5);
//
//	t1 = first->next->next;
//	t2 = first->next->next->next->next;
//	t2->next = t1;
//
//	printf("%d\n", isLoop(first));
//	return 0;
//}