#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class CircularLinkedList
{
public:
    node *head;
    int sz = 0; // for linked list size
    CircularLinkedList()
    {
        head = NULL; // initially head points to NULL
    }
    // creates a new node with data = value and next = NULL
    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }
    // insert new value at head
    void InsertAtHead(int value)
    {
        sz++; // increase the size of the linked list
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            head->next = head; // point to itself to make it circular
            return;
        }
        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = a;
        a->next = head;
        head = a;
    }
    // prints the linked list
    void Traverse()
    {
        if (head == NULL)
        {
            return;
        }
        node *a = head;
        do
        {
            cout << a->data << " ";
            a = a->next;
        } while (a != head);
        cout << "\n";
    }

    // search for a single value
    int SearchDistinctValue(int value)
    {
        if (head == NULL)
        {
            return -1;
        }
        node *a = head;
        int index = 0;
        do
        {
            if (a->data == value)
            {
                return index;
            }
            a = a->next;
            index++;
        } while (a != head);
        return -1;
    }
    // search all possible occurrences
    void SearchAllValue(int value)
    {
        if (head == NULL)
        {
            return;
        }
        node *a = head;
        int index = 0;
        do
        {
            if (a->data == value)
            {
                cout << value << " is found at index " << index << endl;
            }
            a = a->next;
            index++;
        } while (a != head);
    }
    // add any element at any index
    void InsertAtAnyIndex(int index, int value)
    {
        if (index < 0 || index > sz)
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
    // delete the first index or head
    void DeleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        sz--;
        if (head->next == head) // only one node in the list
        {
            delete head;
            head = NULL;
            return;
        }
        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        node *toDelete = head;
        head = head->next;
        temp->next = head;
        delete toDelete;
    }
    // delete any index
    void DeleteAnyIndex(int index)
    {
        if (index < 0 || index >= sz)
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
        do
        {
            if (a->data == value)
            {
                break;
            }
            a = a->next;
        } while (a != head);
        if (a == head && a->data != value)
        {
            cout << value << " doesn't exist in linked-list" << endl;
            return;
        }
        sz++;
        node *newnode = CreateNewNode(data);
        newnode->next = a->next;
        a->next = newnode;
    }
    // print the reverse order from node a to last
    void ReversePrint2(node *a)
    {
        if (a->next == head)
        {
            cout << a->data << " ";
            return;
        }
        ReversePrint2(a->next);
        cout << a->data << " ";
    }
    void ReversePrint()
    {
        if (head == NULL)
        {
            return;
        }
        ReversePrint2(head);
        cout << "\n";
    }

    // this runs in constant order. => O(1)
    int getSize()
    {
        return sz;
    }
};

int main()
{
    CircularLinkedList l;
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
    cout << "size of linked list: ";
    cout << l.getSize() << endl;
    cout << '\n'
         << "insert at any index: (4)." << endl;

    l.InsertAtAnyIndex(4, 675);

    l.Traverse();
    cout << "------------------------------------------" << endl;
    cout << "delete head index:" << endl;
    l.DeleteAtHead();
    l.Traverse();
    cout << "size of linked list: " << l.getSize() << endl;
    cout << "Delete any index:(2)" << endl;
    l.DeleteAnyIndex(2);
    l.Traverse();
    cout << "size of linked list: " << l.getSize() << endl;
    cout << "------------------------------------------" << endl;
    cout << "insert after value:(20) " << endl;
    l.InsertAfterValue(20, 420);
    l.Traverse();
    cout << "size of linked list: " << l.getSize() << endl;
    cout << "------------------------------------------" << endl;
    cout << " reverse order print: ";
    l.ReversePrint();

    return 0;
}
