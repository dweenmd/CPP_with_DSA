#include <bits/stdc++.h>
using namespace std;
vector<int> inversion_count(vector<int> arr)
{
    if (arr.size() <= 1)
    {
        return arr;
    }
    int mid = arr.size() / 2;
    vector<int> left;
    for (int i = 0; i < mid; i++)
    {
        left.push_back(arr[i]);
    }

    vector<int> right;
    for (int i = mid; i < arr.size(); i++)
    {
        right.push_back(arr[i]);
    }
    vector<int> sorted_left = merge_sort(left);
    vector<int> sorted_right = merge_sort(right);

    vector<int> sorted_array;
    int ix = 0;
    int jx = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (indxl == sorted_left.size())
        {
            sorted_array.push_back(sorted_right[indxr]);
            indxr++;
        }
        else if (indxr == sorted_right.size())
        {
            sorted_array.push_back(sorted_left[indxl]);
            indxl++;
        }
        else if (sorted_left[indxl] < sorted_right[indxr])
        {
            sorted_array.push_back(sorted_left[indxl]);
            indxl++;
        }
        else
        {
            sorted_array.push_back(sorted_right[indxr]);
            indxr++;
        }
    }
    return sorted_array;
}
void printArray(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    int count = 0;
    cin >> n;

    vector<int> array;
    for (int i = 0; i < n; i++)
    {
        int elements;
        cin >> elements;
        array.push_back(elements);
    }
    // printArray(array);
    /*
            // this loop complexity is O(n^2) but we need O(n log n)

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if( array [i]>array[j])
            {
                count ++;
            }
        }
    }
    */

    cout << count << endl;
}