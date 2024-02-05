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
        newnode->next = NULL;
        return newnode;
    }
    void enqueue(int value)
    {
        sz++;
        node * newnode= CreateNode(value);
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
              sz--;
            return;

        }
        node* a=head;
        head =head-> next;
          sz--;
        delete a;

    }
    int front ()
    {
        if (sz==0)
        {
            cout<<" Queue is empty"<<endl;
            return 404;
        }
        return head->data;
    }
    int size()
    {
        return sz;
    }
};
int main()

{
   Queue q;
   q.enqueue(5);
   q.enqueue(10);
   q.enqueue(15);
   cout<<"Q size : "<<q.size()<<endl;
   cout<<q.front()<<endl;
   q.dequeue();
   cout<<q.front()<<endl;
   q.dequeue();
   cout<<q.front()<<endl;
   q.dequeue();
    cout<<"Q size : "<<q.size()<<endl;
    return 0;
}