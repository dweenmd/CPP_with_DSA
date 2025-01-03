#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Vector of integers
    vector<int> arr {11, 12, 13, 14, 15, 16, 12, 43, 12, 13, 11};

    // Create a set from vector values
   set<int> Set(arr.begin(), arr.end());

    // Replace vector values with the set values
    arr.assign(Set.begin(), Set.end());


    // print all elements of vector
    for(auto elem : arr)
    {
        cout<<elem << ", ";// 43, 16, 15, 14, 13, 12, 11, 
    }

    return 0;
}

