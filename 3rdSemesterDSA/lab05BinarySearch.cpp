/**!
* author: dween_md
* created: 2024-05-31    12:05:19
!**/
#include <bits/stdc++.h>
#define ll long long int
#define asc(v) sort(v.begin(), v.end()) // vectors,pairs,tuples,string
#define dsc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;
int binarySearch(vector<int> &arr, int target);

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n ;i++)
    {
        int x;cin>>x;
        arr.push_back(x);
    }
    cout<<"Enter target element: "<<"\n";
    int target;cin>>target;
    int find = binarySearch(arr,target);
    if(find==-1)
    {
        cout<<"Target element not found in array";
    }
    else{
        cout<<"Target element is "<<arr[find]<< " at index "<<find+1<<endl;
    }

    return 0;
}
int binarySearch(vector<int> &arr, int target)
{
    int n = arr.size();
    int left = 0;int right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        if(arr[mid]<target)
        {
            left=mid+1;
        }
        else {
            right = mid-1;
        }
    }
    return -1;
}