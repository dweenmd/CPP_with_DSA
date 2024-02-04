#include <iostream>
using namespace std;
int main()
{
    // variable declare
    int a,b;
    // input
    cout<<"input 2 integer:";
    cin >> a >>b ;   //>> excertion operator
    //output
    cout<<"output of 2 integer:";
    cout <<a << " " << b<<"\n"; //<<is called incurtion operator

    char ch;
    float f;
    double d;
    cout<<"input character, float , integer :";
    cin>> ch>>f>> d;
    cout << ch <<" "<<f<< " "<<d <<"\n";
    return 0;
} // namespace std;
