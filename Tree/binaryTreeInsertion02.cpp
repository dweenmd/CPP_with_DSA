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
    void Insertion(int id)
    {
        node *newnode = CreateNewNode(id);
        if (root == NULL)
        {
            root = newnode;
            return;
        }
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *a = q.front();
            q.pop();

            if (a->Left != NULL)
            {

                q.push(a->Left);
            }
            else
            {
                a->Left = newnode;
                newnode->parent = a;
                return;
            }
            if (a->Right != NULL)
            {

                q.push(a->Right);
            }
            else
            {
                a->Right = newnode;
                newnode->parent = a;
                return;
            }
        }
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
            cout << "Node id= " << a->id << " Left Child= " << l;
            cout << " Right child= " << r << " Parent id= " << p << endl;
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
    void Search(node *a, int value)
    {
        if (a == NULL)
        {
            return;
        }
        if (a->id == value)
        {
            cout << a->id << endl;
        }
        Search(a->Left, value);
        Search(a->Right, value);
    }
};

int main()
{

    BinaryTree bt;
    bt.Insertion(0);
    bt.Insertion(1);
    bt.Insertion(2);
    bt.Insertion(3);
    bt.Insertion(4);
    bt.Insertion(5);

    bt.BFS();
    cout << "this is the example of preorder: ";
    bt.preorder(bt.root);
    cout << "\nthis is the example of Inorder: ";
    bt.inorder(bt.root);
    cout << "\nthis is the example of postorder: ";
    bt.postorder(bt.root);
    cout << "\nthis is the tree" << endl;
    cout << "        0" << endl;
    cout << "   1        2" << endl;
    cout << "3     4   5     " << endl;
    cout<<"\nSearching Test"<<endl;
  

    return 0;
}
