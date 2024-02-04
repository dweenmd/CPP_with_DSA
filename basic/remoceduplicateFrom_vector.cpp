#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Vector of integers
    vector<int> arr {11, 12, 13, 14, 15, 16, 12, 43, 12, 13, 11};

    // Create a set from vector values
    unordered_set<int> Set(arr.begin(), arr.end());

    // Replace vector values with the set values
    arr.assign(Set.begin(), Set.end());


    // print all elements of vector
    for(auto elem : arr)
    {
        cout<<elem << ", ";
    }

    return 0;
}

