#include <bits/stdc++.h>
#define ll long long
using namespace std;

void code();
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    code();
}
void code()
{
    int x = 0;
    for (int i = 1000; i > 0; i--)
    {
        x += 1;
        cout << i << "\t";
        if (x == 5)
        {
            cout<<"\n";
            x = 0;
        }
    }
}
