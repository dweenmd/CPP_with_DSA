
/**!
* author: dween_md
* created:  2024-02-01    19:49:28
!**/

#include <bits/stdc++.h>
using namespace std;
// template based stack using dynamic array
template <class Temp>
// stack using dynamic array
class Stack
{
    Temp *a;
    int stack_size;
    int arr_cap;

public:
    Stack()
    {
        a = new Temp[1]; // constractor
        arr_cap = 1;
        stack_size = 0;
    }
    // makes the array capacity mulby 2
    void increase_size()
    {
        Temp *tmp;
        tmp = new Temp[arr_cap * 2];
        for (int i = 0; i < arr_cap; i++)
        {
            tmp[i] = a[i];
        }
        swap(a, tmp);
        delete[] tmp;
        arr_cap = arr_cap * 2;
    }
    // add an element in the stack o(1)
    void push(Temp val)
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
    Temp top()
    {
        if (stack_size == 0)
        {
            cout << "stack is empty!\n";
            
           // assert(false);//programe crash korar jonno use kora hoy
            
            // or
            Temp a;
            return a;
        }
        return a[stack_size - 1];
    }
};

int main()
{
Stack<char>st;
st.push('a');
st.push('b');
st.push('c');
cout<<st.top()<<"\n";
st.pop();
cout<<st.top()<<"\n";
st.pop();
cout<<st.top()<<"\n";
st.pop();
cout<<st.top()<<"\n";
    return 0;
}
