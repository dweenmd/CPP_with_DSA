#include <bits/stdc++.h>
#define ll long long
using namespace std;

void code();
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;cin >> t;cin.ignore();
    while (t--)code();
}
void code()
{
 string s;getline(cin,s);
 char f;cin>>f;
 cin.ignore();
 map<char,int> mp;
 for(auto it: s){
    mp[it]+=1;
 }
 //find frequency of the character
 auto it = mp.find(f);
 if(it!=mp.end()){
    cout<<"Occurrence of '"<<f<<"' in 'hello world' = "<<it->second<<"\n";
 }else{
    cout<<"'"<<f<<"' is not present"<<"\n";
 }
}
