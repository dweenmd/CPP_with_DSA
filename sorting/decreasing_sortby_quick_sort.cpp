#include <bits/stdc++.h>
using namespace std;
vector<int> quick_sort(vector<int> &arr);
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    vector<int> sortedArray;
    sortedArray = quick_sort(arr);
    for (int i = 0; i < sortedArray.size(); i++)
        cout << sortedArray[i] << " ";
}
vector<int> quick_sort(vector<int> &arr)
{
    if (arr.size() <= 1)
        return arr;

    int pivot = arr.size() / 2;

    vector<int> left, right;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i == pivot)
            continue;
        if (arr[i] >= arr[pivot])
            left.push_back(arr[i]);
        else
            right.push_back(arr[i]);
    }
    vector<int> sorted_left = quick_sort(left);
    vector<int> sorted_right = quick_sort(right);
    vector<int> sorted_array;

    for (int i = 0; i < sorted_left.size(); i++)
        sorted_array.push_back(sorted_left[i]);

    sorted_array.push_back(arr[pivot]);

    for (int i = 0; i < sorted_right.size(); i++)
        sorted_array.push_back(sorted_right[i]);

    return sorted_array;
}