#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *prv;
    node *nxt;
};
class Deque
{
public:
    node *head;
    node *tail;
    int sz;
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }
    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }
    void push_back(int value) // O(1)
    {
        node *newnode = CreateNewNode(value);
        if (sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        tail->nxt = newnode;
        newnode->prv = tail;
        tail = newnode;
        sz++;
    }
    // push front
    void push_front(int value)
    {
        node *newnode = CreateNewNode(value);
        if (sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        head->prv = newnode;
        newnode->nxt = head;
        head = newnode;
        sz++;
    }
    // popback O(1)
    void pop_back()
    {
        if (sz == 0)
        {
            cout << "Deque is empty" << endl;
            return;
        }
        if (sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            return;
        }
        node *a = tail;
        tail = tail->prv;
        delete a;
        tail->nxt = NULL;
        sz--;
    }

    // popfront O(1)
    void pop_front()
    {
        if (sz == 0)
        {
            cout << "Deque is empty" << endl;
            return;
        }
        if (sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            return;
        }
        node *a = head;
        head = head->nxt;
        delete a;
        head->prv = NULL;
        sz--;
    }
    int front()
    {
        if (sz == 0)
        {
            cout << "Deque is empty" << endl;
            return 404;
        }
        return head->data;
    }
    int back()
    {
        if (sz == 0)
        {
            cout << "Deque is empty" << endl;
            return 404;
        }
        return tail->data;
    }
};

int main()
{
    Deque d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);
    cout << "Back: " << d.back() << " Front: " << d.front() << endl;
    d.push_front(20);
    cout << "Back: " << d.back() << " Front: " << d.front() << endl;
   d.pop_front(); 
    cout << "Back: " << d.back() << " Front: " << d.front() << endl;
    d.pop_back();
    cout << "Back: " << d.back() << " Front: " << d.front() << endl;
}