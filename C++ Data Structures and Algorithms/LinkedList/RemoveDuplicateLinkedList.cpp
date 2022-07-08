#include "../DataStructuresProject.h"
#pragma warning( push )
#pragma warning( disable : 6001 )

extern struct Node* first;

void RemoveDuplicate(struct Node* p)
{
	struct Node* q = p->next;

	while (q != NULL)
	{
		if (p->data != q->data)
		{
			p = q;
			q = q->next;
		}
		else
		{
			p->next = q->next;
			free(q);
			q = p->next;
		}
	}

}

//int main()
//{
//
//	int A[] = { 10,20,20,40,50,50,50,60 };
//	create(A, 8);
//
//
//	RemoveDuplicate(first);
//	Display(first);
//
//	return 0;
//}

#pragma warning( pop )