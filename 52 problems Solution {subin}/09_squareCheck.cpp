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
 double n;cin>>n;
 double x=sqrt(n);
 if(x==floor(x))cout<<"YES"<<"\n";
 else cout<<"NO"<<"\n";
 
}