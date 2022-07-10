#include "../DataStructuresProject.h"
#pragma warning( push )
#pragma warning( disable : 26495 )
#pragma warning( push )
#pragma warning( disable : 4302 )
#pragma warning( push )
#pragma warning( disable : 4312 )
#pragma warning( push )
#pragma warning( disable : 4554 )
#pragma warning( push )
#pragma warning( disable : 4311 )

using namespace std;

Tree2Node::Tree2Node(int data) {
    lchild = nullptr;
    this->data = data;
    rchild = nullptr;
}

Tree2::Tree2() {
    root = nullptr;
}

Tree2::~Tree2() {
    // TODO
}

void Tree2::CreateTree() {
    Tree2Node* p;
    Tree2Node* t;
    int x;
    queue<Tree2Node*> q;

    root = new Tree2Node;
    cout << "Enter root data: " << flush;
    cin >> x;
    root->data = x;
    root->lchild = nullptr;
    root->rchild = nullptr;
    q.emplace(root);

    while (!q.empty()) {
        p = q.front();
        q.pop();

        cout << "Enter left child data of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1) {
            t = new Tree2Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.emplace(t);
        }

        cout << "Enter right child data of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1) {
            t = new Tree2Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.emplace(t);
        }
    }
}

void Tree2::Preorder(Tree2Node* p) {
    if (p) {
        cout << p->data << ", " << flush;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Tree2::Inorder(Tree2Node* p) {
    if (p) {
        Inorder(p->lchild);
        cout << p->data << ", " << flush;
        Inorder(p->rchild);
    }
}

void Tree2::Postorder(Tree2Node* p) {
    if (p) {
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << ", " << flush;
    }
}

void Tree2::Levelorder(Tree2Node* p) {
    queue<Tree2Node*> q;
    cout << p->data << ", " << flush;
    q.emplace(p);

    while (!q.empty()) {
        p = q.front();
        q.pop();

        if (p->lchild) {
            cout << p->lchild->data << ", " << flush;
            q.emplace(p->lchild);
        }

        if (p->rchild) {
            cout << p->rchild->data << ", " << flush;
            q.emplace(p->rchild);
        }
    }
}

void Tree2::iterativePreorder(Tree2Node* p) {
    stack<Tree2Node*> stk;
    while (p != nullptr || !stk.empty()) {
        if (p != nullptr) {
            cout << p->data << ", " << flush;
            stk.emplace(p);
            p = p->lchild;
        }
        else {
            p = stk.top();
            stk.pop();
            p = p->rchild;
        }
    }
    cout << endl;
}

void Tree2::iterativeInorder(Tree2Node* p) {
    stack<Tree2Node*> stk;
    while (p != nullptr || !stk.empty()) {
        if (p != nullptr) {
            stk.emplace(p);
            p = p->lchild;
        }
        else {
            p = stk.top();
            stk.pop();
            cout << p->data << ", " << flush;
            p = p->rchild;
        }
    }
    cout << endl;
}

void Tree2::iterativePostorder(Tree2Node* p) {
    stack<long int> stk;
    long int temp;
    while (p != nullptr || !stk.empty()) {
        if (p != nullptr) {
            stk.emplace((long int)p);
            p = p->lchild;
        }
        else {
            temp = stk.top();
            stk.pop();
            if (temp > 0) {
                stk.emplace(-temp);
                p = ((Tree2Node*)temp)->rchild;
            }
            else {
                cout << ((Tree2Node*)(-1 * temp))->data << ", " << flush;
                p = nullptr;
            }
        }
    }
    cout << endl;
}

int searchInorder(int inArray[], int inStart, int inEnd, int data) {
    for (int i = inStart; i <= inEnd; i++) {
        if (inArray[i] == data) {
            return i;
        }
    }
    return -1;
}

Tree2Node* Tree2::generateFromTraversal(int* inorder, int* preorder, int inStart, int inEnd) {
    static int preIndex = 0;

    if (inStart > inEnd) {
        return nullptr;
    }

    Tree2Node* node = new Tree2Node(preorder[preIndex++]);

    if (inStart == inEnd) {
        return node;
    }

    int splitIndex = searchInorder(inorder, inStart, inEnd, node->data);
    node->lchild = generateFromTraversal(inorder, preorder, inStart, splitIndex - 1);
    node->rchild = generateFromTraversal(inorder, preorder, splitIndex + 1, inEnd);

    return node;
}

int Tree2::Height(Tree2Node* p) {
    int l = 0;
    int r = 0;

    if (p != nullptr) {
        l = Height(p->lchild);
        r = Height(p->rchild);
        if (l > r) {
            return l + 1;
        }
        else {
            return r + 1;
        }
    }
    return 0;
}

int Tree2::Count(Tree2Node* p) {
    int x;
    int y;
    if (p != nullptr) {
        x = Count(p->lchild);
        y = Count(p->rchild);
        return x + y + 1;
    }
    return 0;
}

int Tree2::Sum(Tree2Node* p) {
    int x;
    int y;
    if (p != nullptr) {
        x = Sum(p->lchild);
        y = Sum(p->rchild);
        return x + y + p->data;
    }
    return 0;
}

int Tree2::deg2NodeCount(Tree2Node* p) {
    int x;
    int y;
    if (p != nullptr) {
        x = deg2NodeCount(p->lchild);
        y = deg2NodeCount(p->rchild);
        if (p->lchild && p->rchild) {
            return x + y + 1;
        }
        else {
            return x + y;
        }
    }
    return 0;
}

int Tree2::leafNodeCount(Tree2Node* p) {
    int x;
    int y;
    if (p != nullptr) {
        x = leafNodeCount(p->lchild);
        y = leafNodeCount(p->rchild);
        if (p->lchild == nullptr && p->rchild == nullptr) {
            return x + y + 1;
        }
        else {
            return x + y;
        }
    }
    return 0;
}

int Tree2::deg1ordeg2NodeCount(Tree2Node* p) {
    int x;
    int y;
    if (p != nullptr) {
        x = deg1ordeg2NodeCount(p->lchild);
        y = deg1ordeg2NodeCount(p->rchild);
        if (p->lchild != nullptr || p->rchild != nullptr) {
            return x + y + 1;
        }
        else {
            return x + y;
        }
    }
    return 0;
}

int Tree2::deg1NodeCount(Tree2Node* p) {
    int x;
    int y;
    if (p != nullptr) {
        x = deg1NodeCount(p->lchild);
        y = deg1NodeCount(p->rchild);
        if (p->lchild != nullptr ^ p->rchild != nullptr) {
            return x + y + 1;
        }
        else {
            return x + y;
        }
    }
    return 0;
}

void Tree2::DestroyTree(Tree2Node* p) {
    if (p != nullptr) {
        DestroyTree(p->lchild);
        DestroyTree(p->rchild);
        delete p;
    }
}


//int main() {
//
//    Tree2 bt;
//
//    int preorder[] = { 8, 3, 12, 4, 9, 7, 5, 10, 6, 2 };
//    int inorder[] = { 12, 9, 4, 7, 3, 8, 10, 5, 2, 6 };
//
//    int size = sizeof(inorder) / sizeof(inorder[0]);
//
//    Tree2Node* T = bt.generateFromTraversal(inorder, preorder, 0, size - 1);
//
//    cout << "Preorder: " << flush;
//    bt.Preorder(T);
//    cout << endl;
//
//    cout << "Inorder: " << flush;
//    bt.Inorder(T);
//    cout << endl;
//
//    cout << "Height: " << bt.Height(T) << endl;
//    cout << "Count: " << bt.Count(T) << endl;
//    cout << "Sum: " << bt.Sum(T) << endl;
//    cout << "# of degree 2 nodes: " << bt.deg2NodeCount(T) << endl;
//
//    return 0;
//}



//leaf node count

//int main() {
//
//    Tree2 bt;
//
//    int preorder[] = { 8, 3, 12, 4, 9, 7, 5, 10, 6, 2 };
//    int inorder[] = { 12, 9, 4, 7, 3, 8, 10, 5, 2, 6 };
//
//    int size = sizeof(inorder) / sizeof(inorder[0]);
//
//    Tree2Node* T = bt.generateFromTraversal(inorder, preorder, 0, size - 1);
//
//    cout << "Preorder: " << flush;
//    bt.Preorder(T);
//    cout << endl;
//
//    cout << "Inorder: " << flush;
//    bt.Inorder(T);
//    cout << endl;
//
//    cout << "Height: " << bt.Height(T) << endl;
//    cout << "Count: " << bt.Count(T) << endl;
//    cout << "Sum: " << bt.Sum(T) << endl;
//    cout << "# of degree 2 nodes: " << bt.deg2NodeCount(T) << endl;
//    cout << "# of leaf nodes: " << bt.leafNodeCount(T) << endl;
//    cout << "# of degree 1 or degree 2 nodes: " << bt.deg1ordeg2NodeCount(T) << endl;
//    cout << "# of degree 1 nodes: " << bt.deg1NodeCount(T) << endl;
//
//    bt.DestroyTree(T);
//
//    return 0;
//}

#pragma warning( pop )