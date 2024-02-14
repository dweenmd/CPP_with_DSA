#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{

    deque<char> dq;
    // Iterate over the string and push each character to the deque
    for (char c : s)
    {
        dq.push_back(c);
    }
    // While the deque has more than one element
    while (dq.size() > 1)
    {
        // Pop the front and back elements and compare them
        char front = dq.front();
        dq.pop_front();
        char back = dq.back();
        dq.pop_back();
        // If they are not equal, return false
        if (front != back)
        {
            return false;
        }
    }
    // If the loop ends, return true
    return true;
}

// Main function to test the code
int main()
{
    // Ask the user to enter a string
    cout << "Enter a string: ";
    string s;
    cin >> s;
    // Check if the string is a palindrome and print the result
    if (isPalindrome(s))
    {
        cout << s << " is a palindrome.\n";
    }
    else
    {
        cout << s << " is not a palindrome.\n";
    }
    return 0;
}
