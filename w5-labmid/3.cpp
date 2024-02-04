/**!
* author: dween_md
* created:  2024-01-29    21:15:36
!**/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void Print(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    printf("\n");
}
vector<int> quick_sort(vector<int>&arr)
{
    if(arr.size()<=1)
    return arr;
    
    int pivot=arr.size()-1; 
    vector<int> left,right;
    
    for(int i=0;i<arr.size();i++)
    {
        if(i==pivot)
        continue;
        if(arr[i]>=arr[pivot])
        left.push_back(arr[i]);
        else
        right.push_back(arr[i]);

    } 
    vector<int>sorted_left=quick_sort(left);
    vector<int>sorted_right=quick_sort(right);
    vector<int>sorted_array;
    
    for(int i=0;i<sorted_left.size();i++)
    sorted_array.push_back(sorted_left[i]);

    sorted_array.push_back(arr[pivot]);

    for(int i=0;i<sorted_right.size();i++)
    sorted_array.push_back(sorted_right[i]);

    return sorted_array;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    vector<int>ans= quick_sort(arr);
   
    Print(ans);
    

    return 0;
}