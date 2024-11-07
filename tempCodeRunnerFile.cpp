#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;cin >> t;
    vector<int> arr(t);
    for(int i=0;i<t;i++)cin>>arr[i];
    int s=0,d=0;int f=0,l=t-1;
    for(int i=0;i<t;i++){
      
      if(i%2==0){
        if(arr[f]>arr[l]){s+=arr[f];f++;}
      else {s+=arr[l];l--;}
      }
      
    else{
      if(arr[f]>arr[l]){d+=arr[f];f++;}
          else {d+=arr[l];l--;}
    }
    }
    cout<<s<<" "<<d<<"\n";
}
