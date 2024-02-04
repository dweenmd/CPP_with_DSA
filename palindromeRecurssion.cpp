/**!
 * author: dween_md
 * created: 2024-01-29    22:33:07
 !**/

#include <bits/stdc++.h>
using namespace std;
#define ll long long


bool isPalindrome( string word, int start, int end) {
    
    if (start >= end) {
        return true;
    }

    
    if (word[start] == word[end]) {

        return isPalindrome(word, start + 1, end - 1);
    }


    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

  
    string input;
    
    cin >> input;

 
    if (isPalindrome(input, 0, input.length() - 1)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
