#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(ll i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
void code();
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;cin >> t;while (t--)code();
}
void code()
{
int a,b;cin>>a>>b;
int count=0;
for(int i=a;i<=b;i++)
{
 if(isPrime(i))count+=1;
}
cout<<count<<"\n";
}
