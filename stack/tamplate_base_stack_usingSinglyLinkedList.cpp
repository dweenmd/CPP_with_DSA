/**!
* author: dween_md
* created:  2024-02-01    19:26:02
!**/

#include <bits/stdc++.h>
using namespace std;

template<class T>
class node
{
public:
    T data;
    node *next;
};
template<class T>
class LinkedList
{
public:
    node<T> *head;
    int sz = 0; // for linklist size
    LinkedList()
    {
        head = NULL; // initiali head ta null e point kore thakbe
        sz=0;
    }
    // creats a new node with data= value and nxt = NULL
    node<T> *CreateNewNode(T value)
    {
        node<T> *newnode = new node<T>;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }
    // insert new value at head
    void InsertAtHead(T value) // Added the 'value' parameter
    {
        sz++; // kono kichu insert korle linklist er size increase hobe
        node<T> *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        
        a->next = head; // Fixed the typo here
        head = a;
    }
    // prints the linkedlist
    void Traverse()
    {
        node<T> *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next; // Fixed the typo here
        }
        cout << "\n";
    }
    // first index ba head ke delete kora
    void DeleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        sz--;
        node<T> *a = head;
        head = a->next;
        delete a;
    }
    // this is run in constant order. => O(1)
    int getSize()
    {
        return sz;
    }
};
template<class T>
class Stack
{
    public:
    LinkedList<T>l;
    Stack()
    {

    }
    T top()
    {
        if(l.getSize()==0)
        {
            cout<<"Stack is Empty!";
            T n;
            return n;
        }
        return l.head->data;
    }
    void push(T val)
    {
        l.InsertAtHead(val);
    }
    void pop()
    {
        if(l.getSize()==0)
        {
            cout<<"Stack is empty!"<<endl;
            return;
        }
        l.DeleteAtHead();
    }
};

int main()
{
    Stack<int> st;
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

    Stack<char> st1;
    st1.push('a');
    st1.push('b');
    st1.push('c');
    cout << st1.top() << "\n";
    st1.pop();
    cout << st1.top() << "\n";
    st1.pop();
    cout << st1.top() << "\n";
    st1.pop();
    cout << st1.top() << "\n";


  Stack<float> st2;
    st2.push(3.56);
    cout << st2.top() << "\n";
    st2.push(4.67);
    cout << st2.top() << "\n";
    st2.push(5.78);
    cout << st2.top() << "\n";

    st2.pop();
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";
    return 0;
}
