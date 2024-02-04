#include <bits/stdc++.h>
using namespace std;
// global variable
int x = 5, y, z;

// declare a function
int func(int a, int b)
{
    return a + b;
}
namespace info
{
    int x = 10; // ekhane er x ar global variable er x same na
    // decare function in namespace
    int func(int a, int b)
    {
        return a * b;
    }
}
int main()
{
    cout << "\n\nThis is global variable x value:: " << x << "\n"; // print out the gloval declaration
    int a = 5;
    int b = 10;
    // call the external function
    int x = func(a, b);
    cout << "\nexternal functions ans:: " << x << "\n";
    // call the function which is in namespace
    int y = info::func(a, b);
    cout << "\nnamespace er vitorer functions:: " << y << "\n\n";

    return 0;
}