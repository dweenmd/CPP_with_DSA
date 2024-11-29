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
    int n;
    cin >> n;
    vector<int> array;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        array.push_back(in);
    }
    int x;
    cin >> x;
    // Using lower_bound
    auto low = lower_bound(array.begin(), array.end(), x);
    if (low != array.end())
    {
        cout << "Lower bound position: " << (low - array.begin()) << "\n";
        cout << "Lower bound value: " << *low << "\n";
    }
    else
    {
        cout << "Lower bound not found (all elements are less than x)\n";
    }

    // Using upper_bound
    auto up = upper_bound(array.begin(), array.end(), x);
    if (up != array.end())
    {
        cout << "Upper bound position: " << (up - array.begin()) << "\n";
        cout << "Upper bound value: " << *up << "\n";
    }
    else
    {
        cout << "Upper bound not found (all elements are less than or equal to x)\n";
    }

    // Using equal_range
    auto range = equal_range(array.begin(), array.end(), x);
    if (range.first != array.end())
    {
        cout << "Equal range lower bound position: " << (range.first - array.begin()) << "\n";
        cout << "Equal range lower bound value: " << *range.first << "\n";
    }
    else
    {
        cout << "Equal range lower bound not found\n";
    }

    if (range.second != array.end())
    {
        cout << "Equal range upper bound position: " << (range.second - array.begin()) << "\n";
        cout << "Equal range upper bound value: " << *range.second << "\n";
    }
    else
    {
        cout << "Equal range upper bound not found\n";
    }
    return 0;
}