#include <iostream>
using namespace std;
int main()
{
    // string declare
    string a;

    // full string input with space
    cout << "input a string: ";
    getline(cin, a);
    
    cout << "Output of string:\n";
    cout << a << "\n";
    // adding 2 string{concate string}

    cout << "String Concatenation:\n";

    string s = "My name is Dween Mohammad";
    string s2 = " And What is your name?";
    s = s + s2;
    cout << s << "\n";

    return 0;
}
