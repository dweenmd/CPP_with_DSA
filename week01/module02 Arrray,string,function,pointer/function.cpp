#include<bits/stdc++.h>
using namespace std;

string erase_first_last(string s)
{
    s.erase(s.begin());
    s.pop_back();
    return s;
}
//void erase_first_last2(string &s1)
//{
//    s1.erase(s1.begin());
//    s1.pop_back();
//    cout<<"print in function== "<<s1<<"\n";
//
//}
int main()
{
    string s;
    cin>>s;
    string ans = erase_first_last(s);
    cout<<s<<"\n";
    cout<<ans<<"\n";
//    string ans=erase_first_last2(s);
//    cout<<ans<<"\n";


}


//swap

