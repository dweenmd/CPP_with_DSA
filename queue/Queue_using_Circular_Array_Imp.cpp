#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 500;

class Queue
{
public:
    int arr[MAX_SIZE];
    int front_idx, rear_idx;
    int size;
    Queue()
    {
        front_idx = 0;
        rear_idx = -1;
        size = 0;
    }
    void enqueue(int value)
    {
        if (size == MAX_SIZE)
        {
            cout << "Queue is full" << endl;
            return;
        }
        rear_idx++;
        if (rear_idx == MAX_SIZE)
        {
            rear_idx = 0;
        }
        arr[rear_idx] = value;
        size++;
    }
    void dequeue()
    {
        if (size == 0)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        front_idx++;
        if (front_idx == MAX_SIZE)
        {
            front_idx = 0;
        }
        size--;
    }
    int front()
    {
        if (size == 0)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front_idx];
    }
    int Size()
    {
        return size;
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout << "Q size: " << q.Size() << endl;
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << "Q size: " << q.Size() << endl;

    return 0;
}
