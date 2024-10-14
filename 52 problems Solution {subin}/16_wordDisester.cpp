#include <bits/stdc++.h>
#define ll long long
using namespace std;

void code();
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;cin >> t;cin.ignore();while (t--)code();
}
void code()
{
 string s;getline(cin,s);
 stringstream ss(s);
 string word;
 string ans;
 bool firstword=true;
 while(ss>>word){
    reverse(word.begin(),word.end());
    if(!firstword){ans+=" ";}
    ans=ans.append(word);
    firstword=false;
 }
 cout<<ans<<"\n";
}
