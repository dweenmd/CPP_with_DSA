/**!
* author: dween_md
* created:  2024-02-01    19:26:02
!**/



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
    // insert a node with given data at head
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
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    }
    int getSize()
    {
        return sz;
    }
    // insert the given data at the given index
    void InsertAtAnyIndex(int index, int data)
    {
        if (index > sz)
        {
            return;
        }
        if (index == 0)
        {
            InsertAtHead(data);
            return;
        }
        sz++;
        node *a = head;
        int currentIndex = 0;
        while (currentIndex != index - 1)
        {
            a = a->next;
            currentIndex++;
        }
        // a=currentIndex-1;
        node *newnode = CreateNewNode(data); //  a    newnode     b
        newnode->next = a->next;
        newnode->previous = a;
        node *b = a->next;
        b->previous = newnode;
        a->next = newnode;
    }
    // delete at head O(1)
    void DeleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        node *a = head;
        node *b = head->next;
        delete a;
        if (b != NULL)
        {
            b->previous = NULL;
        }
        head = b;
        sz--;
    }

    // delete any node O(n)          b   (a)   c
    void Delete(int index)
    {
        if (index >= sz)
        {
            cout << "index doesn't exist.\n";
            return;
        }
        node *a = head;
        int currentIndex = 0;
        while (currentIndex != index)
        {
            a = a->next;
            currentIndex++;
        }
        node *b = a->previous;
        node *c = a->next;
        if (b != NULL)
        {
            b->next = c;
        }
        if (c != NULL)
        {
            c->previous = b;
        }
        delete a;
        if (index == 0)
        {
            head = c;
        }
        sz--;
    }
    // reverse the doubly linked list
    /*
    1) last index er node ta *a er modhhe rakhbo
    2) swap(next,previous);
    3) head =a;

    */
    void Reverse()
    {
        if (head == NULL)
        {
            return;
        }
        node *a = head;
        int currentIndex = 0;
        while (currentIndex != sz - 1) // last index e jacchi
        {
            a = a->next;
            currentIndex++;
        }
        // last index is in a
        node *b = head;
        while (b != NULL)
        {
            swap(b->next, b->previous);
            b = b->previous;
        }
        head = a;
    }
};
// stack using doubly linked list
class Stack
{
public:
    DoublyLinkList dl;
    Stack()
    {
    }

    int top()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is empty!\n";
            return -1;
        }
        return dl.head->data;
    }

    void push(int val)
    {
        dl.InsertAtHead(val);
    }
    void pop()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is empty!\n";
            return;
        }
        dl.DeleteAtHead();
    }
};

int main()
{
    Stack st;
    st.push(3);
    cout << st.top() << "\n";
    st.push(4);
    cout << st.top() << "\n";
    st.push(5);
    cout << st.top() << "\n";

    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    return 0;
}