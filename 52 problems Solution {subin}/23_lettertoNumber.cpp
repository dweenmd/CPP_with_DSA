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
 for(auto it:s){
    int N=it-64;
    cout<<N;
 }
 cout<<"\n";
}
