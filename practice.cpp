#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;
    int size;

public:
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insertHead(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
    }

    void insertTail(int value)
    {
        Node *newNode = new Node(value);
        if (!tail)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }

    void insertMid(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            Node *slow = head;
            Node *fast = head->next;
            while (fast && fast->next)
            {
                slow = slow->next;
                fast = fast->next->next;
            }
            newNode->prev = slow;
            newNode->next = slow->next;
            if (slow->next)
                slow->next->prev = newNode;
            slow->next = newNode;
            if (!fast) // if the list has odd number of nodes
                tail = newNode;
        }
        size++;
    }

    void display()
    {
        Node *current = head;
        while (current)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    DoublyLinkedList dll;
    dll.insertHead(10);
    dll.insertHead(20);
    dll.insertTail(30);
    dll.insertTail(40);
    dll.insertMid(25);
    dll.display(); // Output: 20 10 25 30 40
    return 0;
}
