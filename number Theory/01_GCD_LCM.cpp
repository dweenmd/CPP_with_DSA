#include <bits/stdc++.h>
#define ll long long
using namespace std;

int gcd(int a,int b);
int lcm(int a,int b);
int main()
{
    int a,b;cin>>a>>b;
    cout<<"Gcd is : "<<gcd(a,b)<<"\n";
    cout<<"Lcm is : "<<lcm(a,b)<<"\n";
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}

int lcm(int a, int b)
{
    return ((a/__gcd(a,b))*b);
}
// __gcd() and __lcm() is library function