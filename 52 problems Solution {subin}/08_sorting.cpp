#include <bits/stdc++.h>
#define ll long long
using namespace std;

void code(int t);
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;cin >> t;for(int i=1;i<=t;i++)code(i);
}
void code(int t)
{
    vector<int>arr;int n=3;
    while (n--){int x;cin>>x;arr.push_back(x);}
    sort(arr.begin(),arr.end());
    cout<<"Case "<<t<<":";
    for(auto it:arr)cout<<" "<<it;
    cout<<"\n";
}
