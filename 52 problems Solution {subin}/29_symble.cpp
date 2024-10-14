/**!
* author: dween_md
* created: 2024-09-24    00:37:35
!**/
#include <bits/stdc++.h>
#define ll       long long int
#define asc(v)   sort(v.begin(), v.end()) //vectors,pairs,tuples,string
#define dsc(v)   sort(v.begin(), v.end(), greater<int>())
using namespace std;
void code();
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;cin >> t;while (t--)code();
}
void code()
{
  char s;cin>>s;
  if(s>='a' && s<='z'){
    cout<<"Lowercase Character"<<"\n";
  }
  else if (s >= 'A' && s <= 'Z') {
        cout << "Uppercase Character" << "\n";
    }
  else if(s>='0'&& s<='9'){
    cout<<"Numerical Digit"<<"\n";
  }
  else{
    cout<<"Special Character"<<"\n";
  }
}
