/**!
* author: dween_md
* created: 2024-05-31    02:39:41
!**/
#include <bits/stdc++.h>
#define ll       long long int
#define asc(v)   sort(v.begin(), v.end()) //vectors,pairs,tuples,string
#define dsc(v)   sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    for(auto it: arr)
    cout<<it<<" ";
    
    return 0;
}