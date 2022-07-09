#pragma once

struct Stack
{
	int size;
	int top;
	int* S;
};

void create(struct Stack* st);
void Display(struct Stack st);
void push(struct Stack* st, int x);
int pop(struct Stack* st);
int peek(struct Stack st, int index);
int isEmpty(struct Stack st);
int isFull(struct Stack st);
int stackTop(struct Stack st);

extern struct Node* top;
void LinkedListStackpush(int x);
int LinkedListStackpop();
void LinkedListStackDisplay();


class StackClass
{
private:
	ClassNode* top;
public:
	StackClass() { top = NULL; };
	void push(int x);
	int pop();
	void Display();
};

int isOperand(char x);
int outPrecedence(char x);
int inPrecedence(char x);
char* convert(char* infix);