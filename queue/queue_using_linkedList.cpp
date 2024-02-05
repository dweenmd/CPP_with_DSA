#include <bits/stdc++.h>
using namespace std;
// queue using linked list
class node
{
public:
    int data;
    node *next;
};
class Queue
{
    public:
    node *head;
    node *tail;
    int sz;
    Queue()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }
    node *CreateNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newndoe->next = NULL;
        return newnode;
    }
    void enqueue(int value)
    {
        sz++;
        node * newnode= CreateNOde(value);
        if (head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=newnode;
    }
    void dequeue()
    {
        if(sz==0)
        {
            cout<<"Queue is empty\n";
            return;
        }
        if (sz==1)
        {
            delete head;
            head =NULL;
            tail= NULL;
            return;

        }
        node* a=head;
        head =head-> next;
        delete a;
        
    }
};
int main()

{
    cout << "test run";
    return 0;
}