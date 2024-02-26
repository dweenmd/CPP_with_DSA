#include <bits/stdc++.h>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBST(Node *root, int d)
{
    // base case
    if (root == NULL)
    {
        return new Node(d);
    }

    if (d > root->data)
    {
        // right part e insert kora
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        // left part e insert
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void levelOrderTraversal(Node *root) // bfs
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();

        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void preorder(Node* root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node *root = NULL;
    cout << "Enter data to create BST (-1 to stop):" << endl;
    takeInput(root);
    cout << "Printing the BST in level order:" << endl;
    levelOrderTraversal(root);

    cout << "Printint In order: " << endl;
    inorder(root);
    cout << "\nPrinting preorder:" << endl;
    preorder(root);
    cout << "\nPrinting Postorder:" << endl;
    postorder(root);

    return 0;
}





//5 4 6 7 2  3 1 8 9 -1
//https://www.youtube.com/watch?v=UeRUKRJvPa4&t=411s