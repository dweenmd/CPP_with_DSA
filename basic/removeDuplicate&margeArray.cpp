
#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> array1 = {1, 2, 3, 4};
    vector<int> array2 = {3, 4, 5, 6};

    // Merge arrays
    vector<int> mergedArray = array1;
    mergedArray.insert(mergedArray.end(), array2.begin(), array2.end());

    // Sort and remove duplicates
    sort(mergedArray.begin(), mergedArray.end());
    mergedArray.erase(unique(mergedArray.begin(), mergedArray.end()), mergedArray.end());

    cout << "Merged Array with Duplicates Removed: ";
    for (int num : mergedArray)
    {
        cout << num << " ";
    }
    return 0;
}
