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
    string s;cin>>s; int x=s.size();
    if(s[x-1]%2==0)cout<<"even"<<"\n";
    else cout<<"odd"<<"\n";
}
