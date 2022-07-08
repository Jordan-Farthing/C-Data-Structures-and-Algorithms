#include "../DataStructuresProject.h"
#pragma warning( push )
#pragma warning( disable : 6011 )

extern struct Node* first;

struct Node* LSearch(struct Node* p, int key)
{
	struct Node* q = NULL;

	while (p != NULL)
	{
		if (key == p->data)
		{
			q->next = p->next;
			p->next = first;
			first = p;
			return p;
		}
		q = p;
		p = p->next;
	}
	return NULL;

}

struct Node* RSearch(struct Node* p, int key)
{
	if (p == NULL)
		return NULL;
	if (key == p->data)
		return p;
	return RSearch(p->next, key);

}

//int main()
//{
//	struct Node* temp;
//	int A[] = { 3,5,7,10,25,8,32,2 };
//	create(A, 8);
//	temp = LSearch(first, 8);
//	printf("%d", temp->data);
//
//	return 0;
//}

#pragma warning( pop )