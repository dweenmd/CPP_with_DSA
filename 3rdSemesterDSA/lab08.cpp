/**!
* author: dween_md
* created: 2024-05-31    19:16:59
!**/
#include <bits/stdc++.h>
#define ll long long int
#define asc(v) sort(v.begin(), v.end()) // vectors,pairs,tuples,string
#define dsc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;
const int Max_size = 500;
class Cqueue
{
public:
    int arr[Max_size];
    int front_idx, rear_idx;
    int size;
    Cqueue()
    {
        front_idx = 0;
        rear_idx = -1;
        size = 0;
    }
    void enqueue(int value)
    {
        if (size == Max_size)
        {
            cout << "Queue is full" << "\n";
            return;
        }
        rear_idx++;
        if (rear_idx == Max_size)
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
        if (front_idx == Max_size)
        {
            front_idx = 0;
        }

        size--;
    }
    void front()
    {
        if (size == 0)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << arr[front_idx] << "\n";
    }
    void Size()
    {
        cout << "the size of cqueue is : " << size << "\n";
    }
};

int main()
{
    Cqueue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    q.Size();

    q.front();
    q.dequeue();

    q.front();
    q.dequeue();

    q.front();
    q.dequeue();

    q.Size();

    return 0;
}