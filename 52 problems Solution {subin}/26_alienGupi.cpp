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
    int cnt=0;
    while(n>=1){
        n=n/2;
        cnt+=1;
    }
    cout<<cnt<<" days"<<"\n";
}
