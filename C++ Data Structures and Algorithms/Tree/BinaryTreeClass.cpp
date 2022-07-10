#include "../DataStructuresProject.h"

void Tree::CreateTree() {
    TreeNode* p;
    TreeNode* t;
    int x;

    TreeQueue q(25);
    root = new TreeNode;
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

void Tree::Preorder(TreeNode* p) {
    if (p) {
        cout << p->data << ", " << flush;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Tree::Inorder(TreeNode* p) {
    if (p) {
        Inorder(p->lchild);
        cout << p->data << ", " << flush;
        Inorder(p->rchild);
    }
}

void Tree::Postorder(TreeNode* p) {
    if (p) {
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << ", " << flush;
    }
}

void Tree::Levelorder(TreeNode* p) {
    TreeQueue q(100);
    cout << root->data << ", " << flush;
    q.enqueue(root);

    while (!q.isEmpty()) {
        p = q.dequeue();
        if (p->lchild) {
            cout << p->lchild->data << ", " << flush;
            q.enqueue(p->lchild);
        }
        if (p->rchild) {
            cout << p->rchild->data << ", " << flush;
            q.enqueue(p->rchild);
        }
    }
}

int Tree::Height(TreeNode* p) {
    int l = 0;
    int r = 0;
    if (p == nullptr) {
        return 0;
    }

    l = Height(p->lchild);
    r = Height(p->rchild);
    if (l > r) {
        return l + 1;
    }
    else {
        return r + 1;
    }
}

Tree::~Tree() {
    // TODO
}


//int main() {
//
//    Tree t;
//
//    t.CreateTree();
//
//    cout << "Preorder: " << flush;
//    t.Preorder(t.getRoot());
//    cout << endl;
//
//    cout << "Inorder: " << flush;
//    t.Inorder(t.getRoot());
//    cout << endl;
//
//    cout << "Postorder: " << flush;
//    t.Postorder(t.getRoot());
//    cout << endl;
//
//    cout << "Levelorder: " << flush;
//    t.Levelorder(t.getRoot());
//    cout << endl;
//
//    cout << "Height: " << t.Height(t.getRoot()) << endl;
//
//    cout << "Recursive Passing Private Parameter in Constructor" << endl;
//
//    cout << "Preorder: " << flush;
//    t.Preorder();
//    cout << endl;
//
//    cout << "Inorder: " << flush;
//    t.Inorder();
//    cout << endl;
//
//    cout << "Postorder: " << flush;
//    t.Postorder();
//    cout << endl;
//
//    cout << "Levelorder: " << flush;
//    t.Levelorder();
//    cout << endl;
//
//    cout << "Height: " << t.Height() << endl;
//
//}

