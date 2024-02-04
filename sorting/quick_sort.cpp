#include<bits/stdc++.h>
using namespace std;
vector<int> quick_sort(vector<int>&arr)
{
    if(arr.size()<=1)
    return arr;
    //jekono ekta index ke nirdisto dhore nibo
    int pivot=arr.size()-1; //last index ke dhorlam
    vector<int> left,right;
    //pivot array er value theke choto/somna gulake left rray te rakhbo
    //pivot array er value theke boro valur gulake right array te rakhbo
    for(int i=0;i<arr.size();i++)
    {
        if(i==pivot)
        continue;
        if(arr[i]<=arr[pivot])
        left.push_back(arr[i]);
        else
        right.push_back(arr[i]);

    } 
    vector<int>sorted_left=quick_sort(left);
    vector<int>sorted_right=quick_sort(right);
    vector<int>sorted_array;
    //sorted array er vitor (sorted_left), pivot, (sorted_right)er element gula rakhbo
    for(int i=0;i<sorted_left.size();i++)
    sorted_array.push_back(sorted_left[i]);

    sorted_array.push_back(arr[pivot]);

    for(int i=0;i<sorted_right.size();i++)
    sorted_array.push_back(sorted_right[i]);

    return sorted_array;
}
int main()
{
    vector<int>arr={5,2,6,1,9,7,4,3,9,5};
    vector<int>sorted_arr=quick_sort(arr);
    for(int i=0;i<sorted_arr.size();i++)
    cout<<sorted_arr[i]<<" ";

}