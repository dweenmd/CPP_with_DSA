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
 float t1,t2,ball;cin>>t1>>t2>>ball;
 float cr=t2/((300-ball)/6);
 float rr=((t1-t2)+1)/(ball/6);

 cout<<fixed<<setprecision(2)<<cr<<" "<<rr<<"\n";
}
