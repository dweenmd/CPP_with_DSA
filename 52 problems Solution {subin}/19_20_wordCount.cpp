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
 string word;int count=0;
 while(ss>>word){
    count+=1;
 }
 cout<<"Count = "<<count<<"\n";
}
