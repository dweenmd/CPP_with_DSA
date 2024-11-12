// introduction to pair
#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<string, int> p;
    p.first = "abc";
    p.second = 210;
    cout << p.first << " " << p.second << endl;

    pair<pair<string, string>, int> p1;
    p1.first.first = "Dween";
    p1.first.second = "Mohammad";
    p1.second = 210;
    cout << p1.first.first << " " << p1.first.second << " " << p1.second << endl;
    return 0;
}