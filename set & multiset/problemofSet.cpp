/**!
* Write a C++ program to remove all duplicates from an array using a set.
Input

8
1 2 2 6 5 5 5 6
Output
1 2 5 6


* author: dween_md
* created: 2024-03-04    02:36:12
!**/
#include <bits/stdc++.h>
#define ll       long long int
#define asc(v)   sort(v.begin(), v.end()) //vectors,pairs,tuples,string
#define dsc(v)   sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    set<int> st;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        st.insert(x);
    }
    for(auto it:st)
    cout<<it<<" ";
    
    return 0;
}