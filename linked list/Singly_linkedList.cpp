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
    int size; 
    LinkedList()
    {
        head = NULL;
        size = 0;
    }

    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
        }
        else
        {
            a->next = head;
            head = a;
        }
        size++; 
    }

    void Traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    }



    int getSize()
    {
        return size;
    }

    int getValue(int index)
    {
        if (index < 0 || index >= size)
        {
            return -1; // Invalid index
        }

        node *current = head;
        for (int i = 0; i < index; i++)
        {
            current = current->next;
        }

        return current->data;
    }

    void printReverse()
    {
        printReverseRecursive(head);
        cout << endl;
    }

    void printReverseRecursive(node *current)
    {
        if (current == NULL)
        {
            return;
        }

        printReverseRecursive(current->next);
        cout << current->data << " ";
    }

    void swapFirst()
    {
        if (size < 2)
        {
            return;
        }

        node *first = head;
        node *second = head->next;

        head = second;
        first->next = second->next;
        second->next = first;
    }



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
};

int main()
{
    LinkedList l;
    cout << l.getSize() << "\n";
    l.InsertAtHead(5);
    cout << l.getSize() << "\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout << l.getSize() << "\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout << l.getValue(2) << "\n";
    cout << l.getValue(6) << "\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

    return 0;
}
