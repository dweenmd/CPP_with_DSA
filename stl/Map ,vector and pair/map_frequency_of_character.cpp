#include <bits/stdc++.h>
#define ll long long
using namespace std;

void code();
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;cin >> t;
    cin.ignore();
    while (t--)code();
}
void code()
{
    string s;cin>>s;
    map<char,int>mp;
    for(auto it:s){mp[it]+=1;}
    for(auto it:mp){
        cout<<it.first<<" = "<<it.second<<"\n";
    }
    cout<<"\n";
 
}
