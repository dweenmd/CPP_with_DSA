#include <bits/stdc++.h>
#define ll long long int
#define asc(v) sort(v.begin(), v.end()) // vectors, pairs, tuples, string
#define dsc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));

    cout << (a & b) << "\n"; // Bitwise AND  || 0010010000
    cout << (a | b) << "\n"; // Bitwise OR   || 1011111110
    cout << (a ^ b) << "\n"; // Bitwise XOR  ||  1001101110

    return 0;
}
