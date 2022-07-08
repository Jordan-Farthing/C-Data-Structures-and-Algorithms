#include "../DataStructuresProject.h"

extern struct Node* first;

int Max(struct Node* p)
{
	int max = INT32_MIN;

	while (p)
	{
		if (p->data > max)
			max = p->data;
		p = p->next;
	}
	return max;

}

int RMax(struct Node* p)
{
	int x = 0;

	if (p == 0)
		return INT32_MIN;
	x = RMax(p->next);
	if (x > p->data)
		return x;
	else
		return p->data;
}

//int main()
//{
//	int A[] = { 3,5,7,10,25,8,32,2 };
//	create(A, 8);
//
//	printf("Max % d\n", Max(first));
//
//
//
//	return 0;
//}