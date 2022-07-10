#include "../DataStructuresProject.h"

LinkedListQueue::LinkedListQueue() {
    front = nullptr;
    rear = nullptr;
}

void LinkedListQueue::enqueue(int x) {
    ClassNode* t = new ClassNode;
    if (t == nullptr) {
        cout << "Queue Overflow" << endl;
    }
    else {
        t->data = x;
        t->next = nullptr;
        if (front == nullptr) {
            front = t;
            rear = t;
        }
        else {
            rear->next = t;
            rear = t;
        }
    }
}

int LinkedListQueue::dequeue() {
    int x = -1;
    ClassNode* p;
    if (isEmpty()) {
        cout << "Queue Underflow" << endl;
    }
    else {
        p = front;
        front = front->next;
        x = p->data;
        delete p;
    }
    return x;
}

bool LinkedListQueue::isEmpty() {
    if (front == nullptr) {
        return true;
    }
    return false;
}

LinkedListQueue::~LinkedListQueue() {
    ClassNode* p = front;
    while (front) {
        front = front->next;
        delete p;
        p = front;
    }
}

void LinkedListQueue::display() {
    ClassNode* p = front;
    while (p) {
        cout << p->data << flush;
        p = p->next;
        if (p != nullptr) {
            cout << " <- " << flush;
        }
    }
    cout << endl;
}

//int main() {
//
//    int A[] = { 1, 3, 5, 7, 9 };
//
//    LinkedListQueue q;
//
//    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
//        q.enqueue(A[i]);
//    }
//
//    q.display();
//
//    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
//        q.dequeue();
//    }
//    q.dequeue();
//
//    return 0;
//}
