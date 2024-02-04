/**!
* author: dween_md
* created:  2024-02-01    00:00:41
!**/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX_SIZE = 500;
// stack using static array

class Stack
{
public:
    int a[MAX_SIZE];
    int stack_size;
    Stack()
    {
        stack_size = 0;
        fill(begin(a), end(a), NULL);
    }
    void push(int val)
    {
        if (stack_size + 1 > MAX_SIZE)
        {
            cout << "Stack is full!\n";
            return;
        }
        stack_size = stack_size + 1;
        a[stack_size] = val;
    }
    // delete the topmost elements from stack. O(1)
    void pop()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty!\n";
        }
        a[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }
    // return the top element from the stack

    int top()
    {
        if (stack_size == 0)
        {
            cout << "stack is empty.\n";
            return -1;
        }
        return a[stack_size - 1];
    }
};
int main()
{

    Stack st;
    st.push(3);
    cout << st.top() << "\n";
    st.push(4);
    cout << st.top() << "\n";
    st.push(5);
    cout << st.top() << "\n";

    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";

    return 0;
}