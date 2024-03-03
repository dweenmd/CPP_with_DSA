/**!
* author: dween_md
* created: 2024-03-04    00:21:12
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
    st.insert(8);//time complexity order of log (n)
    st.insert(9);
    st.insert(10);
    st.insert(3);
    st.insert(4);
    st.insert(8);
    for(auto it:st )//O(n)
    {
        cout<<it<<" ";
    }
    cout<<'\n'<<st.size()<<endl;
    st.erase(9);
     for(auto it:st )//O(n)
    {
        cout<<it<<" ";
    }
    cout<<'\n'<<st.size()<<endl;

    if (st.find(8)!=st.end())
    {
        cout<<"8 found"<<endl;
    }
    else 
    {
        cout<<"Not found"<<endl;
    }
    return 0;
}