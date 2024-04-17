#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i < n; i += 2) {
            string new_s = s.substr(i, 2);
            if(new_s == "00") cout << "A";
            else if(new_s == "01") cout << "T";
            else if(new_s == "10") cout << "C";
            else if(new_s == "11") cout << "G";
        }
        cout << endl;
    }
    return 0;
}
