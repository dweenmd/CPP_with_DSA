#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *previous;
};

class DoublyLinkedList
{
public:
    node *head;
    node *tail;
    int sz;

    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node *CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->next = NULL;
        newnode->previous = NULL;
        return newnode;
    }

    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        newnode->next = head;
        head->previous = newnode;
        head = newnode;
    }

    void InsertAtTail(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if (tail == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        newnode->previous = tail;
        tail->next = newnode;
        tail = newnode;
    }

    void InsertAtMid(int value)
    {
        sz++;
        node *newnode = CreateNewNode(value);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }

        node *slow = head;
        node *fast = head->next;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        newnode->next = slow->next;
        if (slow->next != NULL)
        {
            slow->next->previous = newnode;
        }
        newnode->previous = slow;
        slow->next = newnode;

        if (fast == NULL)
        {
            tail = newnode;
        }
    }

    void Traverse()
    {
        node *current = head;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";
    }

    int getSize()
    {
        return sz;
    }

    // Print the linked-list starting from head
    void print()
    {
        Traverse();
    }

    // Merge LinkedList a at the back of the current linked-list
    void merge(DoublyLinkedList &a)
    {
        if (a.head == NULL)
        {
            return;
        }
        if (head == NULL)
        {
            head = a.head;
            tail = a.tail;
        }
        else
        {
            tail->next = a.head;
            a.head->previous = tail;
            tail = a.tail;
        }
        sz += a.sz;
        // Clear the LinkedList a
        a.head = NULL;
        a.tail = NULL;
        a.sz = 0;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    DoublyLinkedList a;
    DoublyLinkedList b;

    a.InsertAtHead(1);
    a.InsertAtTail(5);
    a.InsertAtMid(3);
    a.InsertAtHead(0);
    a.InsertAtTail(10);

    a.print();

    DoublyLinkedList dll2;
    b.InsertAtHead(10);
    b.InsertAtTail(50);
    b.InsertAtMid(30);
    b.InsertAtHead(9);
    b.InsertAtTail(100);
    b.print();
    cout << "Merge LinkedList ";
    a.merge(b);
    a.print();

    return 0;
}
