/**!
* author: dween_md
* created:  2024-02-01    01:07:03
!**/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
// stack using dynamic array
class Stack
{
    int *a;
    int stack_size;
    int arr_cap;
    public:
    Stack()
    {
        a = new int[1];
        arr_cap = 1;
        stack_size = 0;
    }
    //
    void increase_size()
    {
        int *tmp;
        tmp = new int[arr_cap * 2];
        for (int i = 0; i < arr_cap; i++)
        {
            tmp[i] = a[i];
        }
        swap(a, tmp);
        delete[] tmp;
        arr_cap = arr_cap * 2;
    }
    // add an element in the stack o(1)
    void push(int val)
    {

            if (stack_size + 1 > arr_cap)
        {
            increase_size();
        }
        stack_size = stack_size + 1;
        a[stack_size - 1] = val;
    }
    void pop()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty";
            return;
        }
        a[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }
    int top()
    {
        if (stack_size == 0)
        {
            cout << "stack is empty!\n";
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
