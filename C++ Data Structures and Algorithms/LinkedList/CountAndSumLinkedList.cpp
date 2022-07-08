#include "../DataStructuresProject.h"

extern struct Node* first;

int count(struct Node* p)
{
	int l = 0;
	while (p)
	{
		l++;
		p = p->next;
	}
	return l;
}

int RecursiveCount(struct Node* p)
{
	if (p != NULL)
		return RecursiveCount(p->next) + 1;
	else
		return 0;
}

int sum(struct Node* p)
{
	int s = 0;
	
	while (p != NULL)
	{
		s += p->data;
		p = p->next;
	}
	return s;
}

int RecursiveSum(struct Node* p)
{
	if (p == NULL)
		return 0;
	else
		return RecursiveSum(p->next) + p->data;
}

//extern struct Node* first;
//
//int main()
//{
//	int A[] = { 3,5,7,10,15,8,12,20 };
//
//	create(A, 8);
//
//	printf("Length is %d\n\n", RecursiveCount(first));
//	printf("Sum  is %d\n\n", RecursiveSum(first));
//	return 0;
//}