/**!
* author: dween_md
* created: 2024-10-03    23:07:40
!**/
#include <bits/stdc++.h>
#define ll       long long int
#define asc(v)   sort(v.begin(), v.end()) //vectors,pairs,tuples,string
#define dsc(v)   sort(v.begin(), v.end(), greater<int>())
int checkx(int n,int k);
ll powInt(int base, int exp);
using namespace std;
void code();
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;cin >> t;while (t--)code();
}
void code()
{
  ll n,k;cin>>n>>k;
  
  
int count=0;
  while(n!=0){
    int x=checkx(n,k);
   int p=powInt(k,x);
    n=n-p;
    count++;
    //cout<<count<<" : "<<n+p<<"-"<<p<<" = "<<n<<" \n";
    if(n<k){
      count+=n;
      n=0;
    }

  }
  cout<<count<<"\n";
  
}
int checkx(int n,int k){
  ll x=0;
  for(int i=1;i<n;i++){
      ll p=pow(k,i);
      if(p==n){
        x=i;
        break;
      }
      if(p>n){
        x=i-1;
        break;
      }
    }
    return x;
}
ll powInt(int base, int exp)
{
    ll result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}