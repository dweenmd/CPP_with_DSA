#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void code() {
    int n;
    cin >> n;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) cin >> p[i];

    vector<bool> visited(n + 1, false);
    vector<int> cycleLength;

    // Find cycle lengths
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            int length = 0, current = i;
            while (!visited[current]) {
                visited[current] = true;
                current = p[current];
                ++length;
            }
            cycleLength.push_back(length);
        }
    }

    // If there's only one cycle, no swap is needed
    if (cycleLength.size() == 1) {
        cout << 0 << "\n";
        return;
    }

    // Find two smallest cycle lengths
    sort(cycleLength.begin(), cycleLength.end());
    ll min_cost = (ll)cycleLength[0] + cycleLength[1]; // Min cost is sum of two smallest cycles

    cout << min_cost << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) code();

    return 0;
}
