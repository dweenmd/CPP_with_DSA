#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(ll i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
void code();
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;cin >> t;cin.ignore();while (t--)code();
}
void code()
{
 string s;getline(cin,s);
 reverse(s.begin(),s.end());
 cout<<s<<"\n";
}
