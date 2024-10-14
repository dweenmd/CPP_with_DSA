#include <bits/stdc++.h>
#define ll long long
using namespace std;

void checkArmstrong();
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t; cin.ignore(); 
    while (t--) checkArmstrong();
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

void checkArmstrong()
{
    string s;
    cin >> s;
    int sum = 0;
    int n = stoi(s);
    int size = s.size();  


    for (char c : s) {
        int digit = c - '0'; 
        sum += power(digit, size);  
    }

    if (sum == n) {
        cout << n << " is an armstrong number!" << '\n';
    } else {
        cout << n << " is not an armstrong number!" << '\n';
    }
}
