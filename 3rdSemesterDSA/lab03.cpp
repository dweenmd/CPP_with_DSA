/**!
* author: dween_md
* created: 2024-05-31    11:30:40
!**/
#include <bits/stdc++.h>
#define ll       long long int
#define asc(v)   sort(v.begin(), v.end()) //vectors,pairs,tuples,string
#define dsc(v)   sort(v.begin(), v.end(), greater<int>())

using namespace std;
void insertionSort(vector<int>&arr);
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        arr.push_back(x);
    }
    insertionSort(arr);
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    
    return 0;
}
void insertionSort(vector<int>&arr)
{
    int n=arr.size();
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>= 0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}