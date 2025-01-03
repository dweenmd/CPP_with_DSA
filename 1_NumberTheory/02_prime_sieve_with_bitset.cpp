#include <bits/stdc++.h>
#define ll long long
using namespace std;
bitset<10000> b;
vector<int> prime;

void sieve(int n);
int main()
{
    sieve(10000);
    return 0;
}

void sieve(int n)
{
    b.set();
    b[0] = b[1] = 0;
    prime.push_back(2);
    for (int i = 3; i <= n; i += 2) {
        if (b[i]) {
            for (int j = i * i; j <= n; j += i)
                b[j] = 0;
            prime.push_back(i);
        }
    }
    for (int i = 0; i < 10; i++)
        cout << prime[i] << " ";
}
