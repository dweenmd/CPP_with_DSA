#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    int size;

    LinkedList()
    {
        head = nullptr;
        size = 0;
    }

    void insertAtHead(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void deleteAtHead()
    {
        if (head == nullptr)
            return;
        Node *temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    void traverse()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList list;

    list.insertAtHead(5);
    list.insertAtHead(10);
    list.insertAtHead(15);

    list.traverse(); // Output: 15 10 5

    list.deleteAtHead();

    list.traverse(); // Output: 10 5

    return 0;
}
