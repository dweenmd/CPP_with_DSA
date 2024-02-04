/**!
* author: dween_md
* created:  2024-01-27    19:26:02
!**/
/*
TOTPIC
doubly linklist
->stracture
-> Insertion
->Deletion
->reverse

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
class node
{
public:
    int data;
    node *next;
    node *previous;
};
class DoublyLinkList
{
public:
    node *head;
    int sz;
    DoublyLinkList()
    {
        head = NULL;
        sz = 0;
    }
    // creates a new node with a given data and return it
    node *CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->next = NULL;
        newnode->previous = NULL;
        return newnode;
    }
    //insert a node with given data at head
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        
        node *a = head;
        newnode->next = a;
        a->previous = newnode;
        head = newnode;
    }
    void Traverse()
    {
        node *a =head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;

        }
        cout<<"\n";
    }
    int getSize()
    {
        return sz;
    }
    //insert the given data at the given index
    void InsertAtAnyIndex(int index,int data)
    {
        if(index>sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        sz++;
        node*a=head;           
        int currentIndex=0;
        while(currentIndex!=index-1)
        {
            a=a->next;
            currentIndex++;
        }
        //a=currentIndex-1;
        node* newnode=CreateNewNode(data);  //  a    newnode     b
        newnode->next=a->next;
        newnode->previous=a; 
        node *b=a->next;
        b->previous=newnode;
        a->next=newnode;

    }
    //delete any node           b   (a)   c
    void Delete(int index)
    {
        if(index>=sz){
            cout<<"index doesn't exist.\n";
            return;
        }
        node* a= head;
        int currentIndex=0;
        while(currentIndex!= index)
        {
            a=a->next;
            currentIndex++;
        }
        node*b=a->previous;
        node*c=a->next;
        if(b!=NULL)
        {
            b->next=c;

        }
        if(c!=NULL)
        {
            c->previous=b;
        }
        delete a;
        if(index==0)
        {
            head =c;
        }
        sz--;

    }
    //reverse the doubly linked list
    /*
    1) last index er node ta *a er modhhe rakhbo
    2) swap(next,previous);
    3) head =a;

    */
    void Reverse()
    { 
        if(head==NULL)
        {
            return;
        }
        node *a=head;
        int currentIndex=0;
        while(currentIndex!=sz-1) //last index e jacchi
        {
            a=a->next;
            currentIndex++;
        }
        //last index is in a
        node*b=head;
        while(b!=NULL)
        {
            swap(b->next,b->previous);
            b=b->previous;
        }
        head=a;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    DoublyLinkList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(20);
    dl.InsertAtHead(30);
    dl.InsertAtHead(40);
    dl.Traverse();
    cout<<dl.getSize()<<endl;
    dl.InsertAtAnyIndex(2,420);
    dl.Traverse();
    dl.Delete(0);
    dl.Traverse();
    dl.Reverse();
    dl.Traverse();

    return 0;
}