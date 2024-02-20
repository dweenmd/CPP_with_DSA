/**!
* author: dween_md
* created: 2024-02-17    21:36:01
!**/
#include <bits/stdc++.h>
#define ll long long int
#define asc(v) sort(v.begin(), v.end()) // vectors,pairs,tuples,string
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define vwv (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main()
{
    vwv
        string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c == '(' or c == '{' or c == '[')
            st.push(c);

        else if (c == ')' and st.empty() == false and st.top() == '(')
        {
            st.pop();
        }
        else if (c == '}' and st.empty() == false and st.top() == '{')
        {
            st.pop();
        }
        else if (c == ']' and st.empty() == false and st.top() == '[')
        {
            st.pop();
        }
    }
    if (st.empty())
        cout << "valid";
    else
        cout << "invalid";
    return 0;
}