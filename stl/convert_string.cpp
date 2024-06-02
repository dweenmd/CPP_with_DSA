/**!
* author: dween_md
* created: 2024-04-25    19:34:24
!**/
#include <bits/stdc++.h>
#define ll       long long int
#define asc(v)   sort(v.begin(), v.end()) //vectors,pairs,tuples,string
#define dsc(v)   sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //int to string

    int a=123;
    string s=to_string(a);
    cout<<s<<"\n";
    s[0]='4';
    cout<<s<<"\n";
    
    //string to int 
    string str="789";
    int b=stoi(str);
    cout<<b<<'\n';
    b++;
    cout<<b<<'\n';

    
    return 0;
}