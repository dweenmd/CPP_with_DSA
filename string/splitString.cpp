#include <bits/stdc++.h>
#define ll long long
using namespace std;

void code();
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;cin >> t;
    cin.ignore(); //ignore enter key
    while(t--)code();
}
void code()
{
  string s;
     getline(cin, s);  // Reading a full line of input
     
     stringstream ss(s);  // Create a stringstream from the input string
     string word;
 
     while (ss >> word) {  // Extract each word separated by whitespace
         cout << word << "\n";  // Output each word on a new line
     }
}
