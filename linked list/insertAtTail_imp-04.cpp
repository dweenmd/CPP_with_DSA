/**!
* author: dween_md
* created:  2024-01-25    15:43:04
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

void InsertAtTail(Node *&head, int value)
{
    // node guala ektat pichone arekta ekhane jora lage..
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void display(Node *head)
{
    if (head == NULL)
        return;
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Node *head = NULL;
    InsertAtTail(head, 10);
    InsertAtTail(head, 20);
    InsertAtTail(head, 30);
    InsertAtTail(head, 40);
    InsertAtTail(head, 50);
    InsertAtTail(head, 60);
    display(head);

    return 0;
}