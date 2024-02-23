#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int id;
    node *Left;
    node *Right;
    node *parent;
};

class BinaryTree
{
public:
    node *root;

    BinaryTree()
    {
        root = NULL;
    }

    node *CreateNewNode(int id)
    {
        node *newnode = new node;
        newnode->id = id;
        newnode->Left = NULL;
        newnode->Right = NULL;
        newnode->parent = NULL;
        return newnode;
    }
    void build_binary_tree()
    {
        node *allnode[6]; // Declare allnode as a member variable
        for (int i = 0; i < 6; i++)
            allnode[i] = CreateNewNode(i);

        allnode[0]->Left = allnode[1];
        allnode[0]->Right = allnode[2];

        allnode[1]->Left = allnode[5];
        allnode[1]->parent = allnode[0];

        allnode[2]->Left = allnode[3];
        allnode[2]->Right = allnode[4];
        allnode[2]->parent = allnode[0];

        allnode[5]->parent = allnode[1];

        allnode[3]->parent = allnode[2];
        allnode[4]->parent = allnode[2];
        root = allnode[0];
    }
    void BFS()
    {
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *a = q.front();
            q.pop();
            int p = -1, l = -1, r = -1;
            if (a->parent != NULL)
            {
                p = a->parent->id;
            }
            if (a->Left != NULL)
            {
                l = a->Left->id;
                q.push(a->Left);
            }
            if (a->Right != NULL)
            {
                r = a->Right->id;
                q.push(a->Right);
            }
            cout << "Node id= " << a->id << ", Left Child= " << l
                 << ", Right Child= " << r << ", Parent= " << p << endl;
        }
    }
    // DFS
    void preorder(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        cout << a->id << " ";
        preorder(a->Left);
        preorder(a->Right);
    }
    void inorder(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        inorder(a->Left);
        cout << a->id << " ";
        inorder(a->Right);
    }
    void postorder(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        postorder(a->Left);

        postorder(a->Right);
        cout << a->id << " ";
    }
};

int main()
{
    cout << "this is the tree" << endl;
    cout << "        0" << endl;
    cout << "   1        2" << endl;
    cout << "5        3     4" << endl;

    BinaryTree bt;
    bt.build_binary_tree();

    bt.BFS();
    cout << "this is the example of preorder: ";
    bt.preorder(bt.root);
    cout << "\nthis is the example of Inorder: ";
    bt.inorder(bt.root);
    cout << "\nthis is the example of postorder: ";
    bt.postorder(bt.root);

    return 0;
}
/*
this is the tree.
n-0            0

n-1       1       2

n-2    5        3     1

*/