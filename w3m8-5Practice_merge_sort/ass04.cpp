/**!
* author: dween_md
* created:  2024-01-21    17:05:09
!**/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printArr(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
}

vector<int> merge_sort(vector<int> arr)
{
    // base case
    if (arr.size() <= 1)
    {
        return arr;
    }
    int mid = arr.size() / 2;

    //(left)  2 4 6 | 3 5 7 9 (right)

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

    // working with recursion
    vector<int> sorted_left = merge_sort(left);

    vector<int> sorted_right = merge_sort(right);

    vector<int> sorted_array;
    int indxl = 0;
    int indxr = 0;
    // merging sorted_left & sorted_right arry in sorted array
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
    // printArr(sorted_array);
    // cout << "\n";

    return sorted_array;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n1, n2;
    cin >> n1;
    vector<int> arr1, x;
    for (int i = 0; i < n1; i++)
    {
        int x1;
        cin >> x1;
        x.push_back(x1);
    }
    arr1 = merge_sort(x);
    int n = arr1.size();

    vector<int> y, arr2;
    cin>>n2;
    for (int i = 0; i < n2; i++)
    {
        int x1;
        cin >> x1;
        y.push_back(x1);
    }
    arr2 = merge_sort(y);

    int j = 0;
    int count = 0;
    for (int i = 0; i < arr2.size(); i++)
    {
        if (arr1[j] == arr2[i])
        {
            count++;
            j++;
        }
       
    }
    if (count == n)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}