#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll A, ll B) {if (B == 0)return A; else return gcd(B, A % B);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
void code();
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;cin >> t;while (t--)code();
}
void code()
{
 ll a,b;cin>>a>>b;
 cout<<"LCM = "<<lcm(a,b)<<"\n";
}
