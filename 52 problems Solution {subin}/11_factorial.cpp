#include <bits/stdc++.h>
#define ll long long
using namespace std;

void code();
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;cin >> t;while (t--)code();
}
void code()
{
 ll n,fact=1;cin>>n;
 for(int i=n;i>0;i--){fact*=i;}
 cout<<fact<<"\n";
}
