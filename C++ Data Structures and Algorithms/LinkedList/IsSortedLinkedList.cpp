#include "../DataStructuresProject.h"

extern struct Node* first;

int isSorted(struct Node* p)
{
	int x = -65536;

	while (p != NULL)
	{
		if (p->data < x)
			return 0;
		x = p->data;
		p = p->next;
	}
	return 1;
}

//extern struct Node* first;
//
//int main()
//{
//
//	int A[] = { 10,20,30,40,50 };
//	create(A, 5);
//
//	if (isSorted(first))
//	{
//		printf("Sorted\n");
//	}
//	else
//	{
//		printf("Not Sorted\n");
//	}
//
//	Display(first);
//	printf("\n\n");
//
//	return 0;
//}