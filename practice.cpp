/**!
* author: dween_md
* created: 2024-02-24    21:26:02
!**/
#include <bits/stdc++.h>
#define ll long long int
#define asc(v) sort(v.begin(), v.end()) // vectors,pairs,tuples,string
#define dsc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        // descending order sort
        dsc(v);
        // using prefix sum
        vector<long long> pref(n + 1);
        for (int i = 1; i <= n; i++)
            pref[i] = (pref[i - 1] + v[i - 1]);

        while (q--)
        {
            long long value;
            cin >> value;
            auto it = lower_bound(pref.begin(), pref.end(), value);
            if (it != pref.end())
                cout << it - pref.begin() << '\n';
            else
                cout << -1 << '\n';
        }
    }

    return 0;
}