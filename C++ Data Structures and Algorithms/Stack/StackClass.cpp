#include "../DataStructuresProject.h"

void StackClass::push(int x)
{
	ClassNode* t = new ClassNode;
	if (t == NULL)
		cout << "Stack is FUll";
	else
	{
		t->data = x;
		t->next = top;
		top = t;
	}
}

int StackClass::pop()
{
	int x = -1;
	if (top == NULL)
		cout << "Stack is Empty\n";
	else
	{
		x = top->data;
		ClassNode* t = top;
		top = top->next;
		delete t;
	}
	return x;
}

void StackClass::Display()
{
	ClassNode* p = top;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

//int main()
//{
//	StackClass stk;
//	stk.push(10);
//	stk.push(20);
//	stk.push(30);
//
//	stk.Display();
//	cout << stk.pop();
//	return 0;
//}