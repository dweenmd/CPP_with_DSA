#include <bits/stdc++.h>

using namespace std;

// Function to check if a string is palindrome or not
bool isPalindrome(const string &str)
{
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input))
    {
        cout << input << " is a palindrome." << endl;
    }
    else
    {
        cout << input << " is not a palindrome." << endl;
    }

    return 0;
}
