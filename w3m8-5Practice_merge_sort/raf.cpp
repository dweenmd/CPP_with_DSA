/**!
* author: dween_md
* created:  2024-01-26    15:02:24
!**/


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        if(i%3==0&&i%5==0)
        {
            cout<<"FizzBuzz"<<endl;
        }
        else if(i%3==0)
        {
            cout<<"Fizz"<<endl;
        }
        else if(i%5==0)
        {
            cout<<"Buzz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }

    return 0;
}