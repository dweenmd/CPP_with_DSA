#include <bits/stdc++.h>
#define ll long long
using namespace std;

void code();
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;cin >> t;
    while (t--)code(); 
}
void code()
{
    ll n;cin>>n;
    if(n%2==0)cout<<"even"<<"\n";
    else cout<<"odd"<<"\n";
}
