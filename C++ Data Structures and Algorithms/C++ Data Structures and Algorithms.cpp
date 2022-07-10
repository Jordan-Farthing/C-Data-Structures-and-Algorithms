#include "DataStructuresProject.h"

int main() {

    Tree2 bt;

    int preorder[] = { 8, 3, 12, 4, 9, 7, 5, 10, 6, 2 };
    int inorder[] = { 12, 9, 4, 7, 3, 8, 10, 5, 2, 6 };

    int size = sizeof(inorder) / sizeof(inorder[0]);

    Tree2Node* T = bt.generateFromTraversal(inorder, preorder, 0, size - 1);

    cout << "Preorder: " << flush;
    bt.Preorder(T);
    cout << endl;

    cout << "Inorder: " << flush;
    bt.Inorder(T);
    cout << endl;

    cout << "Height: " << bt.Height(T) << endl;
    cout << "Count: " << bt.Count(T) << endl;
    cout << "Sum: " << bt.Sum(T) << endl;
    cout << "# of degree 2 nodes: " << bt.deg2NodeCount(T) << endl;
    cout << "# of leaf nodes: " << bt.leafNodeCount(T) << endl;
    cout << "# of degree 1 or degree 2 nodes: " << bt.deg1ordeg2NodeCount(T) << endl;
    cout << "# of degree 1 nodes: " << bt.deg1NodeCount(T) << endl;

    bt.DestroyTree(T);

    return 0;
}
