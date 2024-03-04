
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

    // insert the given data at the middle of the linked-list
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

        // Traverse to the middle of the linked list
        node *slow = head;
        node *fast = head->next;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Insert the new node after the middle node
        newnode->next = slow->next;
        if (slow->next != NULL)
        {
            slow->next->previous = newnode;
        }
        newnode->previous = slow;
        slow->next = newnode;

        // Update tail if the list has even number of nodes
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
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    DoublyLinkedList dll;

    dll.InsertAtHead(10);
    dll.InsertAtHead(20);
    dll.InsertAtTail(30);
    dll.InsertAtTail(40);
    dll.InsertAtMid(25);
    dll.Traverse();
    return 0;
}
