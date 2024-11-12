/*
Write a C++ program to sort an array in the increasing order of the values but you also need to memorize the index of the values before sorting.
Input
5
4 6 2 1 7
Output
Value 1, Previous Index 3
Value 2, Previous Index 2
Value 4, Previous Index 0
Value 6, Previous Index 1
Value 7, Previous Index 4


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

// using map
/*
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<int ,int >mp;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        mp[x]=i;
    }
    for (const auto &pair : mp) {
        cout << "value " << pair.first << ", index " << pair.second << endl;
    }
}
*/

// using pair

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Input array
    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    // Create a vector of pairs to store value-index pairs
    vector<pair<int, int>> valueIndexPairs;
    for (int i = 0; i < n; ++i)
    {
        valueIndexPairs.push_back(make_pair(arr[i], i));
    }

    // Sort the vector of pairs based on values
    sort(valueIndexPairs.begin(), valueIndexPairs.end());

    // Output the sorted array with previous indices
    cout << "Output:\n";
    for (const auto &pair : valueIndexPairs)
    {
        cout << "Value " << pair.first << ", Previous Index " << pair.second << endl;
    }

    return 0;
}
