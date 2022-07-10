#include "../DataStructuresProject.h"
#pragma warning( push )
#pragma warning( disable : 6011 )
#pragma warning( push )
#pragma warning( disable : 6385 )
#pragma warning( push )
#pragma warning( disable : 6031 )
#pragma warning( push )
#pragma warning( disable : 6001 )
#pragma warning( push )
#pragma warning( disable : 4244 )

//first node of Polynomial
struct PolyNode* PolyNode;

void PolyLinkedListCreate()
{
	struct PolyNode* t, * last = NULL;
	int num;
	printf("Enter number of terms");
	scanf("%d", &num);
	printf("Enter each term with coeff and exp\n");
	
	for (int i = 0; i < num; i++)
	{
		t = (struct PolyNode*)malloc(sizeof(struct PolyNode));
		scanf("%d%d", &t->coeff, &t->exp);
		t->next = NULL;
		if (PolyNode == NULL)
		{
			PolyNode = last = t;
		}
		else
		{
			last->next = t;
			last = t;
		}
	}
}

void PolyLinkedListDisplay(struct PolyNode* p)
{
	while (p)
	{
		printf("%dx%d +", p->coeff, p->exp);
		p = p->next;
	}
	printf("\n");
}
int PolyLinkedListEval(struct PolyNode* p, int x)
{
	long val = 0;
	while (p)
	{
		val += p->coeff * pow(x, p->exp);
		p = p->next;
	}
	return val;
}

//extern struct PolyNode* PolyNode;
//
//int main()
//{
//	PolyLinkedListCreate();
//	PolyLinkedListDisplay(PolyNode);
//	printf("%ld\n", PolyLinkedListEval(PolyNode, 1));
//
//	return 0;
//}
#pragma warning( pop )