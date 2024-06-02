#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>s;
    s.push_back("dween");
    s.push_back("dween");
    s.push_back("mohammad");
    s.push_back("mohammad");
    s.push_back("abdul");
    s.push_back("abdul");
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){cout<<s[i]<<" ";}
    int sz=unique(s.begin(),s.end())-s.begin();
    cout<<sz<<endl;
    for(int i=0;i<sz;i++){cout<<s[i]<<" ";}

}