#include "../DataStructuresProject.h"

using namespace std;

TreeQueue::TreeQueue(int size) {
    this->size = size;
    front = -1;
    rear = -1;
    Q = new TreeNode * [size];
}

TreeQueue::~TreeQueue() {
    delete[] Q;
}

bool TreeQueue::isEmpty() {
    if (front == rear) {
        return true;
    }
    return false;
}

bool TreeQueue::isFull() {
    if (rear == size - 1) {
        return true;
    }
    return false;
}

void TreeQueue::enqueue(TreeNode* x) {
    if (isFull()) {
        cout << "Queue Overflow" << endl;
    }
    else {
        rear++;
        Q[rear] = x;
    }
}

TreeNode* TreeQueue::dequeue() {
    TreeNode* x = nullptr;
    if (isEmpty()) {
        cout << "Queue Underflow" << endl;
    }
    else {
        front++;
        x = Q[front];
    }
    return x;
}

TreeNode* root = new TreeNode;

void createTree() {
    TreeNode* p;
    TreeNode* t;
    int x;
    TreeQueue q(10);

    cout << "Enter root value: " << flush;
    cin >> x;
    root->data = x;
    root->lchild = nullptr;
    root->rchild = nullptr;
    q.enqueue(root);

    while (!q.isEmpty()) {
        p = q.dequeue();

        cout << "Enter left child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1) {
            t = new TreeNode;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.enqueue(t);
        }

        cout << "Enter left child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1) {
            t = new TreeNode;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

void preorder(TreeNode* p) {
    if (p) {
        cout << p->data << ", " << flush;
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void inorder(TreeNode* p) {
    if (p) {
        inorder(p->lchild);
        cout << p->data << ", " << flush;
        inorder(p->rchild);
    }
}

void postorder(TreeNode* p) {
    if (p) {
        postorder(p->lchild);
        postorder(p->rchild);
        cout << p->data << ", " << flush;
    }
}


//int main() {
//
//    createTree();
//
//    preorder(root);
//    cout << endl;
//
//    inorder(root);
//    cout << endl;
//
//    postorder(root);
//    cout << endl;
// 
//
//    return 0;
//}