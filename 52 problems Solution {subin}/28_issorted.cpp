#include <bits/stdc++.h>
#define ll long long
using namespace std;

void checkSorted();
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        checkSorted();
    }
}

void checkSorted()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (is_sorted(arr.begin(), arr.end())) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
