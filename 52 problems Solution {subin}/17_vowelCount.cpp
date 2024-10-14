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
    int count=0;
    for(auto it: s){
        if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u'){
            count+=1;
        }
    }
    cout<<"Number of vowels = "<<count<<"\n";
 
}
