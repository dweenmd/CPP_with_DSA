#include <bits/stdc++.h>
using namespace std;

vector<int> v;

void sieve(int n) {
    int prime[100001];
    memset(prime, 0, sizeof(prime));
    for (int i = 2; i * i <= n; i++) {
        if (prime[i] == 0) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (prime[i] == 0) v.push_back(i);
    }
}

void segment(int l, int r) {
    if (l == 1) l++;
    int mx = r - l + 1;
    vector<int> ar(mx, 0); // Initialize array for marking primes in the range

    for (int p : v) {
        if (p * p > r) break;

        int start = max(p * p, (l + p - 1) / p * p); // Ensure starting from the right multiple of `p`
        
        for (int i = start; i <= r; i += p) {
            ar[i - l] = 1; // Mark multiples of `p` as non-prime
        }
    }

    for (int i = 0; i < mx; i++) {
        if (ar[i] == 0) {
            cout << l + i << "\n"; // Output primes in the range
        }
    }
}

int main() {
    sieve(100000);
    int t, L, R;
    cin >> t;
    while (t--) {
        cin >> L >> R;
        segment(L, R);
        cout << "\n";
    }
    return 0;
}
