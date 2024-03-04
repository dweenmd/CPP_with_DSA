/*
Write a C++ program to count the frequency of each element in an array using a map.
Input
8
1 2 2 6 5 5 5 6
Output
1: 1
2: 2
5: 3
6: 2
*/
/**!
* author: dween_md
* created: 2024-03-04    00:21:12
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
    map<int, int> mp;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    for (auto it : mp)
        cout << it.first << ": " << it.second << endl;
}