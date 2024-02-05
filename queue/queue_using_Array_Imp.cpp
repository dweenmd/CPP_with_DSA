#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 500;
class Queue
{
public:
    int a[MAX_SIZE];
    int l, r; // l = queue er start ,r =rare ba queue er end
    Queue()
    {
        l = 0;
        r = -1;
    }
    void enqueue(int value)
    {
        
        if (r + 1 >= MAX_SIZE)
        {
            cout << "Queue is full\n";
            return;
        }
        r++;
        a[r] = value;
    }
    void dequeue()
    {
        if (l > r)
        {
            cout << "Queue is empty\n";
            return;
        }
        l++;
       
    }
    int front()
    {
        if (l > r)
        {
            cout << "Queue is empty\n";
            return -1;
        }
        return a[l];
    }
    int size()
    {
        return r - l + 1;
    }
};
int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout << "Q size: " << q.size() << endl;
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << "Q size: " << q.size() << endl;
    return 0;
}