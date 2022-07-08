#include "../DataStructuresProject.h"

ClassLinkedList::ClassLinkedList(int A[], int n)
{
	ClassNode* last, * t;
	int i = 0;

	first = new ClassNode;
	first->data = A[0];
	first->next = NULL;
	last = first;

	for (i = 1; i < n; i++)
	{
		t = new ClassNode;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

ClassLinkedList::~ClassLinkedList()
{
	ClassNode* p = first;
	while (first)
	{
		first = first->next;
		delete p;
		p = first;
	}
}

void ClassLinkedList::Display()
{
	ClassNode* p = first;

	while (p)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

int ClassLinkedList::Length()
{
	ClassNode* p = first;
	int len = 0;

	while (p)
	{
		len++;
		p = p->next;
	}
	return len;
}

void ClassLinkedList::Insert(int index, int x)
{
	ClassNode* t, * p = first;

	if (index <0 || index > Length())
		return;
	t = new ClassNode;
	t->data = x;
	t->next = NULL;

	if (index == 0)
	{
		t->next = first;
		first = t;
	}
	else
	{
		for (int i = 0; i < index - 1; i++)
			p = p->next;
		t->next = p->next;
		p->next = t;
	}
}

int ClassLinkedList::Delete(int index)
{
	ClassNode* p, * q = NULL;
	int x = -1;

	if (index < 1 || index > Length())
		return -1;
	if (index == 1)
	{
		p = first;
		first = first->next;
		x = p->data;
		delete p;
	}
	else
	{
		p = first;
		for (int i = 0; i < index - 1; i++)
		{
			q = p;
			p = p->next;
		}
		q->next = p->next;
		x = p->data;
		delete p;
	}
	return x;
}


//int main()
//{
//	int A[] = { 1,2,3,4,5 };
//	ClassLinkedList l(A, 5);
//
//	l.Insert(3, 10);
//
//	l.Display();
//
//	return 0;
//}