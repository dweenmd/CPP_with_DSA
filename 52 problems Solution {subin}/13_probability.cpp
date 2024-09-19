#include <bits/stdc++.h>
#define ll long long
using namespace std;

void code();
ll gcd(ll A, ll B) {if (B == 0)return A; else return gcd(B, A % B);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll factorial(ll n) {if(n==0||n==1)return 1;  return n*factorial(n-1);}
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    cin.ignore();  // Ignore any leftover newline character after `cin`
    while (t--) code();
}

void code()
{
    string s;
    getline(cin, s);  // Read a full line
    map<string, int> live;
    stringstream ss(s);
    string word;
    
    // Count word frequencies
    while (ss >> word) {
        live[word] += 1;
    }
    
    int cnt = 0;
    ll upfactorial = 1;  // ll to avoid overflow for large factorials
    for (auto it : live) {
        cnt += it.second;
        upfactorial *= factorial(it.second);  // Multiply the factorial of word frequencies
       // cout << it.first << " " << it.second << "\n";
    }
    
    ll downfactorial = factorial(cnt);  // Factorial of the total word count

    ll ans=gcd(upfactorial,downfactorial);
    
    cout<<upfactorial/ans<<"/"<<downfactorial/ans<<"\n";

   
}
