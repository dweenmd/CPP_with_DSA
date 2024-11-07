#include <bits/stdc++.h>
#define ll long long
using namespace std;

void code();
int main()
{
    int n;cin>>n;
    int y=10+n;
    int x=5+(n/2)+1;

    for(int i=1;i<=x;i++){
      for(int j=i;j<=x-1;j++){
        cout<<" ";
      }
      for(int k=1;k<=(i*2)-1;k++){
        cout<<"*";
      }
      cout<<"\n";
    }

    for(int i=1;i<=5;i++){
      for(int k=0;k<5;k++){
        cout<<" ";
      }
      for(int j=1;j<=n;j++){
        cout<<"*";
      }
      cout<<"\n";
    }
}

