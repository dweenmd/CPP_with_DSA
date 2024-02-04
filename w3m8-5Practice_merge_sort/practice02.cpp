#include <bits/stdc++.h>
using namespace std;
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
    return sorted_array;
}
void printArr(const vector<int > & arr)
{
    for(int i=0;i<arr.size();++i)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    vector <int> array;
    for(int i=0;i<n;i++)
    {
        int elements;
        cin>>elements;
        array.push_back(elements);
    }
    vector<int> ans=merge_sort(array);
    printArr(ans);

}