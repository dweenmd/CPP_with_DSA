#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    Node *root;
    BST()
    {
        root = NULL;
    }
    void InsertBST(int value)
    {
        Node *newNode = new Node(value);
        if (root == NULL)
        {
            root = newNode;
            return;
        }
        Node *current = root; // assing root value in current node
        Node *previous = NULL;
        while (current != NULL)
        {
            previous = current;
            if (value > previous->value)
            {
                current = current->right;
            }
            else
            {
                current = current->left;
            }
        }
        if (value > previous->value)
        {
            previous->right = newNode;
        }
        else
        {
            previous->left = newNode;
        }
    }
    void Traverse() // levelorder traversal
    {
        if (root == NULL)
        {
            cout << "tree is empty" << endl;
            return;
        }

        queue<Node *> q;
        q.push(root);
        while (q.empty() == false)
        {
            Node *frontNode = q.front();
            cout << frontNode->value << " ";
            if (frontNode->left != NULL)
            {
                q.push(frontNode->left);
            }
            if (frontNode->right != NULL)
            {
                q.push(frontNode->right);
            }
            q.pop();
        }
        cout << endl;
    }
    bool FindInBst(int value)
    {
        if (root == NULL)
        {
            return false;
        }
        Node *temp = root;
        while (temp != NULL)
        {
            if (value == temp->value)
            {
                return true;
            }
            if (value > temp->value)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }
    }
    void DeleteValue(int value)
    {
        if (FindInBst(value))
        {
            Node *current = root;
            Node *previous = NULL;
            while (current != NULL)
            {
                if (value > current->value)
                {
                    previous = current;
                    current = current->right;
                }
                else if (value < current->value)
                {
                    previous = current;
                    current = current->left;
                }
                else
                {
                    break;
                }
            }
            if (current->left == NULL and current->right == NULL)
            {
                // cout << '\n'<< previous->value << endl;
                // cout << current->value << endl;

                if (previous->right != NULL and previous->right->value == value)
                {
                    previous->right = NULL;
                }
                else
                {
                    previous->left = NULL;
                }
                delete current;
                return;
            }
            if (current->left != NULL)
            {
                //  cout<<current->left->value<<endl;
                current->value = current->left->value;
                current->left = NULL;
                delete current->left;
                return;
            }
            if (current->right != NULL)
            {
                //  cout<<current->left->value<<endl;
                current->value = current->right->value;
                current->right = NULL;
                delete current->right;
                return;
            }
            if (current->left != NULL and current->right != NULL)
            {
                current->value = current->left->value;
                current->left = NULL;
                delete current->left;
                return;
            }
        }
        else
        {
            cout << "\nNot found in BST" << endl;
        }
    }
};
int main()
{
    BST bt;
    bt.InsertBST(8);
    bt.InsertBST(6);
    bt.InsertBST(11);
    bt.InsertBST(4);
    bt.InsertBST(13);
    bt.InsertBST(7);
    bt.InsertBST(9);

    bt.Traverse();
    bt.DeleteValue(11);
    bt.Traverse();
    // bt.DeleteValue(11);
    // bt.Traverse();
    if (bt.FindInBst(2))
        cout << "found" << endl;
    else
        cout << "Not found" << endl;
}
// cd $dir && g++ $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt