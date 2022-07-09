#pragma once
struct Node
{
	int data;
	struct Node* next;
};

extern struct Node* first;
extern struct Node* second;
extern struct Node* third;

void create(int A[], int n);
void create2(int A[], int n);
void Display(struct Node* p);
void RecursiveDisplay(struct Node* p);
int count(struct Node* p);
int RecursiveCount(struct Node* p);
int sum(struct Node* p);
int RecursiveSum(struct Node* p);
int Max(struct Node* p);
int RMax(struct Node* p);
struct Node* LSearch(struct Node* p, int key);
struct Node* RSearch(struct Node* p, int key);
void Insert(struct Node* p, int index, int x);
void SortedInsert(struct Node* p, int x);
int Delete(struct Node* p, int index);
int isSorted(struct Node* p);
void RemoveDuplicate(struct Node* p);
void Reverse1(struct Node* p);
void Reverse2(struct Node* p);
void Reverse3(struct Node* q, struct Node* p);
void Concatentate(struct Node* p, struct Node* q);
void Merge(struct Node* p, struct Node* q);
int isLoop(struct Node* f);


class ClassNode
{
public:
	int data;
	ClassNode* next;
};

class ClassLinkedList
{
private:
	ClassNode* first; 
public:
	ClassLinkedList() { first = NULL; }
	ClassLinkedList(int A[], int n);
	~ClassLinkedList();
	void Display();
	void Insert(int index, int x);
	int Delete(int index);
	int Length();
};

extern struct Node* Head;

void CircularLinkedListCreate(int A[], int n);
void CircularLinkedListDisplay(struct Node* h);
void RecursiveCircularLinkedListDisplay(struct Node* h);
void CircularLinkedListInsert(struct Node* p, int index, int x);
int CircularLinkedListLength(struct Node* p);
int CircularLinkedListDelete(struct Node* p, int index);


struct DoublyLinkedNode
{
	struct DoublyLinkedNode* prev;
	int data;
	struct DoublyLinkedNode* next;
};
extern struct DoublyLinkedNode* firstNode;

void DoublyLinkedListCreate(int A[], int n);
void DoublyLinkedListDisplay(struct DoublyLinkedNode* p);
int DoublyLinkedListLength(struct DoublyLinkedNode* p);
void DoublyLinkedListInsert(struct DoublyLinkedNode* p, int index, int x);
int DoublyLinkedListDelete(struct DoublyLinkedNode* p, int index);
void DoublyLinkedListReverse(struct DoublyLinkedNode* p);


struct PolyNode
{
	int coeff;
	int exp;
	struct PolyNode* next;
};

//first node of Polynomial
extern struct PolyNode* PolyNode;

void PolyLinkedListCreate();
void PolyLinkedListDisplay(struct PolyNode* p);
int PolyLinkedListEval(struct PolyNode* p, int x);



