#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class CircularLinkedList
{
public:
    Node *head;
    int sz;

    CircularLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    Node *CreateNewNode(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    void InsertAtHead(int value)
    {
        Node *newNode = CreateNewNode(value);
        if (head == NULL)
        {
            head = newNode;
            newNode->next = head; // Circular link
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        }
        sz++;
    }

    void Traverse()
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }
        Node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    void DeleteAtHead()
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }
        if (head->next == head)
        {
            delete head;
            head = NULL;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            Node *toDelete = head;
            temp->next = head->next;
            head = head->next;
            delete toDelete;
        }
        sz--;
    }

    int getSize()
    {
        return sz;
    }

    int SearchDistinctValue(int value)
    {
        if (head == NULL)
        {
            return -1;
        }
        Node *a = head;
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
};

int main()
{
    CircularLinkedList cll;
    cll.InsertAtHead(10);
    cll.InsertAtHead(20);
    cll.InsertAtHead(30);

    cll.Traverse();

    cout << "Deleting head node." << endl;
    cll.DeleteAtHead();
    cll.Traverse();

    cout << "Size of list: " << cll.getSize() << endl;

    int searchValue = 20;
    int index = cll.SearchDistinctValue(searchValue);
    if (index != -1)
    {
        cout << searchValue << " found at index " << index << endl;
    }
    else
    {
        cout << searchValue << " not found in the list." << endl;
    }

    return 0;
}
