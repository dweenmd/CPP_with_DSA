#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class LinkedList
{
public:
    node *head;
    int sz = 0; // for linklist size
    LinkedList()
    {
        head = NULL; // initiali head ta null e point kore thakbe
    }
    // creats a new node with data= value and nxt = NULL
    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }
    // insert new value at head
    void InsertAtHead(int value) // Added the 'value' parameter
    {
        sz++; // kono kichu insert korle linklist er size increase hobe
        node *a = CreateNewNode(value);
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
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next; // Fixed the typo here
        }
        cout << "\n";
    }

    // search for a single value
    int SearchDistinctValue(int value)
    {
        node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                return index;
            }
            a = a->next;
            index++;
        }
        return -1;
    }
    // search all possible occurence
    void SearchAllValue(int value)
    {
        node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                cout << value << " is found at index " << index << endl;
            }
            a = a->next;
            index++;
        }
    }
    // add any element at any index
    void InsertAtAnyIndex(int index, int value)
    {
        if (index < 0 || index > sz) // corner case
        {
            return;
        }
        if (index == 0)
        {
            InsertAtHead(value);
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
        node *newnode = CreateNewNode(value);
        newnode->next = a->next;
        a->next = newnode;
    }
    // first index ba head ke delete kora
    void DeleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        sz--;
        node *a = head;
        head = a->next;
        delete a;
    }
    // delet any index
    void DeleteAnyIndex(int index)
    {
        if (index < 0 || index > sz - 1)
        {
            return;
        }
        if (index == 0)
        {
            DeleteAtHead();
            return;
        }
        sz--;
        node *a = head;
        int currentIndex = 0;
        while (currentIndex != index - 1)
        {
            a = a->next;
            currentIndex++;
        }
        node *b = a->next;
        a->next = b->next;
        delete b;
    }
    void InsertAfterValue(int value, int data)
    {
        node *a = head;
        while (a != NULL)
        {
            if (a->data == value)
            {
                break;
            }
            a = a->next;
        }
        if (a == NULL)
        {
            cout << value << " doesn't exist in linked-list" << endl;
            return;
        }
        sz++;
        node *newnode = CreateNewNode(data);
        newnode->next = a->next;
        a->next = newnode;
    }
    // pritn the reverse order from node a to last
    void ReversePrint2(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        ReversePrint2(a->next);
        cout << a->data << " ";
    }
    void ReversePrint()
    {
        ReversePrint2(head);
        cout << "\n";
    }

    /*
    int getSize() //time complexity => O(n)
    {
        int sz = 0;
        node *a = head;
        while (a != NULL)
        {
            sz++;
            a = a->next;
        }
        return sz;
    }
    */

    // this is run in constant order. => O(1)
    int getSize()
    {
        return sz;
    }
};

int main()
{
    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(20);
    l.InsertAtHead(25);
    l.InsertAtHead(30);
    l.InsertAtHead(40);
    l.InsertAtHead(30);

    l.Traverse();

    cout << "5 is found at " << l.SearchDistinctValue(5) << endl;
    cout << "10 is found at " << l.SearchDistinctValue(10) << endl;

    l.SearchAllValue(30);
    cout << "size of linklist: ";
    cout << l.getSize() << endl;
    cout << '\n'
         << "insert at any index: (4)." << endl;

    l.InsertAtAnyIndex(4, 675);

    l.Traverse();
    cout << "------------------------------------------" << endl;
    cout << "delete head index:" << endl;
    l.DeleteAtHead();
    l.Traverse();
    cout << "size of linklist: " << l.getSize() << endl;
    cout << "Delete any index:(2)" << endl;
    l.DeleteAnyIndex(2);
    l.Traverse();
    cout << "size of linklist: " << l.getSize() << endl;
    cout << "------------------------------------------" << endl;
    cout << "insert after value:(20) " << endl;
    l.InsertAfterValue(20, 420);
    l.Traverse();
    cout << "size of linklist: " << l.getSize() << endl;
    cout << "------------------------------------------" << endl;
    cout << " reverse order print: ";
    l.ReversePrint();
    
    return 0; // Added a return statement
}
/*
OUTPUT

30 40 30 25 20 10 
5 is found at -1
10 is found at 5
30 is found at index 0
30 is found at index 2
size of linklist: 6

insert at any index: (4).
30 40 30 25 675 20 10 
------------------------------------------
delete head index:
40 30 25 675 20 10 
size of linklist: 6
Delete any index:(2)
40 30 675 20 10 
size of linklist: 5
------------------------------------------
insert after value:(20) 
40 30 675 20 420 10 
size of linklist: 6
------------------------------------------
 reverse order print: 10 420 20 675 30 40

*/
