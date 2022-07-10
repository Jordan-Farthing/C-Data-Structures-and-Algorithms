#pragma once
struct Queue
{
	int size;
	int front;
	int rear;
	int* Q;
};

void create(struct Queue* q, int size);
void enqueue(struct Queue* q, int x);
int dequeue(struct Queue* q);
void Display(struct Queue q);

class QueueClass {
private:
    int size;
    int front;
    int rear;
    int* Q;
public:
    QueueClass(int size);
    ~QueueClass();
    bool isFull();
    bool isEmpty();
    void enqueue(int x);
    int dequeue();
    void display();
};

class CircularQueue {
private:
    int size;
    int front;
    int rear;
    int* Q;
public:
    CircularQueue(int size);
    ~CircularQueue();
    bool isFull();
    bool isEmpty();
    void enqueue(int x);
    int dequeue();
    void display();
};


class LinkedListQueue {
private:
    ClassNode* front;
    ClassNode* rear;
public:
    LinkedListQueue();
    ~LinkedListQueue();
    void enqueue(int x);
    int dequeue();
    bool isEmpty();
    void display();
};

class DEQueue {
private:
    int front;
    int rear;
    int size;
    int* Q;

public:
    DEQueue(int size);
    ~DEQueue();
    void display();
    void enqueueFront(int x);
    void enqueueRear(int x);
    int dequeueFront();
    int dequeueRear();
    bool isEmpty();
    bool isFull();
};

class TwoStackQueue {
private:
    stack<int> e_stk;
    stack<int> d_stk;
public:
    TwoStackQueue() {};
    ~TwoStackQueue() {};
    void enqueue(int x);
    int dequeue();
};