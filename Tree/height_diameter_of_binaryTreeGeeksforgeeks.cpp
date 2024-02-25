//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

// } Driver Code Ends
// User function template for C++

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

/*
class Solution
{
public:
    // Function to find the height of a binary tree.
    int height(struct Node *node)
    {
        // base case
        if (node == NULL)
            return 0;
        int lefth = height(node->left);
        int righth = height(node->right);
        int ans = max(lefth, righth) + 1;
        return ans;
    }
    int diameter(struct Node *root)//time complexity O(n^2)
    {
        if (root == NULL)
            return 0;

        int diam_left = diameter(root->left);
        int diam_right = diameter(root->right);
        int hight_diam = height(root->left) + height(root->right) + 1;
        int ans = max(hight_diam, max(diam_left, diam_right));

        return ans;
    }
};
*/
// diameter and height by babbar perfect solution.

class Solution
{
public:
    int height(struct Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        int ans = max(left, right) + 1;
        return ans;
    }


    // Function to return the diameter of a Binary Tree.
    pair<int, int> diameterFast(Node *root)
    {
        if (root == NULL)
        {
            pair<int, int> p = make_pair(0, 0);
            return p;
        }

        pair<int, int> left = diameterFast(root->left);
        pair<int, int> right = diameterFast(root->right);

        int op1 = left.first;
        int op2 = right.first;

        int op3 = left.second + right.second + 1;

        pair<int, int> ans;
        ans.first = max(op1, max(op2, op3));
        ans.second = max(left.second, right.second) + 1;
        return ans;
    }
    int diameter(Node *root)
    {
        return diameterFast(root).first;
    }
};

//{ Driver Code Starts.
int main()
{

    string treeString;
    getline(cin, treeString);
    Node *root = buildTree(treeString);
    Solution ob;
    cout << "Height: " << ob.height(root) << endl;
    cout << "Diameter: " << ob.diameter(root) << endl;

    return 0;
}
// } Driver Code Ends
/*
input sample in level order:
1 2 3 N N 4 6 N 5 N N 7 N

1 3 5 7 11 17 N N N N N N N
graph    1
      3     5
    7 11  17 --

*/