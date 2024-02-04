/**!
* author: dween_md
* created:  2024-01-25    14:39:04
!**/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Node
{
public:
    int value;
    Node *next;

    // Parameterized Constructor
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void InsertAtHead(Node *&head, int value)
{
    Node *newNode = new Node(value);//node guala ektat pichone arekta ekhane jora lage..
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void display(Node *head)
{
    if (head == NULL)
        return;
    while (head!= NULL)
    {
        cout<<head->value<<" ";
        head=head->next;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // Declare a pointer to a Node and initialize it to NULL
    Node *head = NULL;
    // Insert a node with value 10 at the head of the linked list
    InsertAtHead(head, 10);
    InsertAtHead(head, 20);
    InsertAtHead(head, 30);
    InsertAtHead(head, 40);
    InsertAtHead(head, 50);
    InsertAtHead(head, 60);
    cout << head->value << " " << head->next->value << endl;
    //ouptput function
    display(head);

    return 0;
}