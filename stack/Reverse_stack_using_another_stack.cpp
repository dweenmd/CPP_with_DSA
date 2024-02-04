/**!
* author: dween_md
* created:  2024-02-01    20:31:01
!**/

#include <bits/stdc++.h>
using namespace std;
template <class T>
class node
{
public:
    T data;
    node *next;
    node *previous;
};
template <class T>
class DoublyLinkList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkList()
    {
        head = NULL;
        sz = 0;
    }
    // creates a new node with a given data and return it
    node<T> *CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->next = NULL;
        newnode->previous = NULL;
        return newnode;
    }
    // insert a node with given data at head
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }

        node<T> *a = head;
        newnode->next = a;
        a->previous = newnode;
        head = newnode;
    }
    void Traverse()
    {
        node<T> *a = head;
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

    // delete at head O(1)
    void DeleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        node<T> *a = head;
        node<T> *b = head->next;
        delete a;
        if (b != NULL)
        {
            b->previous = NULL;
        }
        head = b;
        sz--;
    }
};
// stack using doubly linked list
template <class T>
class Stack
{
public:
    DoublyLinkList<T> dl;
    Stack()
    {
    }
    T top()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is empty!\n";
            T a;
            return a;
        }
        return dl.head->data;
    }

    void push(T val)
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
    // Reverse a stack using anothe stack
    Stack<int> a;
    a.push(4);
    a.push(5);
    a.push(6);
    a.push(7);
    Stack<int> tmp;
}