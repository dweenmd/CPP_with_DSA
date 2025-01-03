#include<bits/stdc++.h>
using namespace std;
int main()
{
   /*
int a, b, c;
    cin >> a >> b >> c;
    int maxi = max({a, b, c});
    int mini = min({a, b, c});
    int sum = a + b + c;
    int mul = a * b * c;

    cout << maxi << endl;
    cout << mini << endl;
    cout << sum << endl;
    cout << mul << endl;
*/

/*  

*/
    int n;
    cin>>n;

    //vector <int >a;  a.resize(n);

    vector<int >a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //max & min assign kori
    int maxi =a[0];
    int mini =a[0];
    int sum= 0;

    for(int i=1;i<n;i++)
    {
        maxi=max(maxi,a[i]);
        mini =min(mini,a[i]);
    }
    /*
    procudure in for loop
    lets array elements
    6 4 7 2
    i=1;
    max(6,4)=6
    min(6,4)=4
    i=2
    max(6,7)=7
    min(4,7)=4
    i=3
    max( 7, 2)=7
    min(4, 2)=2
    
    */
   cout<<maxi<<endl;
   cout <<mini<<endl;

}
