#include <bits/stdc++.h>
using namespace std;

void checkPerfectNumber(long long n) {
    long long sum = 0;
    for (long long i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    
    if (sum == n) {
        cout << "YES, " << n << " is a perfect number!" << "\n";
    } else {
        cout << "NO, " << n << " is not a perfect number!" << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        checkPerfectNumber(n);
    }
    
    return 0;
}
