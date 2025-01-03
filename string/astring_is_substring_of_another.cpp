#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
        string x, s;
        cin >> x >> s;
        bool pos = false;
        for (int i = 0; i <= 6; i++)
        {
            if (x.find(s) != -1)
            {
                pos = true;
                cout << "a string is substring of another" << endl;
                break;
            }
            x += x;
        }
        if (pos == false)
            cout << "no match" << endl;
    
    return 0;
}
