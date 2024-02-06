#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(10); 
    dq.push_front(15);
    dq.pop_back();
    dq.pop_front();
    cout << "size: " << dq.size() << endl;
    cout << dq.front() << endl;
    cout << dq.back() << endl;
}