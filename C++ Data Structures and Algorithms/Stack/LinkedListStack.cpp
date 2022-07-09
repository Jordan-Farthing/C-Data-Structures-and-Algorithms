#include "../DataStructuresProject.h"

struct Node* top=NULL;

void LinkedListStackpush(int x)
{
	struct Node* t;
	t = (struct Node*)malloc(sizeof(struct Node));
	if (t == NULL)
		printf("stack is full\n");
	else 
	{
		t->data = x;
		t->next = top;
		top = t;
	}
}

int LinkedListStackpop()
{
	struct Node* t;
	int x = -1;
	if (top == NULL)
		printf("Stack is empty\n");
	else
	{
		t = top;
		top = top->next;
		x = t->data;
		free(t);
	}
	return x;
}

void LinkedListStackDisplay()
{
	struct Node* p;
	p = top;
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

//int main()
//{
//	LinkedListStackpush(10);
//	LinkedListStackpush(20);
//	LinkedListStackpush(30);
//	LinkedListStackDisplay();
//	printf("%d ", LinkedListStackpop());
//	return 0;
//}