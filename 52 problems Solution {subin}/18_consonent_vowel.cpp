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
    string vowel,consonent;
    for(auto it:s){
        if(it==' ')continue;
        if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u'){
            vowel+=it;
        }else{
            
            consonent+=it;
        }
    }
    cout<<vowel<<"\n"<<consonent<<"\n";
 
}
