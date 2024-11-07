#include <bits/stdc++.h>
#define ll long long
using namespace std;

void code();
int main()
{
    int n;cin>>n;

    for(int i=1;i<=n;i++){
      for(int k=i;k<=n-1;k++){
        cout<<" ";
      }
      for(int j=i;j>=1;j--){
        cout<<j;
      }
      cout<<"\n";
    }
}

