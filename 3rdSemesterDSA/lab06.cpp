/**!
* author: dween_md
* created: 2024-05-31    14:56:32
!**/
#include <bits/stdc++.h>
#define ll long long int
#define asc(v) sort(v.begin(), v.end()) // vectors,pairs,tuples,string
#define dsc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;
const int max_size = 500;

class Stack
{
public:
    int arr[max_size];
    int stack_size;
    // constractor
    Stack()
    {
        stack_size = 0;
        fill(begin(arr), end(arr), NULL);
    }
    void push(int val)
    {
        if (stack_size + 1 > max_size)
        {
            cout << "Stack is full" << "\n";
        }
        arr[stack_size] = val;
        stack_size += 1;
    }
    void pop()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty\n";
        }
        arr[stack_size - 1] = 0;
        stack_size -= 1;
    }
    void top()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty.\n";
            
        }
        cout << arr[stack_size - 1] << "\n";
    }
    void size()
    {
        cout << "stack size is : " << stack_size << endl;
    }
};

int main()
{

    Stack st;
    st.push(3);
    st.top();
    st.push(5);
    st.top();
    st.push(7);
    st.top();
    st.push(9);
    st.top();

    st.size();

    st.pop(); st.top();st.size();
    st.pop(); st.top();st.size();
    st.pop(); st.top();st.size();
    st.pop(); st.size();
    


        return 0;
}