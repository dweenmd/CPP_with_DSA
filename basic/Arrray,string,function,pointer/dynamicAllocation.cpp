#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //hip theke memory niye x e dibe
    int *x= new int ;
    *x=10;
    cout<<*x<<"\n";
    cout << x<<"\n";
    int n;
    cout << "type any number for array declaration :";

    cin >> n;
    // array declare for new vesion compiler
    //int a[n];
    // arrar declere for old virsion also work for dynamic allocation;
    int *a = new int [n];
    cout << " input number for array:";
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        //ekhane pointer diye nirdes kora lagbe na
        //int *a -->*a=10
        //a[i] -->a-->a[i]
    }
    cout<<"this is the location  " << a <<"\n";
    for (int i=0;i<n;i++)
    {
        cout << a[i]<< "\n";
        cout<<"this is the location  " << &a <<"\n";
    }

    return 0;

}
