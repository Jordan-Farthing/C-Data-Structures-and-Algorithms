#include "../DataStructuresProject.h"

extern struct Node* first;

int Delete(struct Node* p, int index)
{
	struct Node* q = NULL;
	int x = -1, i;

	if (index < 1 || index > count(p))
		return -1;
	if (index == 1)
	{
		q = first;
		x = first->data;
		first = first->next;
		free(q);
		return x;
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			q = p;
			p = p->next;
		}
		q->next = p->next;
		x = p->data;
		free(p);
		return x;
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
//	printf("%d\n", Delete(first, 2));
//		Display(first);
//
//	return 0;
//}