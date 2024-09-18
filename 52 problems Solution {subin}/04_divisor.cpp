#include <bits/stdc++.h>
#define ll long long
using namespace std;

void code(int t);
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; 
    cin >> t; 
    for (int i = 1; i <= t; i++) 
        code(i);
}

void code(int t)
{
    int n;
    cin >> n;
    vector<int> x;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0) 
            x.push_back(i);
    }
    
    cout << "Case " << t << ":";
    for (auto i : x) 
        cout << " "<<i;
    cout << "\n";
}
