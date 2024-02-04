/**!
* author: dween_md
* created:  2024-01-29    20:37:20
!**/


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<< " ";
    }

    return 0;
}