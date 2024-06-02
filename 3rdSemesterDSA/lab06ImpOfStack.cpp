/**!
* author: dween_md
* created: 2024-05-31    13:01:45

implementation of stack using array

!**/
#include <bits/stdc++.h>
#define ll long long int
#define asc(v) sort(v.begin(), v.end()) // vectors,pairs,tuples,string
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
const int MAX_SIZE = 500;

using namespace std;
class Stack
{
public:
    int a[MAX_SIZE];
    int Stack_size;
    // constractor
    Stack()
    {
        Stack_size = 0;
        fill(begin(a), end(a), NULL);
    }
    void push(int val)
    {
        if (Stack_size + 1 > MAX_SIZE)
        {
            cout << "Stack is full!\n";
            return;
        }
        a[Stack_size] = val;
        Stack_size = Stack_size + 1;
    }
    void pop()
    {
        if (Stack_size == 0)
        {
            cout << "Stack is empty." << "\n";
        }
        a[Stack_size - 1] = 0;
        Stack_size = Stack_size - 1;
    }
    int top()
    {
        if (Stack_size == 0)
        {
            cout << "Stack is empty.\n";
            return -1;
        }
        return a[Stack_size - 1];
    }
    void size()
    {

        cout << "Size of stack is " << Stack_size << "\n";
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Stack st;
    st.push(3);
    cout << st.top() << "\n";
    st.push(4);
    cout << st.top() << "\n";
    st.push(6);
    cout << st.top() << "\n";

    st.size();

    st.pop();
    st.pop();
    st.pop();
    st.size();
    return 0;
}