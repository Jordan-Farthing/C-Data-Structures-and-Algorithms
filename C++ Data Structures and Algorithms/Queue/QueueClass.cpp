#include "../DataStructuresProject.h"

using namespace std;

QueueClass::QueueClass(int size) {
    this->size = size;
    front = -1;
    rear = -1;
    Q = new int[size];
}

QueueClass::~QueueClass() {
    delete[] Q;
}

bool QueueClass::isEmpty() {
    if (front == rear) {
        return true;
    }
    return false;
}

bool QueueClass::isFull() {
    if (rear == size - 1) {
        return true;
    }
    return false;
}

void QueueClass::enqueue(int x) {
    if (isFull()) {
        cout << "Queue Overflow" << endl;
    }
    else {
        rear++;
        Q[rear] = x;
    }
}

int QueueClass::dequeue() {
    int x = -1;
    if (isEmpty()) {
        cout << "Queue Underflow" << endl;
    }
    else {
        front++;
        x = Q[front];
    }
    return x;
}

void QueueClass::display() {
    for (int i = front + 1; i <= rear; i++) {
        cout << Q[i] << flush;
        if (i < rear) {
            cout << " <- " << flush;
        }
    }
    cout << endl;
}

//int main() {
//
//    int A[] = { 1, 3, 5, 7, 9 };
//
//    QueueClass q(sizeof(A) / sizeof(A[0]));
//
//    // Enqueue
//    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
//        q.enqueue(A[i]);
//    }
//
//    // Display
//    q.display();
//
//    // Overflow
//    q.enqueue(10);
//
//    // Dequeue
//    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
//        q.dequeue();
//    }
//
//    // Underflow
//    q.dequeue();
//
//    return 0;
//}