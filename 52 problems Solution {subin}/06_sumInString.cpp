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
 string s;cin>>s;
 int n;n=s.size();
 int sum=(s[0] - '0') + (s[n-1] - '0');
 cout<<"Sum = "<<sum<<"\n";
}