#pragma once
#pragma warning( push )
#pragma warning( disable : 26495 )
#pragma warning( push )
#pragma warning( disable : 4099 )
class TreeNode
{
public:
	struct TreeNode* lchild;
	int data;
	struct TreeNode* rchild;
};

class TreeQueue {
private:
    int size;
    int front;
    int rear;
    TreeNode** Q;  // [Node*]*: Pointer to [Pointer to Node]
public:
    TreeQueue(int size);
    ~TreeQueue();
    bool isFull();
    bool isEmpty();
    void enqueue(TreeNode* x);
    TreeNode* dequeue();
};

extern TreeNode* root;

void createTree();
void preorder(TreeNode* p);
void inorder(TreeNode* p);
void postorder(TreeNode* p);

class Tree {
private:
    TreeNode* root;
public:
    Tree() { root = nullptr; }
    ~Tree();
    void CreateTree();
    void Preorder() { Preorder(root); }  // Passing Private Parameter in Constructor
    void Preorder(TreeNode* p);
    void Postorder() { Postorder(root); }  // Passing Private Parameter in Constructor
    void Postorder(TreeNode* p);
    void Inorder() { Inorder(root); }
    void Inorder(TreeNode* p);
    void Levelorder() { Levelorder(root); }  // Passing Private Parameter in Constructor
    void Levelorder(TreeNode* p);
    int Height() { return Height(root); }  // Passing Private Parameter in Constructor
    int Height(TreeNode* p);
    TreeNode* getRoot() { return root; }
};


class Tree2Node {
public:
    Tree2Node* lchild;
    int data;
    Tree2Node* rchild;
    Tree2Node() {};
    Tree2Node(int data);
};

class Tree2 {
private:
    Tree2Node* root;
public:
    Tree2();
    ~Tree2();
    void CreateTree();
    void Preorder(Tree2Node* p);
    void Preorder() { Preorder(root); }  // Passing Private Parameter in Constructor
    void Inorder(Tree2Node* p);
    void Inorder() { Inorder(root); }
    void Postorder(Tree2Node* p);
    void Postorder() { Postorder(root); }
    void Levelorder(Tree2Node* p);
    void Levelorder() { Levelorder(root); }
    void iterativePreorder(Tree2Node* p);
    void iterativePreorder() { iterativePreorder(root); }
    void iterativeInorder(Tree2Node* p);
    void iterativeInorder() { iterativeInorder(root); }
    void iterativePostorder(Tree2Node* p);
    void iterativePostorder() { iterativePostorder(root); }
    Tree2Node* generateFromTraversal(int inorder[], int preorder[], int inStart, int inEnd);
    int Height(Tree2Node* p);
    int Height() { return Height(root); }
    int Count(Tree2Node* p);
    int Count() { Count(root); }
    int Sum(Tree2Node* p);
    int Sum() { Sum(root); }
    int deg2NodeCount(Tree2Node* p);
    int deg2NodeCount() { deg2NodeCount(root); }
    int leafNodeCount(Tree2Node* p);
    int deg1ordeg2NodeCount(Tree2Node* p);
    int deg1NodeCount(Tree2Node* p);
    void DestroyTree(Tree2Node* p);
};

#pragma warning( pop )