/**!
Write a C++ program to find the intersection of two arrays using a set.
Input

5
1 2 3 4 5
6
3 4 5 6 7 9
Output
3 4 5

The first array is [1,2,3,4,5] and the second array is [3,4,5,6,7,9]. Their intersection is [3,4,5]

!**/
#include <bits/stdc++.h>
#define ll long long int
#define asc(v) sort(v.begin(), v.end()) // vectors,pairs,tuples,string
#define dsc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<int> st1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.insert(x);
    }
    int m;
    cin >> m;
    set<int> st2;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st2.insert(x);
    }
    for (auto it : st1)
    {
        if (st2.find(it) != st2.end())
            cout << it << " ";
    }

    return 0;
}