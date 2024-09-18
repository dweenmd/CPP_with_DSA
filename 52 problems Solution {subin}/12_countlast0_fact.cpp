
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
int n,x=0,y=0;cin>>n;
x=n/5;
if(x>=5)y=x/5;
int ans=x+y;
cout<<ans<<"\n";
}