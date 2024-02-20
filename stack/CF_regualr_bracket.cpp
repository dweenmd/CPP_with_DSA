// https://codeforces.com/problemset/problem/26/B
/**!
* author: dween_md
* created: 2024-02-20    10:17:22
!**/
#include <bits/stdc++.h>
#define ll long long int
#define asc(v) sort(v.begin(), v.end()) // vectors,pairs,tuples,string
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define vwv (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c == '(')
            st.push(c);
        else if (c == ')' && !st.empty() && st.top() == '(')
            {
                st.pop();
                count+=2;
            }
        else st.push(c);
    }
    cout<<count<<endl;

    return 0;
}