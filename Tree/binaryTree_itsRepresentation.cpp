// https://www.youtube.com/watch?v=5NiXlPrLslg&list=PLDzeHZWIZsTo87y1ytEAqp7wYlEP3nner&index=1
/**!
* author: dween_md
* created: 2024-02-24    09:08:30
!**/
#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int value)
    {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *root)
{
    cout << "Enter the data: ";

    int data;
    cin >> data;
    cout << endl;

    if (data == -1)
        return NULL;

    root = new node(data);
    cout << "Enter data for inserting in left of " << data << " -> ";
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of " << data << " -> ";
    root->right = buildTree(root->right);

    return root;
}
void levelOrderTraversal(node *root) // bfs
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();

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
void inorder(node *root)
{
    // base case
    if (root == NULL)
        return;

    // LNR
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node *root)
{
    // base case
    if (root == NULL)
        return;

    // NLR
    cout << root->data << " ";
    preorder(root->left);

    preorder(root->right);
}
void postorder(node *root)
{
    // base case
    if (root == NULL)
        return;

    // LRN
    postorder(root->left);

    postorder(root->right);
    cout << root->data << " ";
}

// level wise input nibe 1st level, 2nd level.....
void buildFromLevelOrder(node *&root)
{
    queue<node *> q;
    cout << "Enter the root node: ";
    int data;
    cin >> data;
    root = new node(data);

    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout << "Enter the right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;
    buildFromLevelOrder(root);
    cout << "printing level order travarsal" << endl;
    levelOrderTraversal(root);

    /*
    // creating a tree;
    root = buildTree(root);
    

    // level order
    cout << "printing level order travarsal" << endl;
    levelOrderTraversal(root);
    */
   
    cout<<"Inorder ";
    inorder(root);
    cout<<"\npreorder ";
    preorder(root);
    cout<<"\npostorder ";
    postorder(root);
    cout<<endl;
    

    return 0;
}
//buildFromLevelOrder Input:1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
// builTreeInput: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
/*
      1
   3     5
  7 11 17 --
*/
// 1 2 4 8 -1 -1 9 -1 -1 5 10 -1 -1 11 -1 -1 3 6 12 -1 -1 13 -1 -1 7 14 -1 -1 15 -1 -1
/*
              1
        2            3
      4   5       6     7
   8  9 10 11  12 13 14 15
*/