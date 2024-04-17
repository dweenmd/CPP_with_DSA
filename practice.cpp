#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<pair<ll, ll>> p;
    vector<ll> second;

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 3 == 0 && find(v.begin(), v.end(), v[i] / 3) != v.end())
        {
            p.push_back({v[i], v[i] / 3});
            second.push_back(v[i] / 3);
        }
        if (find(v.begin(), v.end(), v[i] * 2) != v.end()) // FOUND
        {
            p.push_back({v[i], v[i] * 2});
            second.push_back(v[i] * 2);
        }
    }

    vector<ll> final;

    for (auto it : v)
    {
        if (find(second.begin(), second.end(), it) == second.end()) // NOT FOUND
        {
            final.push_back(it);
            break;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (auto value : p)
        {
            if (value.first == final.back())
            {
                final.push_back(value.second);
                break;
            }
        }
    }

    for (auto it : final)
    {
        cout << it << " ";
    }

    return 0;
}

/*
pseducode
6
4 8 6 3 12 9
pair=4  8
pair=6  12
pair=3  6
pair=12  4
pair=9  3
second: 8 12 6 4 3 (there is no 9 in this vector, first elements of final vector is 9)
final: 9 3 6 12 4 8
*/