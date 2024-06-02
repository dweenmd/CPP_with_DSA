/**!
* author: dween_md
* created: 2024-05-31    15:26:31
!**/
#include <bits/stdc++.h>
#define ll long long int
#define asc(v) sort(v.begin(), v.end()) // vectors,pairs,tuples,string
#define dsc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;
const int max_size = 500;
class Queue
{
public:
    int arr[max_size];
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
        if (rear_idx + 1 >= max_size)
        {
            cout << "Queue is full" << "\n";
            return;
        }
        rear_idx++;
        arr[rear_idx] = value;
        size++;
    }
    void dequeue()
    {
        if (front_idx > rear_idx)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        front_idx++;
        size--;
    }
    int front()
    {
        if (front_idx > rear_idx)
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
    cout << "Size of queue: " << q.Size() << "\n";
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();
    cout << "Size of queue: " << q.Size() << "\n";
    return 0;
}