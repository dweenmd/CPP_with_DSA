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
    
    // Input elements
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        array.push_back(in);
    }
    
    // Sort the array
    asc(array);
    
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

/*
Test Case 1:
Input:
5
1 2 3 4 5
3

Output:
Lower bound position: 2
Lower bound value: 3
Upper bound position: 3
Upper bound value: 4
Equal range lower bound position: 2
Equal range lower bound value: 3
Equal range upper bound position: 3
Equal range upper bound value: 4

---

Test Case 2:
Input:
6
1 3 3 3 5 7
3

Output:
Lower bound position: 1
Lower bound value: 3
Upper bound position: 4
Upper bound value: 5
Equal range lower bound position: 1
Equal range lower bound value: 3
Equal range upper bound position: 4
Equal range upper bound value: 5

---

Test Case 3:
Input:
5
1 2 3 4 5
6

Output:
Lower bound not found (all elements are less than x)
Upper bound not found (all elements are less than or equal to x)
Equal range lower bound not found
Equal range upper bound not found

---

Test Case 4:
Input:
5
1 2 3 4 5
0

Output:
Lower bound position: 0
Lower bound value: 1
Upper bound position: 0
Upper bound value: 1
Equal range lower bound position: 0
Equal range lower bound value: 1
Equal range upper bound position: 0
Equal range upper bound value: 1

---

Test Case 5:
Input:
0
5

Output:
Lower bound not found (all elements are less than x)
Upper bound not found (all elements are less than or equal to x)
Equal range lower bound not found
Equal range upper bound not found
*/
