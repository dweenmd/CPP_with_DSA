/**!
* author: dween_md
* created: 2024-03-21    11:02:28
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
    bitset<10> s; // all elements are only 0 & 1
    s[1] = 1;
    s[4] = 1;
    s[6] = 1;
    s[9] = 1;
    /*
    this iterator loop doesn't work.
     for (auto it : s)
    {
        cout << it << " ";
    }

    */

    // use traditional loop
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }

    return 0;
}