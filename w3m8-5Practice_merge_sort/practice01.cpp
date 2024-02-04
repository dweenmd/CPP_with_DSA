// https://docs.google.com/document/d/11Re0S3mgG1--Fn-NjLtVkS0fH_F1ioD5BRLw3LTFTuc/edit
#include <bits/stdc++.h>
using namespace std;
void printVec(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int a, b;
    cin >> a;
    vector<int> arr1;
    for (int i = 0; i < a; i++)
    {
        int element;
        cin >> element;
        arr1.push_back(element);
    }
    cin >> b;
    vector<int> arr2;
    for (int i = 0; i < b; i++)
    {
        int element;
        cin >> element;
        arr2.push_back(element);
    }
    // merging two sorted array
    vector<int> sorted_array;
    int indx1 = 0; // for arr1
    int indx2 = 0; // for arr2
    // complexity of this loop id O(n)
    for (int i = 0; i < (a + b); i++)
    {
        if (indx1 == arr1.size())
        {
            sorted_array.push_back(arr2[indx2]);
            indx2++;
        }
        else if (indx2 == arr2.size())
        {
            sorted_array.push_back(arr1[indx1]);
            indx1++;
        }
        else if (arr1[indx1] > arr2[indx2])
        {
            sorted_array.push_back(arr1[indx1]);
            indx1++;
        }
        else
        {
            sorted_array.push_back(arr2[indx2]);
            indx2++;
        }
    }
    printVec(sorted_array);
}
/*
sample input
4
5 3 2 1
5
7 6 3 2 1
sample output
7 6 5 3 3 2 2 1 1
*/